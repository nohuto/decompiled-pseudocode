/*
 * XREFs of ??$MakeAndInitialize@VAppManager@ContentManagement@@UIAppManager@2@AEAPEAUIUser@System@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAUIAppManager@ContentManagement@@AEAPEAUIUser@System@Windows@@@Z @ 0x18007B968
 * Callers:
 *     ?CreateInstance_AppManager@@YAJPEAUIUser@System@Windows@@PEAPEAUIAppManager@ContentManagement@@@Z @ 0x18007F6DC (-CreateInstance_AppManager@@YAJPEAUIUser@System@Windows@@PEAPEAUIAppManager@ContentManagement@@@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800227B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18002BC2C (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??0AppManager@ContentManagement@@QEAA@XZ @ 0x18007D868 (--0AppManager@ContentManagement@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::AppManager,ContentManagement::IAppManager,Windows::System::IUser * &>(
        _QWORD *a1,
        __int64 *a2)
{
  void *v4; // rax
  unsigned int v5; // ebx
  _QWORD *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rcx
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v4;
  if ( v4 )
  {
    v6 = (_QWORD *)ContentManagement::AppManager::AppManager((ContentManagement::AppManager *)v4);
    v10 = 0LL;
    v7 = *a2;
    if ( v6[10] != v7 )
    {
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v8 = v6[10];
      v6[10] = v7;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*v6)(v6, &GUID_2565aa54_0e11_4804_812f_cf610f71362c, a1);
    (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v10);
  return v5;
}
