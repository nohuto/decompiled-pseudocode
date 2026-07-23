/*
 * XREFs of sub_140B132D0 @ 0x140B132D0
 * Callers:
 *     sub_140B13268 @ 0x140B13268 (sub_140B13268.c)
 * Callees:
 *     sub_1406B4108 @ 0x1406B4108 (sub_1406B4108.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14082F108 @ 0x14082F108 (sub_14082F108.c)
 *     sub_14082F8AC @ 0x14082F8AC (sub_14082F8AC.c)
 *     sub_140B14608 @ 0x140B14608 (sub_140B14608.c)
 */

char __fastcall sub_140B132D0(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  unsigned int v8; // edi
  unsigned int v10; // edi
  __int64 v11; // rax
  unsigned int v12; // edi
  ULONG_PTR v13; // rax
  PVOID v14; // rax
  bool v15; // zf
  __int64 v16; // r9
  unsigned __int16 v17; // r8
  unsigned __int16 i; // dx
  __int64 v19; // [rsp+30h] [rbp-30h] BYREF
  __int64 v20; // [rsp+38h] [rbp-28h] BYREF
  __int64 v21; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v22[3]; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v23; // [rsp+90h] [rbp+30h] BYREF
  int v24; // [rsp+94h] [rbp+34h]

  v24 = HIDWORD(a3);
  v19 = 0xFFFFFFFFLL;
  v20 = 0xFFFFFFFFLL;
  v21 = 0xFFFFFFFFLL;
  v23 = 0;
  v22[1] = 0LL;
  v22[0] = 0xFFFFFFFFLL;
  if ( !(unsigned __int8)sub_140B14608(BugCheckParameter3, a2, (__int64)v22) )
    return 0;
  v8 = sub_14082F108(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, v22);
  else
    sub_1407C97C0(BugCheckParameter3, (unsigned int *)v22);
  if ( v8 == -1 )
    return 0;
  if ( !((*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
       ? sub_1406BF400(BugCheckParameter3, v8, &v19)
       : sub_1407C9820(BugCheckParameter3, v8, (unsigned int *)&v19)) )
    return 0;
  v10 = sub_14082F108(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v19);
  else
    sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v19);
  if ( v10 == -1 )
    return 0;
  v11 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
      ? sub_1406BF400(BugCheckParameter3, v10, &v20)
      : sub_1407C9820(BugCheckParameter3, v10, (unsigned int *)&v20);
  if ( !v11 )
    return 0;
  v12 = sub_1406B4108(BugCheckParameter3, v11, (int)&qword_140B57BD0);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v20);
  else
    sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v20);
  if ( v12 == -1 )
    return 0;
  v13 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
      ? sub_1406BF400(BugCheckParameter3, v12, &v21)
      : sub_1407C9820(BugCheckParameter3, v12, (unsigned int *)&v21);
  if ( !v13 )
    return 0;
  v14 = sub_14082F8AC(BugCheckParameter3, v12, v13, &v23, a5);
  v15 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  *(_QWORD *)(a4 + 8) = v14;
  if ( v15 )
    sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v21);
  else
    sub_1406BF450(BugCheckParameter3, &v21);
  v16 = *(_QWORD *)(a4 + 8);
  if ( !v16 )
    return 0;
  v17 = v23;
  *(_WORD *)(a4 + 2) = v23;
  *(_WORD *)a4 = 0;
  if ( v17 )
  {
    for ( i = 0; i < v17; *(_WORD *)a4 = i )
    {
      if ( !*(_WORD *)(v16 + 2 * ((unsigned __int64)i >> 1)) )
        break;
      i += 2;
    }
  }
  return 1;
}
