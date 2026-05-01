/*
 * XREFs of ?HampHostWaitForInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000792C
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800076D0 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180007AA0 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180007B28 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     CempListEntryIsNull @ 0x18000A004 (CempListEntryIsNull.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A34C (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A9F4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180079448 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall HampHostWaitForInSwapTurn(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  unsigned __int64 v2; // rdi
  char *v3; // rbx
  unsigned __int64 v4; // rax
  _QWORD *v5; // rax
  char **v6; // rcx
  unsigned int v7; // edx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rcx
  char **v13; // rax
  int v14; // [rsp+70h] [rbp+8h] BYREF
  int v15; // [rsp+78h] [rbp+10h] BYREF
  int v16; // [rsp+80h] [rbp+18h] BYREF
  __int64 v17; // [rsp+88h] [rbp+20h] BYREF

  v2 = (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                              + 120)
                  + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
     - 168;
  HampManagerAcquireLockExclusive((struct _HOST_ACTIVITY_MANAGER *)v2);
  v3 = (char *)a1 + 992;
  while ( 1 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                               + 120)
                   + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*((_BYTE *)a1 + 680) & 0x40) != 0 )
      break;
    if ( (*((_QWORD *)a1 + 83) & 0x200000000000LL) != 0 )
      break;
    if ( !*(_DWORD *)(v4 + 584) )
    {
      v5 = (_QWORD *)(v4 + 568);
      if ( (_QWORD *)*v5 == v5 || (char *)*v5 == v3 )
        break;
    }
    if ( (unsigned int)CempListEntryIsNull((char *)a1 + 992) )
    {
      v6 = *(char ***)(v2 + 744);
      if ( *v6 != (char *)(v2 + 736) )
        goto LABEL_19;
      *(_QWORD *)v3 = v2 + 736;
      *((_QWORD *)a1 + 125) = v6;
      *v6 = v3;
      *(_QWORD *)(v2 + 744) = v3;
    }
    v16 = *(_DWORD *)(v2 + 756);
    HampManagerReleaseLockExclusive((struct _HOST_ACTIVITY_MANAGER *)v2);
    HampHostReleaseLockExclusiveEx(a1, v7);
    RmpReleaseGlobalLock();
    if ( (unsigned int)dword_1800DC218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DC218, 64LL, v8, v9) )
    {
      v14 = *(_DWORD *)(v2 + 752);
      v15 = *((_DWORD *)a1 + 170);
      v17 = *((_QWORD *)a1 - 4);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1800DC218,
        (unsigned int)&unk_1800C0919,
        v10,
        v11,
        (__int64)&v17,
        (__int64)&v15,
        (__int64)&v14);
    }
    RtlWaitOnAddress(v2 + 756, &v16, 4LL);
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx(a1, 0);
    HampManagerAcquireLockExclusive((struct _HOST_ACTIVITY_MANAGER *)v2);
  }
  if ( !(unsigned int)CempListEntryIsNull((char *)a1 + 992) )
  {
    v12 = *(_QWORD *)v3;
    if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || (v13 = (char **)*((_QWORD *)a1 + 125), *v13 != v3) )
LABEL_19:
      __fastfail(3u);
    *v13 = (char *)v12;
    *(_QWORD *)(v12 + 8) = v13;
    *(_OWORD *)v3 = 0LL;
  }
  ++*(_DWORD *)(v2 + 752);
  HampManagerReleaseLockExclusive((struct _HOST_ACTIVITY_MANAGER *)v2);
}
