/*
 * XREFs of RtlpGetStackLimitsEx @ 0x140353930
 * Callers:
 *     RtlDispatchException @ 0x1402A4050 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1402A4FD0 (RtlUnwindEx.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x14022EAC0 (KeQueryCurrentStackInformationEx.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
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
