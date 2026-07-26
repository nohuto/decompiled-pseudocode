/*
 * XREFs of ?ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z @ 0x1C00B9974
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0145008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     NdisReferenceWithTag @ 0x1C000CA40 (NdisReferenceWithTag.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C001C214 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C0022DF8 (-ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C0111B44 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x1C013E7C8 (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 */

__int64 __fastcall ndisIfSetIfDescr(const WCHAR *a1)
{
  unsigned int updated; // esi
  char v3; // r15
  unsigned __int64 v4; // rbx
  KIRQL v5; // r12
  _LIST_ENTRY *InterfaceByNetLuid; // rax
  _LIST_ENTRY *v7; // rdi
  _WORD *p_Blink; // rbx
  unsigned __int16 v9; // ax
  KIRQL v10; // bl
  _UNICODE_STRING String2; // [rsp+40h] [rbp-40h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v14[2]; // [rsp+60h] [rbp-20h] BYREF
  int v15; // [rsp+70h] [rbp-10h]
  int v16; // [rsp+74h] [rbp-Ch]

  updated = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v3 = 0;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xEu,
      (struct _GUID *)&WPP_900830c1729f38670cf8e0a8f44a346b_Traceguids,
      a1);
  if ( a1 )
  {
    v4 = (*(_DWORD *)a1 & 0xFFFFFF | ((unsigned __int64)*((unsigned __int16 *)a1 + 2) << 24)) << 24;
    v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid((union _NET_LUID_LH)v4);
    v7 = InterfaceByNetLuid;
    p_Blink = &InterfaceByNetLuid->Blink;
    if ( InterfaceByNetLuid )
    {
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)InterfaceByNetLuid[89].Blink, 0xDu);
      ++LODWORD(v7[81].Blink);
      KeReleaseSpinLock(&ndisIfListLock, v5);
      if ( !*p_Blink
        || (RtlInitUnicodeString(&DestinationString, (PCWSTR)&v7->Blink + 1),
            RtlInitUnicodeString(&String2, a1 + 5),
            RtlCompareUnicodeString(&DestinationString, &String2, 1u)) )
      {
        v3 = 1;
      }
      v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      if ( v3 )
      {
        memset(p_Blink, 0, 0x204uLL);
        v9 = 512;
        if ( a1[4] <= 0x200u )
          v9 = a1[4];
        *p_Blink = v9;
        if ( a1[4] )
          memmove((char *)&v7->Blink + 2, a1 + 5, v9);
      }
    }
    else
    {
      updated = -1073741772;
    }
    KeReleaseSpinLock(&ndisIfListLock, v5);
    if ( !updated && v3 )
    {
      if ( BYTE1(v7[87].Flink) )
        updated = ndisIfUpdatePersistedInterfaceInfo(
                    (unsigned __int8 *)&v7[82],
                    0x204u,
                    0x208u,
                    (unsigned __int8 *)p_Blink);
      v14[0] = 2LL;
      v14[1] = p_Blink;
      v15 = 516;
      v16 = 4;
      ndisNsiNotifyClientInterfaceChange(v7, 0LL, v14);
    }
    if ( v7 )
    {
      v10 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      IFBLOCK_DECREMENT_REF((struct _NDIS_IF_BLOCK *)v7, 0xDu);
      KeReleaseSpinLock(&ndisIfListLock, v10);
    }
  }
  else
  {
    updated = -1073741811;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xFu,
      (struct _GUID *)&WPP_900830c1729f38670cf8e0a8f44a346b_Traceguids,
      (char)a1,
      updated);
  return updated;
}
