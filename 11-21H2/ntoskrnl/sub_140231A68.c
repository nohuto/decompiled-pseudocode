/*
 * XREFs of sub_140231A68 @ 0x140231A68
 * Callers:
 *     sub_140276C78 @ 0x140276C78 (sub_140276C78.c)
 *     sub_140334830 @ 0x140334830 (sub_140334830.c)
 *     sub_140334C40 @ 0x140334C40 (sub_140334C40.c)
 *     sub_140335870 @ 0x140335870 (sub_140335870.c)
 * Callees:
 *     sub_140231B9C @ 0x140231B9C (sub_140231B9C.c)
 *     sub_140276D2C @ 0x140276D2C (sub_140276D2C.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     sub_140336AD8 @ 0x140336AD8 (sub_140336AD8.c)
 *     sub_1403377E0 @ 0x1403377E0 (sub_1403377E0.c)
 *     sub_140337F0C @ 0x140337F0C (sub_140337F0C.c)
 *     sub_140338500 @ 0x140338500 (sub_140338500.c)
 *     sub_140339240 @ 0x140339240 (sub_140339240.c)
 *     sub_1405C4C94 @ 0x1405C4C94 (sub_1405C4C94.c)
 */

__int64 __fastcall sub_140231A68(__int64 *a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  char v7; // cl
  __int64 v8; // rbp
  __int64 result; // rax
  __int64 v10; // rcx

  v2 = *a1;
  v3 = a2;
  v5 = *(_QWORD *)(a2 + 24);
  v6 = *(_QWORD *)(*a1 + 248);
  if ( (v5 & 0x4000000000000000LL) != 0 )
    return sub_140336AD8(v3);
  v7 = *(_BYTE *)(v3 + 35);
  if ( (v7 & 0x10) != 0 )
  {
    if ( v3 == v6 && *(int *)(v2 + 80) >= 0 )
      *(_DWORD *)(v2 + 80) = -1073741761;
    goto LABEL_19;
  }
  if ( *(int *)(v2 + 80) < 0 )
  {
LABEL_18:
    *(_BYTE *)(v3 + 35) = v7 | 0x10;
LABEL_19:
    if ( ((*(_DWORD *)(v2 + 192) & 0x10) == 0 || *((_BYTE *)a1 + 41))
      && (*(_DWORD *)(v3 + 16) & 0x400LL) == 0
      && !(unsigned int)sub_140337F0C(v3, v6) )
    {
      sub_14032A4B0(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v3 + 40) >> 43) & 0x3FFLL)), 1LL, 4LL);
    }
    sub_140231B9C(v3, v6);
    return sub_140336AD8(v3);
  }
  if ( a1[2] >= (unsigned __int64)a1[3] )
  {
    if ( v3 == v6 )
    {
      *((_DWORD *)a1 + 2) = -1073740748;
      v7 = *(_BYTE *)(v3 + 35);
    }
    goto LABEL_18;
  }
  if ( v3 != v6 )
    goto LABEL_12;
  v8 = *(_QWORD *)(v2 + 104);
  if ( v8 )
  {
    sub_1405C4C94(*(_QWORD *)(v2 + 232), v3, *(_QWORD *)(v2 + 104));
    *(_QWORD *)(v2 + 104) = 0LL;
    v6 = v8;
    v3 = v8;
    *(_QWORD *)(v2 + 248) = v8;
  }
  *((_BYTE *)a1 + 40) = 1;
  if ( v3 == v6 && *((int *)a1 + 2) >= 0 )
    return sub_140339240(a1, v3);
LABEL_12:
  result = sub_1403377E0(v3);
  if ( (_DWORD)result )
  {
    v10 = a1[7];
    if ( v10 )
      return sub_140276D2C(v10, v3);
    else
      return sub_140338500(v3, 0xAAAAAAAAAAAAAAABuLL * ((v3 + 0x220000000000LL) >> 4));
  }
  return result;
}
