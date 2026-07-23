/*
 * XREFs of sub_140B2CE90 @ 0x140B2CE90
 * Callers:
 *     sub_140AFE184 @ 0x140AFE184 (sub_140AFE184.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140985FBC @ 0x140985FBC (sub_140985FBC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

int sub_140B2CE90()
{
  int v0; // ebx
  __int64 Pool2; // rax
  __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned __int16 v4; // bx
  unsigned int v5; // edi
  unsigned int v6; // edx
  int *v7; // r9
  unsigned int i; // r8d
  int v9; // r10d
  unsigned int v10; // r11d
  int v11; // eax
  int v12; // ecx
  int v13; // ebx

  qword_140C252D8 = 0LL;
  stru_140C25300.Parameter = 0LL;
  stru_140C25300.List.Flink = 0LL;
  qword_140C25320 = 0LL;
  v0 = 0;
  stru_140C25300.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1409863A0;
  memset(&unk_140C25220, 0, 0x40uLL);
  LODWORD(Pool2) = (unsigned int)memset(&xmmword_140C25280, 0, 0x40uLL);
  v2 = -1LL;
  dword_140C252E8 = 0;
  dword_140C252D0 = 0;
  if ( word_140C250E0[0] )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( word_140C250E0[v3] );
    v4 = 2 * v3;
    Pool2 = ExAllocatePool2(64LL, v4 + 2LL, 0x7452624Fu);
    stru_140C25200.Buffer = (wchar_t *)Pool2;
    if ( !Pool2 )
      return Pool2;
    stru_140C25200.Length = v4;
    stru_140C25200.MaximumLength = v4 + 2;
    LODWORD(Pool2) = (unsigned int)memmove((void *)Pool2, word_140C250E0, (unsigned __int16)(v4 + 2));
    v0 = 32;
  }
  if ( word_140C24FE0[0] )
  {
    do
      ++v2;
    while ( word_140C24FE0[v2] );
    v5 = v2 + 1;
    LODWORD(Pool2) = -858993459 * v5;
    v6 = v5 / 5;
    if ( v5 / 5 <= 0x10 )
    {
      if ( !v6 )
      {
LABEL_17:
        v0 |= 0x10u;
        goto LABEL_3;
      }
    }
    else
    {
      v6 = 16;
    }
    v7 = (int *)&unk_140C25220;
    for ( i = 0; i < v6; ++i )
    {
      v9 = *v7;
      v10 = 0;
      do
      {
        v11 = 5 * i - v10++;
        Pool2 = (unsigned int)(v11 + 3);
        v12 = (v9 << 8) | (unsigned __int16)word_140C24FE0[Pool2];
        v9 = v12;
      }
      while ( v10 < 4 );
      *v7++ = v12;
    }
    goto LABEL_17;
  }
LABEL_3:
  if ( v0 )
  {
    if ( dword_140C251E0 )
      v0 |= 0x40u;
    LODWORD(Pool2) = sub_140985FBC();
    if ( (int)Pool2 < 0 )
    {
      if ( (v0 & 0x10) != 0 )
        LODWORD(Pool2) = (unsigned int)memset(&unk_140C25220, 0, 0x40uLL);
      if ( (v0 & 0x20) != 0 )
      {
        ExFreePoolWithTag(stru_140C25200.Buffer, 0x7452624Fu);
        LODWORD(Pool2) = RtlInitUnicodeStringEx(&stru_140C25200, 0LL);
      }
    }
    else
    {
      v13 = v0 | 1;
      dword_140C25210 = v13;
      dword_140D05010 = v13;
      if ( (v13 & 0x10) != 0 )
        qword_140C25260 = (__int64)&unk_140C25220;
      if ( (v13 & 0x20) != 0 )
        qword_140C25218 = &stru_140C25200;
    }
  }
  return Pool2;
}
