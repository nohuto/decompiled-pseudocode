/*
 * XREFs of TcglibpOpenSession @ 0x1C007EF74
 * Callers:
 *     TcglibpOpenSessionWithRetry @ 0x1C007F0A0 (TcglibpOpenSessionWithRetry.c)
 * Callees:
 *     TcglibEalLogCommand @ 0x1C005551C (TcglibEalLogCommand.c)
 *     TcglibpAllocateRequestResources @ 0x1C007C67C (TcglibpAllocateRequestResources.c)
 *     TcglibpCallMethod @ 0x1C007C734 (TcglibpCallMethod.c)
 *     TcglibpReinitRequestResources @ 0x1C007CB5C (TcglibpReinitRequestResources.c)
 *     TcglibpReleaseRequestResources @ 0x1C007CBD4 (TcglibpReleaseRequestResources.c)
 *     TcglibpSetMaxPacketSizes @ 0x1C007F158 (TcglibpSetMaxPacketSizes.c)
 */

__int64 __fastcall TcglibpOpenSession(int **a1, __int64 a2)
{
  int RequestResources; // esi
  __int16 v5; // r8
  int *v6; // rcx
  __int64 *v7; // r8
  __int64 *v8; // rdx

  RequestResources = TcglibpSetMaxPacketSizes(a1, a2, *((unsigned int *)a1 + 11));
  if ( RequestResources >= 0 )
  {
    v5 = *(_WORD *)(a2 + 24);
    if ( !v5 )
    {
      v5 = *((_WORD *)a1 + 14);
      *(_WORD *)(a2 + 24) = v5;
    }
    RequestResources = TcglibpAllocateRequestResources(*a1, 1, v5, 2048, (__int64 *)(a2 + 40), (__int64 *)(a2 + 48));
    if ( RequestResources >= 0 )
    {
      TcglibEalLogCommand(*a1, "OpenSession", 255, 2, *(_QWORD *)(a2 + 16), 0LL);
      RequestResources = TcglibpCallMethod(
                           (__int64)a1,
                           a2,
                           255LL,
                           65282LL,
                           (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))GenStartSessionParams,
                           0LL,
                           255LL,
                           65283LL,
                           (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))ParseSyncSessionData,
                           0LL);
    }
  }
  v6 = *a1;
  v7 = (__int64 *)(a2 + 48);
  v8 = (__int64 *)(a2 + 40);
  if ( RequestResources < 0 )
  {
    TcglibpReleaseRequestResources(v6, v8, v7);
    *(_QWORD *)(a2 + 4) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_WORD *)(a2 + 24) = 0;
  }
  else
  {
    TcglibpReinitRequestResources(v6, *v8, *v7);
  }
  return (unsigned int)RequestResources;
}
