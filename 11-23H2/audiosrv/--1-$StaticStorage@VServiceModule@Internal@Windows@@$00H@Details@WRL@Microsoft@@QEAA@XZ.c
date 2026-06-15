/*
 * XREFs of ??1?$StaticStorage@VServiceModule@Internal@Windows@@$00H@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800662F8
 * Callers:
 *     _dynamic_atexit_destructor_for__Microsoft::WRL::Details::StaticStorage_Windows::Internal::ServiceModule_1_int_::instance___ @ 0x18007E030 (_dynamic_atexit_destructor_for__Microsoft--WRL--Details--StaticStorage_Windows--Internal--Servic.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::StaticStorage<Windows::Internal::ServiceModule,1,int>::~StaticStorage<Windows::Internal::ServiceModule,1,int>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 56) )
  {
    result = (**(__int64 (__fastcall ***)(__int64, _QWORD))(a1 + 40))(a1 + 40, 0LL);
    *(_BYTE *)(a1 + 56) = 0;
  }
  return result;
}
