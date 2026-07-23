/*
 * XREFs of sub_1407519BC @ 0x1407519BC
 * Callers:
 *     sub_14075140C @ 0x14075140C (sub_14075140C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407519BC(_QWORD *a1, int a2, _DWORD *a3)
{
  unsigned int v4; // r10d
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rcx

  v4 = -1073741275;
  v5 = 0x4A42E8A56738E2C4LL - *a1;
  if ( *a1 == 0x4A42E8A56738E2C4LL )
    v5 = 0x6E7569E740E06AB1LL - a1[1];
  if ( !v5 && a2 == 4 && a3 && *a3 && *a3 < 0xFu && !byte_140C5AC3C )
  {
    *a3 = 15;
    v4 = 0;
  }
  v6 = 0x48C586DA29F6C1DBLL - *a1;
  if ( *a1 == 0x48C586DA29F6C1DBLL )
    v6 = 0xDA441F7BB6F2DB9FuLL - a1[1];
  if ( !v6 && a2 == 4 && a3 && (unsigned int)(*a3 - 1) <= 0x1C )
  {
    *a3 = 30;
    v4 = 0;
  }
  v7 = 0x497E7EE49D7815A6LL - *a1;
  if ( *a1 == 0x497E7EE49D7815A6LL )
    v7 = 0x6423F0055A518888LL - a1[1];
  if ( !v7 && a2 == 4 && a3 && (unsigned int)(*a3 - 1) <= 0x3A )
  {
    *a3 = 60;
    return 0;
  }
  return v4;
}
