/*
 * XREFs of RtlpHpTagQueryTags @ 0x18008B400
 * Callers:
 *     RtlQueryHeapInformation @ 0x18008AD00 (RtlQueryHeapInformation.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800FEDF0 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     RtlpHpTagContextFindMapping @ 0x180067460 (RtlpHpTagContextFindMapping.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x1801184D4 (RtlpHpTagQueryHeapsRemote.c)
 */

__int64 __fastcall RtlpHpTagQueryTags(_QWORD *a1, unsigned __int64 a2, _QWORD *a3, unsigned __int64 a4)
{
  int v6; // ecx
  __int64 v7; // r8
  unsigned int v8; // edi
  char v9; // al
  __int16 v10; // cx
  char *v11; // r14
  unsigned __int64 v12; // rbx
  char *v13; // r12
  __int64 *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int8 *v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 Mapping; // rax
  __int64 v23; // rax

  if ( a2 < 0x18 )
    return (unsigned int)-1073741811;
  if ( *(_WORD *)a1 != 1 )
    return (unsigned int)-1073741811;
  v6 = *((unsigned __int16 *)a1 + 1);
  if ( (v6 & 0xFFFFFFFD) != 0 )
    return (unsigned int)-1073741811;
  if ( a1[1] == -1LL )
  {
    v7 = 2LL;
    if ( (v6 & 2) != 0 && a2 < 0x30 )
      return (unsigned int)-1073741811;
    v8 = 0;
    v9 = (unsigned __int8)RtlpHpHeapFeatures >> 1;
    a1[2] = 0LL;
    if ( (v9 & 1) != 0 )
    {
      v10 = v6 | 1;
      v11 = (char *)(a1 + 3);
      *((_WORD *)a1 + 1) = v10;
      if ( (v10 & 2) != 0 )
      {
        v18 = (unsigned __int8 *)(a1 + 3);
        v19 = 314159LL;
        do
        {
          v20 = *v18;
          v18 += 8;
          v21 = *(v18 - 3)
              + 37 * (*(v18 - 4) + 37 * (*(v18 - 5) + 37 * (*(v18 - 6) + 37 * (*(v18 - 7) + 37 * (v20 + 37 * v19)))));
          v19 = *(v18 - 1) + 37 * (*(v18 - 2) + 37 * v21);
          --v7;
        }
        while ( v7 );
        RtlAcquireSRWLockShared(&RtlpHpTagContext, v21, 0LL, (unsigned __int64)v18);
        Mapping = RtlpHpTagContextFindMapping((__int64)&RtlpHpTagContext, (__int64)(a1 + 3), v19);
        a1[2] = 1LL;
        if ( Mapping )
          v23 = *(_QWORD *)(Mapping + 32);
        else
          v23 = 0LL;
        a1[5] = v23;
        RtlReleaseSRWLockShared(&RtlpHpTagContext);
        *a3 = 48LL;
      }
      else
      {
        v12 = (a2 - 24) / 0x18;
        v13 = &v11[24 * v12];
        RtlAcquireSRWLockShared(
          &RtlpHpTagContext,
          ((a2 - 24) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL) >> 64,
          2uLL,
          a4);
        if ( (unsigned int)dword_180182DA8 > v12 )
        {
          v8 = -1073741789;
          *a3 = 8 * (3LL * (unsigned int)dword_180182DA8 + 3);
          RtlReleaseSRWLockShared(&RtlpHpTagContext);
        }
        else
        {
          v14 = (__int64 *)qword_180182DB0;
          v15 = qword_180182DB0;
          if ( v11 < v13 )
          {
            while ( v15 )
            {
              v15 = *(_QWORD *)v15;
              if ( (v15 & 1) != 0 )
                break;
LABEL_12:
              if ( v15 )
              {
                *(_OWORD *)v11 = *(_OWORD *)(v15 + 16);
                *((_QWORD *)v11 + 2) = *(_QWORD *)(v15 + 32);
                v11 += 24;
                if ( v11 < v13 )
                  continue;
              }
              goto LABEL_14;
            }
            for ( ++v14;
                  (unsigned __int64)v14 < qword_180182DB0 + 8 * ((unsigned __int64)(unsigned int)dword_180182DAC >> 5);
                  ++v14 )
            {
              v15 = *v14;
              if ( (*v14 & 1) == 0 )
                goto LABEL_12;
            }
          }
LABEL_14:
          RtlReleaseSRWLockShared(&RtlpHpTagContext);
          v16 = (v11 - (char *)a1 - 24) / 24;
          a1[2] = v16;
          *a3 = 24 * (v16 + 1);
        }
      }
    }
    else
    {
      *((_WORD *)a1 + 1) = v6 & 0xFFFE;
      *a3 = 24LL;
    }
  }
  else
  {
    return (unsigned int)RtlpHpTagQueryHeapsRemote(a1);
  }
  return v8;
}
