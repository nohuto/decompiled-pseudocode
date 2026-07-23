/*
 * XREFs of RtlGetExtendedContextLength @ 0x140295190
 * Callers:
 *     RtlUnwindEx @ 0x1402957A0 (RtlUnwindEx.c)
 *     sub_140298420 @ 0x140298420 (sub_140298420.c)
 *     sub_140576820 @ 0x140576820 (sub_140576820.c)
 *     sub_14057C724 @ 0x14057C724 (sub_14057C724.c)
 *     sub_1407035C0 @ 0x1407035C0 (sub_1407035C0.c)
 *     sub_1407043D0 @ 0x1407043D0 (sub_1407043D0.c)
 *     sub_1407045D0 @ 0x1407045D0 (sub_1407045D0.c)
 *     sub_140704EF8 @ 0x140704EF8 (sub_140704EF8.c)
 *     sub_140705578 @ 0x140705578 (sub_140705578.c)
 *     sub_1407A34A0 @ 0x1407A34A0 (sub_1407A34A0.c)
 *     sub_1409B4D94 @ 0x1409B4D94 (sub_1409B4D94.c)
 * Callees:
 *     sub_1402956D0 @ 0x1402956D0 (sub_1402956D0.c)
 *     sub_140297F80 @ 0x140297F80 (sub_140297F80.c)
 */

NTSTATUS __cdecl RtlGetExtendedContextLength(ULONG ContextFlags, PULONG ContextLength)
{
  __int64 v3; // rbx
  NTSTATUS result; // eax
  int v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v6 = 0;
  result = sub_140297F80(ContextFlags, &v6);
  if ( result >= 0 )
  {
    if ( (v6 & 2) != 0 )
      v3 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
    return sub_1402956D0(ContextFlags, ContextLength, v3);
  }
  return result;
}
