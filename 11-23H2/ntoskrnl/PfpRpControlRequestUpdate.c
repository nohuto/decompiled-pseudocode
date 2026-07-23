/*
 * XREFs of PfpRpControlRequestUpdate @ 0x1407B55B8
 * Callers:
 *     PfpRpControlRequestPerform @ 0x1407B5314 (PfpRpControlRequestPerform.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     PsLookupProcessByProcessId @ 0x1406FA580 (PsLookupProcessByProcessId.c)
 *     PfpRpCHashAddEntries @ 0x1407B5768 (PfpRpCHashAddEntries.c)
 *     PfpRpCHashDeleteEntries @ 0x1407B59F0 (PfpRpCHashDeleteEntries.c)
 */

__int64 __fastcall PfpRpControlRequestUpdate(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r15
  _DWORD *v4; // rcx
  unsigned int v5; // esi
  _QWORD *v7; // r12
  unsigned int *v8; // r14
  unsigned __int64 v9; // r13
  __int64 result; // rax
  void *v11; // rcx
  __int64 v12; // rbp
  PEPROCESS v13; // rcx
  PEPROCESS Process; // [rsp+60h] [rbp+8h] BYREF

  v2 = (unsigned int)(a2[2] + a2[1]);
  Process = 0LL;
  v4 = a2 + 6;
  v5 = 0;
  v7 = a2 + 6;
  v8 = a2 + 6;
  v9 = ((unsigned __int64)&a2[2 * v2 + 7] + 3) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (_DWORD)v2 )
  {
    do
    {
      v11 = (void *)v8[1];
      v12 = *v8;
      *v7++ = v12;
      if ( (_DWORD)v11 && PsLookupProcessByProcessId(v11, &Process) >= 0 )
      {
        v13 = Process;
        if ( HIDWORD(Process[1].ActiveProcessors.StaticBitmap[8]) == (_DWORD)v12 )
        {
          if ( v5 >= a2[1] )
            _InterlockedAnd((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0xFFFFBFFF);
          else
            _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x4000u);
          v13 = Process;
        }
        ObfDereferenceObjectWithTag(v13, 0x746C6644u);
      }
      ++v5;
      v8 += 2;
    }
    while ( v5 < (unsigned int)v2 );
    v4 = a2 + 6;
  }
  result = PfpRpCHashAddEntries(a1, a1 + 96, a1 + 120, v4, a2[1]);
  if ( (int)result >= 0 )
  {
    if ( !a2[2] || !*(_DWORD *)(a1 + 112) || (result = PfpRpCHashDeleteEntries(a1, a1 + 96, a1 + 120), (int)result >= 0) )
    {
      PfpRpCHashAddEntries(a1, a1 + 56, a1 + 88, v9 + 8LL * (unsigned int)a2[3], a2[4]);
      if ( a2[3] && *(_DWORD *)(a1 + 72) )
      {
        result = PfpRpCHashDeleteEntries(a1, a1 + 56, a1 + 88);
        if ( (int)result < 0 )
          return result;
        *(_QWORD *)(a1 + 80) = 0LL;
      }
      return 0LL;
    }
  }
  return result;
}
