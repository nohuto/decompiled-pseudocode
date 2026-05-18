/*
 * XREFs of sub_18004C2F0 @ 0x18004C2F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_180026B04 @ 0x180026B04 (sub_180026B04.c)
 *     sub_18003D3C8 @ 0x18003D3C8 (sub_18003D3C8.c)
 *     sub_180044468 @ 0x180044468 (sub_180044468.c)
 *     sub_18004B9E4 @ 0x18004B9E4 (sub_18004B9E4.c)
 *     sub_18004BAD8 @ 0x18004BAD8 (sub_18004BAD8.c)
 *     sub_180060A34 @ 0x180060A34 (sub_180060A34.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_18004C2F0(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rsi
  char v5; // bp
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  char result; // al
  char v12; // bl
  __int64 v13; // rcx
  char v14; // si
  __int64 v15; // rdi
  char v16; // r9
  __int64 v17; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18; // [rsp+38h] [rbp-20h]
  __int64 v19; // [rsp+40h] [rbp-18h] BYREF
  __int64 v20; // [rsp+48h] [rbp-10h]

  v4 = 0LL;
  v5 = 1;
  if ( sub_18004BAD8(a1) )
  {
    v6 = 0LL;
    do
    {
      v7 = *(_QWORD *)(a1 + 104);
      v8 = *(_QWORD *)(v6 + v7);
      if ( v8 && *(_BYTE *)(v6 + v7 + 16) )
      {
        v9 = (_QWORD *)sub_180026B04(v8, &v17);
        v10 = (_QWORD *)sub_180060A34(*v9, &v19);
        (*(void (__fastcall **)(_QWORD, __int64, unsigned __int64, __int64))(*(_QWORD *)*v10 + 40LL))(*v10, a1, v4, a2);
        if ( v20 )
          sub_180010530(v20);
        if ( v18 )
          sub_180010530(v18);
      }
      ++v4;
      v6 += 88LL;
    }
    while ( v4 < sub_18004BAD8(a1) );
  }
  sub_18004B9E4(a1, (__int64)&v17);
  result = sub_180011DE0(&v17);
  if ( result )
  {
    sub_180011C50(a1 + 56, &v19);
    v12 = sub_180044468(v17, 9u);
    v14 = sub_180044468(v13, 8u);
    v15 = v19;
    sub_18003D3C8(v19, v16, v14);
    sub_18003D3C8(v15, 9, v12);
    if ( !v12 && v14 )
      v5 = 0;
    result = sub_18003D3C8(v15, 16, v5);
    if ( v20 )
      result = sub_180010530(v20);
  }
  if ( v18 )
    return sub_180010530(v18);
  return result;
}
