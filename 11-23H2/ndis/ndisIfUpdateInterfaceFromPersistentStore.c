/*
 * XREFs of ndisIfUpdateInterfaceFromPersistentStore @ 0x1C002A724
 * Callers:
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x1C002A588 (ndisIfCreateInterfaceFromPersistentStore.c)
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x1C013E4F8 (ndisIfUpdateIfBlockFromPersistedState.c)
 * Callees:
 *     ?ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C0022F88 (-ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     WPP_RECORDER_SF_I @ 0x1C002A430 (WPP_RECORDER_SF_I.c)
 *     WPP_RECORDER_SF_IL @ 0x1C002A4A4 (WPP_RECORDER_SF_IL.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceFromPersistentStore(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  union _NET_LUID_LH *v5; // rsi
  _LIST_ENTRY *InterfaceByNetLuid; // rax
  KIRQL v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  int v11; // [rsp+20h] [rbp-28h]

  v4 = 0;
  v5 = (union _NET_LUID_LH *)(a1 + 24);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_I(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, 0xAu, v11);
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid((union _NET_LUID_LH)v5->Value);
  if ( InterfaceByNetLuid )
  {
    if ( *(_BYTE *)(a1 + 134) )
    {
      BYTE4(InterfaceByNetLuid[34].Blink) = *(_BYTE *)(a1 + 135);
      LODWORD(InterfaceByNetLuid[33].Flink) = *(_DWORD *)(a1 + 136);
      LODWORD(InterfaceByNetLuid[33].Blink) = *(_DWORD *)(a1 + 140);
      HIDWORD(InterfaceByNetLuid[33].Flink) = *(_DWORD *)(a1 + 144);
    }
    BYTE2(InterfaceByNetLuid[92].Blink) = *(_BYTE *)(a1 + 134);
  }
  else
  {
    v4 = -1073741072;
  }
  KeReleaseSpinLock(&ndisIfListLock, v7);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_IL(*((_QWORD *)WPP_GLOBAL_Control + 8), v8, v9, 0xBu, v11);
  return v4;
}
