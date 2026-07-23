/*
 * XREFs of sub_140B4E2B0 @ 0x140B4E2B0
 * Callers:
 *     sub_140B4E3D8 @ 0x140B4E3D8 (sub_140B4E3D8.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14082F108 @ 0x14082F108 (sub_14082F108.c)
 */

char __fastcall sub_140B4E2B0(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, __int64 *a3, unsigned int *a4)
{
  __int64 v7; // rax
  unsigned int v8; // edi
  unsigned int v10; // edi
  __int64 v11; // rax
  _QWORD v13[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v14; // [rsp+50h] [rbp+20h] BYREF

  v13[0] = 0xFFFFFFFFLL;
  v14 = 0xFFFFFFFFLL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v7 = sub_1406BF400(BugCheckParameter3, a2, &v14);
  else
    v7 = sub_1407C9820(BugCheckParameter3, a2, (unsigned int *)&v14);
  if ( !v7 )
    return 0;
  v8 = sub_14082F108(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v14);
  else
    sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v14);
  if ( v8 == -1 )
    return 0;
  if ( !((*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
       ? sub_1406BF400(BugCheckParameter3, v8, v13)
       : sub_1407C9820(BugCheckParameter3, v8, (unsigned int *)v13)) )
    return 0;
  v10 = sub_14082F108(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, v13);
  else
    sub_1407C97C0(BugCheckParameter3, (unsigned int *)v13);
  if ( v10 != -1
    && ((*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0
      ? (v11 = sub_1407C9820(BugCheckParameter3, v10, a4))
      : (v11 = sub_1406BF400(BugCheckParameter3, v10, a4)),
        (*a3 = v11) != 0) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
