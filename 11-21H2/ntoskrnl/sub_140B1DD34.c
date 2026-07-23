/*
 * XREFs of sub_140B1DD34 @ 0x140B1DD34
 * Callers:
 *     sub_140B1D878 @ 0x140B1D878 (sub_140B1D878.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402631C0 (KeQueryMaximumProcessorCountEx.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     MmFreeMappingAddress @ 0x1407FA560 (MmFreeMappingAddress.c)
 *     sub_140B1DE58 @ 0x140B1DE58 (sub_140B1DE58.c)
 *     sub_140B4BE3C @ 0x140B4BE3C (sub_140B4BE3C.c)
 */

__int64 sub_140B1DD34()
{
  __int64 MaximumProcessorCount; // rdi
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // r8
  __int64 v7; // rbp
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // r14
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // ebx
  __int64 v24; // rcx

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v1 = MaximumProcessorCount;
  qword_140C5A860 = sub_1403B1F04(v2, 8 * MaximumProcessorCount);
  if ( !qword_140C5A860 )
    return 3221225626LL;
  v4 = sub_1403B1F04(v3, 4144 * MaximumProcessorCount);
  v7 = v4;
  if ( !v4 )
  {
    v17 = qword_140C5A860;
LABEL_14:
    sub_1403B1B5C(v5, v17);
    return 3221225626LL;
  }
  if ( (_DWORD)MaximumProcessorCount )
  {
    v6 = (_QWORD *)qword_140C5A860;
    v5 = v4 + 32;
    do
    {
      *(_QWORD *)v5 = 0LL;
      v8 = (_QWORD *)(v5 - 32);
      *(_DWORD *)(v5 + 12) = 0;
      *v8 = 0LL;
      *(_DWORD *)(v5 - 24) = 131128;
      *(_DWORD *)(v5 + 8) = 4096;
      v5 += 4144LL;
      *v6++ = v8;
      --v1;
    }
    while ( v1 );
  }
  qword_140CFCED0 = 0LL;
  v9 = 4LL;
  if ( (unsigned int)MaximumProcessorCount <= 4 )
  {
    qword_140C5A868 = sub_1403B1F04(v5, 8 * MaximumProcessorCount);
    if ( qword_140C5A868 )
    {
      v11 = 0;
      if ( !(_DWORD)MaximumProcessorCount )
      {
LABEL_12:
        byte_140C5A858 = 1;
        return 0LL;
      }
      v12 = 0LL;
      while ( 1 )
      {
        v13 = sub_140B1DE58();
        v15 = qword_140C5A868;
        *(_QWORD *)(v12 + qword_140C5A868) = v13;
        if ( !v13 )
          break;
        ++v11;
        v12 += 8LL;
        if ( v11 >= (unsigned int)MaximumProcessorCount )
          goto LABEL_12;
      }
      if ( v11 )
      {
        v18 = 0LL;
        v19 = v11;
        do
        {
          v20 = *(_QWORD *)(v18 + v15);
          MmFreeMappingAddress(*(PVOID *)(v20 + 16), 0x446C6148u);
          sub_1403B1B5C(v21, v20);
          v15 = qword_140C5A868;
          v18 += 8LL;
          --v19;
        }
        while ( v19 );
      }
      sub_1403B1B5C(v14, v15);
      v9 = (unsigned int)MaximumProcessorCount;
      goto LABEL_21;
    }
    sub_1403B1B5C(v10, qword_140C5A860);
    v17 = v7;
    goto LABEL_14;
  }
LABEL_21:
  v23 = sub_140B4BE3C((unsigned int)MaximumProcessorCount, v9, v6);
  if ( v23 < 0 )
  {
    sub_1403B1B5C(v22, qword_140C5A860);
    sub_1403B1B5C(v24, v7);
  }
  return (unsigned int)v23;
}
