/*
 * XREFs of sub_1402564B4 @ 0x1402564B4
 * Callers:
 *     sub_14065D7C4 @ 0x14065D7C4 (sub_14065D7C4.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_1402564B4(ULONG_PTR a1, int a2, unsigned int a3, __int64 a4)
{
  ULONG_PTR v5; // rdx
  bool v6; // zf
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned int v10; // edi
  int v12; // [rsp+30h] [rbp+8h] BYREF
  int v13; // [rsp+34h] [rbp+Ch]

  v12 = -1;
  v5 = *(unsigned int *)(a4 + 4);
  v6 = (*(_BYTE *)(a1 + 140) & 1) == 0;
  v8 = a3;
  v13 = 0;
  if ( v6 )
    v9 = sub_1407C9820(a1);
  else
    v9 = sub_1406BF400(a1, v5);
  v10 = 0;
  if ( v9 )
  {
    *(_DWORD *)(v9 + 4 * v8) = a2;
    if ( (*(_BYTE *)(a1 + 140) & 1) != 0 )
      sub_1406BF450(a1, &v12);
    else
      sub_1407C97C0(a1, &v12);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v10;
}
