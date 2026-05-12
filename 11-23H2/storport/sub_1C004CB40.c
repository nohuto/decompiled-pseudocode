/*
 * XREFs of sub_1C004CB40 @ 0x1C004CB40
 * Callers:
 *     sub_1C00480F8 @ 0x1C00480F8 (sub_1C00480F8.c)
 *     sub_1C004A6B0 @ 0x1C004A6B0 (sub_1C004A6B0.c)
 *     sub_1C00A408C @ 0x1C00A408C (sub_1C00A408C.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C0012F88 @ 0x1C0012F88 (sub_1C0012F88.c)
 *     sub_1C001ABEC @ 0x1C001ABEC (sub_1C001ABEC.c)
 *     sub_1C001D420 @ 0x1C001D420 (sub_1C001D420.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0044F40 @ 0x1C0044F40 (sub_1C0044F40.c)
 */

__int64 __fastcall sub_1C004CB40(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  unsigned int v5; // r14d
  unsigned int v6; // r10d
  unsigned int v10; // r9d
  char i; // r15
  char *v12; // rax
  int v13; // r10d
  char *v14; // r11
  unsigned int v15; // ebx
  unsigned int j; // edx
  char *v17; // rax
  int v18; // edx
  unsigned int v19; // r9d
  unsigned int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v24; // r9
  __int64 v25; // rcx
  unsigned int v26; // r11d
  __int64 v27; // rsi
  char *v28; // rax
  int v29; // r11d
  __int64 v30; // r10
  char *v31; // r12
  unsigned int v32; // r8d
  __int128 v33; // xmm0
  __int64 v34; // rax
  char v35; // cl
  unsigned int v36; // edx
  char *v37; // rax
  int v38; // edx
  __int64 v39; // r9
  __int64 v40; // r10
  __int64 v41; // rcx
  __int64 v42; // r12
  bool v43; // zf
  _QWORD *v44; // rax
  KSPIN_LOCK *v45; // rcx
  char v46; // r15
  int v47; // esi
  __int64 v48; // rcx
  int v49; // eax
  int v50; // eax
  int v51; // ebx
  __int64 v52; // r8
  __int64 v53; // r9
  int v54; // r10d
  int v55; // r11d
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  int v60; // r10d
  char v61; // [rsp+30h] [rbp-D0h] BYREF
  char v62; // [rsp+31h] [rbp-CFh] BYREF
  char v63; // [rsp+32h] [rbp-CEh] BYREF
  int v64; // [rsp+34h] [rbp-CCh] BYREF
  int v65; // [rsp+38h] [rbp-C8h] BYREF
  int v66; // [rsp+3Ch] [rbp-C4h] BYREF
  int v67; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v68; // [rsp+48h] [rbp-B8h] BYREF
  int v69; // [rsp+50h] [rbp-B0h] BYREF
  int v70; // [rsp+54h] [rbp-ACh] BYREF
  _QWORD InputBuffer[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v72; // [rsp+68h] [rbp-98h]
  int v73; // [rsp+6Ch] [rbp-94h]
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+70h] [rbp-90h] BYREF
  __int64 v75; // [rsp+90h] [rbp-70h]
  __int64 v76; // [rsp+98h] [rbp-68h]
  __int64 *v77; // [rsp+A0h] [rbp-60h]
  __int64 v78; // [rsp+A8h] [rbp-58h]
  int *v79; // [rsp+B0h] [rbp-50h]
  __int64 v80; // [rsp+B8h] [rbp-48h]
  char *v81; // [rsp+C0h] [rbp-40h]
  __int64 v82; // [rsp+C8h] [rbp-38h]
  int *v83; // [rsp+D0h] [rbp-30h]
  __int64 v84; // [rsp+D8h] [rbp-28h]
  int *v85; // [rsp+E0h] [rbp-20h]
  __int64 v86; // [rsp+E8h] [rbp-18h]
  int *v87; // [rsp+F0h] [rbp-10h]
  __int64 v88; // [rsp+F8h] [rbp-8h]
  int *v89; // [rsp+100h] [rbp+0h]
  __int64 v90; // [rsp+108h] [rbp+8h]
  int *v91; // [rsp+110h] [rbp+10h]
  __int64 v92; // [rsp+118h] [rbp+18h]
  int *v93; // [rsp+120h] [rbp+20h]
  __int64 v94; // [rsp+128h] [rbp+28h]
  int *v95; // [rsp+130h] [rbp+30h]
  __int64 v96; // [rsp+138h] [rbp+38h]
  __int64 *v97; // [rsp+140h] [rbp+40h]
  __int64 v98; // [rsp+148h] [rbp+48h]

  v4 = a2[2];
  v5 = 0;
  v6 = 0;
  v68 = a4;
  v61 = 0;
  v10 = 104;
  for ( i = 1; v6 < v4; v6 = v13 + 1 )
  {
    v12 = sub_1C0012F88(a2, v6);
    v14 = v12;
    if ( v12 )
    {
      v10 += 56;
      if ( *((_DWORD *)v12 + 2) > v5 )
        v5 = *((_DWORD *)v12 + 2);
    }
    v15 = *((_DWORD *)v12 + 2);
    for ( j = 0; j < v15; v10 = v20 )
    {
      v17 = sub_1C0044F40(v14, j);
      v20 = v19 + 24;
      if ( !v17 )
        v20 = v19;
      j = v18 + 1;
    }
  }
  v21 = sub_1C0007CF4(64LL, v10, 1330667858LL, a1);
  v22 = v21;
  if ( !v21 )
    return 3221225626LL;
  *(_DWORD *)(v21 + 96) = v4;
  LOBYTE(v24) = 3;
  *(_DWORD *)v21 = 3;
  *(_QWORD *)(v21 + 88) = a3;
  v25 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v25 == 1094997074 && ((a2[3] & 2) != 0 || *(char *)(v25 + 107) < 0 && *(_DWORD *)(v25 + 4912) == -1) )
    *(_QWORD *)(v21 + 8) |= 0xFFEE000000000000uLL;
  *(_QWORD *)(v21 + 8) |= 0x20uLL;
  v26 = 0;
  if ( v4 )
  {
    do
    {
      v27 = 56LL * v26;
      v28 = sub_1C0012F88(a2, v26);
      *(_QWORD *)(v27 + v22 + 136) = v30;
      v31 = v28;
      v32 = *((_DWORD *)v28 + 2);
      *(_DWORD *)(v27 + v22 + 132) = v32;
      *(_DWORD *)(v27 + v22 + 128) = *((_DWORD *)v28 + 3);
      v33 = *((_OWORD *)v28 + 1);
      *(_QWORD *)(v27 + v22 + 120) = 1LL;
      v34 = *(_QWORD *)(v27 + v22 + 120);
      *(_OWORD *)(v27 + v22 + 104) = v33;
      if ( (a2[3] & 0x100) != 0 )
        v34 = v24;
      v35 = 0;
      *(_QWORD *)(v27 + v22 + 120) = v34;
      if ( v32 <= 1 )
        v35 = i;
      v36 = 0;
      i = v35;
      if ( v32 )
      {
        do
        {
          v37 = sub_1C0044F40(v31, v36);
          v36 = v38 + 1;
          *(_DWORD *)(v40 + 8 * v39 + 16) = *((_DWORD *)v37 + 6);
          *(_QWORD *)(v40 + 8 * v39 + 8) = *((_QWORD *)v37 + 2);
          *(_QWORD *)(v40 + 8 * v39) = *((_QWORD *)v37 + 1);
        }
        while ( v36 < *(_DWORD *)(v27 + v22 + 132) );
        LOBYTE(v24) = 3;
      }
      v26 = v29 + 1;
    }
    while ( v26 < *(_DWORD *)(v22 + 96) );
  }
  v41 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v41 != 1431193940 )
  {
    v42 = *(_QWORD *)(v41 + 32);
    if ( !i )
      *(_QWORD *)(v22 + 32) = sub_1C004E5E0;
    v43 = byte_1C00933D4 == 0;
    *(_QWORD *)(v22 + 16) = sub_1C00203B0;
    *(_QWORD *)(v22 + 24) = sub_1C0020470;
    *(_QWORD *)(v22 + 48) = sub_1C004E920;
    *(_QWORD *)(v22 + 40) = sub_1C004EBE0;
    *(_QWORD *)(v22 + 56) = sub_1C004E850;
    if ( !v43 && ((unsigned __int8)a2[3] & (unsigned __int8)v24) == 0 )
    {
      *(_QWORD *)(v22 + 64) = sub_1C004E300;
      *(_QWORD *)(v22 + 72) = sub_1C004DFA0;
      if ( (a2[3] & 0x40) != 0 )
        *(_QWORD *)(v22 + 8) |= 6uLL;
      v44 = (_QWORD *)(v41 + 5656);
      v45 = (KSPIN_LOCK *)(v41 + 5680);
      goto LABEL_39;
    }
LABEL_40:
    v46 = 1;
    goto LABEL_41;
  }
  v42 = *(_QWORD *)(v41 + 8);
  if ( !i )
    *(_QWORD *)(v22 + 32) = sub_1C0026320;
  v43 = byte_1C00933D4 == 0;
  *(_QWORD *)(v22 + 16) = sub_1C00013E0;
  *(_QWORD *)(v22 + 24) = sub_1C00011C0;
  *(_QWORD *)(v22 + 48) = sub_1C004F920;
  *(_QWORD *)(v22 + 40) = sub_1C004FCC0;
  *(_QWORD *)(v22 + 56) = sub_1C004F8E0;
  if ( v43 || ((unsigned __int8)a2[3] & (unsigned __int8)v24) != 0 )
    goto LABEL_40;
  *(_QWORD *)(v22 + 8) |= 6uLL;
  *(_QWORD *)(v22 + 64) = sub_1C004F2C0;
  *(_QWORD *)(v22 + 72) = sub_1C004EDF0;
  v44 = (_QWORD *)(v41 + 3400);
  v45 = (KSPIN_LOCK *)(v41 + 3424);
LABEL_39:
  v44[1] = v44;
  *v44 = v44;
  KeInitializeSpinLock(v45);
  v46 = v61;
LABEL_41:
  v47 = PoFxRegisterDevice(a1, v22, v68);
  ExFreePoolWithTag((PVOID)v22, 0x4F506152u);
  if ( v47 >= 0 )
  {
    if ( v46 )
    {
      InputBuffer[0] = 58LL;
      v43 = (a2[3] & 0x40) == 0;
      v73 = 0;
      InputBuffer[1] = v42;
      v49 = 2;
      if ( !v43 )
        v49 = 6;
      v72 = v49;
      ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x18u, 0LL, 0);
    }
    v50 = **(_DWORD **)(a1 + 64);
    if ( v50 == 1431193940 )
    {
      v51 = 0;
      if ( (unsigned int)*a2 >= 2 )
        v51 = a2[4];
      if ( (unsigned int)dword_1C00930C8 > 5 )
      {
        if ( sub_1C001ABEC(v48, 0x400000000000LL) )
        {
          v56 = *(_QWORD *)(v53 + 24);
          v76 = 16LL;
          v78 = 16LL;
          v75 = v56 + 5000;
          v77 = (__int64 *)(v53 + 2024);
          v69 = *(_DWORD *)(v56 + 56);
          v79 = &v69;
          v61 = *(_BYTE *)(v53 + 96);
          v81 = &v61;
          v62 = *(_BYTE *)(v53 + 97);
          v83 = (int *)&v62;
          v63 = *(_BYTE *)(v53 + 98);
          v85 = (int *)&v63;
          v87 = &v70;
          v64 = a2[2];
          v89 = &v64;
          v91 = &v65;
          v66 = a2[3];
          v93 = &v66;
          v95 = &v67;
          v97 = &v68;
          v80 = 4LL;
          v82 = 1LL;
          v84 = 1LL;
          v86 = 1LL;
          v70 = v54;
          v88 = 4LL;
          v90 = 4LL;
          v65 = v5;
          v92 = 4LL;
          v94 = 4LL;
          v67 = v51;
          v96 = 4LL;
          LODWORD(v68) = v55;
          v98 = 4LL;
          sub_1C001D420(v56, byte_1C0084D77, v52, v53, 0xEu, &v74);
        }
      }
    }
    else if ( v50 == 1094997074
           && (unsigned int)dword_1C00930C8 > 5
           && sub_1C001ABEC((unsigned int)*a2, 0x400000000000LL) )
    {
      v76 = 16LL;
      v75 = v59 + 5000;
      LODWORD(v68) = v57;
      v77 = &v68;
      v67 = a2[2];
      v79 = &v67;
      v81 = (char *)&v66;
      v65 = a2[3];
      v83 = &v65;
      v85 = &v64;
      v78 = 4LL;
      v80 = 4LL;
      v66 = v5;
      v82 = 4LL;
      v84 = 4LL;
      v64 = v60;
      v86 = 4LL;
      sub_1C001D420(v57, (unsigned __int8 *)dword_1C0084E3E, v58, v59, 8u, &v74);
    }
  }
  return (unsigned int)v47;
}
