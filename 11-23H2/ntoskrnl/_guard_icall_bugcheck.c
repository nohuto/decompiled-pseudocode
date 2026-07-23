/*
 * XREFs of _guard_icall_bugcheck @ 0x140429F00
 * Callers:
 *     KeCheckStackAndTargetAddress @ 0x140346BD0 (KeCheckStackAndTargetAddress.c)
 *     _guard_check_icall @ 0x140429F60 (_guard_check_icall.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn guard_icall_bugcheck(ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x139u, 0xAuLL, 0LL, 0LL, BugCheckParameter4);
}
