/*
 * XREFs of MmCopyMemory @ 0x1402EDB50
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSessionVm @ 0x14020B13C (MiGetSessionVm.c)
 *     MiReservePtes @ 0x14027D070 (MiReservePtes.c)
 *     MiGetSystemRegionType @ 0x140284750 (MiGetSystemRegionType.c)
 *     MiReleasePtes @ 0x1402CB8E0 (MiReleasePtes.c)
 *     MiUnlockProtoPoolPage @ 0x1402DAEF0 (MiUnlockProtoPoolPage.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402E14F0 (MiGetEffectivePagePriorityThread.c)
 *     MiTranslatePageForCopy @ 0x1402EDE44 (MiTranslatePageForCopy.c)
 *     MiPrefetchVirtualMemory @ 0x1402EE1C8 (MiPrefetchVirtualMemory.c)
 *     MiCopySinglePage @ 0x1402EE8BC (MiCopySinglePage.c)
 *     MiUnlockSystemVa @ 0x1402EED60 (MiUnlockSystemVa.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwReadVirtualMemoryEx @ 0x14041D540 (ZwReadVirtualMemoryEx.c)
 *     memset @ 0x140435400 (memset.c)
 *     MiCheckPhysicalAddressRange @ 0x140643A2C (MiCheckPhysicalAddressRange.c)
 */

NTSTATUS __fastcall MmCopyMemory(
        char *Buffer,
        unsigned __int64 BaseAddress,
        SIZE_T BufferSize,
        int a4,
        PSIZE_T NumberOfBytesRead)
{
  SIZE_T v9; // r14
  __int64 *v10; // rax
  int v11; // ecx
  int v12; // edi
  unsigned __int64 v13; // r12
  __int64 v14; // rdx
  SIZE_T v15; // r15
  unsigned __int64 v16; // rax
  int v17; // r8d
  unsigned __int64 v18; // r12
  __int64 v20; // rax
  unsigned __int64 SessionVm; // rax
  SIZE_T v22; // rdx
  char *v23; // rcx
  unsigned __int64 v24; // [rsp+38h] [rbp-C8h] BYREF
  char *v25; // [rsp+40h] [rbp-C0h]
  __int64 *v26; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v27; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h]
  __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-90h]
  _KPROCESS *Process; // [rsp+78h] [rbp-88h]
  __int64 *v33; // [rsp+80h] [rbp-80h]
  PSIZE_T v34; // [rsp+88h] [rbp-78h]
  __int128 v35; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v36[16]; // [rsp+A0h] [rbp-60h] BYREF

  v25 = Buffer;
  v34 = NumberOfBytesRead;
  memset(v36, 0, sizeof(v36));
  v28 = 0LL;
  *NumberOfBytesRead = 0LL;
  if ( !a4 || (a4 & 0xFFFFFFFC) != 0 || ((a4 - 1) & a4) != 0 || KeGetCurrentIrql() > 1u )
    return -1073741582;
  if ( (a4 & 1) == 0 )
  {
    if ( BufferSize + BaseAddress > BaseAddress )
    {
      if ( BaseAddress <= 0x7FFFFFFEFFFFLL )
      {
        if ( BufferSize + BaseAddress <= 0x7FFFFFFEFFFFLL )
          return ZwReadVirtualMemoryEx(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   (PVOID)BaseAddress,
                   Buffer,
                   BufferSize,
                   NumberOfBytesRead,
                   1u);
      }
      else if ( BaseAddress >= 0xFFFF800000000000uLL )
      {
        goto LABEL_9;
      }
    }
    return -1073741800;
  }
  if ( !(unsigned int)MiCheckPhysicalAddressRange(BaseAddress, BufferSize) )
    return -1073741800;
LABEL_9:
  v9 = ((BaseAddress & 0xFFF) + BufferSize + 4095) >> 12;
  if ( v9 >= 0x100000000LL )
    return -1073741583;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v10 = (__int64 *)MiReservePtes((__int64)&qword_140C69A40, v9);
  v11 = a4 & 1;
  v12 = 0;
  v33 = v10;
  v13 = BaseAddress & 0xFFF;
  v26 = v10;
  v14 = (__int64)v10;
  v15 = 4096 - v13;
  if ( 4096 - v13 > BufferSize )
    v15 = BufferSize;
  if ( (a4 & 1) != 0 )
    v16 = BaseAddress >> 12;
  else
    v16 = -1LL;
  v24 = v16;
  if ( BufferSize )
  {
    while ( 1 )
    {
      v27 = 0LL;
      v29 = 0LL;
      if ( v11 )
        break;
      v12 = MiTranslatePageForCopy(BaseAddress, v36, &v24, &v27, &v29);
      if ( v12 >= 0 )
      {
        v30 = v36[3];
        if ( v12 == 273 )
        {
          MiUnlockSystemVa(v36);
          v12 = 0;
          v22 = v15;
          if ( v15 )
          {
            v23 = &v25[-v13];
            do
            {
              v23[v13] = *((_BYTE *)&v29 + (v13 & 7));
              ++v13;
              --v22;
            }
            while ( v22 );
          }
        }
        else
        {
          v14 = (__int64)v26;
LABEL_19:
          v17 = v13;
          v18 = v24;
          v12 = MiCopySinglePage((_DWORD)v25, v24, v17, v15, v14, a4);
          if ( v30 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(48 * v18 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v27 )
              MiUnlockProtoPoolPage(v27, 2u);
            MiUnlockSystemVa(v36);
          }
          if ( v12 < 0 )
            goto LABEL_29;
        }
        v28 += v15;
        BufferSize -= v15;
        v25 += v15;
        BaseAddress += v15;
        ++v24;
        v14 = (__int64)v26;
        v15 = BufferSize;
        if ( BufferSize > 0x1000 )
          v15 = 4096LL;
        v13 = 0LL;
        if ( v26 )
          v14 = (__int64)++v26;
        goto LABEL_28;
      }
      if ( v12 != -1073741608 )
        goto LABEL_29;
      v35 = 0LL;
      MiGetEffectivePagePriorityThread((__int64)CurrentThread);
      *(_QWORD *)&v35 = BaseAddress;
      v27 = 1LL;
      v20 = BufferSize;
      if ( BufferSize > 0x200000 - (BaseAddress & 0x1FFFFF) )
        v20 = 0x200000 - (BaseAddress & 0x1FFFFF);
      *((_QWORD *)&v35 + 1) = v20;
      if ( (unsigned int)MiGetSystemRegionType(BaseAddress) == 1 )
      {
        if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
        {
          v12 = -1073741819;
          goto LABEL_29;
        }
        SessionVm = MiGetSessionVm();
      }
      else
      {
        SessionVm = v27;
      }
      if ( BaseAddress >= qword_140C6A658 && BaseAddress <= qword_140C67170 )
      {
        v12 = -1073741585;
        goto LABEL_29;
      }
      v12 = MiPrefetchVirtualMemory(1LL, &v35, SessionVm);
      if ( v12 < 0 )
        goto LABEL_29;
      v14 = (__int64)v26;
LABEL_28:
      if ( !BufferSize )
        goto LABEL_29;
      v11 = a4 & 1;
    }
    v30 = 0LL;
    goto LABEL_19;
  }
LABEL_29:
  if ( v33 )
    MiReleasePtes((__int64)&qword_140C69A40, v33, v9);
  *v34 += v28;
  return v12;
}
