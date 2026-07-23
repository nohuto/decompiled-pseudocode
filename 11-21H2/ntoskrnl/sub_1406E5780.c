/*
 * XREFs of sub_1406E5780 @ 0x1406E5780
 * Callers:
 *     sub_14077D454 @ 0x14077D454 (sub_14077D454.c)
 * Callees:
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     sub_14077A8E0 @ 0x14077A8E0 (sub_14077A8E0.c)
 *     sub_14077B0A4 @ 0x14077B0A4 (sub_14077B0A4.c)
 *     sub_14077B394 @ 0x14077B394 (sub_14077B394.c)
 */

__int64 __fastcall sub_1406E5780(__int64 a1, const wchar_t *a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  int v7; // ebx
  int v9; // eax
  PVOID v10; // rdi
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]
  PVOID P; // [rsp+60h] [rbp+18h] BYREF

  v7 = 0;
  P = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( wcsicmp(a2, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}") )
  {
    v9 = sub_14077B0A4(5LL, a2, &P);
    v10 = P;
    v7 = v9;
    if ( v9 >= 0 )
    {
      *(_QWORD *)&v12 = a1;
      *((_QWORD *)&v12 + 1) = a4;
      LOBYTE(v13) = 0;
      v7 = ((__int64 (__fastcall *)(__int64, PVOID, __int64 (__fastcall *)(), __int128 *))sub_14077A8E0)(
             4LL,
             P,
             sub_1406E9440,
             &v12);
      if ( v7 >= 0 )
        *a5 = v13;
    }
    if ( v10 )
      sub_14077B394(v10);
  }
  else
  {
    *a5 = 1;
  }
  return (unsigned int)v7;
}
