/*
 * XREFs of BindCtx_AddObjectParam @ 0x18054FCB8
 * Callers:
 *     ?MakeBackgroundThumbnailFromThumbnailCache@VirtualDesktopGestureWindow@@AEAAJPEAUIDCompThumbnail@@PEAUIVirtualDesktop@@PEAUHSTRING__@@UtagRECT@@PEAPEAU2@@Z @ 0x180553C94 (-MakeBackgroundThumbnailFromThumbnailCache@VirtualDesktopGestureWindow@@AEAAJPEAUIDCompThumbnail.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Release@CDummyUnknown@@UEAAKXZ @ 0x180554A80 (-Release@CDummyUnknown@@UEAAKXZ.c)
 */

__int64 __fastcall BindCtx_AddObjectParam(__int64 a1)
{
  char *v2; // rax
  CDummyUnknown *v3; // rbx
  unsigned int v4; // edi

  v2 = (char *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = (CDummyUnknown *)v2;
  if ( v2 )
  {
    *((_QWORD *)v2 + 4) = 0LL;
    *(_QWORD *)v2 = &CDummyUnknown::`vftable'{for `IOleWindow'};
    *((_QWORD *)v2 + 1) = &CDummyUnknown::`vftable'{for `IPersist'};
    *((_QWORD *)v2 + 2) = &CDummyUnknown::`vftable'{for `IObjectWithFolderEnumMode'};
    *((_DWORD *)v2 + 6) = 1;
    *((_DWORD *)v2 + 14) = 0;
    *(GUID *)(v2 + 40) = GUID_NULL;
    v4 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, char *))(*(_QWORD *)a1 + 72LL))(
           a1,
           L"Don't Translate Aliases",
           v2);
    CDummyUnknown::Release(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
