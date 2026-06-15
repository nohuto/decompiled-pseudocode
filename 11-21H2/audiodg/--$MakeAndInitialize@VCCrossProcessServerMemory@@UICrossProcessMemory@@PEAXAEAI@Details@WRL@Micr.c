/*
 * XREFs of ??$MakeAndInitialize@VCCrossProcessServerMemory@@UICrossProcessMemory@@PEAXAEAI@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemory@@$$QEAPEAXAEAI@Z @ 0x14001F8FC
 * Callers:
 *     ?Allocate@CCrossProcessMemoryManager@@UEAAJIPEAPEAUICrossProcessMemory@@@Z @ 0x14001F210 (-Allocate@CCrossProcessMemoryManager@@UEAAJIPEAPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x14001207C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14001F888 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCrossProcessBaseMemory@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1400258E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCrossProcessBas.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCrossProcessServerMemory,ICrossProcessMemory,void *,unsigned int &>(
        void ***a1,
        void **a2,
        int *a3)
{
  unsigned int v6; // edi
  void **v7; // rax
  void **v8; // rsi
  int v9; // ebx
  const struct _GUID *v10; // rcx

  v6 = 0;
  *a1 = 0LL;
  v7 = (void **)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    *v7 = &CCrossProcessBaseMemory::`vftable';
    v7[2] = 0LL;
    *((_DWORD *)v7 + 6) = 0;
    v7[4] = 0LL;
    *((_DWORD *)v7 + 11) = 1;
    *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCrossProcessBaseMemory>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v8 = &CCrossProcessServerMemory::`vftable';
    v9 = *a3;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v8 + 2,
      *a2);
    *((_DWORD *)v8 + 6) = v9;
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_910f47db_d25f_4cf9_995e_f86c161b3eef, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v10, v10) )
    {
      *a1 = v8;
      (*((void (__fastcall **)(void **))*v8 + 1))(v8);
    }
    else
    {
      v6 = -2147467262;
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCrossProcessBaseMemory>::Release(v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v6;
}
