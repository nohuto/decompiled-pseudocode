/*
 * XREFs of ?_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCWindowData@@@Z @ 0x1800B35A8
 * Callers:
 *     ?_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ @ 0x1800B39C0 (-_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x1800E43A4 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x1800E4E5C (-GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z.c)
 */

__int64 __fastcall CDesktopThumbnailBase::_AddWindow(CDesktopThumbnailBase *this, struct CWindowData *a2)
{
  volatile signed __int32 *v2; // rsi
  bool v5; // r8
  bool v6; // r9
  bool v7; // r8
  bool v8; // r9
  int v9; // eax
  unsigned int v10; // edi
  CBaseObject *v11; // rbx
  __int64 v12; // rax
  unsigned int v13; // edx
  int v14; // eax
  int v16; // eax
  __int128 v17; // [rsp+30h] [rbp-10h] BYREF
  CBaseObject *v18; // [rsp+70h] [rbp+30h] BYREF
  CTopLevelWindow *v19; // [rsp+78h] [rbp+38h] BYREF
  CBaseObject *v20; // [rsp+80h] [rbp+40h] BYREF

  v2 = (volatile signed __int32 *)*((_QWORD *)a2 + 55);
  v18 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(CDesktopThumbnailBase *))(*(_QWORD *)this + 216LL))(this)
    && (*((_DWORD *)a2 + 29) & 0x20000000) != 0 )
  {
    v20 = 0LL;
    v19 = 0LL;
    CTopLevelWindow::GetLivePreviewVisual(a2, &v19, &v20);
    v9 = CTopLevelWindow::CloneVisualTreeForLivePreview(v19, 0, v7, v8, &v18);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x7Eu);
LABEL_5:
      v11 = v18;
      goto LABEL_15;
    }
    if ( v20 )
      CBaseObject::Release(v20);
  }
  else
  {
    v14 = CTopLevelWindow::CloneVisualTreeForLivePreview((CTopLevelWindow *)v2, 0, v5, v6, &v18);
    v10 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x84u);
      goto LABEL_5;
    }
  }
  v11 = v18;
  v12 = *((unsigned int *)this + 68);
  *((_QWORD *)&v17 + 1) = v18;
  *(_QWORD *)&v17 = v2;
  v13 = v12 + 1;
  if ( (int)v12 + 1 < (unsigned int)v12 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    goto LABEL_15;
  }
  if ( v13 <= *((_DWORD *)this + 67) )
  {
    *(_OWORD *)(*((_QWORD *)this + 31) + 16 * v12) = v17;
    *((_DWORD *)this + 68) = v13;
LABEL_14:
    _InterlockedIncrement(v2 + 2);
    _InterlockedIncrement((volatile signed __int32 *)v18 + 2);
    v11 = v18;
    VisualCollection::InsertRelative((CDesktopThumbnailBase *)((char *)this + 32), v18, 0LL, 0, 1);
    goto LABEL_15;
  }
  v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 248, 0x10u, 1, &v17);
  if ( v16 >= 0 )
    goto LABEL_14;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0xC0u);
LABEL_15:
  if ( v11 )
    CBaseObject::Release(v11);
  return v10;
}
