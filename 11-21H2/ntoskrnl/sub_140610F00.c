/*
 * XREFs of sub_140610F00 @ 0x140610F00
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

__int64 __fastcall sub_140610F00(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  _QWORD *i; // rbx
  _QWORD **v11; // rdi
  _QWORD *j; // rbx
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v13 = 0LL;
  v14 = 0LL;
  result = (__int64)sub_140604844(210);
  v9 = result;
  if ( !result )
    goto LABEL_18;
  if ( dword_140C1B2A0
    && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (v6 = HIDWORD(qword_140D01450), (qword_140D01450 & 0x200000000LL) != 0))
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
    result = sub_140628C98(v6, v5, v7, v8);
    goto LABEL_12;
  }
  result = retaddr;
LABEL_12:
  *(_QWORD *)&v13 = result;
LABEL_13:
  v14 = a1;
  *((_QWORD *)&v13 + 1) = a2;
  for ( i = *(_QWORD **)(v9 + 32); i != (_QWORD *)(v9 + 32); i = (_QWORD *)*i )
  {
    result = (__int64)(i - 2);
    if ( i != (_QWORD *)16 )
      result = sub_14042A5E0(&v13, v5);
  }
LABEL_18:
  *(_QWORD *)(a1 + 1304) = a2;
  if ( v9 )
  {
    v11 = (_QWORD **)(v9 + 48);
    for ( j = *v11; j != v11; j = (_QWORD *)*j )
    {
      result = (__int64)(j - 2);
      if ( j != (_QWORD *)16 )
        result = sub_14042A5E0(&v13, v5);
    }
  }
  return result;
}
