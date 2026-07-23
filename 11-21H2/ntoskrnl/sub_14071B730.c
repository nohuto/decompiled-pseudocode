/*
 * XREFs of sub_14071B730 @ 0x14071B730
 * Callers:
 *     sub_1407C3070 @ 0x1407C3070 (sub_1407C3070.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_140718B68 @ 0x140718B68 (sub_140718B68.c)
 *     sub_14071B1C8 @ 0x14071B1C8 (sub_14071B1C8.c)
 *     sub_14071B250 @ 0x14071B250 (sub_14071B250.c)
 *     sub_14071B8C0 @ 0x14071B8C0 (sub_14071B8C0.c)
 *     sub_14071B930 @ 0x14071B930 (sub_14071B930.c)
 *     sub_14071BC04 @ 0x14071BC04 (sub_14071BC04.c)
 *     sub_1407C2FB4 @ 0x1407C2FB4 (sub_1407C2FB4.c)
 *     sub_1407C300C @ 0x1407C300C (sub_1407C300C.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_140AB42D0 @ 0x140AB42D0 (sub_140AB42D0.c)
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 */

__int64 __fastcall sub_14071B730(__int64 a1, __int64 a2, ULONG_PTR a3, unsigned int a4, ULONG_PTR *a5)
{
  ULONG_PTR *v5; // r13
  __int64 v6; // r14
  int v8; // ebx
  bool v10; // zf
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // ebx
  ULONG_PTR v16; // rcx
  __int64 v17; // rdi
  ULONG_PTR v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rcx
  __m128i v22; // [rsp+20h] [rbp-10h] BYREF
  __int64 v23; // [rsp+70h] [rbp+40h] BYREF
  __int64 v24; // [rsp+80h] [rbp+50h]

  v5 = a5;
  v22.m128i_i32[1] = 0;
  v6 = a1;
  LODWORD(v23) = -1;
  v8 = *(_DWORD *)(a1 + 16);
  *a5 = 0LL;
  v10 = (*(_BYTE *)(a3 + 140) & 1) == 0;
  HIDWORD(v23) = 0;
  v24 = *(_QWORD *)(a3 + 1648);
  if ( v10 )
    v12 = sub_1407C9820(a3);
  else
    v12 = sub_1406BF400(a3, a4, &v23);
  if ( !v12 )
    return 3221225626LL;
  v13 = *(unsigned __int16 *)(v12 + 72);
  if ( (*(_BYTE *)(v12 + 2) & 0x20) != 0 )
  {
    v14 = sub_14071BC04(v12 + 76, v13);
  }
  else
  {
    v22.m128i_i64[1] = v12 + 76;
    v22.m128i_i16[0] = v13;
    v22.m128i_i16[1] = v13;
    v14 = sub_140718B68(&v22);
  }
  v15 = 37 * v8 + v14;
  if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
    sub_1406BF450(a3, &v23);
  else
    sub_1407C97C0(a3, &v23);
  sub_1407C2FB4(v6, a2);
  v16 = *(_QWORD *)(v6 + 32);
  v22.m128i_i64[0] = v6 + 32;
  sub_14071B930(v16, v15);
  sub_1407C300C(v6, a2);
  v17 = *(_QWORD *)(v24
                  + 24
                  * ((unsigned int)(*(_DWORD *)(a3 + 1656) - 1) & ((101027 * (v15 ^ (v15 >> 9))) ^ ((unsigned __int64)(101027 * (v15 ^ (v15 >> 9))) >> 9)))
                  + 16);
  if ( v17 )
  {
    LOBYTE(a5) = 0;
    while ( v15 != *(_DWORD *)v17 || a4 != *(_DWORD *)(v17 + 24) || a3 != *(_QWORD *)(v17 + 16) )
    {
      v17 = *(_QWORD *)(v17 + 8);
      if ( !v17 )
        goto LABEL_12;
    }
    v19 = v17 - 16;
    if ( sub_14071B1C8(v6, v19, &a5) )
    {
      if ( !a2 || sub_14071B1C8(a2, v19, &a5) )
      {
        v6 = v19;
      }
      else
      {
        sub_140AB4300(v21);
        sub_140AB42D0(v19);
        v6 = a2;
      }
    }
    else
    {
      sub_140AB4300(v20);
      sub_140AB42D0(v19);
    }
    sub_140AB42D0(v6);
    sub_14071B250(v19);
    *v5 = v19;
    sub_140AB4300(v19);
  }
LABEL_12:
  sub_14071B8C0(*(PVOID *)v22.m128i_i64[0]);
  return 0LL;
}
