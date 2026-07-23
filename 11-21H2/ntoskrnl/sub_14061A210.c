/*
 * XREFs of sub_14061A210 @ 0x14061A210
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

unsigned __int64 __fastcall sub_14061A210(unsigned __int64 a1, __int64 a2, int a3)
{
  unsigned __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rdi
  _QWORD *i; // rbx
  _QWORD **v13; // rdi
  _QWORD *j; // rbx
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  __int128 v16; // [rsp+30h] [rbp-28h]
  unsigned __int64 retaddr; // [rsp+58h] [rbp+0h]

  v15 = 0LL;
  v16 = 0LL;
  result = (unsigned __int64)sub_140604844(384);
  v11 = result;
  if ( !result )
    goto LABEL_18;
  if ( dword_140C1B2A0
    && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (v8 = HIDWORD(qword_140D01450), (qword_140D01450 & 0x200000000LL) != 0))
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    result = *(unsigned int *)(result + 12);
    if ( (result & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  result = *(unsigned int *)(result + 12);
  if ( (result & 0x18) == 0 )
  {
    if ( (result & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    result = sub_140628C98(v8, v7, v9, v10);
    goto LABEL_12;
  }
  result = retaddr;
LABEL_12:
  *(_QWORD *)&v15 = result;
LABEL_13:
  *((_QWORD *)&v16 + 1) = a1;
  *(_QWORD *)&v16 = a2;
  DWORD2(v15) = a3;
  for ( i = *(_QWORD **)(v11 + 32); i != (_QWORD *)(v11 + 32); i = (_QWORD *)*i )
  {
    result = (unsigned __int64)(i - 2);
    if ( i != (_QWORD *)16 )
      result = sub_14042A5E0(&v15, v7);
  }
LABEL_18:
  if ( a2 )
  {
    if ( ((a3 - 1) & (unsigned int)a1) != 0 )
      ExRaiseDatatypeMisalignment();
    result = a1 + a2;
    if ( a1 + a2 > 0x7FFFFFFF0000LL || result < a1 )
    {
      result = 0LL;
      MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  if ( v11 )
  {
    v13 = (_QWORD **)(v11 + 48);
    for ( j = *v13; j != v13; j = (_QWORD *)*j )
    {
      result = (unsigned __int64)(j - 2);
      if ( j != (_QWORD *)16 )
        result = sub_14042A5E0(&v15, v7);
    }
  }
  return result;
}
