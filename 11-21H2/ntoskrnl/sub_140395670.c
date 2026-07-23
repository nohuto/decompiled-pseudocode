/*
 * XREFs of sub_140395670 @ 0x140395670
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall sub_140395670(__int64 a1, __int64 a2)
{
  volatile LONG *v3; // rcx
  __int64 v5; // r15
  __int64 *v6; // rbx
  __int64 v7; // r14
  unsigned int v8; // edi
  __int64 i; // r12
  volatile LONG *v10; // rcx
  volatile LONG *v11; // rbx
  __int64 v12; // rdi
  volatile LONG *v13; // rcx
  volatile LONG *v14; // rbx
  volatile LONG *v15; // rbx
  __int64 v16; // rdi
  __int16 v17; // cx
  unsigned int j; // ebx
  __int64 v19; // r14
  __int64 v20; // rdi
  volatile LONG *v21; // rcx
  unsigned int v22; // ebx
  volatile LONG *v23; // rdi
  volatile LONG *v24; // rcx

  v3 = (volatile LONG *)(a1 + 6560);
  if ( a2 )
    ExAcquireSpinLockExclusiveAtDpcLevel(v3);
  else
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  v5 = 2LL;
  v6 = (__int64 *)(a1 + 2432);
  v7 = 8LL;
  do
  {
    v8 = 0;
    for ( i = *v6; v8 < dword_140C5073C; ++v8 )
    {
      v10 = (volatile LONG *)(i + 88LL * v8 + 32);
      if ( a2 )
        ExAcquireSpinLockExclusiveAtDpcLevel(v10);
      else
        ExReleaseSpinLockExclusiveFromDpcLevel(v10);
    }
    ++v6;
    --v5;
  }
  while ( v5 );
  v11 = (volatile LONG *)(a1 + 2912);
  v12 = 8LL;
  do
  {
    if ( a2 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v11);
    else
      ExReleaseSpinLockExclusiveFromDpcLevel(v11);
    v11 += 22;
    --v12;
  }
  while ( v12 );
  v13 = (volatile LONG *)(a1 + 3616);
  if ( a2 )
    ExAcquireSpinLockExclusiveAtDpcLevel(v13);
  else
    ExReleaseSpinLockExclusiveFromDpcLevel(v13);
  v14 = (volatile LONG *)(a1 + 3744);
  do
  {
    if ( a2 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v14);
    else
      ExReleaseSpinLockExclusiveFromDpcLevel(v14);
    v14 += 22;
    --v7;
  }
  while ( v7 );
  v15 = (volatile LONG *)(a1 + 5152);
  v16 = 16LL;
  do
  {
    if ( a2 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v15);
    else
      ExReleaseSpinLockExclusiveFromDpcLevel(v15);
    v15 += 22;
    --v16;
  }
  while ( v16 );
  v17 = word_140D05000;
  for ( j = 0; j < (unsigned __int16)word_140D05000; ++j )
  {
    v19 = 7LL;
    v20 = 24512LL * j;
    do
    {
      v21 = (volatile LONG *)(v20 + *(_QWORD *)(a1 + 16) + 23184LL);
      if ( a2 )
        ExAcquireSpinLockExclusiveAtDpcLevel(v21);
      else
        ExReleaseSpinLockExclusiveFromDpcLevel(v21);
      v20 += 168LL;
      --v19;
    }
    while ( v19 );
    v17 = word_140D05000;
  }
  v22 = 0;
  if ( v17 )
  {
    v23 = (volatile LONG *)(*(_QWORD *)(a1 + 16) + 22848LL);
    do
    {
      if ( a2 )
        ExAcquireSpinLockExclusiveAtDpcLevel(v23);
      else
        ExReleaseSpinLockExclusiveFromDpcLevel(v23);
      v23 += 6128;
      ++v22;
    }
    while ( v22 < (unsigned __int16)word_140D05000 );
  }
  v24 = (volatile LONG *)(a1 + 17440);
  if ( a2 )
    ExAcquireSpinLockExclusiveAtDpcLevel(v24);
  else
    ExReleaseSpinLockExclusiveFromDpcLevel(v24);
}
