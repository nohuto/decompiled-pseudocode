/*
 * XREFs of sub_140A23130 @ 0x140A23130
 * Callers:
 *     sub_140A22FC4 @ 0x140A22FC4 (sub_140A22FC4.c)
 * Callees:
 *     sub_14076A8FC @ 0x14076A8FC (sub_14076A8FC.c)
 *     sub_140789460 @ 0x140789460 (sub_140789460.c)
 */

__int64 __fastcall sub_140A23130(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5, __int16 a6)
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
    v8 = sub_140789460(a1, a2, a3, a4, a3, 1, a4, v10);
    if ( v8 >= 0 )
    {
      if ( v10[0] == 1 )
      {
        *a5 = 1;
        sub_14076A8FC(a1, a2, 2u);
      }
      else
      {
        *a5 = 0;
      }
    }
  }
  return (unsigned int)v8;
}
