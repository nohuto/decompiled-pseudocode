/*
 * XREFs of sub_18005EA14 @ 0x18005EA14
 * Callers:
 *     sub_18005FECC @ 0x18005FECC (sub_18005FECC.c)
 *     sub_180064EF0 @ 0x180064EF0 (sub_180064EF0.c)
 *     sub_18007CD0C @ 0x18007CD0C (sub_18007CD0C.c)
 *     sub_18007D310 @ 0x18007D310 (sub_18007D310.c)
 *     sub_18007D430 @ 0x18007D430 (sub_18007D430.c)
 *     sub_1800808B0 @ 0x1800808B0 (sub_1800808B0.c)
 *     sub_18008D684 @ 0x18008D684 (sub_18008D684.c)
 *     sub_180098B8C @ 0x180098B8C (sub_180098B8C.c)
 * Callees:
 *     sub_18001DD84 @ 0x18001DD84 (sub_18001DD84.c)
 *     sub_18004D50C @ 0x18004D50C (sub_18004D50C.c)
 *     sub_18005ED3C @ 0x18005ED3C (sub_18005ED3C.c)
 *     sub_18005FB48 @ 0x18005FB48 (sub_18005FB48.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18005EA14(__int64 *a1, _QWORD *a2, char a3)
{
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // r8
  __int64 v10; // rax
  __int64 i; // rcx
  __int64 *v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v14; // [rsp+28h] [rbp-10h]

  *a1 = 0LL;
  a1[1] = 0LL;
  v13 = a1;
  v14 = a1;
  v5 = sub_18004D50C();
  *a1 = v5;
  LOBYTE(v6) = a3;
  *(_QWORD *)(*a1 + 8) = sub_18005ED3C(a1, *(_QWORD *)(*a2 + 8LL), v5, v6, v13, v14);
  a1[1] = a2[1];
  v7 = *(_QWORD *)(*a1 + 8);
  if ( *(_BYTE *)(v7 + 25) )
  {
    *(_QWORD *)*a1 = *a1;
    *(_QWORD *)(*a1 + 16) = *a1;
  }
  else
  {
    v8 = sub_18001DD84((_QWORD *)v7);
    *v9 = v8;
    v10 = *(_QWORD *)(*a1 + 8);
    for ( i = *(_QWORD *)(v10 + 16); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 16) )
      v10 = i;
    *(_QWORD *)(*a1 + 16) = v10;
  }
  v14 = 0LL;
  sub_18005FB48(&v13);
  return a1;
}
