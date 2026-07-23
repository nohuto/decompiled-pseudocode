/*
 * XREFs of sub_1407A73B0 @ 0x1407A73B0
 * Callers:
 *     sub_140663D08 @ 0x140663D08 (sub_140663D08.c)
 *     sub_140667114 @ 0x140667114 (sub_140667114.c)
 *     sub_14066AD78 @ 0x14066AD78 (sub_14066AD78.c)
 *     sub_14066BC7C @ 0x14066BC7C (sub_14066BC7C.c)
 *     sub_14066C6AC @ 0x14066C6AC (sub_14066C6AC.c)
 *     sub_1406CBB84 @ 0x1406CBB84 (sub_1406CBB84.c)
 *     sub_1407A49B4 @ 0x1407A49B4 (sub_1407A49B4.c)
 *     sub_1407A66CC @ 0x1407A66CC (sub_1407A66CC.c)
 *     sub_1407A74A4 @ 0x1407A74A4 (sub_1407A74A4.c)
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407A73B0(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rdx
  __int64 result; // rax
  char v6; // dl
  __int64 v7; // rcx
  char v8; // al

  v3 = a2 + 48;
  if ( a3 || *(_QWORD *)(a1 + 48) < v3 )
  {
    if ( *(_QWORD *)(a1 + 48) )
      result = sub_14042A5E0(1LL, v3);
    else
      result = ExAllocatePool2(256LL, v3, *(unsigned int *)(a1 + 4));
    v6 = 0;
  }
  else
  {
    result = (__int64)sub_140202234((__int64)(&stru_140CF5A80 + 8 * (unsigned __int64)*(unsigned int *)(a1 + 8)));
    v6 = 2;
  }
  v7 = result;
  if ( result )
  {
    *(_OWORD *)result = 0LL;
    *(_OWORD *)(result + 16) = 0LL;
    *(_OWORD *)(result + 32) = 0LL;
    *(_BYTE *)(result + 17) = *(_BYTE *)a1;
    v8 = *(_BYTE *)(result + 16) & 0xFD;
    *(_QWORD *)(v7 + 8) = v7;
    *(_QWORD *)v7 = v7;
    *(_BYTE *)(v7 + 16) = v6 | v8;
    result = v7 + 48;
    *(_QWORD *)(v7 + 24) = 1LL;
  }
  return result;
}
