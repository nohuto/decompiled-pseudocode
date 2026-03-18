/*
 * XREFs of RtlpGetStackLimitsEx @ 0x140294D50
 * Callers:
 *     RtlDispatchException @ 0x140295210 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1402957A0 (RtlUnwindEx.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x1402AB9C0 (KeQueryCurrentStackInformationEx.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpGetStackLimitsEx(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        __int64 a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter4)
{
  __int64 result; // rax
  ULONG_PTR BugCheckParameter2[3]; // [rsp+30h] [rbp-18h] BYREF

  LODWORD(BugCheckParameter2[0]) = 0;
  result = KeQueryCurrentStackInformationEx(BugCheckParameter1, BugCheckParameter2, a2, a3);
  if ( !(_BYTE)result )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x1AAu, BugCheckParameter1, LODWORD(BugCheckParameter2[0]), a4, BugCheckParameter4);
    KeBugCheckEx(0x1ABu, BugCheckParameter1, LODWORD(BugCheckParameter2[0]), a4, 0LL);
  }
  return result;
}
