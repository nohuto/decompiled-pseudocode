/*
 * XREFs of sub_140635144 @ 0x140635144
 * Callers:
 *     sub_140634D24 @ 0x140634D24 (sub_140634D24.c)
 * Callees:
 *     sub_1402E1B84 @ 0x1402E1B84 (sub_1402E1B84.c)
 *     sub_1402E1BD0 @ 0x1402E1BD0 (sub_1402E1BD0.c)
 *     sub_140635240 @ 0x140635240 (sub_140635240.c)
 *     sub_1406352B0 @ 0x1406352B0 (sub_1406352B0.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140635144(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v3; // rdi
  __int64 v5; // rcx
  __int64 Pool2; // rax
  __int64 v7; // rsi
  __int64 v8; // r8
  unsigned __int8 v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD **)(a1 + 1184);
  v9 = 0;
  if ( v1 )
  {
    *(_QWORD *)(a1 + 1184) = *v1;
    v3 = v1 - 4;
    if ( !v3 )
    {
LABEL_3:
      sub_1406352B0(a1);
      return 0LL;
    }
  }
  else
  {
    v5 = 256LL;
    if ( *(_DWORD *)(a1 + 300) != 1 )
      v5 = 64LL;
    Pool2 = ExAllocatePool2(v5, 72LL, 1115124805LL);
    v3 = (_QWORD *)Pool2;
    if ( !Pool2 )
      goto LABEL_3;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_DWORD *)(Pool2 + 44) = 6;
  }
  sub_1402E1BD0(a1, &v9);
  v7 = sub_140635240(a1 + 64, a1 + 228, v3);
  if ( !v7 )
    v7 = sub_140635240(a1 + 48, a1 + 228, v8);
  sub_1402E1B84(a1, &v9);
  if ( !v7 )
  {
    v3[4] = *(_QWORD *)(a1 + 1184);
    *(_QWORD *)(a1 + 1184) = v3 + 4;
  }
  return v7;
}
