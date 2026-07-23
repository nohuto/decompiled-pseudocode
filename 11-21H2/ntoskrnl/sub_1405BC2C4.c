/*
 * XREFs of sub_1405BC2C4 @ 0x1405BC2C4
 * Callers:
 *     sub_14045D5EA @ 0x14045D5EA (sub_14045D5EA.c)
 *     sub_1405BC608 @ 0x1405BC608 (sub_1405BC608.c)
 * Callees:
 *     sub_1402E76C0 @ 0x1402E76C0 (sub_1402E76C0.c)
 *     sub_14045D34E @ 0x14045D34E (sub_14045D34E.c)
 *     sub_14045D4C6 @ 0x14045D4C6 (sub_14045D4C6.c)
 *     sub_1405BC69C @ 0x1405BC69C (sub_1405BC69C.c)
 *     sub_1405BC8C0 @ 0x1405BC8C0 (sub_1405BC8C0.c)
 */

__int64 __fastcall sub_1405BC2C4(__int64 a1, __int64 *a2, _QWORD *a3)
{
  unsigned __int64 *v5; // r14
  unsigned __int64 v6; // rbx
  __int64 v7; // r12
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rbx
  unsigned int v11; // r15d
  unsigned int v13; // ebx
  int v14; // edx
  __int64 v15; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+38h] [rbp-40h]
  __int64 v17; // [rsp+40h] [rbp-38h] BYREF
  int v18; // [rsp+48h] [rbp-30h]

  v15 = 0LL;
  v17 = 0LL;
  LODWORD(v16) = 0;
  v18 = 0;
  v5 = (unsigned __int64 *)(48 * a1 - 0x220000000000LL);
  v6 = v5[2];
  v7 = *(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * ((v5[5] >> 43) & 0x3FF))
                 + 8LL * ((unsigned __int8)HIBYTE(*((_WORD *)v5 + 8)) >> 4)
                 + 16736);
  v8 = sub_1402E76C0((__int64)(v5 + 2));
  v9 = 0;
  v10 = (v6 >> 5) & 0x1F;
  v11 = v8;
  if ( !a2 )
  {
    sub_14045D4C6(v7, v8, 1u, (__int64)&v17);
    a2 = &v17;
  }
  if ( (unsigned int)(*(_DWORD *)a2 - 2) <= 1 )
    return 0LL;
  if ( !*(_DWORD *)a2 && (dword_140D051C0 & 1) == 0 && (_DWORD)v10 != 31 )
  {
    if ( (unsigned int)v10 >> 3 == 3 )
    {
      if ( (v10 & 7) != 0 )
        return 0LL;
    }
    else if ( (unsigned int)v10 >> 3 == 1 )
    {
      return 0LL;
    }
  }
  v13 = 0;
  sub_14045D34E((__int64)&v15, (__int64)v5, v5[1], a3);
  v14 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 != 1 )
  {
    if ( *(_DWORD *)a2 )
    {
      if ( dword_140C531D0 && a2[1] != v16 )
        v13 = 59;
      goto LABEL_20;
    }
    v13 = sub_1405BC69C(v7, v11, a2, &v15);
    if ( !v13 )
      return 0LL;
    v14 = *(_DWORD *)a2;
  }
  if ( v14 == 1 )
  {
    v13 = 60;
    goto LABEL_24;
  }
LABEL_20:
  if ( v14 == (_DWORD)v15 || (unsigned int)(v14 - 2) <= 1 )
  {
    if ( !v13 )
      return 0LL;
  }
  else
  {
    v13 = v13 != 0 ? 57 : 63;
  }
LABEL_24:
  ++dword_140C52AC4;
  qword_140C52AD8 = a1;
  if ( !dword_140C52AC0 )
    sub_1405BC8C0(v13, v11, (int)&v15);
  if ( dword_140C52AC0 == 1 )
    return 1;
  return v9;
}
