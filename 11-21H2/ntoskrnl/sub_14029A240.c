/*
 * XREFs of sub_14029A240 @ 0x14029A240
 * Callers:
 *     sub_1406747FC @ 0x1406747FC (sub_1406747FC.c)
 *     sub_140704D58 @ 0x140704D58 (sub_140704D58.c)
 *     sub_140704E2C @ 0x140704E2C (sub_140704E2C.c)
 *     sub_140705D0C @ 0x140705D0C (sub_140705D0C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14029A240(int a1, int *a2, _DWORD *a3)
{
  int v3; // r9d
  __int64 result; // rax

  v3 = 0;
  result = 0LL;
  if ( (a1 & 0x10000) != 0 )
  {
    result = 4LL;
    v3 = 716;
    goto LABEL_3;
  }
  if ( (a1 & 0x100000) != 0 )
  {
    v3 = 1232;
LABEL_10:
    result = 16LL;
    goto LABEL_3;
  }
  if ( (a1 & 0x200000) != 0 )
  {
    result = 8LL;
    v3 = 416;
  }
  else if ( (a1 & 0x400000) != 0 )
  {
    v3 = 912;
    goto LABEL_10;
  }
LABEL_3:
  if ( a2 )
    *a2 = v3;
  if ( a3 )
    *a3 = result;
  return result;
}
