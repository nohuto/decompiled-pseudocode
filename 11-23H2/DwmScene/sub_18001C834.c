/*
 * XREFs of sub_18001C834 @ 0x18001C834
 * Callers:
 *     sub_18001D840 @ 0x18001D840 (sub_18001D840.c)
 * Callees:
 *     sub_18001C8BC @ 0x18001C8BC (sub_18001C8BC.c)
 *     sub_18001DD84 @ 0x18001DD84 (sub_18001DD84.c)
 */

__int64 __fastcall sub_18001C834(_QWORD *a1, _QWORD *a2, char a3, __int64 a4)
{
  _QWORD *v6; // r8
  __int64 v7; // rax
  char v8; // r9
  __int64 *v9; // r8
  __int64 result; // rax
  __int64 i; // rcx

  LOBYTE(a4) = a3;
  *(_QWORD *)(*a1 + 8LL) = sub_18001C8BC(a1, *(_QWORD *)(*a2 + 8LL), *a1, a4);
  v6 = (_QWORD *)*a1;
  a1[1] = a2[1];
  if ( *(_BYTE *)(v6[1] + 25LL) )
  {
    *v6 = v6;
    result = *a1;
    *(_QWORD *)(*a1 + 16LL) = *a1;
  }
  else
  {
    v7 = sub_18001DD84();
    *v9 = v7;
    result = *(_QWORD *)(*a1 + 8LL);
    for ( i = *(_QWORD *)(result + 16); *(_BYTE *)(i + 25) == v8; i = *(_QWORD *)(i + 16) )
      result = i;
    *(_QWORD *)(*a1 + 16LL) = result;
  }
  return result;
}
