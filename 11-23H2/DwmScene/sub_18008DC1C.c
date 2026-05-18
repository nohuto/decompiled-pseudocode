/*
 * XREFs of sub_18008DC1C @ 0x18008DC1C
 * Callers:
 *     sub_18008EA40 @ 0x18008EA40 (sub_18008EA40.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_1800289F0 @ 0x1800289F0 (sub_1800289F0.c)
 *     sub_180028A90 @ 0x180028A90 (sub_180028A90.c)
 *     sub_18005BCD0 @ 0x18005BCD0 (sub_18005BCD0.c)
 *     sub_18005D0B8 @ 0x18005D0B8 (sub_18005D0B8.c)
 *     sub_18005D26C @ 0x18005D26C (sub_18005D26C.c)
 *     sub_18005D38C @ 0x18005D38C (sub_18005D38C.c)
 *     sub_18005D470 @ 0x18005D470 (sub_18005D470.c)
 *     sub_18008E1F8 @ 0x18008E1F8 (sub_18008E1F8.c)
 *     sub_18008E7A8 @ 0x18008E7A8 (sub_18008E7A8.c)
 *     sub_18008E8B8 @ 0x18008E8B8 (sub_18008E8B8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18008DC1C(__int64 a1)
{
  __int64 *v2; // rdi
  __int64 *v3; // rax
  __int64 *v4; // rax
  __int64 result; // rax
  int v6; // eax
  int v7; // edx
  __int64 *v8; // rax
  int v9; // xmm1_4
  unsigned int v10; // xmm2_4
  _QWORD *v11; // rax
  __int128 v12; // [rsp+20h] [rbp-40h] BYREF
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v14[4]; // [rsp+40h] [rbp-20h] BYREF

  if ( *(_DWORD *)(a1 + 1960) )
  {
    sub_18008E1F8(a1, &v13);
    if ( sub_180011DD0(&v13)
      || (unsigned int)sub_180028A90(v13) != *(_DWORD *)(a1 + 1940)
      || (v6 = sub_1800289F0(v13), v6 != v7) )
    {
      sub_18008E7A8(a1);
    }
    v8 = (__int64 *)sub_18008E1F8(a1, &v12);
    sub_18005D26C(a1, v8);
    v12 = 0LL;
    sub_18005D0B8(a1, (__int64 *)&v12);
    sub_18005D38C(a1, *(_DWORD *)(a1 + 1928), 0);
    sub_18005D38C(a1, *(_DWORD *)(a1 + 1932), 1);
    sub_18005D38C(a1, *(_DWORD *)(a1 + 1936), 1);
    *(_BYTE *)(a1 + 465) |= 1u;
    v9 = *(_DWORD *)(a1 + 404);
    v10 = *(_DWORD *)(a1 + 408);
    LODWORD(v12) = *(_DWORD *)(a1 + 400);
    DWORD1(v12) = v9;
    *((_QWORD *)&v12 + 1) = v10;
    v11 = sub_180017648(v14, (__int64)&unk_1801D7868);
    result = sub_18005D470(a1, (__int64)v11, &v12, -1);
    if ( *((_QWORD *)&v13 + 1) )
      return sub_180010530(*((__int64 *)&v13 + 1));
  }
  else
  {
    v2 = (__int64 *)(a1 + 1832);
    if ( sub_180011DD0((_QWORD *)(a1 + 1832)) || (unsigned int)sub_18005BCD0(*v2) != *(_DWORD *)(a1 + 1940) )
      sub_18008E8B8(a1);
    v13 = 0LL;
    sub_180011020((_QWORD *)(a1 + 1912), (__int64 *)&v13);
    if ( *((_QWORD *)&v13 + 1) )
      sub_180010530(*((__int64 *)&v13 + 1));
    v3 = sub_18001246C(&v13, (_QWORD *)(a1 + 1912));
    sub_18005D26C(a1, v3);
    v4 = sub_18001246C(&v13, v2);
    sub_18005D0B8(a1, v4);
    sub_18005D38C(a1, *(_DWORD *)(a1 + 1928), 1);
    sub_18005D38C(a1, *(_DWORD *)(a1 + 1932), 0);
    result = sub_18005D38C(a1, *(_DWORD *)(a1 + 1936), 0);
    *(_BYTE *)(a1 + 465) &= ~1u;
  }
  return result;
}
