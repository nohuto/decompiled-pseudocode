/*
 * XREFs of EtwTraceJobSetQuery @ 0x1409E592C
 * Callers:
 *     NtQueryInformationJobObject @ 0x1406A1130 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     PspSetNetRateControl @ 0x1409B31F4 (PspSetNetRateControl.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     EtwpCopyJobGuidSafe @ 0x1408A6D94 (EtwpCopyJobGuidSafe.c)
 */

_QWORD *__fastcall EtwTraceJobSetQuery(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, unsigned __int16 a6)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // r10d
  _DWORD *v9; // r11
  __int16 v10; // r9
  _QWORD *result; // rax
  int v12; // edx
  __int64 v13; // r10
  __int64 v14; // r11
  char **v15; // rbx
  _QWORD *v16; // rax
  __int64 *v17; // rdi
  __int64 *v18; // rsi
  _QWORD *v19; // r14
  unsigned __int64 **v20; // r15
  unsigned __int64 **v21; // r12
  _QWORD *v22; // r13
  _QWORD *v23; // r9
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  _QWORD *v26; // r9
  _QWORD *v27; // r9
  _QWORD *v28; // r9
  __int64 v29; // rax
  _QWORD *v30; // r8
  __int64 v31; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v32; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *v34; // [rsp+50h] [rbp-B8h]
  _QWORD *v35; // [rsp+58h] [rbp-B0h]
  _QWORD *v36; // [rsp+60h] [rbp-A8h]
  _QWORD *v37; // [rsp+68h] [rbp-A0h]
  _QWORD v38[3]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v39; // [rsp+88h] [rbp-80h]
  _QWORD v40[2]; // [rsp+98h] [rbp-70h] BYREF
  char *v41; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v42; // [rsp+B0h] [rbp-58h]
  __int64 v43; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v44; // [rsp+C0h] [rbp-48h]
  __int64 v45; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v46; // [rsp+D0h] [rbp-38h]
  _QWORD v47[2]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v48[2]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v49[2]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v50[2]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v51[2]; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v52[2]; // [rsp+128h] [rbp+20h] BYREF
  _QWORD v53[2]; // [rsp+138h] [rbp+30h] BYREF
  _QWORD v54[2]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v55[2]; // [rsp+158h] [rbp+50h] BYREF
  _QWORD v56[2]; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v57[2]; // [rsp+178h] [rbp+70h] BYREF
  _QWORD v58[8]; // [rsp+188h] [rbp+80h] BYREF

  LODWORD(v31) = 0;
  v33 = 0LL;
  v32 = 0LL;
  v39 = 0LL;
  *(_OWORD *)&v38[1] = 0LL;
  EtwpCopyJobGuidSafe(&v38[1], a1);
  if ( v6 )
    LODWORD(v39) = *(_DWORD *)(v6 + 1452);
  else
    LODWORD(v39) = 0;
  v10 = a6;
  result = &v38[1];
  HIDWORD(v39) = v8;
  v40[0] = &v38[1];
  v40[1] = 24LL;
  if ( a6 != 1829 )
  {
    if ( a6 == 1830 )
    {
      if ( v8 != 13 )
        return result;
      v41 = (char *)v7;
      v43 = v7 + 4;
      v12 = 19;
      v42 = 4LL;
      v45 = v7 + 8;
      v10 = 1835;
      v44 = 4LL;
      v47[0] = v7 + 16;
      v48[0] = v7 + 24;
      v49[0] = v7 + 32;
      v50[0] = v7 + 40;
      v51[0] = v7 + 48;
      v52[0] = v7 + 56;
      v53[0] = v7 + 80;
      v54[0] = v7 + 64;
      v55[0] = v7 + 72;
      v56[0] = v7 + 76;
      v57[0] = v7 + 88;
      v58[0] = v7 + 92;
      v58[2] = v7 + 96;
      v58[4] = v7 + 100;
      LODWORD(v31) = *v9;
      v58[6] = &v31;
      v46 = 8LL;
      v47[1] = 8LL;
      v48[1] = 8LL;
      v49[1] = 8LL;
      v50[1] = 8LL;
      v51[1] = 8LL;
      v52[1] = 8LL;
      v53[1] = 8LL;
      v54[1] = 8LL;
      v55[1] = 4LL;
      v56[1] = 4LL;
      v57[1] = 4LL;
      v58[1] = 4LL;
      v58[3] = 4LL;
      v58[5] = 4LL;
      v58[7] = 4LL;
    }
    else
    {
      if ( (unsigned int)a6 - 1831 > 1 )
        return result;
      v42 = 4LL;
      v41 = &a5;
      v12 = 2;
    }
    return (_QWORD *)EtwTraceKernelEvent((int)v40, v12, 0x80000u, v10, 5249284);
  }
  if ( v8 == 12 )
  {
    v12 = 13;
    v34 = v51;
    v15 = &v41;
    v35 = v52;
    v17 = &v43;
    v36 = v53;
    v18 = &v45;
    v37 = v54;
    v19 = v47;
    v16 = v55;
    v20 = (unsigned __int64 **)v48;
    v21 = (unsigned __int64 **)v49;
    v22 = v50;
    v13 = v7 + 8;
    v14 = v7 + 16;
LABEL_16:
    *((_DWORD *)v15 + 3) = 0;
    v23 = v34;
    *((_DWORD *)v15 + 2) = 4;
    v38[0] = v16;
    *v15 = (char *)(v7 + 40);
    v24 = *(_QWORD *)(v7 + 48);
    *v17 = v7;
    v17[1] = 8LL;
    *v18 = v13;
    v18[1] = 8LL;
    *v19 = v14;
    v19[1] = 8LL;
    v20[1] = (unsigned __int64 *)8;
    v32 = v24 >> 12;
    *v20 = &v32;
    v25 = *(_QWORD *)(v7 + 24);
    v21[1] = (unsigned __int64 *)8;
    v33 = v25 >> 12;
    *v21 = &v33;
    *v22 = v7 + 32;
    v22[1] = 4LL;
    *v23 = v7 + 36;
    v23[1] = 4LL;
    v26 = v35;
    *v35 = v7 + 44;
    v26[1] = 4LL;
    v27 = v36;
    *v36 = v7 + 56;
    v27[1] = 4LL;
    v28 = v37;
    *v37 = v7 + 60;
    v29 = v7 + 64;
    v30 = (_QWORD *)v38[0];
    v28[1] = 4LL;
    v10 = 1833;
    *v30 = v29;
    v30[1] = 4LL;
    return (_QWORD *)EtwTraceKernelEvent((int)v40, v12, 0x80000u, v10, 5249284);
  }
  if ( v8 != 15 )
  {
    if ( v8 != 32 )
      return result;
    v41 = (char *)v7;
    v34 = v54;
    v13 = v7 + 8;
    v42 = 4LL;
    v35 = v55;
    v14 = v7 + 16;
    v43 = v7 + 8;
    v36 = v56;
    v12 = 16;
    v44 = 8LL;
    v37 = v57;
    v15 = (char **)v47;
    v16 = v58;
    v45 = v7 + 16;
    v46 = 1LL;
    v17 = v48;
    v18 = v49;
    v19 = v50;
    v20 = (unsigned __int64 **)v51;
    v21 = (unsigned __int64 **)v52;
    v22 = v53;
    goto LABEL_16;
  }
  v41 = (char *)v7;
  v43 = v7 + 4;
  v12 = 3;
  v42 = 4LL;
  v10 = 1836;
  v44 = 4LL;
  return (_QWORD *)EtwTraceKernelEvent((int)v40, v12, 0x80000u, v10, 5249284);
}
