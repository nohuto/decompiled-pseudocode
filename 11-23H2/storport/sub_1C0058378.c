/*
 * XREFs of sub_1C0058378 @ 0x1C0058378
 * Callers:
 *     sub_1C0050E94 @ 0x1C0050E94 (sub_1C0050E94.c)
 *     sub_1C0052EB0 @ 0x1C0052EB0 (sub_1C0052EB0.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C0042880 @ 0x1C0042880 (sub_1C0042880.c)
 *     sub_1C00596F4 @ 0x1C00596F4 (sub_1C00596F4.c)
 *     sub_1C00597E8 @ 0x1C00597E8 (sub_1C00597E8.c)
 *     sub_1C005A04C @ 0x1C005A04C (sub_1C005A04C.c)
 *     sub_1C005A398 @ 0x1C005A398 (sub_1C005A398.c)
 *     sub_1C0079AD4 @ 0x1C0079AD4 (sub_1C0079AD4.c)
 *     sub_1C0079C54 @ 0x1C0079C54 (sub_1C0079C54.c)
 *     sub_1C007A484 @ 0x1C007A484 (sub_1C007A484.c)
 *     sub_1C007A7F0 @ 0x1C007A7F0 (sub_1C007A7F0.c)
 *     sub_1C007B138 @ 0x1C007B138 (sub_1C007B138.c)
 *     sub_1C007B1C8 @ 0x1C007B1C8 (sub_1C007B1C8.c)
 */

__int64 __fastcall sub_1C0058378(__int64 a1, int a2, unsigned int a3, __int64 a4, void *a5, _BYTE *a6)
{
  int v8; // ebx
  __int64 v9; // rsi
  __int64 v10; // rdi
  int v12; // eax
  _QWORD *v13; // r13
  __int64 v14; // rdx
  __int64 v15; // r14
  _DWORD *v16; // rax
  unsigned int v17; // ecx
  _QWORD *v18; // rax
  void *v19; // rdi
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+68h] [rbp-98h]
  void *v25; // [rsp+70h] [rbp-90h]
  _OWORD v26[2]; // [rsp+78h] [rbp-88h] BYREF
  int v27; // [rsp+98h] [rbp-68h]
  _BYTE Dst[80]; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v29[3]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v30; // [rsp+120h] [rbp+20h]

  v24 = a4;
  v25 = a5;
  memset_0(Dst, 0, sizeof(Dst));
  P = 0LL;
  v23 = 0LL;
  v27 = 0;
  v30 = 0LL;
  memset(v26, 0, sizeof(v26));
  memset(v29, 0, sizeof(v29));
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( *(_DWORD *)a1 == 1431193940 )
  {
    if ( (*(_BYTE *)(a1 + 451) & 0x40) != 0 )
      return (unsigned int)-1073741637;
    v9 = *(_QWORD *)(a1 + 3496);
    if ( !v9 )
      return (unsigned int)-1073741637;
    v10 = *(_QWORD *)(a1 + 3504);
  }
  else
  {
    if ( *(_DWORD *)a1 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*(_BYTE *)(a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v9 = *(_QWORD *)(a1 + 6008);
    if ( !v9 )
      return (unsigned int)-1073741637;
    v10 = *(_QWORD *)(a1 + 6016);
  }
  if ( !v10 || !*(_BYTE *)(v10 + 152) || !*(_BYTE *)(v10 + 153) || !*(_BYTE *)(v10 + 134) )
    return (unsigned int)-1073741637;
  v12 = sub_1C005A398(a1, &P, a6);
  v13 = P;
  v8 = v12;
  if ( v12 >= 0 )
  {
    v14 = *(unsigned int *)(v10 + 128);
    v15 = 0LL;
    if ( (_DWORD)v14 )
    {
      v16 = (char *)P + 72;
      while ( !*(v16 - 16) || !*v16 || *v16 != a2 )
      {
        v15 = (unsigned int)(v15 + 1);
        v16 += 20;
        if ( (unsigned int)v15 >= (unsigned int)v14 )
          goto LABEL_24;
      }
      v8 = -1073741808;
      goto LABEL_31;
    }
LABEL_24:
    LOBYTE(v14) = 1;
    v8 = sub_1C00596F4(v9, v14, a3, v24, v26, a6);
    if ( v8 >= 0 )
    {
      v8 = sub_1C007A484(v9, 2LL, v29);
      if ( v8 < 0 )
      {
        sub_1C0042880(a6, 32LL, (__int64)"TcglibOpenSession");
        goto LABEL_31;
      }
      v8 = sub_1C007B138(v9, v29);
      if ( v8 < 0 )
      {
        sub_1C0042880(a6, 32LL, (__int64)"TcglibStartTransaction");
LABEL_30:
        sub_1C0079C54(v9, v29);
        goto LABEL_31;
      }
      v8 = sub_1C0079AD4(v9, (unsigned int)v29, a2, (unsigned int)v26, (__int64)&v23);
      if ( v8 >= 0 )
      {
        v17 = *(_DWORD *)(v10 + 128);
        v15 = 0LL;
        if ( v17 )
        {
          v18 = v13;
          while ( *v18 != v23 )
          {
            v15 = (unsigned int)(v15 + 1);
            v18 += 10;
            if ( (unsigned int)v15 >= v17 )
              goto LABEL_41;
          }
          v8 = sub_1C007A7F0(v9, (unsigned int)v29, v13[10 * v15 + 1], 1, 1, 1, 1, 0LL, 0LL);
          if ( v8 < 0 )
            sub_1C0042880(a6, 32LL, (__int64)"TcglibSetBand");
        }
LABEL_41:
        if ( (_DWORD)v15 != *(_DWORD *)(v10 + 128) )
        {
LABEL_44:
          sub_1C007B1C8(v9, v29, (unsigned int)v8);
          if ( v8 >= 0 )
          {
            sub_1C0079C54(v9, v29);
            v19 = v25;
            memset_0(v25, 0, 0x40uLL);
            v8 = sub_1C005A04C(a1, LODWORD(v13[10 * v15 + 1]), Dst, a6);
            if ( v8 >= 0 )
              sub_1C00597E8(Dst, v19);
            goto LABEL_31;
          }
          goto LABEL_30;
        }
        v8 = -1073741275;
      }
      sub_1C0042880(a6, 32LL, (__int64)"TcglibAssignNamespaceLocking");
      goto LABEL_44;
    }
  }
LABEL_31:
  if ( v13 )
    ExFreePoolWithTag(v13, 0x43546152u);
  return (unsigned int)v8;
}
