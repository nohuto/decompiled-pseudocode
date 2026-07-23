/*
 * XREFs of sub_140A985B4 @ 0x140A985B4
 * Callers:
 *     sub_140A7F4E0 @ 0x140A7F4E0 (sub_140A7F4E0.c)
 *     sub_140A7F570 @ 0x140A7F570 (sub_140A7F570.c)
 *     sub_140A96020 @ 0x140A96020 (sub_140A96020.c)
 *     sub_140A96070 @ 0x140A96070 (sub_140A96070.c)
 *     sub_140A960C0 @ 0x140A960C0 (sub_140A960C0.c)
 *     sub_140A96130 @ 0x140A96130 (sub_140A96130.c)
 *     sub_140A96180 @ 0x140A96180 (sub_140A96180.c)
 *     sub_140A9C2E0 @ 0x140A9C2E0 (sub_140A9C2E0.c)
 *     sub_140A9C360 @ 0x140A9C360 (sub_140A9C360.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140295EF0 (RtlCaptureStackBackTrace.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140601864 @ 0x140601864 (sub_140601864.c)
 *     sub_1406018DC @ 0x1406018DC (sub_1406018DC.c)
 *     sub_140A7F8F2 @ 0x140A7F8F2 (sub_140A7F8F2.c)
 *     sub_140A994C4 @ 0x140A994C4 (sub_140A994C4.c)
 *     sub_140A994FC @ 0x140A994FC (sub_140A994FC.c)
 *     sub_140A997C0 @ 0x140A997C0 (sub_140A997C0.c)
 *     sub_140A99A38 @ 0x140A99A38 (sub_140A99A38.c)
 *     sub_140A99E14 @ 0x140A99E14 (sub_140A99E14.c)
 *     sub_140A99F58 @ 0x140A99F58 (sub_140A99F58.c)
 *     sub_140A9A000 @ 0x140A9A000 (sub_140A9A000.c)
 *     sub_140A9A170 @ 0x140A9A170 (sub_140A9A170.c)
 */

PVOID __fastcall sub_140A985B4(LONG *a1, int a2, __int64 a3, void *a4)
{
  ULONG_PTR v5; // rdi
  int v8; // r14d
  PVOID result; // rax
  __int64 *v10; // r13
  __int64 *v11; // rbp
  USHORT v12; // ax
  unsigned int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rbx
  int *v17; // rax
  int *v18; // r14
  int v19; // eax
  __int16 v20; // cx
  ULONG_PTR v21; // rax
  BOOL v22; // r15d
  __int64 *v23; // rdi
  __int16 v24; // cx
  _DWORD *v25; // rax
  int v26; // eax
  __int64 **v27; // rcx
  __int64 *v28; // rax
  __int64 **v29; // rcx
  __int64 *v30; // rax
  int v31; // eax
  _QWORD *v32; // rcx
  _QWORD *v33; // rbx
  unsigned __int8 v34; // [rsp+40h] [rbp-A8h]
  int v35; // [rsp+44h] [rbp-A4h]
  _QWORD *v36; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+50h] [rbp-98h]
  PVOID BackTrace[8]; // [rsp+60h] [rbp-88h] BYREF

  v37 = a3;
  v5 = a2;
  v36 = 0LL;
  memset(BackTrace, 0, sizeof(BackTrace));
  v35 = 0;
  v8 = 0;
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
  v10 = 0LL;
  v11 = 0LL;
  v12 = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
  v13 = v12;
  if ( !v12 )
  {
    BackTrace[0] = a4;
    v14 = 1LL;
LABEL_10:
    BackTrace[v14] = 0LL;
    goto LABEL_11;
  }
  v14 = 1LL;
  if ( v13 )
    v14 = v13;
  if ( (unsigned int)v14 < 8 )
    goto LABEL_10;
LABEL_11:
  v34 = sub_1406018DC();
  sub_140A994C4(1LL);
  v16 = MEMORY[0xFFFFF78000000320];
  if ( dword_140D5751C )
  {
    v17 = (int *)sub_140A99F58(a1, &v36, v15);
    v18 = v17;
    if ( !v17 )
    {
      v8 = 0;
      goto LABEL_59;
    }
    v19 = *v17;
    if ( v19 == (_DWORD)v5 )
      goto LABEL_17;
    if ( v19 == 7 )
    {
      if ( (unsigned int)(v5 - 5) <= 1 )
      {
        *v18 = v5;
        v19 = v5;
        goto LABEL_17;
      }
    }
    else if ( v19 == 1 && (_DWORD)v5 == 2 )
    {
      if ( *((_WORD *)v18 + 3) > 1u )
        *((_WORD *)v18 + 3) = 1;
      v19 = 1;
LABEL_17:
      v20 = *((_WORD *)v18 + 3);
      if ( v20 )
      {
        v11 = (__int64 *)*((_QWORD *)v18 + 2);
        v22 = *v11 != v37;
        if ( (unsigned int)(v19 - 5) <= 1 )
          v23 = (__int64 *)v11[1];
        else
          v23 = (__int64 *)v11[2];
        v24 = v20 - 1;
        *((_WORD *)v18 + 3) = v24;
        if ( !v24 )
        {
          v25 = qword_140D57500;
          *((_QWORD *)v18 + 2) = 0LL;
          ++v25[8210];
          if ( (int *)v23[7] == v18 )
          {
            *((_DWORD *)v23 + 18) &= ~1u;
            v10 = v23;
          }
          else
          {
            ++v25[8208];
            if ( (dword_140A750B0[*(int *)v23[7]] & 4) == 0 && (dword_140A750B0[*v18] & 4) == 0 )
            {
              DbgPrintEx(0x5Du, 0, "Deadlock detection: Must release resources in reverse-order\n");
              DbgPrintEx(
                0x5Du,
                0,
                "Resource %p acquired before resource %p -- \nCurrent thread (%p) is trying to release %p first\n",
                a1,
                *(const void **)(v23[7] + 8),
                v11,
                a1);
              sub_140A99A38(
                byte_140C0D9C8,
                "Releasing two locks in reverse order of their acquire.",
                4099LL,
                a1,
                *(_QWORD *)(v23[7] + 8),
                v11);
              sub_1405FFA20(0xC4u, 0x1003uLL, (ULONG_PTR)a1, *(_QWORD *)(v23[7] + 8), (ULONG_PTR)v11, byte_140C0D9C8);
            }
            while ( (int *)v23[7] != v18 )
            {
              v23 = (__int64 *)*v23;
              if ( !v23 )
                goto LABEL_42;
            }
            *((_DWORD *)v23 + 18) &= ~1u;
            v10 = v23;
            v26 = *((_DWORD *)v23 + 18);
            if ( (v26 & 4) == 0 )
            {
              ++*((_DWORD *)qword_140D57500 + 8209);
              v26 = *((_DWORD *)v23 + 18);
            }
            *((_DWORD *)v23 + 18) = v26 | 4;
          }
LABEL_42:
          if ( (unsigned int)(*v18 - 5) <= 1 )
          {
            v29 = (__int64 **)v11[1];
            if ( v29 )
            {
              do
              {
                if ( ((_DWORD)v29[9] & 1) != 0 && v29[8] == v11 )
                  break;
                v30 = *v29;
                v11[1] = (__int64)*v29;
                v29 = (__int64 **)v30;
              }
              while ( v30 );
            }
          }
          else
          {
            v27 = (__int64 **)v11[2];
            if ( v27 )
            {
              do
              {
                if ( ((_DWORD)v27[9] & 1) != 0 && v27[8] == v11 )
                  break;
                v28 = *v27;
                v11[2] = (__int64)*v27;
                v27 = (__int64 **)v28;
              }
              while ( v28 );
            }
          }
          if ( v10 )
          {
            v10[8] = 0LL;
            v31 = --*((_DWORD *)v11 + 10);
            if ( v22 )
            {
              *((_DWORD *)v10 + 18) |= 4u;
              v31 = *((_DWORD *)v11 + 10);
            }
            if ( !v31 )
            {
              v35 = 1;
              sub_140A99E14((__int64)v11);
            }
          }
        }
      }
      else if ( !*((_DWORD *)qword_140D57500 + 8196) && *((int *)qword_140D57500 + 8282) <= 1024 )
      {
        sub_140A9A000(a3);
        sub_140A99A38(
          &dword_140C0D9E0,
          "Releasing lock 0x%p that is not owned by the current thread.",
          (const void *)0x1007);
        v21 = sub_140A9A000(a3);
        sub_1405FFA20(0xC4u, 0x1007uLL, (ULONG_PTR)a1, (ULONG_PTR)v18, v21, &dword_140C0D9E0);
      }
      goto LABEL_57;
    }
    sub_140A99A38(byte_140C0D9DC, "Releasing lock 0x%p using mismatched API for this lock type.", (const void *)0x1009);
    sub_1405FFA20(0xC4u, 0x1009uLL, (ULONG_PTR)a1, *v18, v5, byte_140C0D9DC);
LABEL_57:
    *(_OWORD *)(v18 + 46) = *(_OWORD *)BackTrace;
    *(_OWORD *)(v18 + 50) = *(_OWORD *)&BackTrace[2];
    *(_OWORD *)(v18 + 54) = *(_OWORD *)&BackTrace[4];
    *(_OWORD *)(v18 + 58) = *(_OWORD *)&BackTrace[6];
    v8 = v35;
  }
LABEL_59:
  if ( MEMORY[0xFFFFF78000000320] - v16 > *((_QWORD *)qword_140D57500 + 1) )
    *((_QWORD *)qword_140D57500 + 1) = MEMORY[0xFFFFF78000000320] - v16;
  sub_140A994FC(1LL);
  result = (PVOID)sub_140601864(v34);
  v32 = v36;
  if ( v36 )
  {
    do
    {
      v33 = (_QWORD *)*v32;
      result = (PVOID)sub_140A997C0(v32, 2LL);
      v32 = v33;
    }
    while ( v33 );
  }
  if ( v8 )
    return (PVOID)sub_140A997C0(v11, 3LL);
  return result;
}
