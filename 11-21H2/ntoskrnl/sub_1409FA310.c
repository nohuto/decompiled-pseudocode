/*
 * XREFs of sub_1409FA310 @ 0x1409FA310
 * Callers:
 *     <none>
 * Callees:
 *     sub_140639C30 @ 0x140639C30 (sub_140639C30.c)
 *     sub_1409F992C @ 0x1409F992C (sub_1409F992C.c)
 */

__int64 __fastcall sub_1409FA310(__int64 a1, _DWORD *a2, _DWORD *a3, unsigned int a4, _DWORD *a5, _BYTE *a6)
{
  unsigned int v9; // ecx
  _DWORD v11[6]; // [rsp+30h] [rbp-18h] BYREF

  v11[0] = 0;
  sub_140639C30(a1, v11);
  if ( v11[0] )
  {
    *a6 = 1;
    return (unsigned int)sub_1409F992C(a2, a3, a4, a5, 4);
  }
  else
  {
    v9 = -1073741772;
    *a6 = 0;
  }
  return v9;
}
