/*
 * XREFs of sub_140B13578 @ 0x140B13578
 * Callers:
 *     sub_140B12C84 @ 0x140B12C84 (sub_140B12C84.c)
 * Callees:
 *     sub_1406B4108 @ 0x1406B4108 (sub_1406B4108.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14082F108 @ 0x14082F108 (sub_14082F108.c)
 *     sub_14082F8AC @ 0x14082F8AC (sub_14082F8AC.c)
 *     sub_140B13790 @ 0x140B13790 (sub_140B13790.c)
 */

char __fastcall sub_140B13578(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, __int64 a3)
{
  bool v3; // zf
  __int64 v6; // rax
  unsigned int v7; // edi
  unsigned int v9; // edi
  __int64 v10; // rax
  unsigned int v11; // edi
  ULONG_PTR v12; // rax
  PVOID v13; // rax
  PVOID v14; // rdi
  char v15; // di
  __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h] BYREF
  __int128 v19; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+70h] [rbp+20h] BYREF
  __int64 v21; // [rsp+88h] [rbp+38h] BYREF

  v20 = 0;
  v3 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v18 = 0xFFFFFFFFLL;
  v19 = 0LL;
  v17 = 0xFFFFFFFFLL;
  v21 = 0xFFFFFFFFLL;
  if ( v3 )
    v6 = sub_1407C9820(BugCheckParameter3, a2, (unsigned int *)&v21);
  else
    v6 = sub_1406BF400(BugCheckParameter3, a2, &v21);
  if ( !v6 )
    return 0;
  v7 = sub_14082F108(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v21);
  else
    sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v21);
  if ( v7 == -1 )
    return 0;
  if ( !((*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
       ? sub_1406BF400(BugCheckParameter3, v7, &v21)
       : sub_1407C9820(BugCheckParameter3, v7, (unsigned int *)&v21)) )
    return 0;
  v9 = sub_14082F108(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v21);
  else
    sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v21);
  if ( v9 == -1 )
    return 0;
  v10 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
      ? sub_1406BF400(BugCheckParameter3, v9, &v21)
      : sub_1407C9820(BugCheckParameter3, v9, (unsigned int *)&v21);
  if ( !v10 )
    return 0;
  v11 = sub_1406B4108(BugCheckParameter3, v10, (int)L"\b\n");
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v21);
  else
    sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v21);
  if ( v11 == -1 )
    return 0;
  v12 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
      ? sub_1406BF400(BugCheckParameter3, v11, &v17)
      : sub_1407C9820(BugCheckParameter3, v11, (unsigned int *)&v17);
  if ( !v12 )
    return 0;
  if ( *(_DWORD *)(v12 + 12) != 7 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v17);
    else
      sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v17);
    return 0;
  }
  v13 = sub_14082F8AC(BugCheckParameter3, v11, v12, &v20, &v18);
  v3 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v14 = v13;
  *((_QWORD *)&v19 + 1) = v13;
  if ( v3 )
    sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v17);
  else
    sub_1406BF450(BugCheckParameter3, &v17);
  if ( !v14 )
    return 0;
  WORD1(v19) = v20 - 2;
  LOWORD(v19) = v20 - 2;
  v15 = sub_140B13790(a3, &v19);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v18);
  else
    sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v18);
  return v15;
}
