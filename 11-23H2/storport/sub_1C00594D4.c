/*
 * XREFs of sub_1C00594D4 @ 0x1C00594D4
 * Callers:
 *     sub_1C00516D0 @ 0x1C00516D0 (sub_1C00516D0.c)
 *     sub_1C0053744 @ 0x1C0053744 (sub_1C0053744.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0042880 @ 0x1C0042880 (sub_1C0042880.c)
 *     sub_1C00596F4 @ 0x1C00596F4 (sub_1C00596F4.c)
 *     sub_1C0079C54 @ 0x1C0079C54 (sub_1C0079C54.c)
 *     sub_1C007A098 @ 0x1C007A098 (sub_1C007A098.c)
 *     sub_1C007A484 @ 0x1C007A484 (sub_1C007A484.c)
 */

__int64 __fastcall sub_1C00594D4(int *a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  int v5; // eax
  unsigned int v6; // r14d
  __int64 v7; // rdi
  int v8; // ebx
  _OWORD v10[2]; // [rsp+30h] [rbp-41h] BYREF
  int v11; // [rsp+50h] [rbp-21h]
  _OWORD v12[3]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v13; // [rsp+88h] [rbp+17h]

  v11 = 0;
  v13 = 0LL;
  v5 = *a1;
  v6 = a2;
  memset(v10, 0, sizeof(v10));
  memset(v12, 0, sizeof(v12));
  if ( v5 == 1431193940 )
  {
    if ( (*((_BYTE *)a1 + 451) & 0x40) != 0 || (v7 = *((_QWORD *)a1 + 437)) == 0 || !*((_QWORD *)a1 + 438) )
      return (unsigned int)-1073741637;
  }
  else
  {
    if ( v5 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*((_BYTE *)a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v7 = *((_QWORD *)a1 + 751);
    if ( !v7 || !*((_QWORD *)a1 + 752) )
      return (unsigned int)-1073741637;
  }
  LOBYTE(a2) = 1;
  v8 = sub_1C00596F4(v7, a2, a3, a4, v10, a5);
  if ( v8 >= 0 )
  {
    v8 = sub_1C007A484(v7, 2LL, v12);
    if ( v8 >= 0 )
    {
      v8 = sub_1C007A098(v7, v12, v6);
      if ( v8 < 0 )
        sub_1C0042880(a5, 32LL, (__int64)"TcglibEraseBand");
      sub_1C0079C54(v7, v12);
    }
    else
    {
      sub_1C0042880(a5, 32LL, (__int64)"TcglibOpenSession");
    }
  }
  return (unsigned int)v8;
}
