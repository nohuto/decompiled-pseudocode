/*
 * XREFs of sub_1405DE728 @ 0x1405DE728
 * Callers:
 *     sub_1403B171C @ 0x1403B171C (sub_1403B171C.c)
 *     sub_1403B9260 @ 0x1403B9260 (sub_1403B9260.c)
 *     sub_14045EA32 @ 0x14045EA32 (sub_14045EA32.c)
 *     sub_1405DE550 @ 0x1405DE550 (sub_1405DE550.c)
 * Callees:
 *     sub_14024A9B0 @ 0x14024A9B0 (sub_14024A9B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405DE728(unsigned __int16 *a1, int a2)
{
  int v4; // eax
  __int64 result; // rax
  __int16 v6; // [rsp+40h] [rbp-39h] BYREF
  int v7; // [rsp+44h] [rbp-35h] BYREF
  int v8; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+50h] [rbp-29h] BYREF
  __int16 *v10; // [rsp+70h] [rbp-9h]
  __int64 v11; // [rsp+78h] [rbp-1h]
  _DWORD *v12; // [rsp+80h] [rbp+7h]
  __int64 v13; // [rsp+88h] [rbp+Fh]
  __int64 v14; // [rsp+90h] [rbp+17h]
  _DWORD v15[2]; // [rsp+98h] [rbp+1Fh] BYREF
  int *v16; // [rsp+A0h] [rbp+27h]
  __int64 v17; // [rsp+A8h] [rbp+2Fh]
  int *v18; // [rsp+B0h] [rbp+37h]
  __int64 v19; // [rsp+B8h] [rbp+3Fh]

  if ( a2 )
  {
    if ( (unsigned int)dword_140C03A00 > 5 )
    {
      v15[1] = 0;
      v6 = 1;
      v10 = &v6;
      v11 = 2LL;
      v12 = v15;
      v14 = *((_QWORD *)a1 + 1);
      v15[0] = *a1;
      v16 = &v7;
      v4 = *((_DWORD *)a1 + 7);
      v13 = 2LL;
      v8 = a2 + v4;
      v18 = &v8;
      v7 = a2;
      v17 = 4LL;
      v19 = 4LL;
      sub_14024A9B0((__int64)&dword_140C03A00, (unsigned __int8 *)&byte_140032358, 0LL, 1u, 0, 0, 7u, &v9);
    }
    *((_DWORD *)a1 + 7) += a2;
    return sub_14042A5E0(*((_QWORD *)a1 + 4), *((unsigned int *)a1 + 7));
  }
  return result;
}
