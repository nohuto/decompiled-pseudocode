/*
 * XREFs of ?_CollectWindows@CLivePreview@@AEAAJXZ @ 0x1800C3570
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x1800C1F14 (-Activate@CLivePreview@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180012D9C (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001DA74 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18006983A (-_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@ULivePreviewVisual@@$0A@@@QEAAJPEFBULivePreviewVisual@@I@Z @ 0x1800C2280 (-AddMultipleAndSet@-$DynArray@ULivePreviewVisual@@$0A@@@QEAAJPEFBULivePreviewVisual@@I@Z.c)
 *     ?_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800C42E4 (-_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLivePreview::_CollectWindows(CLivePreview *this)
{
  unsigned int v2; // edi
  CLivePreview *v3; // rcx
  struct _LIST_ENTRY *WindowListForDesktop; // r13
  unsigned int v5; // r15d
  struct _LIST_ENTRY *Blink; // rbx
  bool IsTrulyMaximized; // r12
  HMONITOR v8; // rax
  unsigned int v9; // edi
  CLivePreview *v10; // rcx
  unsigned int v11; // edi
  wchar_t **v12; // r14
  char v13; // di
  bool v14; // zf
  char v15; // al
  unsigned int v16; // ecx
  unsigned int v17; // edi
  __int64 v18; // r8
  char v19; // r8
  unsigned int v20; // edx
  unsigned int v21; // r8d
  int v22; // eax
  int v23; // eax
  _QWORD v25[3]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B8h]
  __int64 v27; // [rsp+58h] [rbp-B0h]
  _QWORD v28[3]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+78h] [rbp-90h]
  __int64 v30; // [rsp+80h] [rbp-88h]
  struct tagRECT rcDst; // [rsp+88h] [rbp-80h] BYREF
  WCHAR ClassName[264]; // [rsp+98h] [rbp-70h] BYREF

  v2 = 0;
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                              + 52));
  *((_QWORD *)this + 72) = 0LL;
  *(_OWORD *)&v25[1] = 0LL;
  v26 = 0LL;
  v5 = 0;
  LODWORD(v27) = 0;
  Blink = WindowListForDesktop->Blink;
  if ( Blink != WindowListForDesktop )
  {
    while ( 1 )
    {
      if ( !Blink || !CLivePreview::_IsEligibleForLivePreview(v3, (CTopLevelWindow **)Blink) )
        goto LABEL_57;
      BYTE3(Blink[41].Blink) &= ~1u;
      BYTE2(Blink[41].Blink) &= ~0x80u;
      IsTrulyMaximized = CLivePreview::_IsTrulyMaximized(v3, (const struct CWindowData *)Blink);
      v8 = MonitorFromWindow((HWND)Blink[2].Blink, 0);
      v25[0] = v8;
      if ( *((_DWORD *)this + 144) >= 0x1Eu )
      {
        BYTE3(Blink[41].Blink) |= 1u;
        BYTE2(Blink[41].Blink) |= 0x80u;
        goto LABEL_56;
      }
      if ( !IsTrulyMaximized )
      {
        if ( GetClassNameW((HWND)Blink[2].Blink, ClassName, 260) )
        {
          v11 = 0;
          v12 = off_180113E48;
          while ( (unsigned int)_o__wcsicmp(*v12, ClassName) )
          {
            ++v11;
            ++v12;
            if ( v11 >= 3 )
              goto LABEL_19;
          }
          BYTE2(Blink[41].Blink) |= 0x80u;
          BYTE3(Blink[41].Blink) |= 1u;
        }
LABEL_19:
        if ( SBYTE2(Blink[41].Blink) < 0 )
          goto LABEL_28;
        v13 = ((__int64)Blink[7].Blink & 0x80) != 0;
        if ( CWindowData::IsImmersiveWindow((CWindowData *)Blink) )
        {
          if ( !Blink[37].Blink )
          {
            v14 = (HIDWORD(Blink[7].Flink) & 0x40000000) == 0;
            goto LABEL_25;
          }
          goto LABEL_26;
        }
        if ( Blink[26].Blink )
          goto LABEL_26;
        v14 = (HIDWORD(Blink[7].Flink) & 0xC00000) == 12582912;
LABEL_25:
        if ( !v14 )
LABEL_26:
          v13 = 1;
        BYTE2(Blink[41].Blink) &= ~0x80u;
        BYTE2(Blink[41].Blink) |= v13 << 7;
        goto LABEL_28;
      }
      if ( !v8 )
        goto LABEL_12;
      v9 = 0;
      if ( *((_DWORD *)this + 84) )
        break;
LABEL_28:
      if ( (BYTE3(Blink[41].Blink) & 1) == 0 || SBYTE2(Blink[41].Blink) >= 0 )
      {
        ++*((_DWORD *)this + 144);
        v15 = BYTE3(Blink[41].Blink);
        if ( (v15 & 1) == 0 )
        {
          v16 = *((_DWORD *)this + 145);
          if ( v16 >= 0xA )
          {
            BYTE3(Blink[41].Blink) = v15 | 1;
          }
          else
          {
            *((_DWORD *)this + 145) = v16 + 1;
            v17 = 0;
            if ( *((_DWORD *)this + 84) )
            {
              while ( 1 )
              {
                v18 = *(_QWORD *)(*((_QWORD *)this + 39) + 40LL * v17);
                if ( (*(_BYTE *)(v18 + 667) & 1) == 0
                  && *(_DWORD *)(v18 + 132) == 1
                  && IntersectRect(&rcDst, (const RECT *)&Blink[3], (const RECT *)(v18 + 48))
                  && EqualRect(&rcDst, (const RECT *)&Blink[3]) )
                {
                  break;
                }
                if ( ++v17 >= *((_DWORD *)this + 84) )
                  goto LABEL_41;
              }
              --*((_DWORD *)this + 145);
              BYTE3(Blink[41].Blink) |= 1u;
            }
          }
        }
LABEL_41:
        v19 = BYTE2(Blink[41].Blink);
        if ( v19 >= 0 && ((HIDWORD(Blink[8].Flink) - 8) & 0xFFFFFFFD) == 0 )
        {
          v20 = 0;
          if ( !v5 )
            goto LABEL_48;
          do
          {
            if ( v25[0] == *(_QWORD *)(v25[1] + 8LL * v20) )
              break;
            ++v20;
          }
          while ( v20 < v5 );
          if ( v20 < v5 )
          {
            BYTE2(Blink[41].Blink) = v19 | 0x80;
          }
          else
          {
LABEL_48:
            v21 = v5 + 1;
            if ( v5 + 1 >= v5 )
            {
              if ( v21 > HIDWORD(v26) )
              {
                v22 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v25[1], 8u, 1, v25);
                if ( v22 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0xC0u);
                v5 = v27;
              }
              else
              {
                *(_QWORD *)(v25[1] + 8LL * v5++) = v25[0];
                LODWORD(v27) = v21;
              }
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
            }
          }
        }
      }
LABEL_56:
      v28[0] = Blink;
      *(_OWORD *)&v28[1] = 0LL;
      LOBYTE(v29) = IsTrulyMaximized;
      v30 = v25[0];
      v23 = DynArray<LivePreviewVisual,0>::AddMultipleAndSet((__int64)this + 312, (__int64)v28);
      v2 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x14Eu);
        goto LABEL_60;
      }
LABEL_57:
      Blink = Blink->Blink;
      if ( Blink == WindowListForDesktop )
        goto LABEL_60;
    }
    while ( 1 )
    {
      v10 = (CLivePreview *)*((_QWORD *)this + 39);
      if ( *((_QWORD *)v10 + 5 * v9 + 4) == v25[0]
        && CLivePreview::_IsTrulyMaximized(v10, *((const struct CWindowData **)v10 + 5 * v9)) )
      {
        break;
      }
      if ( ++v9 >= *((_DWORD *)this + 84) )
        goto LABEL_28;
    }
LABEL_12:
    BYTE3(Blink[41].Blink) |= 1u;
    BYTE2(Blink[41].Blink) |= 0x80u;
    goto LABEL_28;
  }
LABEL_60:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v25[1]);
  return v2;
}
