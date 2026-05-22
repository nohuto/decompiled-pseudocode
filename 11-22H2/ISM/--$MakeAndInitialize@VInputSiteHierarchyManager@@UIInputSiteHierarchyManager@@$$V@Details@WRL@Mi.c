/*
 * XREFs of ??$MakeAndInitialize@VInputSiteHierarchyManager@@UIInputSiteHierarchyManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInputSiteHierarchyManager@@@Z @ 0x18003B8EC
 * Callers:
 *     ?Create@InputSiteHierarchyManager@@SA?AV?$ComPtr@UIInputSiteHierarchyManager@@@WRL@Microsoft@@XZ @ 0x18004E7DC (-Create@InputSiteHierarchyManager@@SA-AV-$ComPtr@UIInputSiteHierarchyManager@@@WRL@Microsoft@@XZ.c)
 * Callees:
 *     ??0InputSiteHierarchyManager@@AEAA@XZ @ 0x18003B98C (--0InputSiteHierarchyManager@@AEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058434 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18006A110 (--1-$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<InputSiteHierarchyManager,IInputSiteHierarchyManager,>(
        _QWORD *a1)
{
  InputSiteHierarchyManager *v2; // rax
  InputSiteHierarchyManager *v3; // rdi
  unsigned int v4; // ebx
  InputSiteHierarchyManager *v6; // [rsp+30h] [rbp+8h] BYREF
  InputSiteHierarchyManager *v7; // [rsp+38h] [rbp+10h]
  InputSiteHierarchyManager *v8; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v2 = (InputSiteHierarchyManager *)operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  v7 = v2;
  if ( v2 )
  {
    v8 = v2;
    v3 = InputSiteHierarchyManager::InputSiteHierarchyManager(v2);
    v6 = 0LL;
    v4 = (**(__int64 (__fastcall ***)(InputSiteHierarchyManager *, GUID *, _QWORD *))v3)(
           v3,
           &GUID_5325a482_4673_4888_a483_4084c3b23478,
           a1);
    (*(void (__fastcall **)(InputSiteHierarchyManager *))(*(_QWORD *)v3 + 16LL))(v3);
    return v4;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<ForegroundManager>::~MakeAllocator<ForegroundManager>(&v6);
    return 2147942414LL;
  }
}
