/*
 * XREFs of RtlpHpTagQueryTags @ 0x18007DE24
 * Callers:
 *     RtlQueryHeapInformation @ 0x18007D840 (RtlQueryHeapInformation.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800FF0F0 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     RtlpHpTagContextFindMapping @ 0x180058870 (RtlpHpTagContextFindMapping.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x180118054 (RtlpHpTagQueryHeapsRemote.c)
 */

__int64 __fastcall RtlpHpTagQueryTags(_QWORD *a1, SIZE_T a2, _QWORD *a3)
{
  int v5; // ecx
  __int64 v6; // r8
  unsigned int v7; // edi
  char v8; // al
  __int16 v9; // cx
  char *v10; // r14
  unsigned __int64 v11; // rbx
  char *v12; // r12
  __int64 *v13; // rdx
  __int64 v14; // rcx
  __int64 *v15; // r8
  __int64 v16; // rdx
  unsigned __int8 *v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 Mapping; // rax
  __int64 v22; // rax

  if ( a2 < 0x18 )
    return (unsigned int)-1073741811;
  if ( *(_WORD *)a1 != 1 )
    return (unsigned int)-1073741811;
  v5 = *((unsigned __int16 *)a1 + 1);
  if ( (v5 & 0xFFFFFFFD) != 0 )
    return (unsigned int)-1073741811;
  if ( a1[1] == -1LL )
  {
    v6 = 2LL;
    if ( (v5 & 2) != 0 && a2 < 0x30 )
      return (unsigned int)-1073741811;
    v7 = 0;
    v8 = (unsigned __int8)RtlpHpHeapFeatures >> 1;
    a1[2] = 0LL;
    if ( (v8 & 1) != 0 )
    {
      v9 = v5 | 1;
      v10 = (char *)(a1 + 3);
      *((_WORD *)a1 + 1) = v9;
      if ( (v9 & 2) != 0 )
      {
        v18 = (unsigned __int8 *)(a1 + 3);
        v19 = 314159LL;
        do
        {
          v20 = *v18;
          v18 += 8;
          v19 = *(v18 - 1)
              + 37
              * (*(v18 - 2)
               + 37
               * (*(v18 - 3)
                + 37 * (*(v18 - 4) + 37 * (*(v18 - 5) + 37 * (*(v18 - 6) + 37 * (*(v18 - 7) + 37 * (v20 + 37 * v19)))))));
          --v6;
        }
        while ( v6 );
        RtlAcquireSRWLockShared(&RtlpHpTagContext);
        Mapping = RtlpHpTagContextFindMapping((__int64)&RtlpHpTagContext, (__int64)(a1 + 3), v19);
        a1[2] = 1LL;
        if ( Mapping )
          v22 = *(_QWORD *)(Mapping + 32);
        else
          v22 = 0LL;
        a1[5] = v22;
        RtlReleaseSRWLockShared(&RtlpHpTagContext);
        *a3 = 48LL;
      }
      else
      {
        v11 = (a2 - 24) / 0x18;
        v12 = &v10[24 * v11];
        RtlAcquireSRWLockShared(&RtlpHpTagContext);
        if ( (unsigned int)dword_180178B28 > v11 )
        {
          v7 = -1073741789;
          *a3 = 8 * (3LL * (unsigned int)dword_180178B28 + 3);
          RtlReleaseSRWLockShared(&RtlpHpTagContext);
        }
        else
        {
          v13 = (__int64 *)qword_180178B30;
          v14 = qword_180178B30;
          if ( v10 < v12 )
          {
            while ( 1 )
            {
              v15 = (__int64 *)v14;
              if ( !v14 )
                break;
              v14 = *(_QWORD *)v14;
              if ( (v14 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
                v14 = *v15;
              if ( (v14 & 1) != 0 )
                break;
LABEL_14:
              if ( v14 )
              {
                *(_OWORD *)v10 = *(_OWORD *)(v14 + 16);
                *((_QWORD *)v10 + 2) = *(_QWORD *)(v14 + 32);
                v10 += 24;
                if ( v10 < v12 )
                  continue;
              }
              goto LABEL_16;
            }
            for ( ++v13;
                  (unsigned __int64)v13 < qword_180178B30 + 8 * ((unsigned __int64)(unsigned int)dword_180178B2C >> 5);
                  ++v13 )
            {
              v14 = *v13;
              if ( (*v13 & 1) == 0 )
                goto LABEL_14;
            }
          }
LABEL_16:
          RtlReleaseSRWLockShared(&RtlpHpTagContext);
          v16 = (v10 - (char *)a1 - 24) / 24;
          a1[2] = v16;
          *a3 = 24 * (v16 + 1);
        }
      }
    }
    else
    {
      *((_WORD *)a1 + 1) = v5 & 0xFFFE;
      *a3 = 24LL;
    }
  }
  else
  {
    return (unsigned int)RtlpHpTagQueryHeapsRemote(a1, a2);
  }
  return v7;
}
