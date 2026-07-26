/*
 * XREFs of NdisRequestPoll @ 0x1C00C05B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C0056990 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

__int64 __fastcall NdisRequestPoll(ULONG_PTR BugCheckParameter4, ULONG_PTR BugCheckParameter3)
{
  if ( BugCheckParameter3 )
    ndisBugCheckEx(0x2DuLL, 2uLL, BugCheckParameter3, BugCheckParameter4);
  return (*(__int64 (__fastcall **)(_QWORD))(BugCheckParameter4 + 88))(*(_QWORD *)(BugCheckParameter4 + 120));
}
