/*
 * XREFs of sub_14071B5A0 @ 0x14071B5A0
 * Callers:
 *     sub_14053FB50 @ 0x14053FB50 (sub_14053FB50.c)
 *     sub_14067BE48 @ 0x14067BE48 (sub_14067BE48.c)
 *     sub_14067E1BC @ 0x14067E1BC (sub_14067E1BC.c)
 *     sub_1406E8680 @ 0x1406E8680 (sub_1406E8680.c)
 *     sub_140719278 @ 0x140719278 (sub_140719278.c)
 *     sub_14071B4A0 @ 0x14071B4A0 (sub_14071B4A0.c)
 *     sub_14090C34C @ 0x14090C34C (sub_14090C34C.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_1409237B4 @ 0x1409237B4 (sub_1409237B4.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int16 __fastcall sub_14071B5A0(__int64 a1, char a2)
{
  int v3; // eax
  __int16 result; // ax
  ULONG_PTR v6; // rdx
  ULONG_PTR v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0xFFFFFFFFLL;
  v3 = *(_DWORD *)(a1 + 8);
  if ( (v3 & 7) != 0 )
  {
    if ( (v3 & 4) != 0 )
      ExFreePoolWithTag(*(PVOID *)(a1 + 112), 0x6E494D43u);
    LOWORD(v3) = *(_WORD *)(a1 + 8) & 0xFFF8;
  }
  result = v3 | 0x40;
  *(_WORD *)(a1 + 8) = result;
  if ( a2 )
  {
    v6 = *(unsigned int *)(a1 + 40);
    if ( (_DWORD)v6 != -1 )
    {
      v7 = *(_QWORD *)(a1 + 32);
      if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
        v8 = sub_1406BF400(v7, v6, &v10);
      else
        v8 = sub_1407C9820(v7);
      *(_WORD *)(a1 + 8) &= ~0x40u;
      v9 = *(_QWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 112) = *(_DWORD *)(v8 + 20) + *(_DWORD *)(v8 + 24);
      if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
        return sub_1406BF450(v9, &v10);
      else
        return sub_1407C97C0(v9, &v10);
    }
  }
  return result;
}
