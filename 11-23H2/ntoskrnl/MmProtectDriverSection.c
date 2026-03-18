/*
 * XREFs of MmProtectDriverSection @ 0x14036E870
 * Callers:
 *     <none>
 * Callees:
 *     MiLookupDataTableEntry @ 0x1402136A0 (MiLookupDataTableEntry.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     RtlImageDirectoryEntryToData @ 0x140214A20 (RtlImageDirectoryEntryToData.c)
 *     MiUnlockWorkingSetShared @ 0x14023C500 (MiUnlockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x14025BD00 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x140283C90 (MiLockWorkingSetShared.c)
 *     MiSetSystemCodeProtection @ 0x140284310 (MiSetSystemCodeProtection.c)
 *     MiGetSystemRegionType @ 0x140284870 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402848B0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiMakeDriverPagesPrivate @ 0x140291A50 (MiMakeDriverPagesPrivate.c)
 *     MiUnlockLoaderEntry @ 0x1402920D8 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x140292164 (MiLockLoaderEntry.c)
 *     VslpEnterIumSecureMode @ 0x14033FCF0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     memset @ 0x140435A00 (memset.c)
 *     MiSnapDriverRange @ 0x1407036F8 (MiSnapDriverRange.c)
 *     MmAcquireLoadLock @ 0x1407045B0 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x140704930 (MmReleaseLoadLock.c)
 */

__int64 __fastcall MmProtectDriverSection(ULONG_PTR BugCheckParameter2, __int64 a2, int a3)
{
  unsigned int v6; // ebx
  _QWORD *v8; // rax
  __int64 v9; // rdi
  ULONG_PTR v10; // rsi
  int v11; // edx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v17; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+48h] [rbp-B8h]
  __int64 v19; // [rsp+50h] [rbp-B0h]
  int v20; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  __int64 Lock; // [rsp+68h] [rbp-98h]
  __m128i v23[11]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v24[14]; // [rsp+120h] [rbp+20h] BYREF

  v6 = 0;
  v16 = 0LL;
  v21 = 0LL;
  memset(v23, 0, sizeof(v23));
  v20 = 0;
  v17 = 0LL;
  v18 = 0LL;
  LODWORD(v19) = 0;
  if ( (MiFlags & 0x4000) == 0 )
    return 3221225860LL;
  if ( (a3 & 0xFFFFFFFE) == 0 && !a2 )
  {
    Lock = MmAcquireLoadLock();
    v8 = MiLookupDataTableEntry(BugCheckParameter2, 1);
    v9 = (__int64)v8;
    if ( !v8 )
      KeBugCheckEx(0x1Au, 0x1100uLL, BugCheckParameter2, 0LL, 0LL);
    v10 = v8[6];
    if ( (unsigned int)MiGetSystemRegionType(v10) != 1
      && !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v10)
      && v10 != PsNtosImageBase
      && v10 != PsHalImageBase )
    {
      if ( (*(_DWORD *)(v9 + 104) & 0x80000) != 0 )
      {
        v6 = -1073741757;
LABEL_30:
        MmReleaseLoadLock(Lock);
        return v6;
      }
      MiSnapDriverRange(v9, 0, 64, BugCheckParameter2, (__int64)&v16, (__int64)&v21);
      if ( !v16 )
      {
        v6 = -1073741503;
        goto LABEL_30;
      }
      LOBYTE(v11) = 1;
      v12 = ((__int64)(v21 << 25) >> 16) + 4095;
      v13 = (__int64)(v16 << 25) >> 16;
      v14 = RtlImageDirectoryEntryToData(*(_QWORD *)(v9 + 48), v11, 12, (int)&v20);
      if ( !v14 || !v20 || v14 > v12 || v14 + (unsigned int)(v20 - 1) < v13 )
      {
        DWORD1(v17) = 0;
        v23[9].m128i_i64[1] = (__int64)MiProtectDriverSectionPte;
        v18 = 0LL;
        v23[10].m128i_i64[1] = (__int64)&v17;
        v19 = 0LL;
        *((_QWORD *)&v17 + 1) = v9;
        v23[1].m128i_i64[1] = (__int64)MiGetAnyMultiplexedVm(1);
        v23[2].m128i_i64[0] = v13;
        v23[2].m128i_i64[1] = v12;
        v23[0].m128i_i32[0] = 39;
        v23[0].m128i_i8[7] = MiLockWorkingSetShared(v23[1].m128i_i64[1]);
        MiWalkPageTables(v23);
        MiUnlockWorkingSetShared(v23[1].m128i_i64[1], v23[0].m128i_u8[7]);
        v15 = v21;
        if ( v18 == (unsigned int)((__int64)(v21 - v16) >> 3) + 1 )
        {
          if ( (a3 & 1) == 0 )
          {
            memset(v24, 0, 0x68uLL);
            v24[1] = v10;
            if ( (int)VslpEnterIumSecureMode(2u, 45, 0, (__int64)v24) < 0 )
              KeBugCheckEx(0x1Au, 0x1105uLL, v10, 0LL, 0LL);
          }
          MiMakeDriverPagesPrivate(v9, v16, v15, 0);
          *(_QWORD *)&v17 = 1LL;
          v18 = 0LL;
          v19 = 0LL;
          *((_QWORD *)&v17 + 1) = v9;
          MiLockLoaderEntry(v9 + 160, 0);
          v23[0].m128i_i8[7] = MiLockWorkingSetShared(v23[1].m128i_i64[1]);
          MiWalkPageTables(v23);
          MiUnlockWorkingSetShared(v23[1].m128i_i64[1], v23[0].m128i_u8[7]);
          MiUnlockLoaderEntry(v9 + 160, 0);
          MiSetSystemCodeProtection(v9, v16, v15, 1u);
          if ( (dword_140C6B444 & 8) != 0 )
          {
            *(_QWORD *)&v17 = 2LL;
            v18 = 0LL;
            v19 = 0LL;
            *((_QWORD *)&v17 + 1) = v9;
            v23[0].m128i_i8[7] = MiLockWorkingSetShared(v23[1].m128i_i64[1]);
            MiWalkPageTables(v23);
            MiUnlockWorkingSetShared(v23[1].m128i_i64[1], v23[0].m128i_u8[7]);
          }
          *(_QWORD *)&v17 = 3LL;
          v18 = 0LL;
          v19 = 0LL;
          *((_QWORD *)&v17 + 1) = v9;
          v23[0].m128i_i8[7] = MiLockWorkingSetShared(v23[1].m128i_i64[1]);
          MiWalkPageTables(v23);
          MiUnlockWorkingSetShared(v23[1].m128i_i64[1], v23[0].m128i_u8[7]);
          *(_DWORD *)(v9 + 196) |= 0x200u;
        }
        else if ( (v19 & 1) != 0 )
        {
          v6 = -1073741755;
        }
        else
        {
          v6 = (v19 & 2) != 0 ? -1073741791 : -1073741819;
        }
        goto LABEL_30;
      }
    }
    v6 = -1073741637;
    goto LABEL_30;
  }
  return 3221225485LL;
}
