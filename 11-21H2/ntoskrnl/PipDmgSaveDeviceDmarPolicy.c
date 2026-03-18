/*
 * XREFs of PipDmgSaveDeviceDmarPolicy @ 0x140845D74
 * Callers:
 *     PiDmaGuardProcessPreAddDevice @ 0x1406E7CD4 (PiDmaGuardProcessPreAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     _PnpSetObjectProperty @ 0x14077198C (_PnpSetObjectProperty.c)
 *     PnpTraceDmaGuardDevicePolicy @ 0x140845E14 (PnpTraceDmaGuardDevicePolicy.c)
 */

__int64 __fastcall PipDmgSaveDeviceDmarPolicy(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // esi
  __int64 v6; // rdx
  char v7; // bl
  __int64 v8; // rdi
  unsigned int v10; // [rsp+70h] [rbp+18h] BYREF

  v10 = a3;
  v3 = 0;
  v6 = *(_QWORD *)(a1 + 48);
  v7 = 1;
  if ( a3 )
    v3 = PnpSetObjectProperty(
           *(__int64 *)&PiPnpRtlCtx,
           v6,
           1u,
           a2,
           0LL,
           (__int64)&DEVPKEY_Device_DmaRemappingPolicy,
           7,
           (__int64)&v10,
           4u,
           0);
  else
    PnpSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      v6,
      1u,
      0LL,
      0LL,
      (__int64)&DEVPKEY_Device_DmaRemappingPolicy,
      0,
      0LL,
      0,
      0);
  PnpTraceDmaGuardDevicePolicy(a1, v10);
  v8 = *(_QWORD *)(a1 + 720);
  if ( v10 != 2 || !((unsigned __int8 (__fastcall *)(_QWORD, _QWORD))off_140C02088[0])(*(_QWORD *)v8, 0LL) )
    v7 = 0;
  *(_BYTE *)(v8 + 16) = v7 | *(_BYTE *)(v8 + 16) & 0xFE;
  return v3;
}
