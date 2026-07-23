/*
 * XREFs of sub_1406E66F4 @ 0x1406E66F4
 * Callers:
 *     sub_1407702BC @ 0x1407702BC (sub_1407702BC.c)
 *     DoScreenSave @ 0x14094EA0C (DoScreenSave.c)
 * Callees:
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 */

__int64 __fastcall sub_1406E66F4(int a1, int a2, _DWORD *a3)
{
  int v7; // [rsp+80h] [rbp+18h] BYREF
  int v8; // [rsp+88h] [rbp+20h] BYREF

  *a3 = 0;
  v7 = 0;
  v8 = 1;
  if ( (unsigned int)sub_14077DA5C(
                       qword_140D00AC0,
                       a1,
                       2,
                       a2,
                       0LL,
                       (__int64)qword_14000ED38,
                       (__int64)&v8,
                       0LL,
                       0,
                       (__int64)&v7,
                       0) == -1073741789
    || (unsigned int)sub_14077DA5C(
                       qword_140D00AC0,
                       a1,
                       2,
                       a2,
                       0LL,
                       (__int64)&dword_14000ED20,
                       (__int64)&v8,
                       0LL,
                       0,
                       (__int64)&v7,
                       0) == -1073741789 )
  {
    *a3 |= 0x80000u;
  }
  return 0LL;
}
