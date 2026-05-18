/*
 * XREFs of sub_18006102C @ 0x18006102C
 * Callers:
 *     sub_180050550 @ 0x180050550 (sub_180050550.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     sub_18003F3D4 @ 0x18003F3D4 (sub_18003F3D4.c)
 *     sub_1800445E8 @ 0x1800445E8 (sub_1800445E8.c)
 *     sub_18005F1F4 @ 0x18005F1F4 (sub_18005F1F4.c)
 *     sub_18005F2F0 @ 0x18005F2F0 (sub_18005F2F0.c)
 *     sub_180060A5C @ 0x180060A5C (sub_180060A5C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18006102C(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi
  _QWORD *i; // rbx
  __int64 *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 **v8; // rax
  __int64 *j; // rax
  __int64 *k; // rcx
  __int64 v11; // rax
  __int128 v13; // [rsp+20h] [rbp-20h] BYREF
  void *v14[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+20h] BYREF

  v2 = (_QWORD *)(a1 + 256);
  v3 = (_QWORD *)(a1 + 416);
  while ( v2 != v3 )
  {
    v13 = 0LL;
    sub_180011020(v2, (__int64 *)&v13);
    if ( *((_QWORD *)&v13 + 1) )
      sub_180010530(*((__int64 *)&v13 + 1));
    v2 += 2;
  }
  for ( i = (_QWORD *)(a1 + 96); i != (_QWORD *)(a1 + 256); i += 2 )
  {
    v13 = 0LL;
    sub_180011020(i, (__int64 *)&v13);
    if ( *((_QWORD *)&v13 + 1) )
      sub_180010530(*((__int64 *)&v13 + 1));
  }
  v5 = **(__int64 ***)(a1 + 416);
  while ( !*((_BYTE *)v5 + 25) )
  {
    v6 = v5[7];
    sub_18003F3D4((__int64)(v5 + 7), (__int64)(v5 + 7), *(__int64 **)(v6 + 8));
    *(_QWORD *)(v6 + 8) = v6;
    *(_QWORD *)v6 = v6;
    *(_QWORD *)(v6 + 16) = v6;
    v5[8] = 0LL;
    sub_18005F2F0(v7, v5[5]);
    *(_QWORD *)v5[5] = v5[5];
    *(_QWORD *)(v5[5] + 8) = v5[5];
    v5[6] = 0LL;
    v8 = (__int64 **)v5[2];
    if ( *((_BYTE *)v8 + 25) )
    {
      for ( j = (__int64 *)v5[1]; !*((_BYTE *)j + 25) && v5 == (__int64 *)j[2]; j = (__int64 *)j[1] )
        v5 = j;
      v5 = j;
    }
    else
    {
      v5 = (__int64 *)v5[2];
      for ( k = *v8; !*((_BYTE *)k + 25); k = (__int64 *)*k )
        v5 = k;
    }
  }
  sub_180060A5C(a1, (__int64 *)v14);
  v11 = *(_QWORD *)v14[0];
  v15 = *(_QWORD *)v14[0];
  while ( !*(_BYTE *)(v11 + 25) )
  {
    sub_180011C50(v11 + 32, &v13);
    if ( sub_180011DE0(&v13) )
      sub_1800445E8((_QWORD *)v13);
    if ( *((_QWORD *)&v13 + 1) )
      sub_180010530(*((__int64 *)&v13 + 1));
    sub_18001D3F8(&v15);
    v11 = v15;
  }
  v13 = 0LL;
  sub_180011020((_QWORD *)(a1 + 440), (__int64 *)&v13);
  if ( *((_QWORD *)&v13 + 1) )
    sub_180010530(*((__int64 *)&v13 + 1));
  return sub_18005F1F4(v14, (__int64)v14);
}
