/*
 * XREFs of MiArePagefileContentsCorrupted @ 0x140665F0C
 * Callers:
 *     MiValidatePagefilePageHash @ 0x14046F77A (MiValidatePagefilePageHash.c)
 *     MiIsStandbyPageCorrupted @ 0x14066657C (MiIsStandbyPageCorrupted.c)
 * Callees:
 *     MiGetPagingFileOffset @ 0x1402F2AF4 (MiGetPagingFileOffset.c)
 *     MiComputePageHash @ 0x14046F53C (MiComputePageHash.c)
 *     MiObtainPagefileHashes @ 0x14046F654 (MiObtainPagefileHashes.c)
 *     MiLateWritePageHash @ 0x140666618 (MiLateWritePageHash.c)
 *     MiPageHashBugCheck @ 0x140667108 (MiPageHashBugCheck.c)
 */

__int64 __fastcall MiArePagefileContentsCorrupted(__int64 a1, __int128 *a2)
{
  unsigned __int64 *v4; // rbp
  unsigned __int64 v5; // rbx
  __int64 v6; // r15
  int PagingFileOffset; // eax
  unsigned int v8; // edi
  __int64 v9; // rbx
  unsigned int v10; // r14d
  unsigned int v12; // ebx
  int v13; // eax
  __int128 v14; // [rsp+30h] [rbp-48h] BYREF
  __int128 v15; // [rsp+40h] [rbp-38h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  v4 = (unsigned __int64 *)(48 * a1 - 0x220000000000LL);
  v5 = v4[2];
  v6 = *(_QWORD *)(*(_QWORD *)(qword_140C673C8 + 8 * ((v4[5] >> 43) & 0x3FF))
                 + 8LL * ((unsigned __int8)HIBYTE(*((_WORD *)v4 + 8)) >> 4)
                 + 17056);
  PagingFileOffset = MiGetPagingFileOffset((unsigned __int64)(v4 + 2));
  v8 = 0;
  v9 = (v5 >> 5) & 0x1F;
  v10 = PagingFileOffset;
  if ( !a2 )
  {
    MiObtainPagefileHashes(v6, PagingFileOffset, 1u, (__int64)&v15);
    a2 = &v15;
  }
  if ( (unsigned int)(*(_DWORD *)a2 - 2) <= 1 )
    return 0LL;
  if ( !*(_DWORD *)a2 && (dword_140D1D1D0 & 1) == 0 && (_DWORD)v9 != 31 )
  {
    if ( (unsigned int)v9 >> 3 == 3 )
    {
      if ( (v9 & 7) != 0 )
        return 0LL;
    }
    else if ( (unsigned int)v9 >> 3 == 1 )
    {
      return 0LL;
    }
  }
  v12 = 0;
  MiComputePageHash((__int64)&v14, (__int64)v4, v4[1]);
  if ( *(_DWORD *)a2 != 1 )
  {
    if ( *(_DWORD *)a2 )
    {
      if ( dword_140C69650 )
      {
        if ( *((_QWORD *)a2 + 1) == *((_QWORD *)&v14 + 1) )
        {
          if ( *((_DWORD *)a2 + 1) != DWORD1(v14) )
            v12 = 56;
        }
        else
        {
          v12 = 59;
        }
      }
    }
    else
    {
      v12 = MiLateWritePageHash(v6, v10, a2, &v14);
      if ( !v12 )
        return 0LL;
    }
  }
  v13 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 1 )
  {
    v12 = 60;
  }
  else if ( v13 == (_DWORD)v14 || (unsigned int)(v13 - 2) <= 1 )
  {
    if ( !v12 )
      return 0LL;
  }
  else
  {
    v12 = v12 != 0 ? 57 : 63;
  }
  ++dword_140C67F48;
  qword_140C67F58 = a1;
  if ( !dword_140C67F44 )
    MiPageHashBugCheck(v12, v10, (int)&v14);
  if ( dword_140C67F44 == 1 )
    return 1;
  return v8;
}
