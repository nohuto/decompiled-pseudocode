/*
 * XREFs of ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800C763C
 * Callers:
 *     ?DeActivate@CLivePreview@@QEAAJ_N@Z @ 0x180053A14 (-DeActivate@CLivePreview@@QEAAJ_N@Z.c)
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x1800C6BD8 (-Activate@CLivePreview@@QEAAJXZ.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180023050 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180038C6C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z @ 0x1800C72A8 (-OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z.c)
 *     ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x1800C7CC8 (-_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV-$DynArray@PEAVCWindowData@@$0A@@@@Z.c)
 *     ?_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z @ 0x1800C8934 (-_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z.c)
 *     ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x1800C8FA4 (-_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowS.c)
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x1800C92C0 (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 *     ?UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z @ 0x1800E6E2C (-UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180108154 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLivePreview::_AnimateOpaqueVisuals(CLivePreview *this)
{
  char v2; // r12
  unsigned int v3; // r9d
  unsigned int v4; // r15d
  unsigned __int64 v5; // rbx
  __int64 v6; // r13
  unsigned int v7; // r8d
  int v8; // r14d
  int v9; // r15d
  int v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // eax
  __int64 v13; // r13
  int v14; // r12d
  __int64 v15; // r14
  __int64 v16; // rdx
  CTopLevelWindow *v17; // rbx
  struct CWindowData *MDIOwner; // rax
  __int64 v19; // r9
  HWND *v20; // r12
  int v21; // eax
  CTopLevelWindow *LivePreviewWindow; // rax
  int v23; // eax
  int started; // eax
  int v26; // [rsp+30h] [rbp-38h]
  __int128 v27; // [rsp+40h] [rbp-28h] BYREF
  int v28; // [rsp+50h] [rbp-18h]
  __int64 v29; // [rsp+54h] [rbp-14h]
  _QWORD *v30; // [rsp+B0h] [rbp+48h] BYREF
  char v31; // [rsp+B8h] [rbp+50h]
  int v32; // [rsp+C0h] [rbp+58h]
  BOOL v33; // [rsp+C8h] [rbp+60h]

  v31 = 1;
  v32 = *((_DWORD *)this + 92);
  v2 = 0;
  v27 = 0LL;
  v28 = 0;
  v3 = 0;
  v29 = 0LL;
  v4 = 0;
  v5 = *((_QWORD *)this + 62);
  v6 = *((_QWORD *)this + 63);
  while ( v5 != v6 )
  {
    v7 = v4 + 1;
    if ( v4 + 1 < v4 )
    {
      v8 = -2147024362;
      v12 = 181;
      goto LABEL_18;
    }
    if ( v7 > v3 )
    {
      v30 = (_QWORD *)v5;
      v8 = DynArrayImpl<0>::Grow((char **)&v27, 8u, 1, 0, (unsigned __int64 *)&v30);
      if ( v8 < 0 )
      {
        v12 = 192;
LABEL_18:
        v11 = v8;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, v12);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x2DDu);
        goto LABEL_44;
      }
      v9 = HIDWORD(v29);
      *(_QWORD *)((unsigned int)(8 * HIDWORD(v29)) + (_QWORD)v27) = *v30;
      v4 = v9 + 1;
      HIDWORD(v29) = v4;
      v3 = v29;
    }
    else
    {
      *(_QWORD *)(v27 + 8LL * v4++) = *(_QWORD *)v5;
      HIDWORD(v29) = v7;
    }
    if ( *(_DWORD *)(*(_QWORD *)v5 + 132LL) == 1 )
      v2 = 1;
    v5 += 8LL;
  }
  if ( (*((_QWORD *)this + 63) - *((_QWORD *)this + 62) < 8uLL || v2) && *((_DWORD *)this + 134) != 4 )
  {
    v10 = CLivePreview::_CollectExcludedImmersiveWindows(this, &v27);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x2E7u);
      goto LABEL_44;
    }
    v4 = HIDWORD(v29);
  }
  v13 = 0LL;
  if ( v4 )
  {
    v14 = v32;
    while ( 1 )
    {
      LOBYTE(v30) = 0;
      v15 = *(_QWORD *)(v27 + 8 * v13);
      v33 = v14
         || (*(_BYTE *)(v15 + 676) & 1) != 0
         || *(_DWORD *)(v15 + 132) != 1 && *(_BYTE *)(*((_QWORD *)this + 66) + 56LL);
      v16 = (unsigned int)(*((_DWORD *)this + 92) - 1);
      if ( (int)v16 < 0 )
      {
LABEL_31:
        v31 = 0;
      }
      else
      {
        while ( *(_QWORD *)(*((_QWORD *)this + 43) + 48 * v16 + 24) != *(_QWORD *)(v15 + 40) )
        {
          v16 = (unsigned int)(v16 - 1);
          if ( (int)v16 < 0 )
            goto LABEL_31;
        }
        LOBYTE(v30) = 1;
      }
      v17 = 0LL;
      if ( (*(_BYTE *)(v15 + 673) & 1) != 0 )
      {
        MDIOwner = CWindowData::GetMDIOwner((CWindowData *)v15);
        if ( MDIOwner )
        {
          v20 = (HWND *)((char *)MDIOwner + 40);
          if ( !(_BYTE)v30 )
          {
            LOBYTE(v26) = 1;
            LOBYTE(v19) = 1;
            v21 = CLivePreview::_SetupWindowPreview(this, MDIOwner, *v20, v19, v33, 0LL, v26);
            v11 = v21;
            if ( v21 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x30Eu);
              goto LABEL_44;
            }
          }
          LivePreviewWindow = CLivePreview::_FindLivePreviewWindow(this, *v20);
          v17 = LivePreviewWindow;
          if ( LivePreviewWindow )
            CTopLevelWindow::UpdateTitle(LivePreviewWindow, *(unsigned __int16 **)(v15 + 16));
          v14 = v32;
        }
      }
      if ( !(_BYTE)v30 )
      {
        LOBYTE(v26) = v17 == 0LL;
        v23 = CLivePreview::_SetupWindowPreview(this, v15, *(_QWORD *)(v15 + 40), 0LL, v33, v17, v26);
        v11 = v23;
        if ( v23 < 0 )
          break;
      }
      CLivePreview::OnWindowTitleChange(this, (unsigned __int16 **)v15);
      v13 = (unsigned int)(v13 + 1);
      if ( (unsigned int)v13 >= v4 )
        goto LABEL_42;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x31Cu);
  }
  else
  {
LABEL_42:
    started = CLivePreview::_StartAnimateOpaqueVisuals(this);
    v11 = started;
    if ( started < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x322u);
  }
LABEL_44:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v27);
  return v11;
}
