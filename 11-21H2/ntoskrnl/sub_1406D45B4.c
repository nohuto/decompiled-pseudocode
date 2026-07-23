/*
 * XREFs of sub_1406D45B4 @ 0x1406D45B4
 * Callers:
 *     EtwTelemetryCoverageReport @ 0x14024F470 (EtwTelemetryCoverageReport.c)
 *     sub_140630EF0 @ 0x140630EF0 (sub_140630EF0.c)
 *     sub_1406D435C @ 0x1406D435C (sub_1406D435C.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_14024F548 @ 0x14024F548 (sub_14024F548.c)
 *     sub_14024F59C @ 0x14024F59C (sub_14024F59C.c)
 *     sub_14024F6A4 @ 0x14024F6A4 (sub_14024F6A4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403699D0 @ 0x1403699D0 (sub_1403699D0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406E7E90 @ 0x1406E7E90 (sub_1406E7E90.c)
 *     sub_14085A4D0 @ 0x14085A4D0 (sub_14085A4D0.c)
 */

void __fastcall sub_1406D45B4(int **a1, __int64 a2)
{
  int v4; // r15d
  int v5; // r14d
  unsigned __int64 v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v8; // r12d
  unsigned int v9; // ecx
  int v10; // edx
  unsigned int *v11; // r14
  unsigned int *v12; // r13
  int v13; // r11d
  char v14; // di
  __int64 v15; // rdx
  __int64 v16; // rcx
  int *v17; // rcx
  const CHAR *v18; // rdx
  int *v19; // rcx
  const CHAR *v20; // rdx
  int v21; // r12d
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-C8h]
  int v24; // [rsp+40h] [rbp-C0h]
  int v25; // [rsp+44h] [rbp-BCh] BYREF
  int v26; // [rsp+48h] [rbp-B8h] BYREF
  int v27; // [rsp+4Ch] [rbp-B4h] BYREF
  int v28; // [rsp+50h] [rbp-B0h] BYREF
  int v29; // [rsp+54h] [rbp-ACh] BYREF
  int v30; // [rsp+58h] [rbp-A8h] BYREF
  int v31; // [rsp+5Ch] [rbp-A4h] BYREF
  int v32; // [rsp+60h] [rbp-A0h] BYREF
  int v33; // [rsp+64h] [rbp-9Ch] BYREF
  int v34; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v35[2]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+80h] [rbp-80h] BYREF
  int *v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  int *v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  int *v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  int *v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  int *v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  int *v47; // [rsp+F0h] [rbp-10h]
  __int64 v48; // [rsp+F8h] [rbp-8h]
  char v49[16]; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+110h] [rbp+10h] BYREF
  int *v51; // [rsp+130h] [rbp+30h]
  __int64 v52; // [rsp+138h] [rbp+38h]
  int *v53; // [rsp+140h] [rbp+40h]
  __int64 v54; // [rsp+148h] [rbp+48h]
  int *v55; // [rsp+150h] [rbp+50h]
  __int64 v56; // [rsp+158h] [rbp+58h]
  int *v57; // [rsp+160h] [rbp+60h]
  __int64 v58; // [rsp+168h] [rbp+68h]
  char v59[16]; // [rsp+170h] [rbp+70h] BYREF

  v24 = 0;
  v4 = 0;
  v5 = 0;
  v22 = 0;
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v23 = v6;
  if ( (unsigned int)sub_14024F59C((__int64 *)a2, &v22) )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C15D90, 0LL);
    v8 = *(_DWORD *)(a2 + 12);
    qword_140C547C0 = (__int64)KeGetCurrentThread();
    v9 = a1[2][6];
    if ( v8 >= v9 )
    {
      v4 = 1;
    }
    else
    {
      v10 = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a2 + 12) = v9;
      v11 = (unsigned int *)a1[2];
      v12 = sub_14024F548(v11, v10);
      if ( *v12 == v13 )
      {
        v5 = v24;
        v4 = 1;
      }
      else if ( v11[8] >= *((_DWORD *)a1 + 8) )
      {
        _InterlockedIncrement(*a1 + 1);
        v5 = 0;
      }
      else
      {
        v5 = sub_14024F6A4((__int64)a1[5], *(_QWORD *)a2, v22);
        if ( v5 )
          goto LABEL_6;
        sub_1406E7E90(a1);
        if ( (int)sub_14085A4D0(a1) >= 0 )
        {
          v5 = sub_14024F6A4((__int64)a1[5], *(_QWORD *)a2, v22);
LABEL_6:
          *v12 = *(_DWORD *)(a2 + 8);
          ++*((_DWORD *)a1 + 16);
          ++a1[2][8];
          if ( *((_DWORD *)a1 + 16) == 1 )
          {
            v15 = -10000LL * *((unsigned int *)a1 + 7);
            v16 = (__int64)(*a1 + 60);
            v35[0] = 0LL;
            v35[1] = -1LL;
            KeSetTimer2(v16, v15, 0LL, (__int64)v35);
          }
          goto LABEL_8;
        }
        *(_DWORD *)(a2 + 12) = v8;
        _InterlockedIncrement(*a1 + 1);
      }
    }
LABEL_8:
    LODWORD(v6) = v23;
  }
  if ( (struct _KTHREAD *)qword_140C547C0 == KeGetCurrentThread() )
  {
    qword_140C547C0 = 0LL;
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C15D90, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
      ExfTryToWakePushLock(&qword_140C15D90);
    sub_1402AFC00((ULONG_PTR)&qword_140C15D90);
    KeLeaveCriticalRegion();
  }
  if ( !v4 && v5 && (unsigned int)dword_140C04418 > 5 && sub_1402A2000((__int64)&dword_140C04418, 2LL) )
  {
    v17 = *a1;
    v18 = *(const CHAR **)a2;
    v25 = **a1;
    v51 = &v25;
    v52 = 4LL;
    v26 = v17[1];
    v53 = &v26;
    v54 = 4LL;
    v27 = v6 - v17[4];
    v55 = &v27;
    v56 = 4LL;
    v28 = v6 - v17[5];
    v57 = &v28;
    v58 = 4LL;
    sub_1403699D0((__int64)v59, v18);
    sub_14020A9C4((__int64)&dword_140C04418, (unsigned __int8 *)byte_14003551D, 0LL, 0LL, 7u, &v50);
  }
  if ( dword_140C5B0F8 && (unsigned int)dword_140C04418 > 5 )
  {
    if ( sub_1402A2000((__int64)&dword_140C04418, 1LL) )
    {
      v19 = *a1;
      v20 = *(const CHAR **)a2;
      v29 = **a1;
      v37 = &v29;
      v38 = 4LL;
      v30 = v19[1];
      v39 = &v30;
      v40 = 4LL;
      v31 = v6 - v19[4];
      v41 = &v31;
      v42 = 4LL;
      v21 = v6 - v19[5];
      v43 = &v32;
      v45 = &v33;
      v47 = &v34;
      v32 = v21;
      v44 = 4LL;
      v33 = v5;
      v46 = 4LL;
      v34 = v4;
      v48 = 4LL;
      sub_1403699D0((__int64)v49, v20);
      sub_14020A9C4((__int64)&dword_140C04418, (unsigned __int8 *)byte_1400354A9, 0LL, 0LL, 9u, &v36);
    }
  }
}
