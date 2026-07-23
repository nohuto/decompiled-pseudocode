/*
 * XREFs of sub_1403567F8 @ 0x1403567F8
 * Callers:
 *     sub_140355DFC @ 0x140355DFC (sub_140355DFC.c)
 *     sub_140356454 @ 0x140356454 (sub_140356454.c)
 *     sub_140397B04 @ 0x140397B04 (sub_140397B04.c)
 *     sub_1403B17EC @ 0x1403B17EC (sub_1403B17EC.c)
 *     sub_14045E4C2 @ 0x14045E4C2 (sub_14045E4C2.c)
 *     sub_1405D4D6C @ 0x1405D4D6C (sub_1405D4D6C.c)
 *     sub_1405D4E64 @ 0x1405D4E64 (sub_1405D4E64.c)
 *     sub_1405D5360 @ 0x1405D5360 (sub_1405D5360.c)
 * Callees:
 *     sub_1403569B8 @ 0x1403569B8 (sub_1403569B8.c)
 */

__int64 __fastcall sub_1403567F8(__int64 a1, __int64 a2, int a3)
{
  int v3; // ebx
  __int64 v4; // rbp
  _DWORD *v6; // r8
  unsigned int v7; // ebx
  unsigned int v8; // edi
  int v9; // r14d
  __int64 v10; // r15
  _DWORD *v11; // r8
  int v12; // ebx
  _QWORD *v13; // rdi
  __int64 result; // rax

  if ( !a3 )
    return result;
  v3 = a3;
  v4 = a2;
  if ( !a2 && a3 == 2 )
    v3 = 1;
  v6 = *(_DWORD **)(a1 + 72);
  if ( (*v6 & 1) != 0 )
    sub_1403569B8(a1, a2, (_DWORD)v6, 0, a1 + 120);
  if ( v3 == 2 )
  {
    v7 = *(_DWORD *)(v4 + 8);
    v8 = v7;
    do
    {
LABEL_9:
      v9 = 1;
      v10 = 64LL;
      v4 = 208LL * v8 + a1 + 192;
      do
      {
        v11 = *(_DWORD **)(v10 + v4);
        if ( (*v11 & 1) != 0 )
          sub_1403569B8(a1, v4, (_DWORD)v11, v9, v4 + 104);
        ++v9;
        v10 += 8LL;
      }
      while ( v9 <= 3 );
      ++v8;
    }
    while ( v8 <= v7 );
    goto LABEL_14;
  }
  v8 = *(_DWORD *)(a1 + 180);
  if ( v3 == 3 )
  {
    v7 = v8 - 1;
    v8 = 0;
    goto LABEL_9;
  }
  v7 = 0;
  if ( !v8 )
    goto LABEL_9;
LABEL_14:
  v12 = 4;
  v13 = (_QWORD *)(a1 + 104);
  do
  {
    result = *(unsigned int *)*v13;
    if ( (result & 1) != 0 )
      result = sub_1403569B8(a1, v4, *v13, v12, a1 + 120);
    ++v12;
    ++v13;
  }
  while ( v12 <= 5 );
  return result;
}
