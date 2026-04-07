/*
 * XREFs of ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18002FE94
 * Callers:
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x18002E744 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180107A2C (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z @ 0x180002080 (-SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x1800AD184 (-SetMouseCapture@CButton@@QEAAX_N@Z.c)
 */

void __fastcall CTopLevelWindow::OnOffsetUpdated(CTopLevelWindow *this)
{
  __int64 v1; // r9
  char v3; // r10
  int v4; // edx
  int v5; // r8d
  CDesktopThumbnailCVIVisual *v6; // rcx
  CButton *v7; // rcx
  CBaseObject *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  CBaseObject *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // [rsp+30h] [rbp+8h]

  v1 = *((_QWORD *)this + 94);
  v3 = *(_BYTE *)(v1 + 678);
  v4 = *(_DWORD *)(v1 + 48);
  v5 = *(_DWORD *)(v1 + 52);
  v13 = *(_QWORD *)(v1 + 48);
  if ( (v3 & 1) != 0 )
  {
    v9 = *(_QWORD *)(v1 + 448);
    v4 += *(_DWORD *)(v9 + 648);
    LODWORD(v13) = v4;
    v5 += HIDWORD(*(_QWORD *)(v9 + 648));
    HIDWORD(v13) = v5;
  }
  if ( (*((_BYTE *)this + 249) & 1) != 0 )
  {
    v4 = -32000;
    v5 = -32000;
    HIDWORD(v13) = -32000;
LABEL_14:
    LODWORD(v13) = v4;
    goto LABEL_5;
  }
  if ( (v3 & 0x10) != 0 )
  {
    v10 = *(_QWORD *)(v1 + 600);
    v4 -= *(_DWORD *)(v10 + 48);
    v5 -= *(_DWORD *)(v10 + 52);
    HIDWORD(v13) = v5;
    goto LABEL_14;
  }
LABEL_5:
  if ( v4 != *((_DWORD *)this + 30) || v5 != *((_DWORD *)this + 31) )
  {
    *((_QWORD *)this + 15) = v13;
    (*(void (__fastcall **)(CTopLevelWindow *, __int64))(*(_QWORD *)this + 24LL))(this, 8LL);
  }
  v6 = *(CDesktopThumbnailCVIVisual **)(*((_QWORD *)this + 94) + 640LL);
  if ( v6 )
    CDesktopThumbnailCVIVisual::SetDirtyFlags(v6, 4096);
  v7 = (CButton *)*((_QWORD *)this + 97);
  if ( v7 )
  {
    CButton::SetMouseCapture(v7, 0);
    v11 = (CBaseObject *)*((_QWORD *)this + 97);
    if ( v11 )
    {
      CBaseObject::Release(v11);
      *((_QWORD *)this + 97) = 0LL;
    }
  }
  v8 = (CBaseObject *)*((_QWORD *)this + 96);
  if ( v8 )
  {
    *((_QWORD *)this + 96) = 0LL;
    (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v8 + 128LL))(v8);
    v12 = *((_QWORD *)this + 96);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 120LL))(v12);
    CBaseObject::Release(v8);
  }
}
