/*
 * XREFs of TcglibpGetTPerProperties @ 0x1C007EE60
 * Callers:
 *     TcglibpGetCapabilities @ 0x1C007D1E8 (TcglibpGetCapabilities.c)
 * Callees:
 *     TcglibEalLogCommand @ 0x1C005551C (TcglibEalLogCommand.c)
 *     TcglibpAllocateRequestResources @ 0x1C007C67C (TcglibpAllocateRequestResources.c)
 *     TcglibpCallMethod @ 0x1C007C734 (TcglibpCallMethod.c)
 *     TcglibpReleaseRequestResources @ 0x1C007CBD4 (TcglibpReleaseRequestResources.c)
 */

__int64 __fastcall TcglibpGetTPerProperties(int **a1, __int64 a2, __int64 a3)
{
  __int16 v6; // r8
  __int64 *v7; // r14
  __int64 *v8; // r15
  int RequestResources; // ebp

  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 32) = 0LL;
  *(_DWORD *)(a3 + 40) = 0;
  v6 = *(_WORD *)(a2 + 24);
  if ( !v6 )
  {
    v6 = *((_WORD *)a1 + 14);
    *(_WORD *)(a2 + 24) = v6;
  }
  v7 = (__int64 *)(a2 + 48);
  v8 = (__int64 *)(a2 + 40);
  RequestResources = TcglibpAllocateRequestResources(*a1, 1, v6, 2048, (__int64 *)(a2 + 40), (__int64 *)(a2 + 48));
  if ( RequestResources >= 0 )
  {
    TcglibEalLogCommand(*a1, "GetTPerProperties", 255, 1, 0LL, 0LL);
    RequestResources = TcglibpCallMethod(
                         (__int64)a1,
                         a2,
                         255LL,
                         65281LL,
                         0LL,
                         0LL,
                         255LL,
                         65281LL,
                         (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))ParseTPerProperties,
                         a3);
  }
  TcglibpReleaseRequestResources(*a1, v8, v7);
  return (unsigned int)RequestResources;
}
