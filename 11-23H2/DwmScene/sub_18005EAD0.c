/*
 * XREFs of sub_18005EAD0 @ 0x18005EAD0
 * Callers:
 *     sub_180060A5C @ 0x180060A5C (sub_180060A5C.c)
 * Callees:
 *     sub_18001DD84 @ 0x18001DD84 (sub_18001DD84.c)
 *     sub_18005ED08 @ 0x18005ED08 (sub_18005ED08.c)
 *     sub_18005EE28 @ 0x18005EE28 (sub_18005EE28.c)
 *     sub_18005FB6C @ 0x18005FB6C (sub_18005FB6C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18005EAD0(__int64 *a1, _QWORD *a2, char a3)
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
  v5 = sub_18005ED08(a1, a2);
  *a1 = v5;
  LOBYTE(v6) = a3;
  *(_QWORD *)(*a1 + 8) = sub_18005EE28(a1, *(_QWORD *)(*a2 + 8LL), v5, v6);
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
  sub_18005FB6C(&v13);
  return a1;
}
