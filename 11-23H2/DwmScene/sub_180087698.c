/*
 * XREFs of sub_180087698 @ 0x180087698
 * Callers:
 *     sub_18007CD0C @ 0x18007CD0C (sub_18007CD0C.c)
 *     sub_18007D430 @ 0x18007D430 (sub_18007D430.c)
 *     sub_18007E900 @ 0x18007E900 (sub_18007E900.c)
 *     sub_18007F430 @ 0x18007F430 (sub_18007F430.c)
 *     sub_18007F820 @ 0x18007F820 (sub_18007F820.c)
 *     sub_1800808B0 @ 0x1800808B0 (sub_1800808B0.c)
 *     sub_180098B8C @ 0x180098B8C (sub_180098B8C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 */

__int64 __fastcall sub_180087698(__int64 a1, int a2, int a3, int a4, char a5)
{
  char v6; // r10
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-10h] BYREF

  v6 = a5 & 0xE | 1;
  if ( *(_BYTE *)(a1 + 124) != v6
    || *(_DWORD *)(a1 + 112) != a2
    || *(_DWORD *)(a1 + 116) != a3
    || *(_DWORD *)(a1 + 120) != a4
    || (result = a5 & 1, *(_BYTE *)(a1 + 125) != (_BYTE)result) )
  {
    *(_DWORD *)(a1 + 112) = a2;
    *(_BYTE *)(a1 + 125) = a5 & 1;
    *(_DWORD *)(a1 + 116) = a3;
    *(_DWORD *)(a1 + 120) = a4;
    *(_BYTE *)(a1 + 124) = v6;
    v8 = 0LL;
    sub_180011020((_QWORD *)(a1 + 48), (__int64 *)&v8);
    if ( *((_QWORD *)&v8 + 1) )
      sub_180010530(*((__int64 *)&v8 + 1));
    v8 = 0LL;
    sub_180011020((_QWORD *)(a1 + 64), (__int64 *)&v8);
    if ( *((_QWORD *)&v8 + 1) )
      sub_180010530(*((__int64 *)&v8 + 1));
    v8 = 0LL;
    sub_180011020((_QWORD *)(a1 + 80), (__int64 *)&v8);
    if ( *((_QWORD *)&v8 + 1) )
      sub_180010530(*((__int64 *)&v8 + 1));
    v8 = 0LL;
    result = (__int64)sub_180011020((_QWORD *)(a1 + 96), (__int64 *)&v8);
    if ( *((_QWORD *)&v8 + 1) )
      return sub_180010530(*((__int64 *)&v8 + 1));
  }
  return result;
}
