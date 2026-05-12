/*
 * XREFs of RaidBusEnumeratorBuildReportLuns @ 0x1C0017B8C
 * Callers:
 *     RaidBusEnumeratorIssueReportLuns @ 0x1C0016248 (RaidBusEnumeratorIssueReportLuns.c)
 * Callees:
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     RaidInitializeReportLunsSrb @ 0x1C00A0644 (RaidInitializeReportLunsSrb.c)
 */

_QWORD *__fastcall RaidBusEnumeratorBuildReportLuns(
        __int64 *a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        _QWORD *a5)
{
  void *v5; // rbp
  __int64 v7; // r14
  __int64 v10; // r12
  __int64 v11; // rdi
  int v12; // edx
  unsigned int v13; // edx
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  _QWORD *result; // rax
  __int64 v17; // rax

  v5 = (void *)a3[4];
  v7 = a3[2];
  v10 = a4;
  memset_0(v5, 0, a4);
  v11 = *a1;
  LOBYTE(v12) = a2;
  RaidInitializeReportLunsSrb(v7, v12, a2 >> 8, HIWORD(a2), (__int64)v5, v10, *(_BYTE *)(v11 + 442));
  v13 = 0;
  if ( *(_BYTE *)(v11 + 442) == 1 )
  {
    *(_DWORD *)(v7 + 24) |= 0x80110u;
    *(_QWORD *)(v7 + 104) = 0LL;
    *(_QWORD *)(v7 + 64) = a3[4];
    *(_DWORD *)(v7 + 60) = v10;
    if ( *(_DWORD *)(v7 + 56) )
    {
      while ( 1 )
      {
        v14 = *(unsigned int *)(v7 + 4LL * v13 + 120);
        if ( (unsigned int)v14 >= 0x80 )
        {
          v15 = *(unsigned int *)(v7 + 16);
          if ( (unsigned int)v14 <= (unsigned int)v15 && *(_DWORD *)(v14 + v7) == 64 && v14 + 40 <= v15 )
            break;
        }
        if ( ++v13 >= *(_DWORD *)(v7 + 56) )
          goto LABEL_8;
      }
      *(_QWORD *)((unsigned int)v14 + v7 + 16) = a3[3];
      *(_BYTE *)((unsigned int)v14 + v7 + 9) = 18;
    }
  }
  else
  {
    *(_QWORD *)(v7 + 56) = 0LL;
    *(_QWORD *)(v7 + 32) = a3[3];
    *(_BYTE *)(v7 + 11) = 18;
    v17 = a3[4];
    *(_DWORD *)(v7 + 12) |= 0x80110u;
    *(_QWORD *)(v7 + 24) = v17;
    *(_DWORD *)(v7 + 16) = v10;
  }
LABEL_8:
  result = a5;
  *a5 = v7;
  return result;
}
