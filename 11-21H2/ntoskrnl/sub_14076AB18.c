/*
 * XREFs of sub_14076AB18 @ 0x14076AB18
 * Callers:
 *     sub_14076A9A0 @ 0x14076A9A0 (sub_14076A9A0.c)
 * Callees:
 *     sub_14076A8FC @ 0x14076A8FC (sub_14076A8FC.c)
 *     sub_140787DE8 @ 0x140787DE8 (sub_140787DE8.c)
 */

__int64 __fastcall sub_14076AB18(__int64 a1, __int64 a2, int a3, __int64 a4, _BYTE *a5, __int16 a6)
{
  int v8; // ebx
  _DWORD v10[6]; // [rsp+40h] [rbp-18h] BYREF

  v10[0] = 0;
  if ( a6 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v8 = sub_140787DE8(a1, a2, a3, a4, a3, 1, a4, (__int64)v10);
    if ( v8 >= 0 )
    {
      if ( v10[0] == 1 )
      {
        *a5 = 1;
        sub_14076A8FC(a1, a2, 4u);
      }
      else
      {
        *a5 = 0;
      }
    }
  }
  return (unsigned int)v8;
}
