/*
 * XREFs of CmpConstructNameWithStatus @ 0x1406D7BE0
 * Callers:
 *     CmQueryLayeredKey @ 0x14035DE24 (CmQueryLayeredKey.c)
 *     CmpLinkHiveToMaster @ 0x14068F84C (CmpLinkHiveToMaster.c)
 *     CmpConstructName @ 0x140691DAC (CmpConstructName.c)
 *     CmpDoWritethroughReparse @ 0x140693570 (CmpDoWritethroughReparse.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1406D4B10 (CmCallbackGetKeyObjectIDEx.c)
 *     CmQueryKey @ 0x1406D7200 (CmQueryKey.c)
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 *     CmAddLogForAction @ 0x140707B58 (CmAddLogForAction.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14070D128 (CmpSetSecurityDescriptorInfo.c)
 *     CmpTraceSecurityChanging @ 0x14070DEBC (CmpTraceSecurityChanging.c)
 *     CmLoadAppKey @ 0x140769830 (CmLoadAppKey.c)
 *     CmpConstructAndCacheName @ 0x1407E1D10 (CmpConstructAndCacheName.c)
 *     CmpEtwDumpKcb @ 0x1408ABAC6 (CmpEtwDumpKcb.c)
 *     CmpLoadHiveVolatile @ 0x140A0C5E0 (CmpLoadHiveVolatile.c)
 *     CmEtwRunDown @ 0x140A126D4 (CmEtwRunDown.c)
 *     CmpTraceHiveSaveStart @ 0x140A13120 (CmpTraceHiveSaveStart.c)
 *     CmpIsHiveAlreadyLoaded @ 0x140A16B54 (CmpIsHiveAlreadyLoaded.c)
 *     CmpDumpKeyBodyList @ 0x140A17348 (CmpDumpKeyBodyList.c)
 *     CmRealKCBToVirtualPath @ 0x140A188B8 (CmRealKCBToVirtualPath.c)
 *     CmVirtualKCBToRealPath @ 0x140A18AB8 (CmVirtualKCBToRealPath.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140A1BCD4 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     CmpStartKcbStack @ 0x1406D7D50 (CmpStartKcbStack.c)
 *     CmpConstructNameFromKeyNodes @ 0x1406DD5F0 (CmpConstructNameFromKeyNodes.c)
 *     CmpSetKcbAtLayerHeight @ 0x1407D50FC (CmpSetKcbAtLayerHeight.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x140A17218 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpAcquireShutdownRundown @ 0x140AF5380 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF5470 (CmpReleaseShutdownRundown.c)
 */

__int64 __fastcall CmpConstructNameWithStatus(__int64 a1, _QWORD *a2, __int64 a3)
{
  char v5; // bp
  __int64 v6; // rdx
  __int64 v7; // rcx
  int started; // ebx
  __int64 v9; // rdx
  __int64 i; // r10
  __int64 v11; // r10
  struct _PRIVILEGE_SET *v12; // rdi
  unsigned __int16 j; // cx
  PPRIVILEGE_SET v14; // rax
  __int128 v16; // [rsp+20h] [rbp-38h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+30h] [rbp-28h]
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v18 = 0LL;
  v16 = 0LL;
  WORD1(v16) = -1;
  *(_OWORD *)Privileges = 0LL;
  v5 = CmpAcquireShutdownRundown(a1, a2, a3);
  started = CmpStartKcbStack(&v16, *(unsigned __int16 *)(a1 + 66));
  if ( started < 0 )
  {
    v12 = Privileges[1];
  }
  else
  {
    v9 = *(__int16 *)(a1 + 66);
    WORD1(v16) = v9;
    if ( (_WORD)v9 )
    {
      for ( i = *(_QWORD *)(a1 + 192); i; LOWORD(v9) = v9 - 1 )
      {
        CmpSetKcbAtLayerHeight(&v16, v9, *(_QWORD *)(i + 16));
        i = *(_QWORD *)(v11 + 24);
      }
    }
    else
    {
      Privileges[v9 - 1] = (PPRIVILEGE_SET)a1;
    }
    v12 = Privileges[1];
    if ( v5 )
    {
      if ( (*(_DWORD *)(a1 + 8) & 0x20000) == 0 )
      {
        for ( j = WORD1(v16); (j & 0x8000u) == 0; --j )
        {
          v14 = j < 2u ? Privileges[j - 1] : (PPRIVILEGE_SET)*((_QWORD *)Privileges[1] + j - 2);
          if ( HIWORD(v14[3].Control) && BYTE1(v14[3].Control) == 1 )
            break;
          if ( v14[2].PrivilegeCount != -1 )
          {
            if ( *(_DWORD *)(a1 + 40) == -1 && (*(_DWORD *)(a1 + 184) & 0x40000) != 0 )
              break;
            started = CmpConstructNameFromKeyNodes(&v16, &v18);
            if ( started >= 0 )
              goto LABEL_17;
            goto LABEL_23;
          }
        }
      }
    }
    started = CmpConstructNameFromKcbNameBlocks(a1, &v18);
    if ( started >= 0 )
    {
LABEL_17:
      started = 0;
      *a2 = v18;
    }
  }
LABEL_23:
  if ( v12 )
    CmSiFreeMemory(v12);
  if ( v5 )
    CmpReleaseShutdownRundown(v7, v6);
  return (unsigned int)started;
}
