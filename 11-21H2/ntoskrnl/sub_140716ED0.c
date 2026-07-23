/*
 * XREFs of sub_140716ED0 @ 0x140716ED0
 * Callers:
 *     sub_1407164DC @ 0x1407164DC (sub_1407164DC.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_140716F80 @ 0x140716F80 (sub_140716F80.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

char __fastcall sub_140716ED0(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, unsigned int a3)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  char v8; // di
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0xFFFFFFFFLL;
  v4 = a3;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v5 = sub_1406BF400(BugCheckParameter3, a2, &v10);
  else
    v5 = sub_1407C9820(BugCheckParameter3);
  v6 = v5;
  if ( !v5 )
    return 0;
  v7 = v4 >> 31;
  v8 = sub_140716F80(BugCheckParameter3);
  if ( v8 )
  {
    --*(_DWORD *)(v6 + 4 * v7 + 20);
    v8 = 1;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v10);
  else
    sub_1407C97C0(BugCheckParameter3, &v10);
  return v8;
}
