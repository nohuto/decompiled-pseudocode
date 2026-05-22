/*
 * XREFs of ??$MakeAndInitialize@VInputSiteHierarchyManager@@UIInputSiteHierarchyManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInputSiteHierarchyManager@@@Z @ 0x180035094
 * Callers:
 *     ?Create@InputSiteHierarchyManager@@SA?AV?$ComPtr@UIInputSiteHierarchyManager@@@WRL@Microsoft@@XZ @ 0x18003462C (-Create@InputSiteHierarchyManager@@SA-AV-$ComPtr@UIInputSiteHierarchyManager@@@WRL@Microsoft@@XZ.c)
 * Callees:
 *     ??0InputSiteHierarchyManager@@AEAA@XZ @ 0x180039CE0 (--0InputSiteHierarchyManager@@AEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<InputSiteHierarchyManager,IInputSiteHierarchyManager,>(
        _QWORD *a1)
{
  InputSiteHierarchyManager *v2; // rax
  InputSiteHierarchyManager *v3; // rbx
  unsigned int v4; // esi

  *a1 = 0LL;
  v2 = (InputSiteHierarchyManager *)operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = InputSiteHierarchyManager::InputSiteHierarchyManager(v2);
    v4 = (**(__int64 (__fastcall ***)(InputSiteHierarchyManager *, GUID *, _QWORD *))v3)(
           v3,
           &GUID_5325a482_4673_4888_a483_4084c3b23478,
           a1);
    (*(void (__fastcall **)(InputSiteHierarchyManager *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
