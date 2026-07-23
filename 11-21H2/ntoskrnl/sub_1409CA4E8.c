/*
 * XREFs of sub_1409CA4E8 @ 0x1409CA4E8
 * Callers:
 *     sub_140754108 @ 0x140754108 (sub_140754108.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409CA4E8(char *Src, unsigned int a2, __int64 a3, _QWORD *a4)
{
  size_t v6; // rsi
  unsigned __int16 *Pool2; // rdi
  __int64 v9; // rdx
  unsigned int i; // r8d
  unsigned int v11; // ecx
  _QWORD *v12; // rax
  _QWORD *v13; // r14
  unsigned int v14; // ebx
  char *v15; // rsi
  unsigned int j; // ebx
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx

  v6 = 24LL * a2;
  if ( v6 > 0xFFFFFFFF )
    return 3221225621LL;
  Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, (unsigned int)v6, 1950442835LL);
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
  if ( (((unsigned int)v6 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) < (unsigned int)v6 )
  {
LABEL_27:
    v14 = -1073741675;
    goto LABEL_28;
  }
  v9 = ((_DWORD)v6 + 1) & 0xFFFFFFFE;
  for ( i = 0; i < a2; ++i )
  {
    v11 = v9 + Pool2[12 * i + 4];
    if ( v11 < (unsigned int)v9 )
      goto LABEL_27;
    v9 = v11;
  }
  v12 = (_QWORD *)ExAllocatePool2(256LL, v9, 1950442835LL);
  v13 = v12;
  if ( !v12 )
  {
    v14 = -1073741670;
LABEL_28:
    ExFreePoolWithTag(Pool2, 0);
    return v14;
  }
  memmove(v12, Pool2, v6);
  v15 = (char *)(((unsigned __int64)&v13[v6 / 8] + 1) & 0xFFFFFFFFFFFFFFFEuLL);
  for ( j = 0; j < a2; ++j )
  {
    v17 = Pool2[12 * j + 4];
    if ( (_WORD)v17 )
    {
      v18 = *(_QWORD *)&Pool2[12 * j + 8];
      if ( (v18 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v18 + v17 > 0x7FFFFFFF0000LL || v18 + v17 < v18 )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        LOWORD(v17) = Pool2[12 * j + 4];
      }
    }
    memmove(v15, *(const void **)&Pool2[12 * j + 8], (unsigned __int16)v17);
    v13[3 * j + 2] = v15;
    v15 += Pool2[12 * j + 4];
  }
  ExFreePoolWithTag(Pool2, 0);
  *a4 = v13;
  return 0LL;
}
