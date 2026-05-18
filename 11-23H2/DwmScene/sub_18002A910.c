/*
 * XREFs of sub_18002A910 @ 0x18002A910
 * Callers:
 *     sub_18002B35C @ 0x18002B35C (sub_18002B35C.c)
 *     sub_18007411C @ 0x18007411C (sub_18007411C.c)
 * Callees:
 *     sub_18001DD84 @ 0x18001DD84 (sub_18001DD84.c)
 *     sub_18002A998 @ 0x18002A998 (sub_18002A998.c)
 */

__int64 __fastcall sub_18002A910(_QWORD *a1, _QWORD *a2, char a3, __int64 a4)
{
  _QWORD *v6; // r8
  __int64 v7; // rcx
  _QWORD *v8; // rax
  char v9; // r9
  _QWORD *v10; // r8
  __int64 result; // rax
  __int64 i; // rcx

  LOBYTE(a4) = a3;
  *(_QWORD *)(*a1 + 8LL) = sub_18002A998(a1, *(_QWORD *)(*a2 + 8LL), *a1, a4);
  v6 = (_QWORD *)*a1;
  a1[1] = a2[1];
  v7 = v6[1];
  if ( *(_BYTE *)(v7 + 25) )
  {
    *v6 = v6;
    result = *a1;
    *(_QWORD *)(*a1 + 16LL) = *a1;
  }
  else
  {
    v8 = sub_18001DD84((_QWORD *)v7);
    *v10 = v8;
    result = *(_QWORD *)(*a1 + 8LL);
    for ( i = *(_QWORD *)(result + 16); *(_BYTE *)(i + 25) == v9; i = *(_QWORD *)(i + 16) )
      result = i;
    *(_QWORD *)(*a1 + 16LL) = result;
  }
  return result;
}
