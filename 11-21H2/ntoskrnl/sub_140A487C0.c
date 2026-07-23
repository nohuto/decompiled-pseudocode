/*
 * XREFs of sub_140A487C0 @ 0x140A487C0
 * Callers:
 *     MmCreateMirror @ 0x14096BA60 (MmCreateMirror.c)
 *     sub_140A48630 @ 0x140A48630 (sub_140A48630.c)
 *     sub_140A65D84 @ 0x140A65D84 (sub_140A65D84.c)
 *     sub_140A666B0 @ 0x140A666B0 (sub_140A666B0.c)
 *     sub_140A67C74 @ 0x140A67C74 (sub_140A67C74.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140241620 (MmUnlockPagableImageSection.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14036071C @ 0x14036071C (sub_14036071C.c)
 *     sub_140360A00 @ 0x140360A00 (sub_140360A00.c)
 *     sub_14038A168 @ 0x14038A168 (sub_14038A168.c)
 *     sub_14038A214 @ 0x14038A214 (sub_14038A214.c)
 *     sub_14038A250 @ 0x14038A250 (sub_14038A250.c)
 *     sub_14038A288 @ 0x14038A288 (sub_14038A288.c)
 *     sub_14038A3DC @ 0x14038A3DC (sub_14038A3DC.c)
 *     sub_14038A808 @ 0x14038A808 (sub_14038A808.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     MmLockPagableSectionByHandle @ 0x1406BC300 (MmLockPagableSectionByHandle.c)
 *     sub_1407FD634 @ 0x1407FD634 (sub_1407FD634.c)
 *     sub_1407FD674 @ 0x1407FD674 (sub_1407FD674.c)
 *     sub_140A48B0C @ 0x140A48B0C (sub_140A48B0C.c)
 */

NTSTATUS __fastcall sub_140A487C0(__int64 a1)
{
  int v1; // edx
  unsigned __int8 v2; // r13
  unsigned __int8 v4; // r12
  int v5; // r14d
  struct _KTHREAD *CurrentThread; // rsi
  NTSTATUS result; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r14d
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rdx
  int v14; // eax
  bool v15; // zf
  unsigned __int8 v16; // r10
  __int64 v17; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v20; // r9
  int v21; // eax
  __int128 v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+40h] [rbp-10h]
  __int64 v24; // [rsp+98h] [rbp+48h] BYREF

  v1 = *(_DWORD *)(a1 + 32);
  v24 = 0LL;
  v23 = 0LL;
  v2 = 17;
  v4 = 17;
  v22 = 0LL;
  DWORD2(v22) = v1;
  if ( (v1 & 1) != 0 && (v1 & 0x404) != 0 )
    return -1073741811;
  if ( (v1 & 8) != 0 )
  {
    v1 &= 0xFFFFFBFA;
    DWORD2(v22) = v1;
  }
  if ( (v1 & 0x400) != 0 && (v1 & 4) != 0
    || (v1 & 0xC0) != 0 && ((v1 & 0xFFFFFC2E) != 0 || (v1 & 0x11) != 0x11 || (v1 & 0x40) != 0 && (v1 & 0x80u) != 0) )
  {
    return -1073741811;
  }
  if ( (v1 & 0xA) == 0 )
    sub_14038A808();
  *(_QWORD *)&v22 = a1;
  v5 = 0;
  HIDWORD(v22) = 8;
  BYTE4(v23) = 0;
  CurrentThread = KeGetCurrentThread();
  result = KeWaitForSingleObject(
             &stru_140C529D0,
             WrVirtualMemory,
             0,
             0,
             (PLARGE_INTEGER)((unsigned __int64)&v24 & -(__int64)((WORD4(v22) & 0x200) != 0)));
  if ( result >= 0 )
  {
    if ( result == 258 )
      return 258;
    if ( (dword_140D06880 & 4) == 0 )
      MmLockPagableSectionByHandle(ImageSectionHandle);
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C51F08, 0LL);
    sub_140360A00((__int64)&StartContext, (__int64)CurrentThread);
    _InterlockedIncrement(&dword_140C53440);
    if ( !(unsigned int)sub_1407FD634() )
    {
      v11 = -1073741670;
LABEL_35:
      dword_140C529CC = 0;
      if ( BYTE4(v23) )
        _InterlockedAdd(&dword_140C5325C, 0xFFFFFFFF);
      if ( qword_140C52A08 )
        qword_140C52A08 = 0LL;
      if ( v2 != 17 )
      {
        if ( v4 != 17 )
          sub_14038A250();
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v2 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v20 = *((_QWORD *)CurrentPrcb + 4375);
              v21 = ~(unsigned __int16)(-1LL << (v2 + 1));
              v15 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
              *(_DWORD *)(v20 + 20) &= v21;
              if ( v15 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v2);
      }
      if ( v5 )
      {
        stru_140C529E8.Parameter = (PVOID)HIDWORD(v22);
        ExQueueWorkItem(&stru_140C529E8, HyperCriticalWorkQueue);
      }
      else
      {
        _InterlockedAdd(&dword_140C53440, 0xFFFFFFFF);
        KeSetEvent(&stru_140C529D0, 0, 0);
      }
      sub_14036071C((__int64)&StartContext, (__int64)CurrentThread);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C51F08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C51F08);
      sub_1402AFC00((ULONG_PTR)&qword_140C51F08);
      v15 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
      if ( v15 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
        KiCheckForKernelApcDelivery();
      if ( (dword_140D06880 & 4) == 0 )
        MmUnlockPagableImageSection(ImageSectionHandle);
      return v11;
    }
    sub_1407FD674((__int64)&qword_140C52A20, 1);
    v10 = 1;
    LODWORD(v23) = 0;
    if ( (BYTE8(v22) & 1) != 0 )
    {
      LODWORD(v23) = 3;
      goto LABEL_18;
    }
    if ( (WORD4(v22) & 0x400) == 0 )
    {
      if ( (BYTE8(v22) & 4) != 0 )
      {
        HIDWORD(v22) = 7;
LABEL_17:
        LODWORD(v23) = 2;
LABEL_18:
        v10 = 0;
        goto LABEL_19;
      }
      if ( (BYTE8(v22) & 8) == 0 )
      {
LABEL_19:
        v11 = sub_14042A5E0(v9, v8);
        if ( v11 < 0 )
          goto LABEL_74;
        dword_140C529CC = 1;
        v11 = sub_140A48B0C(&v22);
        if ( v11 < 0 )
          goto LABEL_74;
        if ( (BYTE8(v22) & 2) == 0 && BYTE4(v23) )
        {
          _InterlockedAdd(&dword_140C5325C, 0xFFFFFFFF);
          BYTE4(v23) = 0;
        }
        v2 = KeGetCurrentIrql();
        v11 = sub_14042A5E0(0LL, v12);
        if ( v11 < 0 )
          goto LABEL_74;
        v4 = KeGetCurrentIrql();
        if ( *(_QWORD *)(a1 + 24) )
          sub_1407FD674((__int64)qword_140C52A10, 1);
        if ( v4 < 2u )
        {
          v16 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v16 <= 0xFu )
          {
            v17 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
            *(_DWORD *)(v17 + 20) |= (-1 << (v16 + 1)) & 4;
          }
          v4 = v16;
        }
        sub_14038A214();
        qword_140C52A08 = (__int64)CurrentThread;
        if ( BYTE4(v23) )
        {
          _InterlockedAdd(&dword_140C5325C, 0xFFFFFFFF);
          BYTE4(v23) = 0;
        }
        dword_140C529CC = 2;
        v11 = sub_14038A168((__int64 *)&v22);
        if ( v11 < 0
          || (v11 = sub_14038A3DC(a1), v11 < 0)
          || (v14 = sub_14042A5E0(1LL, v13), qword_140C52A08 = 0LL, v11 = v14, v14 != 1073742484)
          || v10 )
        {
LABEL_74:
          v5 = 0;
        }
        else
        {
          v11 = 0;
          sub_14038A288(HIDWORD(v22));
          v5 = 1;
        }
        goto LABEL_35;
      }
    }
    HIDWORD(v22) = 0;
    goto LABEL_17;
  }
  return result;
}
