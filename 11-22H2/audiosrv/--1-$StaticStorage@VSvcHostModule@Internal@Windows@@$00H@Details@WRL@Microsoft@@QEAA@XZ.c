/*
 * XREFs of ??1?$StaticStorage@VSvcHostModule@Internal@Windows@@$00H@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800662AC
 * Callers:
 *     _dynamic_atexit_destructor_for__Microsoft::WRL::Details::StaticStorage_Windows::Internal::SvcHostModule_1_int_::instance___ @ 0x18007E080 (_dynamic_atexit_destructor_for__Microsoft--WRL--Details--StaticStorage_Windows--Internal--SvcHos.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::StaticStorage<Windows::Internal::SvcHostModule,1,int>::~StaticStorage<Windows::Internal::SvcHostModule,1,int>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 64) )
  {
    result = (**(__int64 (__fastcall ***)(__int64, _QWORD))(a1 + 40))(a1 + 40, 0LL);
    *(_BYTE *)(a1 + 64) = 0;
  }
  return result;
}
