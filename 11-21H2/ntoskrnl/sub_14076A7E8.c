/*
 * XREFs of sub_14076A7E8 @ 0x14076A7E8
 * Callers:
 *     sub_14076A680 @ 0x14076A680 (sub_14076A680.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14076A8FC @ 0x14076A8FC (sub_14076A8FC.c)
 *     sub_14076A9A0 @ 0x14076A9A0 (sub_14076A9A0.c)
 *     sub_140784B14 @ 0x140784B14 (sub_140784B14.c)
 *     sub_1407875CC @ 0x1407875CC (sub_1407875CC.c)
 */

__int64 __fastcall sub_14076A7E8(__int64 a1, __int64 a2, int a3, HANDLE *a4, _BYTE *a5, __int16 a6)
{
  int v10; // ebx
  int v11; // r9d
  _DWORD v13[4]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v14[80]; // [rsp+50h] [rbp-88h] BYREF

  v13[0] = 0;
  if ( a6 )
  {
    v10 = -1073741811;
  }
  else
  {
    v10 = sub_1407875CC(a1, a2, v14);
    if ( v10 >= 0 )
    {
      v10 = sub_14076A9A0(a1, (unsigned int)v14, 0, 0, 0LL, 0);
      if ( v10 >= 0 )
      {
        v10 = sub_140784B14(a1, a2, 48, v11, a3, 1, (__int64)a4, (__int64)v13);
        if ( v10 >= 0 )
        {
          if ( v13[0] == 1 )
          {
            *a5 = 1;
            sub_14076A8FC(a1, a2, 3LL, *a4);
          }
          else
          {
            *a5 = 0;
          }
          return (unsigned int)v10;
        }
      }
    }
  }
  if ( *a4 )
  {
    ZwClose(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)v10;
}
