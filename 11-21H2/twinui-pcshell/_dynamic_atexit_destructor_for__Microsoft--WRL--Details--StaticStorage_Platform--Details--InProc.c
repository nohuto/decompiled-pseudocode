/*
 * XREFs of _dynamic_atexit_destructor_for__Microsoft::WRL::Details::StaticStorage_Platform::Details::InProcModule_0_int_::instance___ @ 0x180224540
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 dynamic_atexit_destructor_for__Microsoft::WRL::Details::StaticStorage_Platform::Details::InProcModule_0_int_::instance___()
{
  __int64 result; // rax

  if ( byte_1807B32C8 )
  {
    result = (*(__int64 (__fastcall **)(__int64 *, _QWORD))Microsoft::WRL::Details::StaticStorage<Platform::Details::InProcModule,0,int>::instance_)(
               &Microsoft::WRL::Details::StaticStorage<Platform::Details::InProcModule,0,int>::instance_,
               0LL);
    byte_1807B32C8 = 0;
  }
  return result;
}
