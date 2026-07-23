/*
 * XREFs of sub_14085A124 @ 0x14085A124
 * Callers:
 *     EtwTelemetryCoverageReport @ 0x14024F470 (EtwTelemetryCoverageReport.c)
 *     sub_1406D435C @ 0x1406D435C (sub_1406D435C.c)
 * Callees:
 *     EtwTelemetryCoverageReport @ 0x14024F470 (EtwTelemetryCoverageReport.c)
 *     sub_14024F664 @ 0x14024F664 (sub_14024F664.c)
 *     sub_14026D048 @ 0x14026D048 (sub_14026D048.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     KeInitializeTimer2 @ 0x1403588D0 (KeInitializeTimer2.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MmCreateSection @ 0x14066BF30 (MmCreateSection.c)
 *     sub_1406F3FDC @ 0x1406F3FDC (sub_1406F3FDC.c)
 *     sub_14085A4D0 @ 0x14085A4D0 (sub_14085A4D0.c)
 *     sub_1409E5224 @ 0x1409E5224 (sub_1409E5224.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_14085A124()
{
  unsigned int v0; // edx
  char *Pool2; // rax
  char *v2; // rdi
  void *v3; // rax
  _QWORD *v4; // rcx
  unsigned __int64 v5; // r15
  __int64 v6; // r8
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  int v9; // esi
  int v10; // ebx
  __int64 v11; // rcx
  char *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  char v18; // bl
  char v20; // cl
  ULONG_PTR v21; // rcx
  void *v22; // rcx
  _QWORD v23[3]; // [rsp+40h] [rbp-18h] BYREF
  int v24; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+50h] BYREF
  __int64 v26; // [rsp+B0h] [rbp+58h] BYREF
  unsigned __int64 v27; // [rsp+B8h] [rbp+60h] BYREF

  if ( (unsigned __int8)byte_140C15F70 <= 1u || (v0 = dword_140C0B204) == 0 )
    return (unsigned int)-1073741637;
  if ( (unsigned int)dword_140C0B204 >= 0x80000 )
    v0 = 0x80000;
  if ( v0 <= 0x40 )
    v0 = 64;
  if ( ((v0 - 1) & v0) != 0 )
  {
    v20 = -1;
    do
    {
      ++v20;
      v0 >>= 1;
    }
    while ( v0 );
    v0 = 1 << v20;
  }
  dword_140C0B204 = v0;
  if ( (unsigned int)dword_140C0B1FC <= 0x3E8 )
    dword_140C0B1FC = 1000;
  if ( (unsigned int)dword_140C0B200 <= 0x36EE80 )
    dword_140C0B200 = 3600000;
  Pool2 = (char *)ExAllocatePool2(256LL, 72LL, 1450669125LL);
  v2 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  memset(Pool2, 0, 0x48uLL);
  v3 = (void *)ExAllocatePool2(64LL, 440LL, 1450669125LL);
  *(_QWORD *)v2 = v3;
  if ( !v3 )
  {
    v9 = -1073741670;
LABEL_34:
    v21 = *((_QWORD *)v2 + 2);
    if ( v21 )
    {
      sub_14026D048(v21, 1);
      *((_QWORD *)v2 + 2) = 0LL;
    }
    v22 = (void *)*((_QWORD *)v2 + 1);
    if ( v22 )
    {
      ObfDereferenceObject(v22);
      *((_QWORD *)v2 + 1) = 0LL;
    }
    if ( *(_QWORD *)v2 )
      ExFreePoolWithTag(*(PVOID *)v2, 0x56777445u);
    sub_1409E5224(v2, 0LL);
    ExFreePoolWithTag(v2, 0x56777445u);
    return (unsigned int)v9;
  }
  memset(v3, 0, 0x1B8uLL);
  v4 = *(_QWORD **)v2;
  v4[3] = 0LL;
  v4[6] = v4 + 5;
  v4[5] = v4 + 5;
  v4[9] = sub_140630EF0;
  v4[10] = v2;
  v4[7] = 0LL;
  *((_QWORD *)v2 + 7) = v2 + 48;
  *((_QWORD *)v2 + 6) = v2 + 48;
  *((_DWORD *)v2 + 7) = dword_140C0B1FC;
  v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_DWORD *)(*(_QWORD *)v2 + 16LL) = v5;
  v6 = *(_QWORD *)v2;
  *((_DWORD *)v2 + 6) = v5;
  KeInitializeTimer2(v6 + 104, (__int64)sub_140631250, v6, 8LL);
  KeInitializeTimer2(*(_QWORD *)v2 + 240LL, (__int64)sub_14025E460, *(_QWORD *)v2, 8LL);
  v7 = *(_QWORD **)v2;
  v7[53] = sub_1409E5790;
  v7[54] = v2;
  v7[51] = 0LL;
  v8 = *(_QWORD **)v2;
  v8[49] = sub_1406E7DC0;
  v8[50] = v2;
  v8[47] = 0LL;
  v9 = sub_14085A4D0(v2);
  if ( v9 < 0 )
    goto LABEL_34;
  v10 = 4 * dword_140C0B204;
  v25 = 4LL * (unsigned int)dword_140C0B204;
  v9 = MmCreateSection((int)v2 + 8, 983071LL, 0, &v25, 4, 0x8000000, 0LL, 0LL);
  if ( v9 < 0 )
    goto LABEL_34;
  v11 = *((_QWORD *)v2 + 1);
  v12 = v2 + 16;
  v27 = 0LL;
  v26 = 0LL;
  v9 = sub_1406F3FDC(v11, (_QWORD *)v2 + 2, &v27, &v26, 0LL, 0LL);
  if ( v9 < 0 )
    goto LABEL_34;
  v13 = 2LL;
  **(_BYTE **)v12 = 2;
  *(_BYTE *)(*(_QWORD *)v12 + 1LL) = 1;
  *(_DWORD *)(*(_QWORD *)v12 + 24LL) = 1;
  **(_DWORD **)v2 = *(_DWORD *)(*(_QWORD *)v12 + 24LL);
  MEMORY[0xFFFFF7800000037C] = *(_DWORD *)(*(_QWORD *)v12 + 24LL);
  *(_DWORD *)(*(_QWORD *)v12 + 20LL) = v5;
  *(_DWORD *)(*(_QWORD *)v2 + 20LL) = *(_DWORD *)(*(_QWORD *)v12 + 20LL);
  *(_DWORD *)(*(_QWORD *)v12 + 8LL) = dword_140C0B204 - 1;
  do
  {
    *(_DWORD *)(*(_QWORD *)v12 + 4LL) = (unsigned int)(v10 - 52) >> 2;
    --v13;
  }
  while ( v13 );
  v14 = *(_QWORD *)v12;
  *((_DWORD *)v2 + 8) = 3 * ((unsigned int)(v10 - 52) >> 4);
  *(_DWORD *)(v14 + 16) = 4 * *(_DWORD *)(v14 + 4) + 52;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C15D90, 0LL);
  qword_140C547C0 = (__int64)KeGetCurrentThread();
  if ( !qword_140C5B100 )
  {
    v16 = (__int64)v2;
    v17 = *(_QWORD *)v2;
    v2 = 0LL;
    qword_140C5B100 = v16;
    qword_140C5B0F0 = v17;
    if ( dword_140C5B0F8 )
    {
      *(_WORD *)(*(_QWORD *)(v16 + 16) + 2LL) |= 1u;
      MEMORY[0xFFFFF7800000037C] = -256;
    }
    v23[0] = 0LL;
    v23[1] = -1LL;
    KeSetTimer2(
      *(_QWORD *)qword_140C5B100 + 104LL,
      -10000LL * (unsigned int)dword_140C0B200,
      10000LL * (unsigned int)dword_140C0B200,
      (__int64)v23);
  }
  qword_140C547C0 = 0LL;
  v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C15D90, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v18 & 2) != 0 && (v18 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C15D90);
  sub_1402AFC00((ULONG_PTR)&qword_140C15D90);
  KeLeaveCriticalRegion();
  if ( (unsigned int)dword_140C06804 < MEMORY[0xFFFFF7800000037C] )
  {
    if ( !dword_140C06800 )
    {
      v24 = 0;
      dword_140C06800 = sub_14024F664(off_140C067F8, &v24);
    }
    EtwTelemetryCoverageReport((__int64 *)&off_140C067F8);
  }
  if ( dword_140C5B0F8 && (unsigned int)dword_140C0919C < MEMORY[0xFFFFF7800000037C] )
  {
    if ( !dword_140C09198 )
    {
      v24 = 0;
      dword_140C09198 = sub_14024F664(off_140C09190, &v24);
    }
    EtwTelemetryCoverageReport((__int64 *)&off_140C09190);
  }
  v9 = 0;
  if ( v2 )
    goto LABEL_34;
  return (unsigned int)v9;
}
