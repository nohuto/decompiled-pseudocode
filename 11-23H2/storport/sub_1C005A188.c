/*
 * XREFs of sub_1C005A188 @ 0x1C005A188
 * Callers:
 *     sub_1C0051930 @ 0x1C0051930 (sub_1C0051930.c)
 *     sub_1C00539B4 @ 0x1C00539B4 (sub_1C00539B4.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C0042880 @ 0x1C0042880 (sub_1C0042880.c)
 *     sub_1C00596F4 @ 0x1C00596F4 (sub_1C00596F4.c)
 *     sub_1C005A04C @ 0x1C005A04C (sub_1C005A04C.c)
 *     sub_1C0079C54 @ 0x1C0079C54 (sub_1C0079C54.c)
 *     sub_1C007A184 @ 0x1C007A184 (sub_1C007A184.c)
 *     sub_1C007A484 @ 0x1C007A484 (sub_1C007A484.c)
 *     sub_1C007B138 @ 0x1C007B138 (sub_1C007B138.c)
 *     sub_1C007B1C8 @ 0x1C007B1C8 (sub_1C007B1C8.c)
 */

__int64 __fastcall sub_1C005A188(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        const void *a6,
        _BYTE *a7)
{
  size_t v8; // r15
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rsi
  int v14; // ebx
  int v16; // r9d
  const char *v17; // r8
  _OWORD v18[2]; // [rsp+38h] [rbp-B9h] BYREF
  int v19; // [rsp+58h] [rbp-99h]
  _BYTE Dst[56]; // [rsp+60h] [rbp-91h] BYREF
  __int64 v21; // [rsp+98h] [rbp-59h]
  int v22; // [rsp+A8h] [rbp-49h]
  _OWORD v23[3]; // [rsp+B0h] [rbp-41h] BYREF
  __int64 v24; // [rsp+E0h] [rbp-11h]

  v8 = a3;
  memset_0(Dst, 0, 0x50uLL);
  v19 = 0;
  v24 = 0LL;
  v11 = *(_DWORD *)a1;
  memset(v18, 0, sizeof(v18));
  memset(v23, 0, sizeof(v23));
  if ( v11 == 1431193940 )
  {
    if ( (*(_BYTE *)(a1 + 451) & 0x40) != 0 )
      return (unsigned int)-1073741637;
    v12 = *(_QWORD *)(a1 + 3496);
    if ( !v12 )
      return (unsigned int)-1073741637;
    v13 = *(_QWORD *)(a1 + 3504);
  }
  else
  {
    if ( v11 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*(_BYTE *)(a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v12 = *(_QWORD *)(a1 + 6008);
    if ( !v12 )
      return (unsigned int)-1073741637;
    v13 = *(_QWORD *)(a1 + 6016);
  }
  if ( v13 )
  {
    v14 = sub_1C005A04C((int *)a1, a2, (__int64)Dst, a7);
    if ( v14 < 0 )
      return (unsigned int)v14;
    if ( !v21 && !v22
      || !(_DWORD)v8
      || (unsigned int)v8 > *(_DWORD *)(v13 + 140) / (unsigned int)*(unsigned __int16 *)(v13 + 136) )
    {
      return (unsigned int)-1073741811;
    }
    memset_0(a4, 0, v8);
    v14 = sub_1C00596F4(v12, 0, a5, a6, (unsigned int *)v18, a7);
    if ( v14 < 0 )
      return (unsigned int)v14;
    v14 = sub_1C007A484(v12, 2LL, v23);
    if ( v14 < 0 )
    {
      sub_1C0042880(a7, 32LL, (__int64)"TcglibOpenSession");
      return (unsigned int)v14;
    }
    v14 = sub_1C007B138(v12, v23);
    if ( v14 >= 0 )
    {
      v14 = sub_1C007A184(v12, (unsigned int)v23, a2, v16, v8, (__int64)a4);
      sub_1C007B1C8(v12, v23, (unsigned int)v14);
      if ( v14 >= 0 )
      {
LABEL_26:
        sub_1C0079C54(v12, v23);
        return (unsigned int)v14;
      }
      v17 = "TcglibGetBandMetadata";
    }
    else
    {
      v17 = "TcglibStartTransaction";
    }
    sub_1C0042880(a7, 32LL, (__int64)v17);
    goto LABEL_26;
  }
  return (unsigned int)-1073741637;
}
