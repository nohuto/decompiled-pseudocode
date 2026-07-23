/*
 * XREFs of sub_140B1349C @ 0x140B1349C
 * Callers:
 *     sub_140B141E0 @ 0x140B141E0 (sub_140B141E0.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14082F108 @ 0x14082F108 (sub_14082F108.c)
 */

__int64 __fastcall sub_140B1349C(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  __int64 v3; // rax
  unsigned int v4; // edi
  unsigned int v6; // edi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0xFFFFFFFFLL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v3 = sub_1406BF400(BugCheckParameter3, a2, &v8);
  else
    v3 = sub_1407C9820(BugCheckParameter3, a2, (unsigned int *)&v8);
  if ( !v3 )
    return 0xFFFFFFFFLL;
  v4 = sub_14082F108(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v8);
  else
    sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v8);
  if ( v4 == -1 )
    return 0xFFFFFFFFLL;
  if ( !((*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
       ? sub_1406BF400(BugCheckParameter3, v4, &v8)
       : sub_1407C9820(BugCheckParameter3, v4, (unsigned int *)&v8)) )
    return 0xFFFFFFFFLL;
  v6 = sub_14082F108(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v8);
  else
    sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v8);
  return v6;
}
