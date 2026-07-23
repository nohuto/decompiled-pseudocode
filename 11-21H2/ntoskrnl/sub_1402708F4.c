/*
 * XREFs of sub_1402708F4 @ 0x1402708F4
 * Callers:
 *     sub_140227490 @ 0x140227490 (sub_140227490.c)
 *     sub_14026F180 @ 0x14026F180 (sub_14026F180.c)
 *     sub_14026FA0C @ 0x14026FA0C (sub_14026FA0C.c)
 *     sub_140276E5C @ 0x140276E5C (sub_140276E5C.c)
 *     sub_14059DB28 @ 0x14059DB28 (sub_14059DB28.c)
 *     sub_1405B7B38 @ 0x1405B7B38 (sub_1405B7B38.c)
 * Callees:
 *     sub_140273A80 @ 0x140273A80 (sub_140273A80.c)
 *     sub_14059A31C @ 0x14059A31C (sub_14059A31C.c)
 */

__int64 __fastcall sub_1402708F4(unsigned __int64 *a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // r9
  unsigned __int64 *v5; // r8
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rbx

  v4 = (unsigned int)a2;
  v5 = a1;
  v6 = 0x7FFFFFFFFFFFFFFFLL;
  *a3 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = *v5;
      v8 = *v5;
      if ( (*v5 & 1) != 0 )
        goto LABEL_8;
      if ( (*v5 & 0xC00) != 0x800 )
        return 3221226548LL;
      if ( (unsigned int)sub_140273A80(v7, a2, v5, v4) )
      {
        v8 = v7;
        if ( qword_140C50780 && (v7 & 0x10) == 0 )
          v8 = v7 & ~qword_140C50780;
LABEL_8:
        a2 = 0xFFFFFFFFFFLL;
        v9 = (v8 >> 12) & 0xFFFFFFFFFFLL;
        if ( v9 <= qword_140C50840 )
        {
          a2 = 6 * v9;
          if ( ((*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
            break;
        }
      }
    }
    v10 = 48 * v9 - 0x220000000000LL;
    a2 = v4 & 1;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      return 3221225557LL;
    if ( *v5 == v7 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), v6);
  }
  if ( (*(_DWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x100) == 0 )
  {
LABEL_13:
    *a3 = v10;
    return 0LL;
  }
  if ( (v4 & 2) != 0 )
  {
    sub_14059A31C(v10, (unsigned int)a2 | 2);
    goto LABEL_13;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), v6);
  return 3221225557LL;
}
