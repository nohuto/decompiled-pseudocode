/*
 * XREFs of MiExtendPagingFiles @ 0x140A32AAC
 * Callers:
 *     MiProcessDereferenceList @ 0x140625124 (MiProcessDereferenceList.c)
 * Callees:
 *     MiIncreaseCommitLimits @ 0x1403944E4 (MiIncreaseCommitLimits.c)
 *     MiUpdatePagingFileMinimum @ 0x14063BBF8 (MiUpdatePagingFileMinimum.c)
 *     MiAttemptPageFileExtension @ 0x140A326E4 (MiAttemptPageFileExtension.c)
 */

void __fastcall MiExtendPagingFiles(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int64 v3; // rdi
  __int64 v4; // rax
  unsigned int v5; // r15d
  __int64 v6; // r14
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  BOOL v9; // r14d
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 *v16; // r13
  unsigned int i; // r12d

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(unsigned __int8 *)(a1 + 76);
  v5 = *(_DWORD *)(v1 + 17048);
  if ( !v5 )
    return;
  if ( (unsigned int)v4 < v5 )
  {
    _mm_lfence();
    v6 = *(_QWORD *)(v1 + 8 * v4 + 17056);
    if ( *(_QWORD *)(v6 + 8) - *(_QWORD *)v6 < v3 )
      return;
    v7 = MiAttemptPageFileExtension(a1, *(_QWORD *)(v1 + 8 * v4 + 17056), v3);
    v8 = v7;
    if ( v7 && (*(_BYTE *)(a1 + 79) & 2) != 0 )
      MiUpdatePagingFileMinimum(v6, v7);
    v9 = (*(_BYTE *)(v6 + 204) & 0x50) == 0;
    goto LABEL_23;
  }
  v9 = 1;
  if ( (*(_BYTE *)(a1 + 79) & 1) == 0 )
  {
    v10 = *(_QWORD *)(v1 + 17576);
    v11 = *(_QWORD *)(v1 + 17816);
    v12 = v3 + v10 + *(_QWORD *)(v1 + 16432);
    if ( v12 < v10 )
      return;
    if ( v12 <= v11 )
    {
      *(_QWORD *)(a1 + 40) = 1LL;
      return;
    }
    v3 = v12 - v11;
  }
  v13 = 0LL;
  v14 = v1 + 17056;
  v15 = *(unsigned int *)(v1 + 17048);
  do
  {
    if ( (*(_BYTE *)(*(_QWORD *)v14 + 204LL) & 0x50) == 0 )
      v13 += *(_QWORD *)(*(_QWORD *)v14 + 8LL) - **(_QWORD **)v14;
    v14 += 8LL;
    --v15;
  }
  while ( v15 );
  v16 = (__int64 *)(v1 + 17056);
  if ( v13 >= v3 )
  {
    v8 = 0LL;
    for ( i = 0; i < v5; ++i )
    {
      if ( (*(_BYTE *)(*v16 + 204) & 0x50) == 0 )
      {
        v8 += MiAttemptPageFileExtension(a1, *v16, v3 - v8);
        if ( v8 >= v3 )
          break;
      }
      ++v16;
    }
LABEL_23:
    if ( v8 )
    {
      *(_QWORD *)(a1 + 40) = v8;
      if ( v9 )
        MiIncreaseCommitLimits(v1, v8, 0LL, 0, 0LL);
    }
  }
}
