/*
 * XREFs of NdisRequestPoll @ 0x1C00C51B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCCC (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

__int64 __fastcall NdisRequestPoll(ULONG_PTR BugCheckParameter4, ULONG_PTR BugCheckParameter3)
{
  if ( BugCheckParameter3 )
    ndisBugCheckEx(0x2DuLL, 2uLL, BugCheckParameter3, BugCheckParameter4);
  return (*(__int64 (__fastcall **)(_QWORD))(BugCheckParameter4 + 88))(*(_QWORD *)(BugCheckParameter4 + 128));
}
