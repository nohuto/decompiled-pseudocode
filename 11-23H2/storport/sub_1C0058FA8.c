/*
 * XREFs of sub_1C0058FA8 @ 0x1C0058FA8
 * Callers:
 *     sub_1C0051188 @ 0x1C0051188 (sub_1C0051188.c)
 *     sub_1C00531E4 @ 0x1C00531E4 (sub_1C00531E4.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C0042880 @ 0x1C0042880 (sub_1C0042880.c)
 *     sub_1C00596F4 @ 0x1C00596F4 (sub_1C00596F4.c)
 *     sub_1C005A04C @ 0x1C005A04C (sub_1C005A04C.c)
 *     sub_1C0079C54 @ 0x1C0079C54 (sub_1C0079C54.c)
 *     sub_1C0079ED4 @ 0x1C0079ED4 (sub_1C0079ED4.c)
 *     sub_1C007A098 @ 0x1C007A098 (sub_1C007A098.c)
 *     sub_1C007A484 @ 0x1C007A484 (sub_1C007A484.c)
 *     sub_1C007A7F0 @ 0x1C007A7F0 (sub_1C007A7F0.c)
 *     sub_1C007A9C8 @ 0x1C007A9C8 (sub_1C007A9C8.c)
 *     sub_1C007B138 @ 0x1C007B138 (sub_1C007B138.c)
 *     sub_1C007B1C8 @ 0x1C007B1C8 (sub_1C007B1C8.c)
 */

__int64 __fastcall sub_1C0058FA8(int *a1, unsigned int a2, char a3, unsigned int a4, __int64 a5, _BYTE *a6)
{
  int v10; // eax
  __int64 v11; // rsi
  int v12; // ebx
  __int64 v14; // rdx
  int v15; // r9d
  const char *v16; // r8
  _OWORD v17[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v18; // [rsp+78h] [rbp-88h]
  _OWORD v19[3]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v20; // [rsp+B0h] [rbp-50h]
  _QWORD Dst[7]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v22; // [rsp+F8h] [rbp-8h]
  int v23; // [rsp+108h] [rbp+8h]
  _OWORD v24[3]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v25; // [rsp+140h] [rbp+40h]

  v20 = 0LL;
  memset(v19, 0, sizeof(v19));
  memset_0(Dst, 0, 0x50uLL);
  v18 = 0;
  v25 = 0LL;
  v10 = *a1;
  memset(v17, 0, sizeof(v17));
  memset(v24, 0, sizeof(v24));
  if ( v10 != 1431193940 )
  {
    if ( v10 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*((_BYTE *)a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v11 = *((_QWORD *)a1 + 751);
    if ( !v11 || !*((_QWORD *)a1 + 752) )
      return (unsigned int)-1073741637;
LABEL_11:
    v12 = sub_1C005A04C(a1, a2, Dst, a6);
    if ( v12 < 0 )
      return (unsigned int)v12;
    if ( !v22 && !v23 )
      return (unsigned int)-1073741811;
    LOBYTE(v14) = a3;
    v12 = sub_1C00596F4(v11, v14, a4, a5, v17, a6);
    if ( v12 < 0 )
      return (unsigned int)v12;
    LODWORD(v19[0]) = 56;
    v12 = sub_1C007A484(v11, 2LL, v24);
    if ( v12 < 0 )
    {
      sub_1C0042880(a6, 32LL, (__int64)"TcglibOpenSession");
      return (unsigned int)v12;
    }
    v12 = sub_1C007B138(v11, v24);
    if ( v12 < 0 )
    {
      sub_1C0042880(a6, 32LL, (__int64)"TcglibStartTransaction");
LABEL_28:
      sub_1C0079C54(v11, v24);
      return (unsigned int)v12;
    }
    if ( v22 )
    {
      LOBYTE(v15) = a3;
      v12 = sub_1C007A9C8(v11, (unsigned int)v24, a2, v15, (__int64)v17, (__int64)v19);
      if ( v12 < 0 )
      {
        v16 = "TcglibSetBandLocationEx";
LABEL_25:
        sub_1C0042880(a6, 32LL, (__int64)v16);
LABEL_27:
        sub_1C007B1C8(v11, v24, (unsigned int)v12);
        goto LABEL_28;
      }
    }
    else
    {
      v12 = sub_1C0079ED4(v11, v24, v17, Dst[0]);
      if ( v12 < 0 )
      {
        v16 = "TcglibDeassignNamespaceLocking";
        goto LABEL_25;
      }
    }
    sub_1C007A098(v11, v24, a2);
    sub_1C007A7F0(v11, (unsigned int)v24, a2, 1, 1, 1, 0, 0LL, 0LL);
    goto LABEL_27;
  }
  if ( (*((_BYTE *)a1 + 451) & 0x40) == 0 )
  {
    v11 = *((_QWORD *)a1 + 437);
    if ( v11 )
    {
      if ( *((_QWORD *)a1 + 438) )
        goto LABEL_11;
    }
  }
  return (unsigned int)-1073741637;
}
