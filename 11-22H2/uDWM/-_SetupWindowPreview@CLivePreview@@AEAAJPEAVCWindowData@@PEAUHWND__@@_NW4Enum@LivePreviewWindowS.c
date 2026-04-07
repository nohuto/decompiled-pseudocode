/*
 * XREFs of ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x1800C8FA4
 * Callers:
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800C763C (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_SetupOwneePreview@CLivePreview@@AEAAJPEBVCWindowData@@PEAUHWND__@@W4Enum@LivePreviewWindowState@@@Z @ 0x1800C8ED4 (-_SetupOwneePreview@CLivePreview@@AEAAJPEBVCWindowData@@PEAUHWND__@@W4Enum@LivePreviewWindowStat.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@ULivePreviewWindow@@$0A@@@QEAAJPEFBULivePreviewWindow@@I@Z @ 0x1800C6FE4 (-AddMultipleAndSet@-$DynArray@ULivePreviewWindow@@$0A@@@QEAAJPEFBULivePreviewWindow@@I@Z.c)
 *     ?_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z @ 0x1800C8934 (-_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z.c)
 *     ?_SetupOwneePreview@CLivePreview@@AEAAJPEBVCWindowData@@PEAUHWND__@@W4Enum@LivePreviewWindowState@@@Z @ 0x1800C8ED4 (-_SetupOwneePreview@CLivePreview@@AEAAJPEBVCWindowData@@PEAUHWND__@@W4Enum@LivePreviewWindowStat.c)
 *     ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x1800E5DD8 (-GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z.c)
 */

__int64 __fastcall CLivePreview::_SetupWindowPreview(
        CLivePreview *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        struct CVisual *a6,
        char a7)
{
  unsigned int v7; // ebx
  volatile signed __int32 *LivePreviewWindow; // rax
  CBaseObject *v12; // rdi
  int LivePreviewVisual; // eax
  CBaseObject *v14; // r12
  int v15; // eax
  CLivePreview *v16; // rax
  VisualCollection *v17; // rcx
  unsigned int v19; // [rsp+20h] [rbp-50h]
  unsigned int v20; // [rsp+20h] [rbp-50h]
  CBaseObject *v21; // [rsp+30h] [rbp-40h] BYREF
  CBaseObject *v22; // [rsp+38h] [rbp-38h] BYREF
  __int128 v23; // [rsp+40h] [rbp-30h] BYREF
  CBaseObject *v24; // [rsp+50h] [rbp-20h]
  __int64 v25; // [rsp+58h] [rbp-18h]
  __int64 v26; // [rsp+60h] [rbp-10h]
  unsigned int v27; // [rsp+68h] [rbp-8h]

  v7 = 0;
  v21 = 0LL;
  v22 = 0LL;
  if ( a4 )
  {
    LivePreviewWindow = (volatile signed __int32 *)CLivePreview::_FindLivePreviewWindow(a1, *(HWND *)(a2 + 40));
    v21 = (CBaseObject *)LivePreviewWindow;
    if ( LivePreviewWindow )
    {
      _InterlockedIncrement(LivePreviewWindow + 2);
      v12 = v21;
      goto LABEL_22;
    }
  }
  LivePreviewVisual = CTopLevelWindow::GetLivePreviewVisual((struct CWindowData *)a2, &v21, &v22);
  v12 = v21;
  v7 = LivePreviewVisual;
  v14 = v22;
  if ( LivePreviewVisual >= 0 )
  {
    v25 = *(_QWORD *)(a2 + 40);
    *(_QWORD *)&v23 = v21;
    *((_QWORD *)&v23 + 1) = a2;
    v24 = v22;
    v26 = a3;
    v27 = a5;
    v15 = DynArray<LivePreviewWindow,0>::AddMultipleAndSet((__int64)a1 + 344, &v23);
    v7 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x19Fu);
      goto LABEL_20;
    }
    if ( *(_DWORD *)(a2 + 132) == 1 || *(_QWORD *)(a2 + 856) )
      v16 = a1;
    else
      v16 = (CLivePreview *)*((_QWORD *)a1 + 58);
    v17 = (CLivePreview *)((char *)v16 + 32);
    if ( a7 )
    {
      LivePreviewVisual = VisualCollection::InsertRelative(v17, (unsigned __int64)v12, a6, 0, v19);
      v7 = LivePreviewVisual;
      if ( LivePreviewVisual < 0 )
      {
        v20 = 433;
        goto LABEL_19;
      }
    }
    else
    {
      LivePreviewVisual = VisualCollection::InsertRelative(v17, (unsigned __int64)v12, a6, 1u, v19);
      v7 = LivePreviewVisual;
      if ( LivePreviewVisual < 0 )
      {
        v20 = 437;
        goto LABEL_19;
      }
    }
    LivePreviewVisual = CLivePreview::_SetupOwneePreview((__int64)a1, a2, a3, a5);
    v7 = LivePreviewVisual;
    if ( LivePreviewVisual >= 0 )
      goto LABEL_22;
    v20 = 440;
    goto LABEL_19;
  }
  v20 = 401;
LABEL_19:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, LivePreviewVisual, v20);
LABEL_20:
  if ( v14 )
    CBaseObject::Release(v14);
LABEL_22:
  if ( v12 )
    CBaseObject::Release(v12);
  return v7;
}
