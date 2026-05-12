/*
 * XREFs of sub_1C005B214 @ 0x1C005B214
 * Callers:
 *     sub_1C0051FD0 @ 0x1C0051FD0 (sub_1C0051FD0.c)
 *     sub_1C0054050 @ 0x1C0054050 (sub_1C0054050.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0042880 @ 0x1C0042880 (sub_1C0042880.c)
 *     sub_1C00596F4 @ 0x1C00596F4 (sub_1C00596F4.c)
 *     sub_1C0079C54 @ 0x1C0079C54 (sub_1C0079C54.c)
 *     sub_1C007A484 @ 0x1C007A484 (sub_1C007A484.c)
 *     sub_1C007A558 @ 0x1C007A558 (sub_1C007A558.c)
 */

__int64 __fastcall sub_1C005B214(int *a1, char a2, unsigned int a3, const void *a4, _BYTE *a5)
{
  int v5; // eax
  __int64 v7; // rdi
  int v8; // ebx
  __int64 v10; // r8
  _OWORD v11[2]; // [rsp+30h] [rbp-41h] BYREF
  int v12; // [rsp+50h] [rbp-21h]
  _OWORD v13[3]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v14; // [rsp+88h] [rbp+17h]

  v12 = 0;
  v14 = 0LL;
  v5 = *a1;
  memset(v11, 0, sizeof(v11));
  memset(v13, 0, sizeof(v13));
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
  v8 = sub_1C00596F4(v7, 1, a3, a4, (unsigned int *)v11, a5);
  if ( v8 >= 0 )
  {
    v8 = sub_1C007A484(v7, 1LL, v13);
    if ( v8 >= 0 )
    {
      LOBYTE(v10) = a2;
      v8 = sub_1C007A558(v7, v13, v10, v11);
      if ( v8 < 0 )
        sub_1C0042880(a5, 32LL, (__int64)"TcglibRevertLockingSpEx");
      sub_1C0079C54(v7, v13);
    }
    else
    {
      sub_1C0042880(a5, 32LL, (__int64)"TcglibOpenSession");
    }
  }
  return (unsigned int)v8;
}
