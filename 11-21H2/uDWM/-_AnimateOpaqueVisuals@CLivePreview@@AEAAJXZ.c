/*
 * XREFs of ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800C2D14
 * Callers:
 *     ?DeActivate@CLivePreview@@QEAAJ_N@Z @ 0x18005CAA0 (-DeActivate@CLivePreview@@QEAAJ_N@Z.c)
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x1800C1F14 (-Activate@CLivePreview@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800350F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z @ 0x1800C258C (-OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z.c)
 *     ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x1800C33CC (-_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV-$DynArray@PEAVCWindowData@@$0A@@@@Z.c)
 *     ?_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z @ 0x1800C3FC8 (-_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z.c)
 *     ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x1800C46B0 (-_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowS.c)
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x1800C4A10 (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 *     ?_UpdateAddedImmersiveBackground@CLivePreview@@AEAAJXZ @ 0x1800C4C9C (-_UpdateAddedImmersiveBackground@CLivePreview@@AEAAJXZ.c)
 *     ?UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z @ 0x1800E66D4 (-UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180103BFC (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLivePreview::_AnimateOpaqueVisuals(CLivePreview *this)
{
  char v2; // r13
  unsigned int v3; // r9d
  unsigned int v4; // r15d
  unsigned __int64 v5; // r12
  __int64 v6; // r14
  unsigned int v7; // r8d
  int v8; // ebx
  int v9; // r15d
  int v10; // eax
  unsigned int v11; // eax
  int updated; // eax
  __int64 v13; // r12
  int v14; // r13d
  __int64 v15; // r14
  __int64 v16; // rdx
  CTopLevelWindow *v17; // rbx
  __int64 v18; // r9
  struct CWindowData *MDIOwner; // r13
  int v20; // eax
  CTopLevelWindow *LivePreviewWindow; // rax
  int v22; // eax
  int started; // eax
  int v25; // [rsp+30h] [rbp-38h]
  __int128 v26; // [rsp+40h] [rbp-28h] BYREF
  int v27; // [rsp+50h] [rbp-18h]
  __int64 v28; // [rsp+54h] [rbp-14h]
  _QWORD *v29; // [rsp+B0h] [rbp+48h] BYREF
  char v30; // [rsp+B8h] [rbp+50h]
  int v31; // [rsp+C0h] [rbp+58h]
  BOOL v32; // [rsp+C8h] [rbp+60h]

  v30 = 1;
  v31 = *((_DWORD *)this + 92);
  v2 = 0;
  v26 = 0LL;
  v27 = 0;
  v3 = 0;
  v28 = 0LL;
  v4 = 0;
  v5 = *((_QWORD *)this + 66);
  v6 = *((_QWORD *)this + 67);
  if ( v5 == v6 )
  {
LABEL_11:
    if ( ((unsigned __int64)(v6 - *((_QWORD *)this + 66)) < 8 || v2) && *((_DWORD *)this + 142) != 4 )
    {
      v10 = CLivePreview::_CollectExcludedImmersiveWindows(this, &v26);
      v8 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x2FAu);
        goto LABEL_46;
      }
      v4 = HIDWORD(v28);
    }
    updated = CLivePreview::_UpdateAddedImmersiveBackground(this);
    v8 = updated;
    if ( updated >= 0 )
    {
      v13 = 0LL;
      if ( v4 )
      {
        v14 = v31;
        while ( 1 )
        {
          LOBYTE(v29) = 0;
          v15 = *(_QWORD *)(v26 + 8 * v13);
          v32 = v14
             || (*(_BYTE *)(v15 + 668) & 1) != 0
             || *(_DWORD *)(v15 + 132) != 1 && *(_BYTE *)(*((_QWORD *)this + 70) + 56LL);
          v16 = (unsigned int)(*((_DWORD *)this + 92) - 1);
          if ( (int)v16 < 0 )
          {
LABEL_33:
            v30 = 0;
          }
          else
          {
            while ( *(_QWORD *)(*((_QWORD *)this + 43) + 48 * v16 + 24) != *(_QWORD *)(v15 + 40) )
            {
              v16 = (unsigned int)(v16 - 1);
              if ( (int)v16 < 0 )
                goto LABEL_33;
            }
            LOBYTE(v29) = 1;
          }
          v17 = 0LL;
          if ( (*(_BYTE *)(v15 + 665) & 1) != 0 )
          {
            MDIOwner = CWindowData::GetMDIOwner((CWindowData *)v15);
            if ( MDIOwner )
            {
              if ( !(_BYTE)v29 )
              {
                LOBYTE(v25) = 1;
                LOBYTE(v18) = 1;
                v20 = CLivePreview::_SetupWindowPreview(this, MDIOwner, *((_QWORD *)MDIOwner + 5), v18, v32, 0LL, v25);
                v8 = v20;
                if ( v20 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x323u);
                  goto LABEL_46;
                }
              }
              LivePreviewWindow = CLivePreview::_FindLivePreviewWindow(this, *((HWND *)MDIOwner + 5));
              v17 = LivePreviewWindow;
              if ( LivePreviewWindow )
                CTopLevelWindow::UpdateTitle(LivePreviewWindow, *(unsigned __int16 **)(v15 + 16));
            }
            v14 = v31;
          }
          if ( !(_BYTE)v29 )
          {
            LOBYTE(v25) = v17 == 0LL;
            v22 = CLivePreview::_SetupWindowPreview(this, v15, *(_QWORD *)(v15 + 40), 0LL, v32, v17, v25);
            v8 = v22;
            if ( v22 < 0 )
              break;
          }
          CLivePreview::OnWindowTitleChange(this, (unsigned __int16 **)v15);
          v13 = (unsigned int)(v13 + 1);
          if ( (unsigned int)v13 >= v4 )
            goto LABEL_44;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x331u);
      }
      else
      {
LABEL_44:
        started = CLivePreview::_StartAnimateOpaqueVisuals(this);
        v8 = started;
        if ( started < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x337u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x2FDu);
    }
  }
  else
  {
    while ( 1 )
    {
      v7 = v4 + 1;
      if ( v4 + 1 < v4 )
        break;
      if ( v7 > v3 )
      {
        v29 = (_QWORD *)v5;
        v8 = DynArrayImpl<0>::Grow((char **)&v26, 8u, 1, 0, (unsigned __int64 *)&v29);
        if ( v8 < 0 )
        {
          v11 = 192;
          goto LABEL_18;
        }
        v9 = HIDWORD(v28);
        *(_QWORD *)((unsigned int)(8 * HIDWORD(v28)) + (_QWORD)v26) = *v29;
        v4 = v9 + 1;
        HIDWORD(v28) = v4;
        v3 = v28;
      }
      else
      {
        *(_QWORD *)(v26 + 8LL * v4++) = *(_QWORD *)v5;
        HIDWORD(v28) = v7;
      }
      if ( *(_DWORD *)(*(_QWORD *)v5 + 132LL) == 1 )
        v2 = 1;
      v5 += 8LL;
      if ( v5 == v6 )
      {
        v6 = *((_QWORD *)this + 67);
        goto LABEL_11;
      }
    }
    v8 = -2147024362;
    v11 = 181;
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, v11);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x2F0u);
  }
LABEL_46:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v26);
  return (unsigned int)v8;
}
