/*
 * XREFs of sub_140338500 @ 0x140338500
 * Callers:
 *     sub_140227490 @ 0x140227490 (sub_140227490.c)
 *     sub_140231A68 @ 0x140231A68 (sub_140231A68.c)
 *     sub_14026F180 @ 0x14026F180 (sub_14026F180.c)
 *     sub_140276C78 @ 0x140276C78 (sub_140276C78.c)
 *     sub_140276D2C @ 0x140276D2C (sub_140276D2C.c)
 *     sub_14028C82C @ 0x14028C82C (sub_14028C82C.c)
 *     sub_1402B7320 @ 0x1402B7320 (sub_1402B7320.c)
 *     sub_1402BBEE0 @ 0x1402BBEE0 (sub_1402BBEE0.c)
 *     sub_14031EAA0 @ 0x14031EAA0 (sub_14031EAA0.c)
 *     sub_14031FD60 @ 0x14031FD60 (sub_14031FD60.c)
 *     sub_140325B30 @ 0x140325B30 (sub_140325B30.c)
 *     sub_140328690 @ 0x140328690 (sub_140328690.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_140334830 @ 0x140334830 (sub_140334830.c)
 *     sub_140334C40 @ 0x140334C40 (sub_140334C40.c)
 *     sub_140335870 @ 0x140335870 (sub_140335870.c)
 *     sub_140336AD8 @ 0x140336AD8 (sub_140336AD8.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_140369180 @ 0x140369180 (sub_140369180.c)
 *     sub_140399444 @ 0x140399444 (sub_140399444.c)
 *     sub_14059FBF4 @ 0x14059FBF4 (sub_14059FBF4.c)
 *     sub_1405A032C @ 0x1405A032C (sub_1405A032C.c)
 *     sub_1405B379C @ 0x1405B379C (sub_1405B379C.c)
 *     sub_1405C4C94 @ 0x1405C4C94 (sub_1405C4C94.c)
 * Callees:
 *     sub_140274E48 @ 0x140274E48 (sub_140274E48.c)
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall sub_140338500(ULONG_PTR a1, ULONG_PTR a2)
{
  ULONG_PTR v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rax
  char v7; // cl

  v4 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v4 )
    KeBugCheckEx(0x4Eu, 7uLL, a2, v4, 0LL);
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
  {
    v7 = *(_BYTE *)(a1 + 35);
    if ( (v7 & 0x10) != 0 && !_bittest64((const signed __int64 *)(a1 + 40), 0x35u) )
      *(_BYTE *)(a1 + 35) = v7 & 0xEF;
    sub_140274E48(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)), *(_QWORD *)(a1 + 16), 1);
    sub_1402C6EB0(a2, 2);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 16);
    v6 = -9LL;
    if ( (v5 & 0x400) != 0 )
      v6 = -2049LL;
    *(_QWORD *)(a1 + 16) = v5 & v6;
    if ( (*(_BYTE *)(a1 + 34) & 0x10) != 0 )
      sub_1402BF9C0(a1, 8u);
    else
      sub_1402BF9C0(a1, 4u);
  }
}
