/*
 * XREFs of sub_140918174 @ 0x140918174
 * Callers:
 *     sub_14090C34C @ 0x14090C34C (sub_14090C34C.c)
 *     sub_140AB4A4C @ 0x140AB4A4C (sub_140AB4A4C.c)
 * Callees:
 *     sub_1406B50AC @ 0x1406B50AC (sub_1406B50AC.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_140918174(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  __int64 v3; // rax
  unsigned int v5; // edi
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0xFFFFFFFFLL;
  if ( !BugCheckParameter3 || (unsigned int)(a2 - 1) > 0xFFFFFFFD )
    return 3221225852LL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v3 = sub_1406BF400(BugCheckParameter3, a2, &v6);
  else
    v3 = sub_1407C9820(BugCheckParameter3, a2, (unsigned int *)&v6);
  if ( !v3 )
    return 3221225626LL;
  v5 = *(_DWORD *)(v3 + 44);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v6);
  else
    sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v6);
  return sub_1406B50AC(BugCheckParameter3, v5);
}
