/*
 * XREFs of sub_140B4E4C8 @ 0x140B4E4C8
 * Callers:
 *     sub_140B141E0 @ 0x140B141E0 (sub_140B141E0.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14082F108 @ 0x14082F108 (sub_14082F108.c)
 *     sub_140B4E3D8 @ 0x140B4E3D8 (sub_140B4E3D8.c)
 */

char __fastcall sub_140B4E4C8(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        const WCHAR *a3,
        __int64 *a4,
        unsigned int *a5)
{
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h] BYREF

  v11 = 0LL;
  v10 = 0xFFFFFFFFLL;
  if ( !sub_140B4E3D8(BugCheckParameter3, a2, a3, &v11, (unsigned int *)&v10) )
    return 0;
  v7 = sub_14082F108(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v10);
  else
    sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v10);
  if ( v7 != -1
    && ((*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0
      ? (v8 = sub_1407C9820(BugCheckParameter3, v7, a5))
      : (v8 = sub_1406BF400(BugCheckParameter3, v7, a5)),
        (*a4 = v8) != 0) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
