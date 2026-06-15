/*
 * XREFs of ?GetImplementation@CAudioSession@@UEAAJPEAPEAV1@@Z @ 0x18000F580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSession::GetImplementation(CAudioSession *this, struct CAudioSession **a2)
{
  struct CAudioSession *v2; // rcx

  v2 = (CAudioSession *)((char *)this - 24);
  *a2 = v2;
  (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v2 + 8LL))(v2);
  return 0LL;
}
