/*
 * XREFs of sub_1409221F4 @ 0x1409221F4
 * Callers:
 *     sub_14068C820 @ 0x14068C820 (sub_14068C820.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406DEA6C @ 0x1406DEA6C (sub_1406DEA6C.c)
 *     sub_140AB44C0 @ 0x140AB44C0 (sub_140AB44C0.c)
 */

__int64 __fastcall sub_1409221F4(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rdi
  unsigned int v5; // r10d
  __int64 v7; // r11
  __int64 v8; // rcx
  __int64 result; // rax
  unsigned int v10; // esi
  unsigned int v11; // r8d
  __int64 v12; // rax
  int v13; // r8d
  unsigned int v14; // r10d
  unsigned int v15; // ebx

  v4 = a2;
  v5 = a4;
  v7 = a1;
  if ( !a4 )
  {
    v8 = *(_QWORD *)(632LL * a2 + a1 + 296);
    if ( v8 == *(_QWORD *)(632LL * a2 + v7 + 288) )
      return sub_14042A5E0(v8, 12288LL);
  }
  v10 = (a2 << 31) + a3;
  v11 = (a2 << 31) + a4;
  while ( v11 < v10 )
  {
    v12 = sub_140AB44C0(v7, v11);
    v11 = v13 + 4096;
    *(_OWORD *)v12 = 0LL;
    *(_QWORD *)(v12 + 16) = 0LL;
  }
  result = 511LL;
  v14 = ((v5 >> 12) + 511) >> 9;
  v15 = ((a3 >> 12) + 511) >> 9;
  if ( v14 < v15 )
    return (__int64)sub_1406DEA6C(v7, *(_QWORD *)(632 * v4 + v7 + 288), v14, v15 - 1);
  return result;
}
