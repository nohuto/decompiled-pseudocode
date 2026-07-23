/*
 * XREFs of sub_140B133D8 @ 0x140B133D8
 * Callers:
 *     sub_140B141E0 @ 0x140B141E0 (sub_140B141E0.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14082F108 @ 0x14082F108 (sub_14082F108.c)
 */

char __fastcall sub_140B133D8(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, __int64 *a3, unsigned int *a4)
{
  __int64 v7; // rax
  unsigned int v8; // edi
  __int64 v9; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0xFFFFFFFFLL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v7 = sub_1406BF400(BugCheckParameter3, a2, &v11);
  else
    v7 = sub_1407C9820(BugCheckParameter3, a2, (unsigned int *)&v11);
  if ( !v7 )
    return 0;
  v8 = sub_14082F108(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v11);
  else
    sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v11);
  if ( v8 != -1
    && ((*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
      ? (v9 = sub_1406BF400(BugCheckParameter3, v8, a4))
      : (v9 = sub_1407C9820(BugCheckParameter3, v8, a4)),
        (*a3 = v9) != 0) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
