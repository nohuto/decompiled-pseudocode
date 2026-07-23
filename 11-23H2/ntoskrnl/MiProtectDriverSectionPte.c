/*
 * XREFs of MiProtectDriverSectionPte @ 0x14061A9F0
 * Callers:
 *     <none>
 * Callees:
 *     MiMarkPfnVerified @ 0x140219BD0 (MiMarkPfnVerified.c)
 *     MmAccessFault @ 0x140235440 (MmAccessFault.c)
 *     MiGetSlabPage @ 0x14023BE40 (MiGetSlabPage.c)
 *     MiSearchNumaNodeTable @ 0x14026ED60 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPagePrivilege @ 0x140282FF0 (MiGetPagePrivilege.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140285C64 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetPfnChannel @ 0x140287460 (MiGetPfnChannel.c)
 *     MiUnlockLoaderEntry @ 0x140292368 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x1402923F4 (MiLockLoaderEntry.c)
 *     MiCheckSlabPage @ 0x140292678 (MiCheckSlabPage.c)
 *     MiReplenishSlabAllocator @ 0x1402E6D54 (MiReplenishSlabAllocator.c)
 *     MiReleaseFreshPage @ 0x1402E81B0 (MiReleaseFreshPage.c)
 *     MiTradeActivePage @ 0x1402EB0B4 (MiTradeActivePage.c)
 *     MiCheckSlabPfnBitmap @ 0x1403249C0 (MiCheckSlabPfnBitmap.c)
 *     MiReleaseWalkLocks @ 0x14033D52C (MiReleaseWalkLocks.c)
 *     VslpEnterIumSecureMode @ 0x14033FF80 (VslpEnterIumSecureMode.c)
 *     KeSetPagePrivilege @ 0x1403D4EF4 (KeSetPagePrivilege.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiReacquireWalkLocks @ 0x14046BDC8 (MiReacquireWalkLocks.c)
 *     MiMakeDriverPageStayResident @ 0x14061A8D8 (MiMakeDriverPageStayResident.c)
 */

__int64 __fastcall MiProtectDriverSectionPte(__int64 *a1, unsigned __int64 a2, int a3)
{
  int v5; // edi
  __int64 v6; // rsi
  __int64 v7; // r15
  unsigned __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  char *v13; // r9
  int v14; // eax
  __int64 v15; // r9
  bool v16; // zf
  signed __int64 v17; // r12
  ULONG_PTR v18; // r15
  int v19; // eax
  ULONG_PTR v21; // r12
  int v22; // ebx
  int PfnChannel; // eax
  __int64 SlabPage; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r9
  __int64 v29; // rbx
  __int64 v30; // r12
  __int64 v31; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v32; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+40h] [rbp-C0h]
  __int64 v34; // [rsp+48h] [rbp-B8h]
  __int128 v35[8]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v36[7]; // [rsp+D0h] [rbp-30h] BYREF

  v5 = 0;
  v32 = 0LL;
  memset(v35, 0, 120);
  if ( a3 )
    return 0LL;
  v6 = a1[21];
  v7 = *(_QWORD *)(v6 + 8);
  v34 = v7;
  v33 = a1[6];
  v8 = (__int64)(a2 << 25) >> 16;
  while ( 1 )
  {
    v31 = MI_READ_PTE_LOCK_FREE(a2);
    v12 = v31;
    if ( (v31 & 1) != 0 )
      break;
    MiReleaseWalkLocks((__int64)a1, v9, v10, v11);
    if ( *(_DWORD *)v6 == 1 )
      MiUnlockLoaderEntry(v7 + 160, 0);
    v13 = 0LL;
    if ( !*(_DWORD *)v6 )
    {
      LOWORD(v35[1]) = 6;
      v13 = (char *)&v35[1] + 1;
      *((_QWORD *)&v35[1] + 1) = 0LL;
      memset(&v35[2], 0, 24);
    }
    v14 = MmAccessFault(0LL, (__int64)(a2 << 25) >> 16, 0, (ULONG_PTR)v13);
    v16 = *(_DWORD *)v6 == 1;
    LODWORD(v31) = v14;
    if ( v16 )
      MiLockLoaderEntry(v7 + 160, 0);
    MiReacquireWalkLocks((__int64)a1, v33, 0, v15);
    if ( (int)v31 < 0 )
      return 5LL;
  }
  v17 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v31) >> 12) & 0xFFFFFFFFFFLL);
  v18 = v17 - 0x220000000000LL;
  v19 = *(_DWORD *)v6;
  if ( !*(_DWORD *)v6 )
  {
    if ( v12 >= 0 )
    {
      *(_DWORD *)(v6 + 24) |= 1u;
      return 5LL;
    }
    if ( *(__int64 *)(v18 + 40) >= 0 && (unsigned int)MiGetPagePrivilege(v17 - 0x220000000000LL, 0, 0LL) )
    {
      *(_DWORD *)(v6 + 24) |= 2u;
      return 5LL;
    }
    goto LABEL_29;
  }
  if ( v19 == 1 )
  {
    MiMakeDriverPageStayResident(v34, a1[3], v8);
    goto LABEL_29;
  }
  if ( v19 != 2 )
  {
    v30 = 0xAAAAAAAAAAAAAAABuLL * (v17 >> 4);
    *(_QWORD *)&v35[0] = v8;
    if ( (int)KeSetPagePrivilege(v30, v35, 256) < 0 )
      KeBugCheckEx(0x1Au, 0x1106uLL, v18, v8, 0LL);
    memset(v36, 0, 0x68uLL);
    *((_QWORD *)&v36[0] + 1) = v30;
    v36[1] = v35[0];
    if ( (int)VslpEnterIumSecureMode(2u, 257, 0, (__int64)v36) < 0 )
      KeBugCheckEx(0x1Au, 0x1107uLL, v8, 0LL, 0LL);
    MiMarkPfnVerified(v18, 0);
    goto LABEL_29;
  }
  if ( *(_WORD *)(v18 + 32) != 1
    || (unsigned int)MiCheckSlabPfnBitmap(v17 - 0x220000000000LL, 1LL, 0)
    && (unsigned int)MiCheckSlabPage(v17 - 0x220000000000LL, 1) )
  {
LABEL_29:
    ++*(_QWORD *)(v6 + 16);
    return 0LL;
  }
  v21 = 0xAAAAAAAAAAAAAAABuLL * (v17 >> 4);
  v22 = *((_DWORD *)MiSearchNumaNodeTable(v21) + 2);
  PfnChannel = MiGetPfnChannel(v18);
  SlabPage = MiGetSlabPage(
               (__int64)&MiSystemPartition,
               1u,
               (PfnChannel << byte_140C65A8E) | dword_140C65AF8 & v21 | (v22 << byte_140C65A8D),
               2LL,
               (__int64 *)&v32);
  if ( SlabPage != -1 )
  {
    v29 = 48 * SlabPage - 0x220000000000LL;
    LOBYTE(v5) = (unsigned int)MiCheckSlabPfnBitmap(v18, 1LL, 0) != 0;
    MiTradeActivePage(v18, v29, v8, 0, 2u, v5);
    *(_QWORD *)(v18 + 16) = ZeroPte;
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v18 + 16));
    MiReleaseFreshPage(v18);
    goto LABEL_29;
  }
  if ( !v32 )
    return 5LL;
  MiReleaseWalkLocks((__int64)a1, v25, v26, v27);
  MiReplenishSlabAllocator(v32, 1uLL);
  MiReacquireWalkLocks((__int64)a1, v33, 0, v28);
  return 2LL;
}
