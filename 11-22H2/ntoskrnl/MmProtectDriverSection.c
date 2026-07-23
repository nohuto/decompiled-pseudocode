/*
 * XREFs of MmProtectDriverSection @ 0x14036E220
 * Callers:
 *     <none>
 * Callees:
 *     MiLookupDataTableEntry @ 0x1402136C0 (MiLookupDataTableEntry.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146D4 (MiGetAnyMultiplexedVm.c)
 *     RtlImageDirectoryEntryToData @ 0x140214A40 (RtlImageDirectoryEntryToData.c)
 *     MiUnlockWorkingSetShared @ 0x14023C4E0 (MiUnlockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x14025BBE0 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x140283B70 (MiLockWorkingSetShared.c)
 *     MiSetSystemCodeProtection @ 0x1402841F0 (MiSetSystemCodeProtection.c)
 *     MiGetSystemRegionType @ 0x140284750 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140284790 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiMakeDriverPagesPrivate @ 0x140291930 (MiMakeDriverPagesPrivate.c)
 *     MiUnlockLoaderEntry @ 0x140291FB8 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x140292044 (MiLockLoaderEntry.c)
 *     VslpEnterIumSecureMode @ 0x14033FAF0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     memset @ 0x140435400 (memset.c)
 *     MiSnapDriverRange @ 0x1407037A8 (MiSnapDriverRange.c)
 *     MmAcquireLoadLock @ 0x140704660 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x1407049E0 (MmReleaseLoadLock.c)
 */

__int64 __fastcall MmProtectDriverSection(ULONG_PTR BugCheckParameter2, __int64 a2, int a3)
{
  unsigned int v6; // ebx
  _QWORD *v8; // rax
  __int64 v9; // rdi
  PVOID v10; // rsi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r15
  PVOID v13; // rdx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v16; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h]
  __int64 v18; // [rsp+50h] [rbp-B0h]
  ULONG Size; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v20; // [rsp+60h] [rbp-A0h] BYREF
  __int64 Lock; // [rsp+68h] [rbp-98h]
  __m128i v22[11]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v23[14]; // [rsp+120h] [rbp+20h] BYREF

  v6 = 0;
  v15 = 0LL;
  v20 = 0LL;
  memset(v22, 0, sizeof(v22));
  Size = 0;
  v16 = 0LL;
  v17 = 0LL;
  LODWORD(v18) = 0;
  if ( (MiFlags & 0x4000) == 0 )
    return 3221225860LL;
  if ( (a3 & 0xFFFFFFFE) == 0 && !a2 )
  {
    Lock = MmAcquireLoadLock();
    v8 = MiLookupDataTableEntry(BugCheckParameter2, 1);
    v9 = (__int64)v8;
    if ( !v8 )
      KeBugCheckEx(0x1Au, 0x1100uLL, BugCheckParameter2, 0LL, 0LL);
    v10 = (PVOID)v8[6];
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)v10) != 1
      && !(unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v10)
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
      MiSnapDriverRange(v9, 0, 64, BugCheckParameter2, (__int64)&v15, (__int64)&v20);
      if ( !v15 )
      {
        v6 = -1073741503;
        goto LABEL_30;
      }
      v11 = ((__int64)(v20 << 25) >> 16) + 4095;
      v12 = (__int64)(v15 << 25) >> 16;
      v13 = RtlImageDirectoryEntryToData(*(PVOID *)(v9 + 48), 1u, 0xCu, &Size);
      if ( !v13 || !Size || (unsigned __int64)v13 > v11 || (unsigned __int64)v13 + Size - 1 < v12 )
      {
        DWORD1(v16) = 0;
        v22[9].m128i_i64[1] = (__int64)MiProtectDriverSectionPte;
        v17 = 0LL;
        v22[10].m128i_i64[1] = (__int64)&v16;
        v18 = 0LL;
        *((_QWORD *)&v16 + 1) = v9;
        v22[1].m128i_i64[1] = (__int64)MiGetAnyMultiplexedVm(1);
        v22[2].m128i_i64[0] = v12;
        v22[2].m128i_i64[1] = v11;
        v22[0].m128i_i32[0] = 39;
        v22[0].m128i_i8[7] = MiLockWorkingSetShared(v22[1].m128i_i64[1]);
        MiWalkPageTables(v22);
        MiUnlockWorkingSetShared(v22[1].m128i_i64[1], v22[0].m128i_u8[7]);
        v14 = v20;
        if ( v17 == (unsigned int)((__int64)(v20 - v15) >> 3) + 1 )
        {
          if ( (a3 & 1) == 0 )
          {
            memset(v23, 0, 0x68uLL);
            v23[1] = v10;
            if ( (int)VslpEnterIumSecureMode(2u, 45, 0, (__int64)v23) < 0 )
              KeBugCheckEx(0x1Au, 0x1105uLL, (ULONG_PTR)v10, 0LL, 0LL);
          }
          MiMakeDriverPagesPrivate(v9, v15, v14, 0);
          *(_QWORD *)&v16 = 1LL;
          v17 = 0LL;
          v18 = 0LL;
          *((_QWORD *)&v16 + 1) = v9;
          MiLockLoaderEntry(v9 + 160, 0);
          v22[0].m128i_i8[7] = MiLockWorkingSetShared(v22[1].m128i_i64[1]);
          MiWalkPageTables(v22);
          MiUnlockWorkingSetShared(v22[1].m128i_i64[1], v22[0].m128i_u8[7]);
          MiUnlockLoaderEntry(v9 + 160, 0);
          MiSetSystemCodeProtection(v9, v15, v14, 1u);
          if ( (dword_140C6B504 & 8) != 0 )
          {
            *(_QWORD *)&v16 = 2LL;
            v17 = 0LL;
            v18 = 0LL;
            *((_QWORD *)&v16 + 1) = v9;
            v22[0].m128i_i8[7] = MiLockWorkingSetShared(v22[1].m128i_i64[1]);
            MiWalkPageTables(v22);
            MiUnlockWorkingSetShared(v22[1].m128i_i64[1], v22[0].m128i_u8[7]);
          }
          *(_QWORD *)&v16 = 3LL;
          v17 = 0LL;
          v18 = 0LL;
          *((_QWORD *)&v16 + 1) = v9;
          v22[0].m128i_i8[7] = MiLockWorkingSetShared(v22[1].m128i_i64[1]);
          MiWalkPageTables(v22);
          MiUnlockWorkingSetShared(v22[1].m128i_i64[1], v22[0].m128i_u8[7]);
          *(_DWORD *)(v9 + 196) |= 0x200u;
        }
        else if ( (v18 & 1) != 0 )
        {
          v6 = -1073741755;
        }
        else
        {
          v6 = (v18 & 2) != 0 ? -1073741791 : -1073741819;
        }
        goto LABEL_30;
      }
    }
    v6 = -1073741637;
    goto LABEL_30;
  }
  return 3221225485LL;
}
