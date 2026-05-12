/*
 * XREFs of RaidBusEnumeratorIssueReportLuns @ 0x1C0016248
 * Callers:
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C001605C (RaidBusEnumeratorGetLunListFromTarget.c)
 * Callees:
 *     RaidBusEnumeratorAllocateReportLunsResources @ 0x1C001634C (RaidBusEnumeratorAllocateReportLunsResources.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C00170B0 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidBusEnumeratorBuildReportLuns @ 0x1C0017B8C (RaidBusEnumeratorBuildReportLuns.c)
 */

__int64 __fastcall RaidBusEnumeratorIssueReportLuns(
        __int64 a1,
        unsigned int a2,
        int a3,
        _DWORD *a4,
        unsigned __int8 **a5)
{
  __int64 v5; // rbp
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v13; // rbx
  unsigned __int8 *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v5 = a1 + 64;
  v8 = 0;
  v9 = (unsigned int)*a4;
  v16 = 0LL;
  result = RaidBusEnumeratorAllocateReportLunsResources(a1, v9, a1 + 64);
  if ( (int)result >= 0 )
  {
    RaidBusEnumeratorBuildReportLuns(a1, a2, v5, (unsigned int)*a4);
    v13 = v16;
    result = RaidBusEnumeratorIssueSynchronousRequest(a1, a3, v5, v16, (char)&v16);
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result == -1073741789 )
        return 3221225486LL;
    }
    else
    {
      if ( *(_BYTE *)(*(_QWORD *)a1 + 442LL) == 1 )
        v14 = *(unsigned __int8 **)(v13 + 64);
      else
        v14 = *(unsigned __int8 **)(v13 + 24);
      v15 = v14[3] | ((v14[2] | ((v14[1] | (*v14 << 8)) << 8)) << 8);
      if ( (unsigned int)v15 >= (int)v15 + 8 )
      {
        return 3221225860LL;
      }
      else
      {
        if ( (unsigned int)*a4 < (unsigned __int64)(v15 + 8) )
        {
          *a4 = v15 + 8;
          v8 = -1073741789;
        }
        result = v8;
        *a5 = v14;
      }
    }
  }
  return result;
}
