/*
 * XREFs of sub_140547110 @ 0x140547110
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14054455C @ 0x14054455C (sub_14054455C.c)
 */

__int64 __fastcall sub_140547110(int a1, _DWORD *a2, _QWORD *a3, _DWORD *a4)
{
  _QWORD v9[408]; // [rsp+20h] [rbp-CC8h] BYREF

  memset(v9, 0, 0xCB4uLL);
  if ( (int)sub_14054455C(a1, 4, v9) < 0 )
    return 3221225473LL;
  *a2 = v9[0];
  *a3 = v9[1];
  *a4 = v9[2];
  return 0LL;
}
