/*
 * XREFs of sub_140299280 @ 0x140299280
 * Callers:
 *     sub_14029A86C @ 0x14029A86C (sub_14029A86C.c)
 *     sub_1404205D0 @ 0x1404205D0 (sub_1404205D0.c)
 *     sub_140434E40 @ 0x140434E40 (sub_140434E40.c)
 *     sub_140435300 @ 0x140435300 (sub_140435300.c)
 *     sub_140576640 @ 0x140576640 (sub_140576640.c)
 *     sub_140702CA4 @ 0x140702CA4 (sub_140702CA4.c)
 *     sub_1409AF728 @ 0x1409AF728 (sub_1409AF728.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140244120 (KeGetEffectiveIrql.c)
 *     sub_14025E1EC @ 0x14025E1EC (sub_14025E1EC.c)
 *     sub_14025E30C @ 0x14025E30C (sub_14025E30C.c)
 *     sub_140294A38 @ 0x140294A38 (sub_140294A38.c)
 *     sub_140294DD8 @ 0x140294DD8 (sub_140294DD8.c)
 *     sub_140295210 @ 0x140295210 (sub_140295210.c)
 *     sub_1402956D0 @ 0x1402956D0 (sub_1402956D0.c)
 *     sub_140297D10 @ 0x140297D10 (sub_140297D10.c)
 *     sub_140298BF0 @ 0x140298BF0 (sub_140298BF0.c)
 *     sub_140299840 @ 0x140299840 (sub_140299840.c)
 *     sub_140299A2C @ 0x140299A2C (sub_140299A2C.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x14041BCE0 (ZwTerminateProcess.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14041F500 @ 0x14041F500 (sub_14041F500.c)
 *     __chkstk @ 0x14042A4D0 (__chkstk.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405730E0 @ 0x1405730E0 (sub_1405730E0.c)
 *     sub_1406EA7D0 @ 0x1406EA7D0 (sub_1406EA7D0.c)
 *     PsWow64GetProcessMachine @ 0x1407048B0 (PsWow64GetProcessMachine.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_140A6F0C0 @ 0x140A6F0C0 (sub_140A6F0C0.c)
 */

int __fastcall sub_140299280(NTSTATUS *a1, __int64 a2, __int64 a3, unsigned __int8 a4, char a5)
{
  __int64 v8; // rdx
  unsigned int v9; // r14d
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rax
  void *v12; // rsp
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  struct _KTHREAD *v16; // rax
  __int64 v17; // rdx
  char v18; // al
  char v19; // r8
  int v20; // r9d
  __int64 v21; // rdx
  unsigned __int64 v22; // r8
  _QWORD *v23; // rdi
  _OWORD *v24; // rsi
  __int64 v25; // r9
  __int64 v26; // r10
  NTSTATUS v28; // r14d
  unsigned __int64 v29; // rcx
  __int64 v31; // r8
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-10h]
  int v34; // [rsp+30h] [rbp+0h] BYREF
  int v35; // [rsp+34h] [rbp+4h]
  unsigned int v36; // [rsp+38h] [rbp+8h]
  unsigned __int64 v37; // [rsp+40h] [rbp+10h]
  __int64 v38; // [rsp+48h] [rbp+18h]
  unsigned int v39; // [rsp+50h] [rbp+20h] BYREF
  __int64 v40; // [rsp+58h] [rbp+28h]
  __int64 v41; // [rsp+60h] [rbp+30h] BYREF
  __int64 v42; // [rsp+68h] [rbp+38h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp+40h]
  __int64 v44; // [rsp+78h] [rbp+48h]
  __int64 v45; // [rsp+80h] [rbp+50h]
  NTSTATUS *v46; // [rsp+88h] [rbp+58h]
  int *v47; // [rsp+90h] [rbp+60h]
  __int64 v48; // [rsp+A0h] [rbp+70h]
  _QWORD *v49; // [rsp+A8h] [rbp+78h]
  _QWORD *v50; // [rsp+B0h] [rbp+80h]
  _QWORD *v51; // [rsp+B8h] [rbp+88h]
  _QWORD *v52; // [rsp+C0h] [rbp+90h]
  __int64 v53; // [rsp+C8h] [rbp+98h]
  int v54; // [rsp+D0h] [rbp+A0h]
  _DWORD v55[37]; // [rsp+D4h] [rbp+A4h] BYREF
  __int128 v56; // [rsp+170h] [rbp+140h] BYREF
  __int128 v57; // [rsp+180h] [rbp+150h]

  LOWORD(v34) = a4;
  v45 = a3;
  v38 = a2;
  v46 = a1;
  v48 = a3;
  v41 = 0LL;
  v39 = 0;
  memset(v55, 0, sizeof(v55));
  v56 = 0LL;
  v57 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = *((_QWORD *)CurrentThread + 23);
  v40 = v8;
  __incgsdword(0x82F0u);
  if ( a5 && v8 && *(_QWORD *)(v8 + 2240) )
  {
    v28 = *a1;
    switch ( *a1 )
    {
      case 268435458:
        *a1 = -1073741795;
        break;
      case 268435459:
        *a1 = -1073741676;
        break;
      case 268435460:
        *a1 = -1073741819;
        break;
    }
    if ( KeGetEffectiveIrql() < 2u
      && (a4 || (*a1 == -2147483647 || (unsigned int)(*a1 + 1073741819) <= 1)
             && *((_QWORD *)a1 + 5) <= 0x7FFFFFFF0000uLL) )
    {
      LOBYTE(BugCheckParameter4) = a4;
      LODWORD(v16) = sub_14042A5E0(a1, v38);
      if ( (_BYTE)v16 )
        return (int)v16;
    }
    *a1 = v28;
    v8 = v40;
  }
  v9 = 1048607;
  v36 = 1048607;
  v10 = 0LL;
  v37 = 0LL;
  if ( (_BYTE)v34 )
  {
    if ( (qword_140D068D8 & 0x800000) != 0 )
    {
      v9 = 1048671;
      v36 = 1048671;
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      {
        v29 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
        if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0x800LL) != 0
          && (*(_DWORD *)(v8 + 2516) & 0x4000) == 0 )
        {
          v29 &= ~0x800uLL;
        }
        v10 = v29 & 0xFFFFFFFFFFF9FFFFuLL;
        if ( (a1[1] & 0x80) == 0 )
          v10 = v29;
        v37 = v10;
        if ( (unsigned __int16)PsWow64GetProcessMachine(v8) == 332 )
        {
          v10 &= 0xFFFFFFFFFFF9FFFFuLL;
          v37 = v10;
        }
      }
    }
  }
  else
  {
    if ( (_BYTE)byte_140E01841 )
      v9 = 1048735;
    v36 = v9;
  }
  sub_1402956D0(v9, &v39, v10);
  v11 = v39 + 15LL;
  if ( v11 <= v39 )
    v11 = 0xFFFFFFFFFFFFFF0LL;
  v12 = alloca(v11 & 0xFFFFFFFFFFFFFFF0uLL);
  v47 = &v34;
  if ( (_BYTE)v34 )
    memset(&v34, 0, v39);
  sub_140297D10((__int64)&v34, v9, &v41, v37);
  sub_140298BF0(a3, v38, (__int64)&v34);
  if ( *a1 == -2147483645 )
  {
    --*(_QWORD *)&v55[21];
    if ( (dword_140D06B80 & 2) != 0 )
    {
      --*(_QWORD *)(a3 + 360);
      LOBYTE(v14) = a5;
      LOBYTE(v13) = v34;
      if ( (unsigned __int8)sub_1405730E0(a1, &v34, v13, v14, (_BYTE)BugCheckParameter4) )
        goto LABEL_18;
      ++*(_QWORD *)(a3 + 360);
    }
  }
  LOBYTE(v13) = v34;
  if ( (unsigned __int8)sub_140299840((int)a1, (int)&v34, v13) )
  {
LABEL_18:
    LOBYTE(BugCheckParameter4) = v34;
    LODWORD(v16) = sub_14041F500(a3, v38, (unsigned int)&v34, v41, BugCheckParameter4);
    if ( !BYTE1(v34) )
      return (int)v16;
    _disable();
    LODWORD(v16) = (unsigned int)sub_14025E30C(a3);
    goto LABEL_81;
  }
  if ( !(_BYTE)v34 )
  {
    if ( (!a5
       || !(unsigned __int8)sub_140299A2C(a3, v38, (_DWORD)a1, (unsigned int)&v34, v34, v34)
       && !sub_140295210((ULONG_PTR)a1, (ULONG_PTR)&v34))
      && !(unsigned __int8)sub_140299A2C(a3, v38, (_DWORD)a1, (unsigned int)&v34, 0, 1) )
    {
      KeBugCheckEx(0x1Eu, *a1, *((_QWORD *)a1 + 2), *((_QWORD *)a1 + 4), *((_QWORD *)a1 + 5));
    }
    goto LABEL_18;
  }
  v17 = v53;
  v37 = v53;
  v44 = v53;
  if ( (*(_DWORD *)(v40 + 2172) & 1) == 0 )
  {
    v16 = KeGetCurrentThread();
    if ( *(_QWORD *)(*((_QWORD *)v16 + 23) + 1408LL) && *a1 == -2147483646 && (*(_DWORD *)(a3 + 376) & 0x40000) != 0 )
    {
      _disable();
      *(_DWORD *)(a3 + 376) &= ~0x40000u;
LABEL_81:
      _enable();
      return (int)v16;
    }
    if ( (v42 & 0xFFF8) == 0x20 )
    {
      if ( *a1 == -2147483645 )
      {
        *a1 = 1073741855;
      }
      else if ( *a1 == -2147483644 )
      {
        *a1 = 1073741854;
      }
      v17 = (unsigned int)v17 & 0xFFFFFFF0;
      v37 = v17;
      v44 = v17;
    }
  }
  if ( a5 )
  {
    LODWORD(v40) = *a1;
    v18 = sub_140A6F0C0(a1);
    BYTE1(v34) = v18;
    v21 = *((_QWORD *)KeGetCurrentThread() + 23);
    if ( (byte_140C40501 || *(_QWORD *)(v21 + 1400) || v20 == -2147483597) && !v18 )
    {
LABEL_34:
      if ( v20 == -2147483597 || (LOBYTE(v21) = 1, LODWORD(v16) = sub_1406EA7D0(a1, v21, 0LL), !(_BYTE)v16) )
      {
        _disable();
        *(_DWORD *)(a3 + 376) &= ~0x100u;
        _enable();
        v54 = -1073741819;
        v35 = 0;
        v22 = v37;
        v42 = v37;
        if ( (v9 & 0x100040) == 0x100040 )
        {
          v22 = (v37 - *(unsigned int *)(v41 + 20)) & 0xFFFFFFFFFFFFFFC0uLL;
          v42 = v22;
        }
        v23 = (_QWORD *)((v22 - 40) & 0xFFFFFFFFFFFFFFF0uLL);
        v49 = v23;
        v50 = v23 - 20;
        v24 = v23 - 24;
        v51 = v23 - 24;
        v52 = v23 - 178;
        LODWORD(v56) = -1232;
        DWORD1(v56) = v37 - ((_DWORD)v23 - 1424);
        *((_QWORD *)&v56 + 1) = 0x4D0FFFFFB30LL;
        LODWORD(v57) = v22 - ((_DWORD)v23 - 192);
        DWORD1(v57) = v37 - v22;
        ProbeForWrite(v23 - 178, v37 - (_QWORD)(v23 - 178), 0x10u);
        v23[3] = v37;
        *v23 = *((_QWORD *)v47 + 31);
        sub_14025E1EC((_OWORD *)v23 - 10, (__int64)a1);
        sub_140294DD8(1, (__int64)(v23 - 24), (__int64)&v56, v36, v41, 0LL);
        *v24 = v56;
        v24[1] = v57;
        --*((_WORD *)CurrentThread + 243);
        v35 = 1;
        sub_140294A38(*(_QWORD *)(v45 + 360));
        *(_QWORD *)(v25 + 384) = v23 - 178;
        *(_WORD *)(v25 + 368) = 51;
        *(_QWORD *)(v25 + 360) = qword_140D07180;
        LODWORD(v16) = (unsigned int)sub_14025E30C(v25);
        if ( (*(_WORD *)(v26 + 486))++ == 0xFFFF )
        {
          v16 = (struct _KTHREAD *)(v26 + 152);
          if ( *(struct _KTHREAD **)v16 != v16 )
            LODWORD(v16) = KiCheckForKernelApcDelivery();
        }
        v35 = 0;
      }
      return (int)v16;
    }
    if ( !(unsigned __int8)sub_140299A2C(a3, v38, (_DWORD)a1, (unsigned int)&v34, v19, 0) )
    {
      v20 = v40;
      goto LABEL_34;
    }
    goto LABEL_18;
  }
  LOBYTE(v15) = 1;
  LOBYTE(v17) = 1;
  LODWORD(v16) = sub_1406EA7D0(a1, v17, v15);
  if ( !(_BYTE)v16 )
  {
    LOBYTE(v31) = 1;
    LODWORD(v16) = sub_1406EA7D0(a1, 0LL, v31);
    if ( !(_BYTE)v16 )
      LODWORD(v16) = ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, *a1);
  }
  return (int)v16;
}
