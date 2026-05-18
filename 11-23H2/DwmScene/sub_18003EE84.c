/*
 * XREFs of sub_18003EE84 @ 0x18003EE84
 * Callers:
 *     sub_18003B9D0 @ 0x18003B9D0 (sub_18003B9D0.c)
 * Callees:
 *     sub_18001DD84 @ 0x18001DD84 (sub_18001DD84.c)
 *     sub_18002E92C @ 0x18002E92C (sub_18002E92C.c)
 *     sub_18003A2BC @ 0x18003A2BC (sub_18003A2BC.c)
 */

__int64 __fastcall sub_18003EE84(__int64 *a1, _QWORD *a2, char a3)
{
  _QWORD *v3; // rbx
  __int64 v6; // r8
  _QWORD *v7; // r8
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // r8
  __int64 result; // rax
  __int64 i; // rcx

  v3 = (_QWORD *)*a1;
  sub_18002E92C((__int64)a1, (__int64)a1, *(__int64 **)(*a1 + 8));
  v3[1] = v3;
  *v3 = v3;
  v3[2] = v3;
  v6 = *a1;
  a1[1] = 0LL;
  *(_QWORD *)(*a1 + 8) = sub_18003A2BC(a1, *(_QWORD *)(*a2 + 8LL), v6, a3);
  v7 = (_QWORD *)*a1;
  a1[1] = a2[1];
  v8 = v7[1];
  if ( *(_BYTE *)(v8 + 25) )
  {
    *v7 = v7;
    result = *a1;
    *(_QWORD *)(*a1 + 16) = *a1;
  }
  else
  {
    v9 = sub_18001DD84((_QWORD *)v8);
    *v10 = v9;
    result = *(_QWORD *)(*a1 + 8);
    for ( i = *(_QWORD *)(result + 16); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 16) )
      result = i;
    *(_QWORD *)(*a1 + 16) = result;
  }
  return result;
}
