/*
 * XREFs of CmpVEExecuteOpenLogic @ 0x1406DD500
 * Callers:
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     CmpFindPathByNameEx @ 0x14067EED0 (CmpFindPathByNameEx.c)
 *     CmpLockKcbExclusive @ 0x1406D8498 (CmpLockKcbExclusive.c)
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1406E02CC (HvpGetCellContextReinitialize.c)
 *     HvpMarkCellDirty @ 0x140747190 (HvpMarkCellDirty.c)
 *     CmpIsSystemEntity @ 0x1407BA7DC (CmpIsSystemEntity.c)
 *     CmpIsKeyDeleted @ 0x1407CB4CC (CmpIsKeyDeleted.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 *     CmpBlockHiveWrites @ 0x140A13A54 (CmpBlockHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x140A13C24 (CmpUnblockHiveWrites.c)
 *     CmVirtualKCBToRealPath @ 0x140A18AB8 (CmVirtualKCBToRealPath.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockKcb @ 0x140AF55A0 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpVEExecuteOpenLogic(__int64 a1, _DWORD *a2, char a3, __m128i *a4, unsigned __int8 a5, __int64 a6)
{
  int v10; // ebx
  char PathByName; // bl
  void *v13; // rcx
  signed __int64 *v14; // rbx
  unsigned __int64 v15; // rbp
  ULONG_PTR v16; // rbp
  __int64 CellFlat; // rax
  __int64 v18; // r14
  __int64 v19; // rcx
  unsigned int v20; // [rsp+30h] [rbp-58h] BYREF
  __int64 v21; // [rsp+38h] [rbp-50h] BYREF
  __int64 v22; // [rsp+40h] [rbp-48h] BYREF
  ULONG_PTR v23[2]; // [rsp+48h] [rbp-40h] BYREF
  __m128i P; // [rsp+58h] [rbp-30h] BYREF

  v20 = 0;
  v23[0] = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  P = 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)&P, 0LL);
  HvpGetCellContextReinitialize(&v21);
  if ( CmpVEEnabled )
  {
    if ( (a2[6] & 0x10) != 0 )
    {
      v10 = -1073741199;
    }
    else if ( *(_WORD *)(a1 + 66) )
    {
      v10 = -1073741199;
    }
    else if ( (*(_DWORD *)(a1 + 184) & 0x2000000) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 8) & 0x7FE00000u) > 0xA00000 )
      {
        if ( (unsigned __int8)CmpIsSystemEntity(a5, a6, a2 + 4) )
        {
          v10 = -1073741199;
        }
        else if ( CmpVEEnabled && (*(_DWORD *)(a1 + 184) & 0x1000000) != 0 )
        {
          v10 = -1073741199;
        }
        else
        {
          if ( (a2[40] & 1) == 0 )
          {
            CmpAttachToRegistryProcess(a2 + 42);
            a2[40] |= 1u;
          }
          v10 = CmVirtualKCBToRealPath(a1, &P);
          if ( v10 >= 0 )
          {
            v10 = CmpBlockHiveWrites(0LL, 16LL, &v22);
            if ( v10 < 0 )
            {
              if ( v22 )
                CmpUnblockHiveWrites(0LL);
            }
            else
            {
              PathByName = CmpFindPathByNameEx(0LL, &P, 0LL, 16, &v20, v23);
              CmpUnblockHiveWrites(0LL);
              if ( PathByName )
              {
                v13 = (void *)a4->m128i_i64[1];
                if ( v13 )
                  ExFreePoolWithTag(v13, 0);
                *a4 = P;
                RtlInitUnicodeString((PUNICODE_STRING)&P, 0LL);
                *a2 |= 8u;
                v10 = 260;
              }
              else if ( a3 || (CmpUnlockKcb(a1), CmpLockKcbExclusive(a1), !(unsigned __int8)CmpIsKeyDeleted(a1, 0LL)) )
              {
                v14 = (signed __int64 *)(*(_QWORD *)(a1 + 32) + 72LL);
                v15 = KeAbPreAcquire((__int64)v14, 0LL);
                if ( _InterlockedCompareExchange64(v14, 17LL, 0LL) )
                  ExfAcquirePushLockSharedEx(v14, 0LL, v15, (__int64)v14);
                if ( v15 )
                  *(_BYTE *)(v15 + 18) = 1;
                v16 = *(_QWORD *)(a1 + 32);
                if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
                  CellFlat = HvpGetCellFlat(v16, *(unsigned int *)(a1 + 40));
                else
                  CellFlat = HvpGetCellPaged(v16);
                v18 = CellFlat;
                if ( CellFlat )
                {
                  v10 = HvpMarkCellDirty(*(_QWORD *)(a1 + 32), *(unsigned int *)(a1 + 40));
                  if ( v10 >= 0 )
                  {
                    *(_WORD *)(v18 + 2) |= 0x100u;
                    *(_WORD *)(a1 + 186) |= 0x100u;
                    *a2 |= 8u;
                    v10 = 260;
                  }
                  v19 = *(_QWORD *)(a1 + 32);
                  if ( (*(_BYTE *)(v19 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(v19, &v21);
                  else
                    HvpReleaseCellPaged(v19, &v21);
                }
                else
                {
                  v10 = -1073741670;
                }
                if ( v16 )
                {
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 72), 0LL, 17LL) != 17 )
                    ExfReleasePushLockShared((signed __int64 *)(v16 + 72));
                  KeAbPostRelease(v16 + 72);
                }
              }
              else
              {
                v10 = -1073741772;
              }
            }
          }
        }
      }
      else
      {
        v10 = -1073741199;
      }
    }
    else
    {
      v10 = -1073741199;
    }
  }
  else
  {
    v10 = -1073741199;
  }
  if ( P.m128i_i64[1] )
    ExFreePoolWithTag((PVOID)P.m128i_i64[1], 0);
  return (unsigned int)v10;
}
