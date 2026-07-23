/*
 * XREFs of sub_140A97900 @ 0x140A97900
 * Callers:
 *     sub_140A7F1D0 @ 0x140A7F1D0 (sub_140A7F1D0.c)
 *     sub_140A7F280 @ 0x140A7F280 (sub_140A7F280.c)
 *     sub_140A95B00 @ 0x140A95B00 (sub_140A95B00.c)
 *     sub_140A95B80 @ 0x140A95B80 (sub_140A95B80.c)
 *     sub_140A95C00 @ 0x140A95C00 (sub_140A95C00.c)
 *     sub_140A95D30 @ 0x140A95D30 (sub_140A95D30.c)
 *     sub_140A95E00 @ 0x140A95E00 (sub_140A95E00.c)
 *     sub_140A963C0 @ 0x140A963C0 (sub_140A963C0.c)
 *     sub_140A96904 @ 0x140A96904 (sub_140A96904.c)
 *     sub_140A9C1E0 @ 0x140A9C1E0 (sub_140A9C1E0.c)
 *     sub_140A9C250 @ 0x140A9C250 (sub_140A9C250.c)
 *     sub_140A9C3A0 @ 0x140A9C3A0 (sub_140A9C3A0.c)
 *     sub_140AA1070 @ 0x140AA1070 (sub_140AA1070.c)
 *     sub_140AA10E0 @ 0x140AA10E0 (sub_140AA10E0.c)
 *     sub_140AA1150 @ 0x140AA1150 (sub_140AA1150.c)
 *     sub_140AA11C0 @ 0x140AA11C0 (sub_140AA11C0.c)
 *     sub_140AA1250 @ 0x140AA1250 (sub_140AA1250.c)
 *     sub_140AA12B0 @ 0x140AA12B0 (sub_140AA12B0.c)
 *     sub_140AA1310 @ 0x140AA1310 (sub_140AA1310.c)
 *     sub_140AA1370 @ 0x140AA1370 (sub_140AA1370.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140295EF0 (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140601864 @ 0x140601864 (sub_140601864.c)
 *     sub_1406018DC @ 0x1406018DC (sub_1406018DC.c)
 *     sub_140A7F8F2 @ 0x140A7F8F2 (sub_140A7F8F2.c)
 *     sub_140A98ACC @ 0x140A98ACC (sub_140A98ACC.c)
 *     sub_140A98D0C @ 0x140A98D0C (sub_140A98D0C.c)
 *     sub_140A98DCC @ 0x140A98DCC (sub_140A98DCC.c)
 *     sub_140A98E28 @ 0x140A98E28 (sub_140A98E28.c)
 *     sub_140A992BC @ 0x140A992BC (sub_140A992BC.c)
 *     sub_140A9933C @ 0x140A9933C (sub_140A9933C.c)
 *     sub_140A994C4 @ 0x140A994C4 (sub_140A994C4.c)
 *     sub_140A994FC @ 0x140A994FC (sub_140A994FC.c)
 *     sub_140A997C0 @ 0x140A997C0 (sub_140A997C0.c)
 *     sub_140A99A38 @ 0x140A99A38 (sub_140A99A38.c)
 *     sub_140A99E14 @ 0x140A99E14 (sub_140A99E14.c)
 *     sub_140A99F58 @ 0x140A99F58 (sub_140A99F58.c)
 *     sub_140A9A000 @ 0x140A9A000 (sub_140A9A000.c)
 *     sub_140A9A090 @ 0x140A9A090 (sub_140A9A090.c)
 *     sub_140A9A13C @ 0x140A9A13C (sub_140A9A13C.c)
 *     sub_140A9A170 @ 0x140A9A170 (sub_140A9A170.c)
 */

PVOID __fastcall sub_140A97900(LONG *a1, int a2, __int64 a3, unsigned int a4, PVOID a5)
{
  ULONG_PTR v6; // r13
  PVOID result; // rax
  __int64 v9; // rdi
  __int64 v10; // r14
  USHORT v11; // ax
  int v12; // ecx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rsi
  int v16; // r15d
  __int64 v17; // rax
  int *v18; // r11
  int *v19; // rsi
  __int64 v20; // r8
  int v21; // ecx
  __int64 v22; // r15
  __int64 v23; // rax
  unsigned __int16 v24; // ax
  __int64 v25; // rdx
  _QWORD *v26; // r9
  int *v27; // rdi
  _QWORD *v28; // r10
  int v29; // eax
  _QWORD *v30; // rcx
  _QWORD *v31; // rbx
  int *v32; // r10
  int *v33; // r9
  __int64 v34; // rdx
  _QWORD *v35; // rdx
  int v36; // ecx
  _QWORD *v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // r8
  _QWORD *v41; // rdx
  _OWORD *v42; // rax
  __int64 v43; // rax
  unsigned __int8 v44; // [rsp+34h] [rbp-8Dh]
  __int64 v45; // [rsp+38h] [rbp-89h]
  __int64 v46; // [rsp+40h] [rbp-81h]
  __int64 v48; // [rsp+50h] [rbp-71h] BYREF
  int v49; // [rsp+58h] [rbp-69h]
  int *v50; // [rsp+60h] [rbp-61h]
  int v51; // [rsp+68h] [rbp-59h]
  int *v52; // [rsp+70h] [rbp-51h]
  __int64 v53; // [rsp+78h] [rbp-49h] BYREF
  __int64 v54; // [rsp+80h] [rbp-41h]
  PVOID BackTrace[8]; // [rsp+90h] [rbp-31h] BYREF

  v6 = a2;
  v54 = (__int64)a5;
  result = memset(BackTrace, 0, sizeof(BackTrace));
  v49 = 0;
  v9 = 0LL;
  v53 = 0LL;
  v48 = 0LL;
  if ( (_DWORD)v6 == 8 )
  {
    if ( !qword_140D575C8 )
      return result;
    if ( qword_140D575C8 > (unsigned __int64)a5 )
      return result;
    result = (PVOID)(qword_140D575C8 + (unsigned int)dword_140D575E0);
    if ( result <= a5 )
      return result;
  }
  result = (PVOID)sub_140A7F8F2(a1);
  if ( !(_DWORD)result )
    return result;
  result = (PVOID)sub_140A9A170();
  if ( (_DWORD)result )
    return result;
  result = qword_140D57500;
  if ( *((_DWORD *)qword_140D57500 + 8196) )
    return result;
  result = qword_140D57500;
  if ( *((int *)qword_140D57500 + 8282) > 1024 )
    return result;
  v50 = 0LL;
  v10 = 0LL;
  v51 = dword_140A750B0[v6];
  v45 = sub_140A98DCC(3LL);
  v52 = (int *)sub_140A98DCC(2LL);
  v46 = sub_140A98DCC(1LL);
  v11 = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
  v12 = v11;
  if ( !v11 )
  {
    BackTrace[0] = a5;
    v12 = 1;
LABEL_12:
    BackTrace[v12] = 0LL;
    goto LABEL_13;
  }
  if ( v11 < 8u )
    goto LABEL_12;
LABEL_13:
  v44 = sub_1406018DC();
  sub_140A994C4(1LL);
  v13 = MEMORY[0xFFFFF78000000320];
  if ( !dword_140D5751C || (v50 = v52, v52 = 0LL, !v50) )
  {
LABEL_50:
    v15 = v46;
    goto LABEL_51;
  }
  v10 = sub_140A9A000(a3);
  if ( !v10 )
  {
    v14 = sub_140A98D0C(a3, v45);
    v45 = 0LL;
    v10 = v14;
    if ( !v14 )
    {
      v15 = v46;
      v16 = 0;
      goto LABEL_53;
    }
    LODWORD(v9) = 1;
  }
  if ( (_DWORD)v6 != 8 )
  {
    v17 = sub_140A99F58(a1, &v48, 1LL);
    v18 = 0LL;
    v19 = (int *)v17;
    if ( !v17 )
    {
      v15 = v46;
      if ( !(unsigned int)sub_140A98ACC((int)a1, (__int64)&v53, (__int64)&v48) )
      {
        if ( (_DWORD)v9 )
        {
          v16 = 1;
          sub_140A99E14(v10);
          goto LABEL_52;
        }
LABEL_51:
        v16 = 0;
        goto LABEL_52;
      }
      v46 = 0LL;
      v19 = (int *)sub_140A99F58(a1, &v48, v20);
      v18 = 0LL;
    }
    v21 = *v19;
    if ( *v19 != (_DWORD)v6 )
    {
      if ( ((unsigned int)(v6 - 3) > 1 || (unsigned int)(v21 - 3) > 1) && (v21 != 7 || (unsigned int)(v6 - 5) > 1) )
      {
        sub_140A99A38(
          byte_140C0D9D4,
          "Acquiring lock 0x%p using mismatched API for this lock type.",
          (const void *)0x1008);
        sub_1405FFA20(0xC4u, 0x1008uLL, (ULONG_PTR)a1, *v19, v6, byte_140C0D9D4);
        goto LABEL_35;
      }
      *v19 = v6;
    }
    if ( (unsigned int)(v6 - 5) <= 1 )
      v22 = *(_QWORD *)(v10 + 8);
    else
      v22 = *(_QWORD *)(v10 + 16);
    v23 = *((_QWORD *)v19 + 2);
    if ( v23 && v23 != v10 )
      *((_WORD *)v19 + 3) = 0;
    v24 = *((_WORD *)v19 + 3) + 1;
    *((_QWORD *)v19 + 2) = v10;
    *((_WORD *)v19 + 3) = v24;
    if ( v22 )
    {
      if ( v24 > 1u )
      {
        if ( (v51 & 1) != 0 )
          goto LABEL_20;
        sub_140A99A38(&dword_140C0D9D8, "Lock 0x%p doesn't support recursive acquire.", (const void *)0x1000);
        sub_1405FFA20(0xC4u, 0x1000uLL, (ULONG_PTR)a1, (ULONG_PTR)v19, v10, &dword_140C0D9D8);
LABEL_35:
        v15 = v46;
        v16 = 0;
        goto LABEL_52;
      }
      v25 = a4;
      v26 = *(_QWORD **)(v22 + 8);
      if ( v26 != (_QWORD *)(v22 + 8) )
      {
        while ( 1 )
        {
          v27 = (int *)(v26 - 3);
          if ( (unsigned int)sub_140A9A090(a1, v25, v26 - 3, *v26) )
            break;
          if ( v26 == v28 )
            goto LABEL_47;
        }
        sub_140A992BC(v22, v27, &v48);
        goto LABEL_83;
      }
LABEL_47:
      if ( *((_WORD *)v19 + 2) )
      {
        if ( !(_DWORD)v25 )
        {
          v29 = sub_140A98E28((_DWORD)a1, v22, 1, 0, v54);
          v18 = 0LL;
          if ( v29 )
            goto LABEL_50;
        }
      }
    }
    else
    {
      v32 = v19 + 6;
      v33 = (int *)*((_QWORD *)v19 + 3);
      if ( v33 != v19 + 6 )
      {
        v34 = a4;
        while ( 1 )
        {
          v27 = v33 - 10;
          v33 = *(int **)v33;
          if ( *(int **)v27 == v18 )
          {
            if ( (unsigned int)sub_140A9A090(a1, v34, v27, v33) )
              break;
          }
          if ( v33 == v32 )
            goto LABEL_76;
        }
        sub_140A9933C(v27, &v48);
LABEL_83:
        if ( !v27 )
        {
          v15 = v46;
          v16 = 0;
          goto LABEL_52;
        }
        goto LABEL_87;
      }
LABEL_76:
      v49 = 1;
    }
    v27 = v50;
    v50 = v18;
    *((_QWORD *)v27 + 9) = 0LL;
    *((_QWORD *)v27 + 8) = v18;
    v35 = v27 + 6;
    *((_QWORD *)v27 + 10) = v18;
    *((_QWORD *)v27 + 18) = v18;
    *(_QWORD *)v27 = v22;
    *((_QWORD *)v27 + 7) = v19;
    v36 = *((_DWORD *)qword_140D57500 + 8201);
    *((_QWORD *)v27 + 2) = v27 + 2;
    *((_QWORD *)v27 + 1) = v27 + 2;
    *((_QWORD *)v27 + 4) = v27 + 6;
    *((_QWORD *)v27 + 3) = v27 + 6;
    v27[18] = 2 * (a4 & 1 | (4 * v36));
    if ( v49 == (_DWORD)v18 )
    {
      v37 = (_QWORD *)(v22 + 8);
      v38 = *(_QWORD *)(v22 + 8);
      if ( *(_QWORD *)(v38 + 8) != v22 + 8 )
        goto LABEL_81;
      *v35 = v38;
      *((_QWORD *)v27 + 4) = v37;
      *(_QWORD *)(v38 + 8) = v35;
      *v37 = v35;
      sub_140A9A13C(v22, 1LL);
    }
    v39 = v19 + 6;
    v40 = *((_QWORD *)v19 + 3);
    v41 = v27 + 10;
    if ( *(int **)(v40 + 8) == v19 + 6 )
    {
      *v41 = v40;
      *((_QWORD *)v27 + 6) = v39;
      *(_QWORD *)(v40 + 8) = v41;
      *v39 = v41;
      ++*((_WORD *)v19 + 2);
      if ( (unsigned __int16)v19[1] > 0xFFF0u )
        dword_140D57524 |= 0x20u;
LABEL_87:
      v27[18] |= 1u;
      *((_QWORD *)v27 + 8) = v10;
      if ( (unsigned int)(v6 - 5) <= 1 )
        *(_QWORD *)(v10 + 8) = v27;
      else
        *(_QWORD *)(v10 + 16) = v27;
      ++*(_DWORD *)(v10 + 40);
      v42 = *(_OWORD **)v27;
      if ( *(_QWORD *)v27 )
      {
        *((_OWORD *)v27 + 9) = v42[5];
        *((_OWORD *)v27 + 10) = v42[6];
        *((_OWORD *)v27 + 11) = v42[7];
        *((_OWORD *)v27 + 12) = v42[8];
      }
      v43 = *((_QWORD *)v27 + 7);
      *((_OWORD *)v27 + 5) = *(_OWORD *)BackTrace;
      *((_OWORD *)v27 + 6) = *(_OWORD *)&BackTrace[2];
      *((_OWORD *)v27 + 7) = *(_OWORD *)&BackTrace[4];
      *((_OWORD *)v27 + 8) = *(_OWORD *)&BackTrace[6];
      *(_OWORD *)(v43 + 120) = *((_OWORD *)v27 + 5);
      *(_OWORD *)(v43 + 136) = *((_OWORD *)v27 + 6);
      *(_OWORD *)(v43 + 152) = *((_OWORD *)v27 + 7);
      *(_OWORD *)(v43 + 168) = *((_OWORD *)v27 + 8);
      goto LABEL_20;
    }
LABEL_81:
    __fastfail(3u);
  }
  *(_BYTE *)(v10 + 48) = 1;
LABEL_20:
  v15 = v46;
  v16 = 0;
LABEL_52:
  v9 = v45;
LABEL_53:
  if ( MEMORY[0xFFFFF78000000320] - v13 > *(_QWORD *)qword_140D57500 )
    *(_QWORD *)qword_140D57500 = MEMORY[0xFFFFF78000000320] - v13;
  sub_140A994FC(1LL);
  sub_140601864(v44);
  v30 = (_QWORD *)v48;
  if ( v48 )
  {
    do
    {
      v31 = (_QWORD *)*v30;
      sub_140A997C0(v30, 2LL);
      v30 = v31;
    }
    while ( v31 );
  }
  if ( v53 )
    sub_140A997C0(v53, 1LL);
  if ( v16 )
    sub_140A997C0(v10, 3LL);
  if ( v50 )
    sub_140A997C0(v50, 2LL);
  if ( v15 )
    sub_140A997C0(v15, 1LL);
  result = v52;
  if ( v52 )
    result = (PVOID)sub_140A997C0(v52, 2LL);
  if ( v9 )
    return (PVOID)sub_140A997C0(v9, 3LL);
  return result;
}
