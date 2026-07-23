/*
 * XREFs of MiSetPagingOfDriver @ 0x140290C64
 * Callers:
 *     MmPageEntireDriver @ 0x140701000 (MmPageEntireDriver.c)
 *     MiEnablePagingTheExecutive @ 0x140B627F8 (MiEnablePagingTheExecutive.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146D4 (MiGetAnyMultiplexedVm.c)
 *     MiWriteWsle @ 0x140216194 (MiWriteWsle.c)
 *     MiGetWsleContents @ 0x140216FD0 (MiGetWsleContents.c)
 *     MiLockPageTableInternal @ 0x1402376E0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C4E0 (MiUnlockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140271240 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140279760 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14027F450 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x140283B70 (MiLockWorkingSetShared.c)
 *     MiDriverPageMustStayResident @ 0x140290F84 (MiDriverPageMustStayResident.c)
 *     MiTrimSystemImagePages @ 0x140290FD4 (MiTrimSystemImagePages.c)
 *     MiUnlockLoaderEntry @ 0x140291FB8 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x140292044 (MiLockLoaderEntry.c)
 *     MiUnlockPageTableInternal @ 0x1403193E0 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140356D4C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140356DAC (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 */

PVOID __fastcall MiSetPagingOfDriver(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r15
  __int64 v5; // r14
  __int64 v6; // rbp
  unsigned __int64 v7; // r12
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  char *AnyMultiplexedVm; // r13
  unsigned __int8 v11; // al
  __int64 v12; // r9
  __int64 v13; // r14
  __int16 v14; // cx
  __int64 v15; // rcx
  unsigned __int64 v16; // r14
  BOOL v17; // r15d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r11
  PVOID result; // rax
  int HasShadow; // eax
  unsigned __int8 v24; // [rsp+20h] [rbp-128h]
  unsigned __int64 v26; // [rsp+30h] [rbp-118h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-110h]
  _QWORD v28[24]; // [rsp+40h] [rbp-108h] BYREF

  v3 = a3;
  v27 = a3;
  v5 = a1;
  memset(v28, 0, 0xB8uLL);
  v6 = 0LL;
  v28[3] = 0LL;
  v7 = (__int64)(a2 << 25) >> 16;
  v8 = 0LL;
  LODWORD(v28[1]) = 20;
  v9 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  MiLockLoaderEntry(v5 + 160, 2LL);
  v11 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v24 = v11;
  if ( a2 <= v3 )
  {
    do
    {
      if ( !v9 || (a2 & 0xFFF) == 0 )
      {
        if ( v6 )
        {
          MiFlushTbList((int *)v28);
          v8 += MiTrimSystemImagePages(v6, a2 - 8);
          v6 = 0LL;
        }
        if ( v9 )
          MiUnlockPageTableInternal(AnyMultiplexedVm, v9);
        v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal((__int64)AnyMultiplexedVm, v9, 0, v12);
      }
      if ( !(unsigned __int8)MiDriverPageMustStayResident(v5, a2) )
      {
        v13 = MI_READ_PTE_LOCK_FREE(a2);
        v26 = v13;
        if ( (v13 & 1) != 0 )
        {
          MI_READ_PTE_LOCK_FREE((unsigned __int64)&v26);
          if ( (MiGetWsleContents(0xFFFFFFFFFFLL, v7) & 0xF) == 9 )
          {
            v14 = *(_WORD *)(v12 + 32);
            if ( v14 == 1 || v14 == 2 && (*(_BYTE *)(v12 + 34) & 8) != 0 )
            {
              v15 = a2;
              if ( v6 )
                v15 = v6;
              v6 = v15;
              MiWriteWsle(v15, v7);
              v16 = v13 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
              v17 = 0;
              v26 = v16;
              if ( MiPteInShadowRange(a2) )
              {
                HasShadow = MiPteHasShadow(v19, v18, v20);
                v21 = 1LL;
                v17 = HasShadow != 0;
              }
              else
              {
                v21 = 1LL;
              }
              *(_QWORD *)a2 = v16;
              if ( v17 )
                MiWritePteShadow(a2, v16);
              MiInsertTbFlushEntry((__int64)v28, v7, v21, 0);
              v3 = v27;
            }
          }
        }
        else if ( (v13 & 0x400) != 0 && v6 )
        {
          MiFlushTbList((int *)v28);
          v8 += MiTrimSystemImagePages(v6, a2 - 8);
          v6 = 0LL;
        }
        v5 = a1;
      }
      a2 += 8LL;
      v7 += 4096LL;
    }
    while ( a2 <= v3 );
    if ( v6 )
    {
      MiFlushTbList((int *)v28);
      v8 += MiTrimSystemImagePages(v6, v3);
    }
    if ( v9 )
      MiUnlockPageTableInternal(AnyMultiplexedVm, v9);
    v11 = v24;
  }
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v11);
  result = (PVOID)MiUnlockLoaderEntry(v5 + 160, 2LL);
  if ( v8 )
  {
    result = *(PVOID *)(v5 + 48);
    if ( result == PsHalImageBase || result == PsNtosImageBase )
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140C65A50 + 2, v8);
    else
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140C65A50 + 3, v8);
  }
  return result;
}
