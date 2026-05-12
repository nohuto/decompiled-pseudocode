/*
 * XREFs of sub_1C00586DC @ 0x1C00586DC
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
 *     sub_1C0079C54 @ 0x1C0079C54 (sub_1C0079C54.c)
 *     sub_1C007A484 @ 0x1C007A484 (sub_1C007A484.c)
 *     sub_1C007A7F0 @ 0x1C007A7F0 (sub_1C007A7F0.c)
 *     sub_1C007A9C8 @ 0x1C007A9C8 (sub_1C007A9C8.c)
 *     sub_1C007B138 @ 0x1C007B138 (sub_1C007B138.c)
 *     sub_1C007B1C8 @ 0x1C007B1C8 (sub_1C007B1C8.c)
 */

__int64 __fastcall sub_1C00586DC(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char a4,
        unsigned int a5,
        __int64 a6,
        void *a7,
        _BYTE *a8)
{
  unsigned int v11; // r15d
  int v12; // ebx
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v16; // r8d
  unsigned int v17; // ecx
  unsigned __int64 v18; // r8
  int v19; // eax
  PVOID v20; // r13
  unsigned int v21; // ebx
  unsigned int v22; // r8d
  unsigned __int64 *v23; // rax
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r11
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  int v30; // r9d
  const char *v31; // r8
  void *v32; // rdi
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v35; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v36; // [rsp+68h] [rbp-98h]
  __int64 v37; // [rsp+70h] [rbp-90h]
  void *v38; // [rsp+78h] [rbp-88h]
  __int128 v39; // [rsp+80h] [rbp-80h] BYREF
  __int128 v40; // [rsp+90h] [rbp-70h]
  __int128 v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+B0h] [rbp-50h]
  _OWORD v43[2]; // [rsp+B8h] [rbp-48h] BYREF
  int v44; // [rsp+D8h] [rbp-28h]
  _BYTE Dst[80]; // [rsp+E0h] [rbp-20h] BYREF
  _OWORD v46[3]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v47; // [rsp+160h] [rbp+60h]

  v37 = a6;
  v38 = a7;
  v35 = a3;
  v36 = a2;
  v11 = 0;
  v39 = 0LL;
  v42 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  memset_0(Dst, 0, sizeof(Dst));
  v44 = 0;
  P = 0LL;
  v47 = 0LL;
  memset(v43, 0, sizeof(v43));
  memset(v46, 0, sizeof(v46));
  if ( !a3 )
    return (unsigned int)-1073741811;
  if ( *(_DWORD *)a1 == 1431193940 )
  {
    if ( (*(_BYTE *)(a1 + 451) & 0x40) != 0 )
      return (unsigned int)-1073741637;
    v13 = *(_QWORD *)(a1 + 3496);
    if ( !v13 )
      return (unsigned int)-1073741637;
    v14 = *(_QWORD *)(a1 + 3504);
  }
  else
  {
    if ( *(_DWORD *)a1 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*(_BYTE *)(a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v13 = *(_QWORD *)(a1 + 6008);
    if ( !v13 )
      return (unsigned int)-1073741637;
    v14 = *(_QWORD *)(a1 + 6016);
  }
  if ( !v14 || *(_BYTE *)(v14 + 152) && *(_BYTE *)(v14 + 153) && *(_BYTE *)(v14 + 134) )
    return (unsigned int)-1073741637;
  v16 = *(_DWORD *)(v14 + 100);
  v17 = *(_DWORD *)(v14 + 112) * v16;
  v18 = (unsigned int)(*(_DWORD *)(v14 + 104) * v16);
  if ( (a2 - v17) % v18 || a3 % v18 )
    return (unsigned int)-1073741811;
  v19 = sub_1C005A398(a1, &P, a8);
  v20 = P;
  v12 = v19;
  if ( v19 >= 0 )
  {
    v21 = *(_DWORD *)(v14 + 128);
    v22 = 0;
    if ( v21 )
    {
      v23 = (unsigned __int64 *)((char *)P + 48);
      do
      {
        if ( *((_DWORD *)v23 - 10) )
        {
          v24 = v23[1];
          if ( v24 )
          {
            if ( (v25 = *v23, v26 = *v23 + v24, v36 >= *v23) && v36 < v26
              || (v20 = P, v27 = v36 + v35, v36 + v35 > v25) && v27 <= v26
              || v36 < v25 && v27 > v26 )
            {
              v12 = -1073741808;
              goto LABEL_52;
            }
          }
          if ( !*v23 && !v24 && !v11 )
            v11 = v22;
        }
        ++v22;
        v23 += 10;
      }
      while ( v22 < v21 );
      if ( !v11 )
        goto LABEL_51;
      LODWORD(v39) = 56;
      *((_QWORD *)&v39 + 1) = v36 / *(unsigned int *)(v14 + 100);
      v28 = *(unsigned int *)(v14 + 100);
      v29 = v35 % v28;
      LOBYTE(v29) = a4;
      *(_QWORD *)&v40 = v35 / v28;
      v12 = sub_1C00596F4(v13, v29, a5, v37, v43, a8);
      if ( v12 < 0 )
        goto LABEL_52;
      v12 = sub_1C007A484(v13, 2LL, v46);
      if ( v12 < 0 )
      {
        sub_1C0042880(a8, 32LL, (__int64)"TcglibOpenSession");
        goto LABEL_52;
      }
      v12 = sub_1C007B138(v13, v46);
      if ( v12 < 0 )
      {
        sub_1C0042880(a8, 32LL, (__int64)"TcglibStartTransaction");
LABEL_42:
        sub_1C0079C54(v13, v46);
        goto LABEL_52;
      }
      LOBYTE(v30) = a4;
      v12 = sub_1C007A9C8(v13, (unsigned int)v46, v11, v30, (__int64)v43, (__int64)&v39);
      if ( v12 < 0 )
      {
        v31 = "TcglibSetBandLocationEx";
      }
      else
      {
        v12 = sub_1C007A7F0(v13, (unsigned int)v46, v11, 1, 1, 1, 1, 0LL, 0LL);
        if ( v12 >= 0 )
          goto LABEL_48;
        v31 = "TcglibSetBand";
      }
      sub_1C0042880(a8, 32LL, (__int64)v31);
LABEL_48:
      sub_1C007B1C8(v13, v46, (unsigned int)v12);
      if ( v12 >= 0 )
      {
        sub_1C0079C54(v13, v46);
        v32 = v38;
        memset_0(v38, 0, 0x40uLL);
        v12 = sub_1C005A04C(a1, v11, Dst, a8);
        if ( v12 >= 0 )
          sub_1C00597E8(Dst, v32);
        goto LABEL_52;
      }
      goto LABEL_42;
    }
LABEL_51:
    v12 = -1073741670;
  }
LABEL_52:
  if ( v20 )
    ExFreePoolWithTag(v20, 0x43546152u);
  return (unsigned int)v12;
}
