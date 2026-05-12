/*
 * XREFs of ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x1C005B568
 * Callers:
 *     sub_1C0052204 @ 0x1C0052204 (sub_1C0052204.c)
 *     sub_1C0054298 @ 0x1C0054298 (sub_1C0054298.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C0042880 @ 0x1C0042880 (sub_1C0042880.c)
 *     sub_1C00596F4 @ 0x1C00596F4 (sub_1C00596F4.c)
 *     sub_1C005A04C @ 0x1C005A04C (sub_1C005A04C.c)
 *     sub_1C0079C54 @ 0x1C0079C54 (sub_1C0079C54.c)
 *     sub_1C007A484 @ 0x1C007A484 (sub_1C007A484.c)
 *     sub_1C007A7F0 @ 0x1C007A7F0 (sub_1C007A7F0.c)
 *     sub_1C007B138 @ 0x1C007B138 (sub_1C007B138.c)
 *     sub_1C007B1C8 @ 0x1C007B1C8 (sub_1C007B1C8.c)
 */

__int64 __fastcall CMSPAddress::get_DynamicTerminalClasses(
        CMSPAddress *this,
        struct tagVARIANT *a2,
        char a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        unsigned int a9,
        const void *a10,
        _BYTE *a11)
{
  int v14; // esi
  int v15; // eax
  __int64 v16; // r14
  int v17; // ebx
  int v19; // edi
  int v20; // edi
  int v21; // edi
  const char *v22; // r8
  unsigned int v23; // [rsp+50h] [rbp-B0h]
  _OWORD v24[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v25; // [rsp+80h] [rbp-80h]
  _BYTE Dst[56]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v27; // [rsp+C8h] [rbp-38h]
  char v28; // [rsp+D0h] [rbp-30h]
  char v29; // [rsp+D1h] [rbp-2Fh]
  char v30; // [rsp+D2h] [rbp-2Eh]
  char v31; // [rsp+D3h] [rbp-2Dh]
  char v32; // [rsp+D4h] [rbp-2Ch]
  int v33; // [rsp+D8h] [rbp-28h]
  _OWORD v34[3]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v35; // [rsp+110h] [rbp+10h]

  v23 = (unsigned int)a2;
  memset_0(Dst, 0, 0x50uLL);
  v25 = 0;
  v35 = 0LL;
  v14 = 0;
  v15 = *(_DWORD *)this;
  memset(v24, 0, sizeof(v24));
  memset(v34, 0, sizeof(v34));
  if ( v15 != 1431193940 )
  {
    if ( v15 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*((_BYTE *)this + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v16 = *((_QWORD *)this + 751);
    if ( !v16 || !*((_QWORD *)this + 752) )
      return (unsigned int)-1073741637;
LABEL_11:
    v17 = sub_1C005A04C((int *)this, v23, (__int64)Dst, a11);
    if ( v17 < 0 )
      return (unsigned int)v17;
    if ( !v27 && !v33 )
      return (unsigned int)-1073741811;
    v17 = sub_1C00596F4(v16, 0, a9, a10, (unsigned int *)v24, a11);
    if ( v17 < 0 )
      return (unsigned int)v17;
    if ( a3 )
    {
      v19 = a4 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          if ( v20 == 1 )
            v14 = 3;
        }
        else
        {
          v14 = 2;
        }
      }
      else
      {
        v14 = 1;
      }
      v21 = v14;
    }
    else
    {
      v21 = 1;
      v14 = 1;
      if ( v28 )
      {
        if ( v30 )
        {
          v14 = 3;
        }
        else if ( v32 )
        {
          v14 = 2;
        }
      }
      if ( v29 )
      {
        if ( v31 )
        {
          v21 = 3;
        }
        else if ( v32 )
        {
          v21 = 2;
        }
      }
    }
    v17 = sub_1C007A484(v16, 2LL, v34);
    if ( v17 < 0 )
    {
      sub_1C0042880(a11, 32LL, (__int64)"TcglibOpenSession");
      return (unsigned int)v17;
    }
    v17 = sub_1C007B138(v16, v34);
    if ( v17 >= 0 )
    {
      v17 = sub_1C007A7F0(v16, (unsigned int)v34, v23, v14, v21, a5, a6, a8 & -(__int64)(a7 != 0), (__int64)v24);
      sub_1C007B1C8(v16, v34, (unsigned int)v17);
      if ( v17 >= 0 )
      {
LABEL_41:
        sub_1C0079C54(v16, v34);
        return (unsigned int)v17;
      }
      v22 = "TcglibSetBand";
    }
    else
    {
      v22 = "TcglibStartTransaction";
    }
    sub_1C0042880(a11, 32LL, (__int64)v22);
    goto LABEL_41;
  }
  if ( (*((_BYTE *)this + 451) & 0x40) == 0 )
  {
    v16 = *((_QWORD *)this + 437);
    if ( v16 )
    {
      if ( *((_QWORD *)this + 438) )
        goto LABEL_11;
    }
  }
  return (unsigned int)-1073741637;
}
