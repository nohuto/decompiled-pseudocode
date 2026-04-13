/*
 * XREFs of ??1?$StaticStorage@V?$DefaultModule@$00@Details@WRL@Microsoft@@$0A@H@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800483D4
 * Callers:
 *     _dynamic_atexit_destructor_for__Microsoft::WRL::Details::StaticStorage_Microsoft::WRL::Details::DefaultModule_1__0_int_::instance___ @ 0x1800DDC00 (_dynamic_atexit_destructor_for__Microsoft--WRL--Details--StaticStorage_Microsoft--WRL--Details--.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::~StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    result = (**(__int64 (__fastcall ***)(__int64, _QWORD))a1)(a1, 0LL);
    *(_BYTE *)(a1 + 8) = 0;
  }
  return result;
}
