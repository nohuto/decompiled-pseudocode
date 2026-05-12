/*
 * XREFs of sub_1C00353FC @ 0x1C00353FC
 * Callers:
 *     sub_1C00A7F18 @ 0x1C00A7F18 (sub_1C00A7F18.c)
 *     sub_1C00A82EC @ 0x1C00A82EC (sub_1C00A82EC.c)
 * Callees:
 *     sub_1C0034B20 @ 0x1C0034B20 (sub_1C0034B20.c)
 *     sub_1C00A734C @ 0x1C00A734C (sub_1C00A734C.c)
 *     sub_1C00A7398 @ 0x1C00A7398 (sub_1C00A7398.c)
 */

void __fastcall sub_1C00353FC(__int64 a1)
{
  KIRQL v2; // bl
  __int64 v3; // rdx
  __int64 v4; // r8
  void *v5; // rcx
  __int64 v6; // rcx
  unsigned int i; // ebx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  char v11; // al

  KeCancelTimer((PKTIMER)(a1 + 1520));
  if ( *(_DWORD *)(a1 + 5464) )
    KeCancelTimer((PKTIMER)(a1 + 5328));
  v2 = KfRaiseIrql(2u);
  sub_1C0034B20(a1, (struct _KTIMER *)(a1 + 1712));
  sub_1C0034B20(a1, (struct _KTIMER *)(a1 + 4072));
  KeLowerIrql(v2);
  if ( *(_DWORD *)(a1 + 904) > 1u )
    KeCancelTimer((PKTIMER)(a1 + 5704));
  KeFlushQueuedDpcs();
  if ( *(_BYTE *)(a1 + 4305) )
  {
    sub_1C00A734C(a1);
    *(_BYTE *)(a1 + 4305) = 0;
    *(_QWORD *)(a1 + 4288) = 0LL;
  }
  else if ( *(_QWORD *)(a1 + 728) )
  {
    sub_1C00A7398(a1);
  }
  v5 = *(void **)(a1 + 4904);
  if ( v5 )
  {
    PoUnregisterPowerSettingCallback(v5);
    *(_QWORD *)(a1 + 4904) = 0LL;
  }
  v6 = *(_QWORD *)(a1 + 4920);
  if ( v6 )
  {
    PoUnregisterCoalescingCallback(v6, v3, v4);
    *(_QWORD *)(a1 + 4920) = 0LL;
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 4736); ++i )
    PoUnregisterPowerSettingCallback(*(PVOID *)(*(_QWORD *)(a1 + 4752) + 8LL * i));
  v8 = *(void **)(a1 + 4744);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x45416152u);
    *(_DWORD *)(a1 + 4736) = 0;
    *(_QWORD *)(a1 + 4744) = 0LL;
    *(_QWORD *)(a1 + 4752) = 0LL;
  }
  v9 = *(void **)(a1 + 4928);
  if ( v9 )
  {
    PoUnregisterPowerSettingCallback(v9);
    *(_QWORD *)(a1 + 4928) = 0LL;
  }
  v10 = *(void **)(a1 + 5992);
  if ( v10 )
  {
    PoUnregisterPowerSettingCallback(v10);
    *(_QWORD *)(a1 + 5992) = 0LL;
  }
  v11 = *(_BYTE *)(a1 + 108);
  if ( (v11 & 0x10) != 0 )
  {
    *(_BYTE *)(a1 + 108) = v11 & 0xEF;
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 4936), 0);
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 4936));
  }
}
