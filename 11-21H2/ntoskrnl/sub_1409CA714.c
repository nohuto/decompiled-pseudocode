/*
 * XREFs of sub_1409CA714 @ 0x1409CA714
 * Callers:
 *     sub_140754108 @ 0x140754108 (sub_140754108.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409CA714(char *Src, unsigned int a2, __int64 a3, _QWORD *a4)
{
  size_t v6; // rbx
  unsigned int v7; // r14d
  unsigned int *Pool2; // rdi
  unsigned int i; // ecx
  unsigned int v11; // ebx
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  char *v14; // r15
  unsigned int j; // ebx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx

  v6 = 16LL * a2;
  if ( v6 > 0xFFFFFFFF )
    return 3221225621LL;
  v7 = 16 * a2;
  Pool2 = (unsigned int *)ExAllocatePool2(256LL, (unsigned int)v6, 1950442835LL);
  if ( !Pool2 )
    return 3221225626LL;
  if ( (_DWORD)v6 )
  {
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&Src[(unsigned int)v6] > 0x7FFFFFFF0000LL || &Src[(unsigned int)v6] < Src )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  memmove(Pool2, Src, (unsigned int)v6);
  for ( i = 0; i < a2; ++i )
  {
    if ( v7 + Pool2[4 * i + 2] < v7 )
    {
      v11 = -1073741675;
LABEL_17:
      ExFreePoolWithTag(Pool2, 0);
      return v11;
    }
    v7 += Pool2[4 * i + 2];
  }
  v12 = (_QWORD *)ExAllocatePool2(256LL, v7, 1950442835LL);
  v13 = v12;
  if ( !v12 )
  {
    v11 = -1073741670;
    goto LABEL_17;
  }
  memmove(v12, Pool2, v6);
  v14 = (char *)&v13[v6 / 8];
  for ( j = 0; j < a2; ++j )
  {
    v16 = Pool2[4 * j + 2];
    if ( (_DWORD)v16 )
    {
      v17 = *(_QWORD *)&Pool2[4 * j];
      if ( v17 + v16 > 0x7FFFFFFF0000LL || v17 + v16 < v17 )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        LODWORD(v16) = Pool2[4 * j + 2];
      }
    }
    memmove(v14, *(const void **)&Pool2[4 * j], (unsigned int)v16);
    v13[2 * j] = v14;
    v14 += Pool2[4 * j + 2];
  }
  ExFreePoolWithTag(Pool2, 0);
  *a4 = v13;
  return 0LL;
}
