/*
 * XREFs of RtlpGetStackLimitsEx @ 0x140353790
 * Callers:
 *     RtlDispatchException @ 0x1402A3DC0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1402A4D40 (RtlUnwindEx.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x14022E9B0 (KeQueryCurrentStackInformationEx.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

bool __fastcall RtlpGetStackLimitsEx(
        ULONG_PTR BugCheckParameter1,
        char **a2,
        unsigned __int64 *a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter4)
{
  bool result; // al
  ULONG_PTR BugCheckParameter2[3]; // [rsp+30h] [rbp-18h] BYREF

  LODWORD(BugCheckParameter2[0]) = 0;
  result = KeQueryCurrentStackInformationEx(BugCheckParameter1, BugCheckParameter2, a2, a3);
  if ( !result )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x1AAu, BugCheckParameter1, LODWORD(BugCheckParameter2[0]), a4, BugCheckParameter4);
    KeBugCheckEx(0x1ABu, BugCheckParameter1, LODWORD(BugCheckParameter2[0]), a4, 0LL);
  }
  return result;
}
