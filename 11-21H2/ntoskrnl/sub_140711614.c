/*
 * XREFs of sub_140711614 @ 0x140711614
 * Callers:
 *     sub_14072ACC0 @ 0x14072ACC0 (sub_14072ACC0.c)
 * Callees:
 *     sub_140254FD8 @ 0x140254FD8 (sub_140254FD8.c)
 *     sub_140257E80 @ 0x140257E80 (sub_140257E80.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_1402A1054 @ 0x1402A1054 (sub_1402A1054.c)
 *     sub_1402A10EC @ 0x1402A10EC (sub_1402A10EC.c)
 *     sub_1402A1770 @ 0x1402A1770 (sub_1402A1770.c)
 *     sub_1402A188C @ 0x1402A188C (sub_1402A188C.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14041BE20 (ZwQuerySystemInformation.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14070BA00 @ 0x14070BA00 (sub_14070BA00.c)
 *     sub_140711C6C @ 0x140711C6C (sub_140711C6C.c)
 *     sub_140711CD4 @ 0x140711CD4 (sub_140711CD4.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_1407B69F0 @ 0x1407B69F0 (sub_1407B69F0.c)
 *     sub_1407EF848 @ 0x1407EF848 (sub_1407EF848.c)
 *     sub_140882DDC @ 0x140882DDC (sub_140882DDC.c)
 */

__int64 __fastcall sub_140711614(__int64 a1, KPROCESSOR_MODE a2, _DWORD *a3)
{
  __int64 *v5; // r15
  __int64 v6; // rsi
  unsigned __int64 v7; // r14
  _DWORD *v8; // rbx
  unsigned int v9; // eax
  void *i; // rcx
  __int64 v11; // rax
  void *j; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned int v15; // eax
  int v16; // ebx
  __int64 v17; // rax
  __int64 *k; // rcx
  int v19; // ebx
  unsigned __int64 v20; // rax
  int v21; // ebx
  __int64 v23; // rax
  int v24; // eax
  char v25; // [rsp+20h] [rbp-208h]
  char v26[3]; // [rsp+21h] [rbp-207h] BYREF
  int v27; // [rsp+24h] [rbp-204h]
  __int128 v28; // [rsp+28h] [rbp-200h] BYREF
  __int64 v29; // [rsp+38h] [rbp-1F0h]
  _QWORD v30[12]; // [rsp+40h] [rbp-1E8h] BYREF
  unsigned __int64 v31; // [rsp+A0h] [rbp-188h] BYREF
  _DWORD *v32; // [rsp+A8h] [rbp-180h]
  __int64 v33; // [rsp+B0h] [rbp-178h]
  _DWORD *v34; // [rsp+B8h] [rbp-170h]
  PVOID Object; // [rsp+C0h] [rbp-168h]
  _DWORD *v36; // [rsp+D0h] [rbp-158h]
  __int128 v37; // [rsp+D8h] [rbp-150h] BYREF
  __int128 v38; // [rsp+E8h] [rbp-140h]
  __int64 v39; // [rsp+F8h] [rbp-130h]
  __int128 v40; // [rsp+100h] [rbp-128h] BYREF
  __int128 v41; // [rsp+110h] [rbp-118h]
  __int128 v42; // [rsp+120h] [rbp-108h] BYREF
  _QWORD SystemInformation[8]; // [rsp+140h] [rbp-E8h] BYREF
  __int128 v44; // [rsp+180h] [rbp-A8h]

  v32 = a3;
  v33 = a1;
  v36 = a3;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  v42 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  LODWORD(v39) = 0;
  v25 = 0;
  v40 = 0LL;
  v41 = 0LL;
  v31 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v5 = 0LL;
  Object = 0LL;
  v6 = 0LL;
  LODWORD(v7) = 0;
  v8 = *(_DWORD **)(a1 + 16);
  v34 = v8;
  v9 = *(_DWORD *)(a1 + 24);
  if ( v9 < 0x10 )
  {
    v16 = -1073741789;
    goto LABEL_45;
  }
  if ( a2 )
    ProbeForWrite(v8, v9, 8u);
  v44 = *(_OWORD *)v8;
  v8[2] = 0;
  if ( (_DWORD)v44 != 8 || (DWORD1(v44) & 0xFFFFFFF8) != 0 || (BYTE4(v44) & 3) == 3 )
  {
    v16 = -1073741811;
    goto LABEL_45;
  }
  if ( !SeSinglePrivilegeCheck(stru_140D3CA90, a2) )
  {
    v24 = sub_1407EF848(0LL);
    v16 = v24;
    if ( v24 == -1073741659 )
    {
      v25 = 1;
      goto LABEL_11;
    }
    if ( v24 < 0 )
      goto LABEL_45;
  }
  *((_QWORD *)&v28 + 1) = 1LL;
  for ( i = 0LL; ; i = (void *)v11 )
  {
    v11 = sub_1402A1770(i);
    v5 = (__int64 *)v11;
    if ( !v11 )
      break;
    ++*((_QWORD *)&v28 + 1);
  }
LABEL_11:
  for ( j = 0LL; ; j = (void *)v13 )
  {
    v13 = sub_1407B69F0(j);
    v6 = v13;
    if ( !v13 )
      break;
    ++*((_QWORD *)&v28 + 1);
  }
  if ( *((_QWORD *)&v28 + 1) > 0xFFFFFFFFuLL || (v14 = 96LL * *((_QWORD *)&v28 + 1) + 16, v14 > 0xFFFFFFFF) )
  {
    v16 = -1073741670;
    goto LABEL_45;
  }
  LODWORD(v7) = 96 * DWORD2(v28) + 16;
  v15 = *(_DWORD *)(v33 + 24);
  if ( (unsigned int)v14 > v15 )
  {
    v16 = -1073741789;
    goto LABEL_45;
  }
  HIDWORD(v29) = (v15 - 16) / 0x60;
  *(_QWORD *)&v28 = v34;
  if ( !v25 )
  {
    memset(v30, 0, sizeof(v30));
    HIDWORD(v30[0]) = -1;
    v30[3] = 0xFFFFFFFFLL;
    sub_1402A1054((_BYTE *)&v30[6] + 4, 16LL, (__int64)"KernelSpace");
    v16 = ZwQuerySystemInformation(SystemPagedPoolInformationEx, SystemInformation, 0x40u, 0LL);
    if ( v16 < 0 )
      goto LABEL_45;
    v16 = sub_140257E80(&v42);
    if ( v16 < 0 )
      goto LABEL_45;
    v30[4] = SystemInformation[0] >> 12;
    v17 = v42;
    if ( (unsigned __int64)v42 <= SystemInformation[0] >> 12 )
      v17 = SystemInformation[0] >> 12;
    v30[5] = v17;
    v16 = sub_140711C6C(&v28, v30);
    if ( v16 < 0 )
      goto LABEL_45;
    for ( k = 0LL; ; k = v5 )
    {
      v5 = (__int64 *)sub_1402A1770(k);
      if ( !v5 )
        break;
      memset(v30, 0, sizeof(v30));
      LODWORD(v30[0]) = 1;
      HIDWORD(v30[0]) = sub_140287F30((__int64)v5);
      v30[3] = HIDWORD(v30[0]);
      sub_140254FD8((__int64)&v37, v5[171]);
      v30[4] = v39;
      v30[10] = *((_QWORD *)&v37 + 1);
      v30[9] = *((_QWORD *)&v38 + 1);
      v30[5] = v38;
      sub_1402A1054((_BYTE *)&v30[6] + 4, 16LL, (__int64)"Session");
      v16 = sub_140711C6C(&v28, v30);
      if ( v16 < 0 )
        goto LABEL_45;
    }
  }
  v6 = sub_1407B69F0(0LL);
  if ( v6 )
  {
    v19 = BYTE4(v44) & 4;
    v27 = v19;
    do
    {
      memset(v30, 0, sizeof(v30));
      if ( !v19 || (*(_DWORD *)(v6 + 2172) & 1) == 0 )
      {
        LODWORD(v30[0]) = 2;
        HIDWORD(v30[0]) = *(_DWORD *)(v6 + 1088);
        LODWORD(v30[1]) = *(_DWORD *)(v6 + 1524);
        v30[2] = (*(_QWORD *)(v6 + 1088) ^ *(_QWORD *)(v6 + 1128)) & 0x1FFFFFFFFFFFFFFFLL;
        v30[3] = HIDWORD(v30[0]);
        v30[4] = *(_QWORD *)(v6 + 1816);
        if ( v30[4] > *(_QWORD *)(v6 + 1808) )
          v30[10] = v30[4];
        else
          v30[10] = *(_QWORD *)(v6 + 1808);
        v20 = *(_QWORD *)(v6 + 1272);
        v30[5] = v20;
        if ( v20 <= v30[4] )
          v20 = v30[4];
        v30[5] = v20;
        LODWORD(v30[6]) = sub_140287F30(v6);
        v26[0] = 0;
        sub_14070BA00(v6, (__int64)v26, 0LL);
        v21 = HIDWORD(v30[11]) & 0xFFFFFFF6 | v26[0] & 1 | (8 * sub_1402A10EC());
        HIDWORD(v30[11]) = v21;
        sub_140711CD4(v6, &v40);
        if ( *((_QWORD *)&v41 + 1) )
        {
          v21 |= 2u;
          HIDWORD(v30[11]) = v21;
          LODWORD(v30[11]) = *((_QWORD *)&v41 + 1) / 0x2710uLL;
        }
        if ( *(_BYTE *)(v6 + 1850) == 2 )
          HIDWORD(v30[11]) = v21 | 4;
        sub_1402A1054((_BYTE *)&v30[6] + 4, 16LL, v6 + 1448);
        if ( (BYTE4(v44) & 1) != 0 )
        {
          sub_1402A188C(v6, &v30[9]);
        }
        else if ( (BYTE4(v44) & 2) != 0 && (int)sub_140882DDC(v6, &v31, 0LL) >= 0 )
        {
          v30[9] = v31 >> 12;
        }
        v16 = sub_140711C6C(&v28, v30);
        if ( v16 < 0 )
          goto LABEL_45;
        v19 = v27;
      }
      v6 = sub_1407B69F0((PVOID)v6);
    }
    while ( v6 );
  }
  LODWORD(v7) = 96 * v29 + 16;
  v16 = 0;
LABEL_45:
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( v6 )
    ObfDereferenceObjectWithTag((PVOID)v6, 0x6E457350u);
  if ( v16 == -1073741789 )
  {
    v23 = *((_QWORD *)&v28 + 1);
    if ( (unsigned __int64)(unsigned int)(v29 + 1) > *((_QWORD *)&v28 + 1) )
      v23 = (unsigned int)(v29 + 1);
    v7 = 96 * v23 + 16;
    if ( v7 > 0xFFFFFFFF )
    {
      LODWORD(v7) = 0;
      v16 = -1073741670;
    }
  }
  *v32 = v7;
  return (unsigned int)v16;
}
