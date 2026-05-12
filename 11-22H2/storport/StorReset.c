/*
 * XREFs of StorReset @ 0x1C0047378
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 *     RaidAdapterDeviceReset @ 0x1C003525C (RaidAdapterDeviceReset.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     StorIsIoGatewayPaused @ 0x1C00194C0 (StorIsIoGatewayPaused.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qjzztqdqx_EtwWriteTransfer @ 0x1C0043F5C (McTemplateK0qjzztqdqx_EtwWriteTransfer.c)
 *     StorDelayExecution @ 0x1C0044DCC (StorDelayExecution.c)
 */

__int64 __fastcall StorReset(__int64 a1, unsigned int a2, char a3)
{
  int v3; // esi
  _DWORD *v4; // r14
  LARGE_INTEGER v5; // rdi
  LARGE_INTEGER v6; // r15
  _DWORD *Adapter; // rax
  __int64 v10; // rax
  char v11; // al
  __int64 v12; // r12
  LARGE_INTEGER v13; // rax
  bool v14; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v16; // rcx
  __int64 (__fastcall *v17)(_QWORD, unsigned int *, _QWORD); // rax
  int v18; // eax
  void *Pool; // rax
  __int64 v20; // rsi
  __int64 v21; // r12
  bool v22; // zf
  _BYTE *v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  const wchar_t *v26; // rbx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r11
  unsigned __int64 v29; // r15
  __int64 v30; // rbx
  char *v31; // rsi
  unsigned int v32; // r15d
  unsigned int v33; // ebx
  char *v34; // rbx
  unsigned __int64 v35; // r8
  const wchar_t *v36; // r8
  char v37; // al
  _BYTE v39[4]; // [rsp+60h] [rbp-69h] BYREF
  unsigned int v40; // [rsp+64h] [rbp-65h] BYREF
  PVOID P; // [rsp+68h] [rbp-61h]
  int v42; // [rsp+70h] [rbp-59h]
  unsigned int v43; // [rsp+74h] [rbp-55h]
  __int64 v44; // [rsp+78h] [rbp-51h]
  __int64 v45; // [rsp+80h] [rbp-49h] BYREF
  __int128 v46; // [rsp+88h] [rbp-41h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+98h] [rbp-31h] BYREF
  struct _KEVENT v48[2]; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v49; // [rsp+D0h] [rbp+7h]
  __int128 v50; // [rsp+D8h] [rbp+Fh] BYREF

  v40 = 0;
  v3 = 0;
  P = 0LL;
  v4 = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  LODWORD(v49) = 0;
  v5.QuadPart = 0LL;
  v6.QuadPart = 0LL;
  memset(v48, 0, sizeof(v48));
  if ( a2 >= 3 )
  {
    v3 = -1073741822;
    goto LABEL_58;
  }
  Adapter = RaidpPortGetAdapter(a1);
  v4 = Adapter;
  if ( !Adapter )
  {
    v3 = -1073741811;
    goto LABEL_58;
  }
  v10 = *((_QWORD *)Adapter + 664);
  if ( !v10 || !*(_QWORD *)(v10 + 8) )
    goto LABEL_57;
  if ( !StorIsIoGatewayPaused(*((_QWORD *)v4 + 112)) )
  {
    v3 = -1073741808;
    goto LABEL_58;
  }
  if ( KeGetCurrentIrql() )
  {
    v3 = -1073741496;
    goto LABEL_58;
  }
  if ( (*((_BYTE *)v4 + 111) & 4) != 0 )
  {
    v3 = -1073740682;
    goto LABEL_58;
  }
  v11 = a3;
  v12 = a3 & 2;
  v44 = v11 & 1;
  if ( UseQPCTime )
    v13 = KeQueryPerformanceCounter(&PerformanceFrequency);
  else
    v13.QuadPart = KeQueryUnbiasedInterruptTime();
  *((_BYTE *)v4 + 111) |= 4u;
  v5 = v13;
  if ( a2 )
  {
    if ( a2 == 2 )
    {
      if ( v4[88] != 5 )
        goto LABEL_57;
    }
    else if ( a2 != 1 )
    {
      goto LABEL_58;
    }
  }
  else if ( !(_BYTE)v44 && !v12 )
  {
    if ( *(_QWORD *)(*((_QWORD *)v4 + 664) + 32LL) )
    {
      v49 = 0LL;
      *(_QWORD *)&v48[0].Header.Lock = 24LL;
      v48[0].Header.WaitListHead.Flink = (_LIST_ENTRY *)StorResetCompletion;
      memset(&v48[1], 0, sizeof(struct _KEVENT));
      v48[0].Header.WaitListHead.Blink = (_LIST_ENTRY *)v48;
      KeInitializeEvent(&v48[1], SynchronizationEvent, 0);
      v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct _KEVENT *))(*((_QWORD *)v4 + 664) + 32LL))(
             *(_QWORD *)(*((_QWORD *)v4 + 664) + 8LL),
             0LL,
             0LL,
             v48);
      if ( v3 == 259 )
      {
        KeWaitForSingleObject(&v48[1], Executive, 0, 0, 0LL);
        v3 = v49;
      }
      v14 = UseQPCTime == 0;
      goto LABEL_23;
    }
    goto LABEL_57;
  }
  v16 = *((_QWORD *)v4 + 664);
  if ( *(_WORD *)(v16 + 2) < 3u )
    goto LABEL_57;
  if ( *(_WORD *)v16 < 0x50u )
    goto LABEL_57;
  v17 = *(__int64 (__fastcall **)(_QWORD, unsigned int *, _QWORD))(v16 + 56);
  if ( !v17 || !*(_QWORD *)(v16 + 64) || !*(_QWORD *)(v16 + 72) )
    goto LABEL_57;
  v18 = v17(*(_QWORD *)(v16 + 8), &v40, 0LL);
  v3 = v18;
  if ( v18 != -1073741789 )
  {
    if ( v18 >= 0 )
      v3 = -1073741823;
    goto LABEL_58;
  }
  if ( !v40 )
    goto LABEL_57;
  Pool = (void *)RaidAllocatePool(64LL, 24LL * v40, 1163026770LL, *((_QWORD *)v4 + 1));
  P = Pool;
  if ( !Pool )
  {
    v3 = -1073741670;
    goto LABEL_58;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, void *))(*((_QWORD *)v4 + 664) + 56LL))(
         *(_QWORD *)(*((_QWORD *)v4 + 664) + 8LL),
         &v40,
         Pool);
  if ( v3 < 0 )
    goto LABEL_58;
  v20 = 0LL;
  if ( !v40 )
  {
LABEL_57:
    v3 = -1073741637;
    goto LABEL_58;
  }
  while ( 1 )
  {
    v21 = 24 * v20;
    if ( a2 == 2 )
    {
      v22 = RtlCompareMemory((char *)P + v21, &GUID_BUS_TYPE_PCI, 0x10uLL) == 16;
    }
    else
    {
      if ( a2 == 1 )
        goto LABEL_47;
      v22 = a2 == 0;
    }
    if ( !v22 )
      goto LABEL_56;
LABEL_47:
    if ( a2 == 2 )
      break;
    if ( a2 )
    {
      v23 = P;
      goto LABEL_54;
    }
    if ( (*((_BYTE *)P + v21 + 16) & 1) != 0 )
    {
LABEL_49:
      v24 = v4[1495];
      goto LABEL_65;
    }
LABEL_56:
    v20 = (unsigned int)(v20 + 1);
    if ( (unsigned int)v20 >= v40 )
      goto LABEL_57;
  }
  v23 = P;
  if ( (*((_BYTE *)P + v21 + 16) & 4) != 0 )
    goto LABEL_49;
LABEL_54:
  if ( a2 != 1 || (v23[v21 + 16] & 2) == 0 )
    goto LABEL_56;
  v24 = v4[1496];
LABEL_65:
  *(_QWORD *)&v46 = 0LL;
  *(_QWORD *)&v50 = 0LL;
  v43 = 0;
  v39[0] = 0;
  v42 = 200 * v24;
  v3 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int128 *, __int128 *))(*((_QWORD *)v4 + 664) + 72LL))(
         *(_QWORD *)(*((_QWORD *)v4 + 664) + 8LL),
         v39,
         &v46,
         &v50);
  if ( v3 < 0 )
    goto LABEL_58;
  if ( v39[0] )
  {
    v3 = -1073741436;
    goto LABEL_58;
  }
  if ( !a2 )
  {
    v30 = 1LL;
    goto LABEL_70;
  }
  if ( a2 != 2 )
  {
    v31 = (char *)P;
    v34 = (char *)P + v21;
    if ( RtlCompareMemory((char *)P + v21, &GUID_BUS_TYPE_ACPI, 0x10uLL) == 16
      || RtlCompareMemory(v34, &GUID_BUS_TYPE_PCI, 0x10uLL) == 16 )
    {
      v30 = 2LL;
      goto LABEL_71;
    }
    goto LABEL_57;
  }
  v30 = 4LL;
LABEL_70:
  v31 = (char *)P;
LABEL_71:
  v45 = 0LL;
  if ( !(_BYTE)v44 )
  {
    *((_BYTE *)v4 + 111) |= 0x20u;
    v45 = 1LL;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64, __int64 *, _QWORD))(*((_QWORD *)v4 + 664) + 64LL))(
         *(_QWORD *)(*((_QWORD *)v4 + 664) + 8LL),
         &v31[v21],
         v30,
         &v45,
         0LL);
  if ( v3 == 259 && !(_BYTE)v44 )
  {
    v32 = v42;
    if ( !v42 )
      goto LABEL_89;
    v33 = v43;
    do
    {
      v3 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int128 *, __int128 *))(*((_QWORD *)v4 + 664) + 72LL))(
             *(_QWORD *)(*((_QWORD *)v4 + 664) + 8LL),
             v39,
             &v46,
             &v50);
      if ( v3 < 0 )
        break;
      if ( !v39[0] )
        break;
      StorDelayExecution(0x1388u);
      ++v33;
    }
    while ( v33 < v32 );
    if ( v33 < v32 )
    {
      if ( (*((_BYTE *)v4 + 111) & 0x20) != 0 )
      {
        KeWaitForSingleObject(v4 + 1510, Executive, 0, 0, 0LL);
        if ( v4[22] != 1 )
          v3 = -1073741436;
      }
    }
    else
    {
LABEL_89:
      v3 = -1073741643;
    }
    v14 = UseQPCTime == 0;
LABEL_23:
    if ( v14 )
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    else
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v6 = PerformanceCounter;
  }
LABEL_58:
  *((_BYTE *)v4 + 111) &= ~0x20u;
  if ( StorEtwLoggingEnabled )
  {
    v25 = *((_QWORD *)v4 + 2);
    v26 = (const wchar_t *)*((_QWORD *)v4 + 627);
    v50 = *(_OWORD *)(v4 + 1250);
    v46 = 0LL;
    RaidDriverGetName(v25, (__int64)&v46);
    if ( v5.QuadPart && v6.QuadPart )
    {
      if ( v6.QuadPart <= 0 || v6.QuadPart >= v5.QuadPart )
        v29 = v6.QuadPart - v5.QuadPart;
      else
        v29 = v6.QuadPart - v5.QuadPart - 1;
      if ( UseQPCTime == (_BYTE)v28 )
      {
        LOBYTE(v28) = v29;
      }
      else if ( PerformanceFrequency.QuadPart && v29 )
      {
        v35 = 1000 * (v29 % PerformanceFrequency.QuadPart);
        v27 = 10000 * (v35 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart;
        v28 = 10000 * (v35 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
            + 10000 * (1000 * (v29 / PerformanceFrequency.QuadPart) + v35 / PerformanceFrequency.QuadPart);
      }
    }
    if ( (byte_1C0092A06 & 0x10) != 0 )
    {
      v36 = (const wchar_t *)&unk_1C0081788;
      if ( v26 )
        v36 = v26;
      McTemplateK0qjzztqdqx_EtwWriteTransfer(
        *((unsigned __int8 *)v4 + 104) >> 7,
        v27,
        (__int64)v36,
        v4[14],
        (__int64)&v50,
        *((const wchar_t **)&v46 + 1),
        v36,
        *((_BYTE *)v4 + 104) >> 7,
        a2,
        v3,
        v4[1423],
        v28);
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0x45526152u);
  v37 = *((_BYTE *)v4 + 111);
  if ( (v37 & 4) != 0 )
    *((_BYTE *)v4 + 111) = v37 & 0xFB;
  return (unsigned int)v3;
}
