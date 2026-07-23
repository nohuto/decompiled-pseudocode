/*
 * XREFs of sub_140802068 @ 0x140802068
 * Callers:
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     RtlClearAllBits @ 0x14020AE80 (RtlClearAllBits.c)
 *     sub_14020DB30 @ 0x14020DB30 (sub_14020DB30.c)
 *     RtlSetAllBits @ 0x140262CA0 (RtlSetAllBits.c)
 *     MmBuildMdlForNonPagedPool @ 0x14027C410 (MmBuildMdlForNonPagedPool.c)
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 *     ZwQuerySystemInformation @ 0x14041BE20 (ZwQuerySystemInformation.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405C6658 @ 0x1405C6658 (sub_1405C6658.c)
 *     sub_140800338 @ 0x140800338 (sub_140800338.c)
 *     sub_140800680 @ 0x140800680 (sub_140800680.c)
 *     sub_140800808 @ 0x140800808 (sub_140800808.c)
 *     sub_140801D60 @ 0x140801D60 (sub_140801D60.c)
 *     sub_140802020 @ 0x140802020 (sub_140802020.c)
 *     sub_1408072C0 @ 0x1408072C0 (sub_1408072C0.c)
 *     sub_140807A78 @ 0x140807A78 (sub_140807A78.c)
 *     MmLockPreChargedPagedPool @ 0x140808190 (MmLockPreChargedPagedPool.c)
 *     sub_1408089F0 @ 0x1408089F0 (sub_1408089F0.c)
 *     sub_1408124A0 @ 0x1408124A0 (sub_1408124A0.c)
 *     sub_1408125C4 @ 0x1408125C4 (sub_1408125C4.c)
 *     sub_140812D00 @ 0x140812D00 (sub_140812D00.c)
 *     sub_14093146C @ 0x14093146C (sub_14093146C.c)
 *     sub_1409315C4 @ 0x1409315C4 (sub_1409315C4.c)
 *     sub_140A4B974 @ 0x140A4B974 (sub_140A4B974.c)
 *     sub_140A4E794 @ 0x140A4E794 (sub_140A4E794.c)
 *     sub_140A4F9D8 @ 0x140A4F9D8 (sub_140A4F9D8.c)
 *     sub_140A4FC08 @ 0x140A4FC08 (sub_140A4FC08.c)
 *     sub_140A50B90 @ 0x140A50B90 (sub_140A50B90.c)
 *     sub_140A52500 @ 0x140A52500 (sub_140A52500.c)
 *     sub_140A52AD8 @ 0x140A52AD8 (sub_140A52AD8.c)
 */

__int64 sub_140802068()
{
  __int64 v0; // rax
  char *v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // r8
  ULONG_PTR *v4; // r15
  int v5; // edi
  ULONG_PTR v6; // r14
  char v7; // cl
  char v8; // r8
  __int16 v9; // dx
  char v10; // cl
  __int64 v11; // r8
  __int16 v12; // dx
  unsigned __int64 v13; // rcx
  __int16 v14; // ax
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r13
  unsigned __int64 v20; // rdx
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned int v23; // edx
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  PVOID *v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int16 v34; // ax
  __int64 **v35; // r12
  __int64 *i; // rdi
  int v37; // eax
  PVOID *v38; // r15
  __int16 SystemInformation; // [rsp+80h] [rbp+48h] BYREF
  __int64 v40; // [rsp+88h] [rbp+50h] BYREF
  __int64 v41; // [rsp+90h] [rbp+58h] BYREF
  unsigned __int64 v42; // [rsp+98h] [rbp+60h] BYREF

  v41 = 0LL;
  v42 = 0LL;
  SystemInformation = 0;
  if ( dword_140C227E8 != 5 )
    return 0;
  v40 = 0LL;
  v0 = sub_14020DB30(0);
  v1 = (char *)MemoryMap;
  qword_140C22800 = (ULONG_PTR)MemoryMap;
  dword_140C23724 = dword_140C2373C + ((((unsigned __int64)(v0 + 32) >> 3) + 4092) >> 12);
  memset(MemoryMap, 0, 0x1C8uLL);
  MmLockPreChargedPagedPool(qword_140C22C10, qword_140C22C18);
  dword_140C548A4 = 0;
  *((_OWORD *)v1 + 3) = xmmword_140C22C30;
  *((_QWORD *)v1 + 25) = qword_140C22C20;
  *((_QWORD *)v1 + 40) = qword_140C22C70;
  *((_QWORD *)v1 + 27) = qword_140C22C50;
  *((_QWORD *)v1 + 28) = qword_140C22C80;
  *((_QWORD *)v1 + 29) = qword_140C22C78;
  *((_OWORD *)v1 + 2) = xmmword_140C22C40;
  *((_QWORD *)v1 + 9) = v1 + 64;
  *((_QWORD *)v1 + 8) = v1 + 64;
  if ( !FileObject )
  {
    v5 = -1073741809;
    v32 = 42LL;
LABEL_68:
    sub_140A4B974(v32);
    goto LABEL_42;
  }
  v4 = (ULONG_PTR *)(v1 + 168);
  v5 = sub_1408089F0(v2, v1 + 168, v3, dword_140C22278 & 0x10);
  if ( v5 < 0 )
  {
    v32 = 43LL;
    goto LABEL_68;
  }
  v6 = *v4;
  v7 = 0;
  if ( dword_140C227CC < 0 && dword_140C227D4 == 2 )
    v7 = 2;
  v8 = v7 | 1;
  v9 = __readcr4();
  v10 = v7 | 9;
  if ( (v9 & 0x1000) == 0 )
    v10 = v8;
  v11 = *((_QWORD *)v1 + 27);
  v1[1] = v10;
  v12 = qword_140C22C28;
  v13 = qword_140C22C28 & 0xFFFFFFFFFFFFF000uLL;
  v14 = qword_140C22C28;
  *(_QWORD *)v11 = 0LL;
  *(_WORD *)(v11 + 10) = 0;
  *(_QWORD *)(v11 + 32) = v13;
  *(_DWORD *)(v11 + 44) = v12 & 0xFFF;
  *(_WORD *)(v11 + 8) = 8 * ((((unsigned __int64)(v14 & 0xFFF) + 102399) >> 12) + 6);
  *(_DWORD *)(v11 + 40) = 98304;
  MmBuildMdlForNonPagedPool(*((PMDL *)v1 + 27));
  v15 = *((_QWORD *)v1 + 28);
  if ( v15 )
  {
    v33 = qword_140C22C78;
    v34 = qword_140C22C78;
    *(_QWORD *)v15 = 0LL;
    *(_WORD *)(v15 + 10) = 0;
    *(_DWORD *)(v15 + 40) = 4096;
    *(_WORD *)(v15 + 8) = 8 * (((unsigned __int16)((v34 & 0xFFF) + 0x1FFF) >> 12) + 6);
    *(_QWORD *)(v15 + 32) = v33 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(v15 + 44) = v33 & 0xFFF;
    MmBuildMdlForNonPagedPool(*((PMDL *)v1 + 28));
  }
  v5 = sub_140807A78(v1);
  if ( v5 < 0 )
  {
    v32 = 44LL;
    goto LABEL_68;
  }
  v5 = sub_1408125C4(0LL, 2LL, &v41);
  if ( v5 < 0 )
  {
    v32 = 45LL;
    goto LABEL_68;
  }
  v16 = v41;
  v5 = sub_140800680(v41, &v40);
  if ( v5 < 0 )
  {
    sub_1408124A0(v16);
    v32 = 46LL;
    goto LABEL_68;
  }
  v5 = sub_140800808(v16, v17, v18, v40);
  sub_140812D00(v40);
  if ( v5 < 0 )
  {
    sub_1408124A0(v16);
    v32 = 47LL;
    goto LABEL_68;
  }
  sub_1408072C0(v16);
  RtlClearAllBits((PRTL_BITMAP)v1 + 2);
  RtlSetAllBits((PRTL_BITMAP)v1 + 3);
  *((_DWORD *)v1 + 112) = sub_140A52AD8();
  sub_140801D60(v1);
  LODWORD(v19) = 0;
  if ( (int)sub_140A52500(&v42) >= 0 )
  {
    v20 = v42 >> 12;
    *((_QWORD *)v1 + 39) = v42 >> 12;
    sub_140A4F9D8(v1, v20, 4LL);
  }
  if ( !byte_140C09804 || KdEventLoggingEnabled )
  {
    PoSetHiberRange(v1, 2u, &qword_140C343C0, 0LL, 0x20676244u);
    PoSetHiberRange(v1, 2u, &qword_140D31280, 0LL, 0x20676244u);
  }
  sub_140802020((__int64)v1, qword_140C22BE8);
  sub_14042A5E0(v1, v21);
  v22 = (4 * (unsigned __int64)(unsigned int)dword_140C23724 + 4095) >> 12;
  v23 = v22;
  *((_DWORD *)v1 + 38) = v22;
  if ( *((_QWORD *)v1 + 30) )
  {
    v24 = *((unsigned int *)v1 + 62);
    if ( v24 > v22 )
    {
      *((_DWORD *)v1 + 38) = v24;
      v23 = v24;
    }
  }
  v25 = sub_140A4FC08(v23);
  v5 = *((_DWORD *)v1 + 47);
  *((_QWORD *)v1 + 18) = v25;
  if ( v5 < 0 )
  {
    v32 = 48LL;
    goto LABEL_68;
  }
  if ( *(_BYTE *)(*v4 + 280) )
  {
    v35 = (__int64 **)(*(_QWORD *)(*v4 + 272) + 40LL);
    for ( i = *v35; i != (__int64 *)v35; i = (__int64 *)*i )
    {
      v37 = *((_DWORD *)i + 16);
      if ( v37 )
      {
        if ( (v37 & 0xFFF) != 0 )
        {
          sub_1405C6658((__int64)(i - 1), 0x70u, 0LL);
          sub_1405C6658((__int64)v1, 0x1C8u, 0LL);
          sub_140A4B974(49LL);
          KeBugCheckEx(0xA0u, 0x102uLL, 0xAuLL, v6, (ULONG_PTR)v1);
        }
        v38 = (PVOID *)(i + 9);
        v19 = 2LL;
        do
        {
          if ( *v38 )
            PoSetHiberRange(v1, 0x8000u, *v38, *((unsigned int *)i + 16), 0x66756263u);
          ++v38;
          --v19;
        }
        while ( v19 );
      }
    }
  }
  else
  {
    v26 = sub_140A4FC08(16LL);
    *(_QWORD *)(v6 + 8) = v26;
    if ( !v26 )
    {
      v5 = *((_DWORD *)v1 + 47);
      sub_140A4B974(50LL);
      if ( v5 >= 0 )
        return (unsigned int)v5;
LABEL_42:
      sub_140800338();
      return (unsigned int)v5;
    }
    PoSetHiberRange(v1, 0x8000u, (PVOID)(v26 + 0x2000), 0xE000uLL, 0x6D656D44u);
    if ( (*(_DWORD *)(v6 + 112) & 0xFFF) != 0 )
    {
      sub_1405C6658(v6, 0x108u, 0LL);
      sub_1405C6658((__int64)v1, 0x1C8u, 0LL);
      sub_140A4B974(51LL);
      KeBugCheckEx(0xA0u, 0x102uLL, 0xAuLL, v6, (ULONG_PTR)v1);
    }
    v27 = (PVOID *)(v6 + 16);
    v28 = 2LL;
    do
    {
      if ( *v27 )
        PoSetHiberRange(v1, 0x8000u, *v27, *(unsigned int *)(v6 + 112), 0x66756263u);
      ++v27;
      --v28;
    }
    while ( v28 );
  }
  v29 = sub_140A50B90(v1, (unsigned int)dword_140C23724);
  *((_QWORD *)v1 + 15) = v29;
  if ( !v29 )
  {
    v5 = -1073741670;
    v32 = 52LL;
    goto LABEL_68;
  }
  if ( byte_140D06888 != (_BYTE)v19 )
  {
    v1[452] = 1;
    v5 = sub_1409315C4(v1);
    if ( v5 >= 0 )
      goto LABEL_33;
    v32 = 53LL;
    goto LABEL_68;
  }
  v1[452] = v19;
LABEL_33:
  if ( ZwQuerySystemInformation(SystemSecureBootInformation, &SystemInformation, 2u, 0LL) >= 0 )
    v1[453] = SystemInformation;
  if ( (int)sub_140A4E794(v1) >= 0 )
    byte_140C23680 = 1;
  *((_DWORD *)v1 + 48) = *((_DWORD *)v1 + 64) - 1;
  if ( (dword_140D0688C & 2) != 0 )
    sub_14093146C(v30, 16LL);
  return (unsigned int)v19;
}
