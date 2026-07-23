/*
 * XREFs of RtlInitializeExtendedContext @ 0x140295100
 * Callers:
 *     RtlUnwindEx @ 0x1402957A0 (RtlUnwindEx.c)
 *     sub_140298420 @ 0x140298420 (sub_140298420.c)
 *     sub_140576820 @ 0x140576820 (sub_140576820.c)
 *     sub_14057C724 @ 0x14057C724 (sub_14057C724.c)
 *     sub_1407043D0 @ 0x1407043D0 (sub_1407043D0.c)
 *     sub_1407045D0 @ 0x1407045D0 (sub_1407045D0.c)
 *     sub_140704EF8 @ 0x140704EF8 (sub_140704EF8.c)
 *     sub_140705578 @ 0x140705578 (sub_140705578.c)
 *     sub_1409B4D94 @ 0x1409B4D94 (sub_1409B4D94.c)
 * Callees:
 *     sub_140297D10 @ 0x140297D10 (sub_140297D10.c)
 *     sub_140297F80 @ 0x140297F80 (sub_140297F80.c)
 */

NTSTATUS __cdecl RtlInitializeExtendedContext(PCONTEXT Context, ULONG ContextFlags, PCONTEXT_EX *ContextEx)
{
  __int64 v5; // rbx
  NTSTATUS result; // eax
  int v8; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0LL;
  v8 = 0;
  result = sub_140297F80(ContextFlags, &v8);
  if ( result >= 0 )
  {
    if ( (v8 & 2) != 0 )
      v5 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
    return sub_140297D10(Context, ContextFlags, ContextEx, v5);
  }
  return result;
}
