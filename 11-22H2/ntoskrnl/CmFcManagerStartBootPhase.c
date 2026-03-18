/*
 * XREFs of CmFcManagerStartBootPhase @ 0x140B3BE94
 * Callers:
 *     CmInitBootFeatureConfigurations @ 0x140B3BF64 (CmInitBootFeatureConfigurations.c)
 * Callees:
 *     RtlpFcWriteHighLowHigh @ 0x140374D10 (RtlpFcWriteHighLowHigh.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x140810214 (RtlpFcBufferManagerUpdateBuffers.c)
 *     CmFcpIncrementChangeStamp @ 0x140810C34 (CmFcpIncrementChangeStamp.c)
 */

char __fastcall CmFcManagerStartBootPhase(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9,
        char a10)
{
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  char result; // al
  _QWORD v15[10]; // [rsp+20h] [rbp-68h] BYREF

  v10 = CmFcpIncrementChangeStamp(qword_140C14038);
  v15[8] = a5;
  v15[1] = v11;
  v15[2] = v12;
  v15[4] = v11;
  v15[5] = v12;
  v15[0] = v10;
  v15[3] = v10;
  v15[6] = v10;
  v15[7] = v13;
  RtlpFcBufferManagerUpdateBuffers(qword_140C14090, v10, (__int64)v15);
  RtlpFcWriteHighLowHigh((__int64)&qword_140C14038, v10);
  qword_140C14178[0] = a6;
  qword_140C14518 = a8;
  result = a10;
  byte_140C146E8 = a10;
  byte_140C14173 = 0;
  return result;
}
