/*
 * XREFs of ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLegacyMilBrushProxy@@PEBUMilPointAndSizeL@@@Z @ 0x180019BF0
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180006AA0 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18001C720 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     McTemplateU0z_EtwEventWriteTransfer @ 0x1800088A4 (McTemplateU0z_EtwEventWriteTransfer.c)
 *     ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x1800193C0 (-UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001DA74 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z @ 0x180038584 (-Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CSecondaryWindowRepresentation::SnapshotIfStatic(
        CSecondaryWindowRepresentation *this,
        struct CCachedVisualImageProxy *a2,
        struct CImageLegacyMilBrushProxy *a3,
        const struct MilPointAndSizeL *a4)
{
  CWindowData *v4; // rsi
  const wchar_t *v7; // rdi
  CWindowData *v10; // rcx
  __int64 v11; // rcx
  CBaseObject *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  struct tagRECT rc; // [rsp+30h] [rbp-58h] BYREF

  v4 = (CWindowData *)*((_QWORD *)this + 8);
  v7 = 0LL;
  v10 = 0LL;
  if ( *((_DWORD *)this + 18) == 1 )
    goto LABEL_9;
  if ( *((_DWORD *)this + 18) != 2 )
  {
    if ( *((_DWORD *)this + 18) != 3 )
      goto LABEL_5;
    if ( !CWindowData::IsImmersiveWindow(v4) )
    {
      v10 = *(CWindowData **)(*((_QWORD *)v4 + 61) + 80LL);
      goto LABEL_5;
    }
    goto LABEL_9;
  }
  v11 = *((_QWORD *)v4 + 60);
  if ( !v11 )
  {
LABEL_9:
    v10 = v4;
    goto LABEL_5;
  }
  v10 = *(CWindowData **)(v11 + 32);
LABEL_5:
  if ( *((_DWORD *)this + 18) != 3 && ((*((_BYTE *)v10 + 668) & 8) != 0 || (*((_DWORD *)this + 10) & 0x200) != 0) )
  {
    SetRect(
      &rc,
      *(_DWORD *)a4,
      *((_DWORD *)a4 + 1),
      *(_DWORD *)a4 + *((_DWORD *)a4 + 2),
      *((_DWORD *)a4 + 1) + *((_DWORD *)a4 + 3));
    CCachedVisualImageProxy::Snapshot(a2, &rc);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL)
                                   + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                      + 16LL));
    v12 = (CBaseObject *)*((_QWORD *)this + 48);
    *(_OWORD *)((char *)this + 392) = *(_OWORD *)a4;
    if ( v12 )
      CBaseObject::Release(v12);
    *((_QWORD *)this + 48) = a3;
    if ( a3 )
      _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
    CSecondaryWindowRepresentation::UpdateOwnedWindowVisualTreeRootVisual(this);
    *((_BYTE *)this + 161) = 1;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v15 = *((_QWORD *)this + 4);
      if ( v15 )
        v7 = *(const wchar_t **)(v15 + 16);
      McTemplateU0z_EtwEventWriteTransfer(v14, v13, v7);
    }
  }
}
