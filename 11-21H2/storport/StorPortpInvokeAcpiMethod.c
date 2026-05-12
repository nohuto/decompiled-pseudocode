/*
 * XREFs of StorPortpInvokeAcpiMethod @ 0x1C0044284
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     RaidAdapterFindUnit @ 0x1C000FFFC (RaidAdapterFindUnit.c)
 *     RaidNtStatusToStorStatus @ 0x1C00194BC (RaidNtStatusToStorStatus.c)
 *     RaidSyncAcpiEvalMethod @ 0x1C004F66C (RaidSyncAcpiEvalMethod.c)
 */

__int64 __fastcall StorPortpInvokeAcpiMethod(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        ULONG InputBufferLength,
        union _LARGE_INTEGER *Timeout,
        ULONG a7,
        _DWORD *a8)
{
  __int64 Adapter; // rax
  struct _DEVICE_OBJECT *v13; // rcx
  int v14; // eax
  unsigned int v15; // [rsp+50h] [rbp+18h]

  HIBYTE(v15) = 0;
  if ( KeGetCurrentIrql() )
    return 3238002696LL;
  if ( a8 )
    *a8 = 0;
  Adapter = (__int64)RaidpPortGetAdapter(a1);
  if ( !Adapter )
    return 3238002694LL;
  if ( a2 )
  {
    if ( *(_WORD *)a2 != 1 )
      return 3238002694LL;
    if ( *(_DWORD *)(a2 + 4) < 4u )
      return 3238002694LL;
    LOWORD(v15) = *(_WORD *)(a2 + 8);
    BYTE2(v15) = *(_BYTE *)(a2 + 10);
    Adapter = RaidAdapterFindUnit(Adapter, v15);
    if ( !Adapter )
      return 3238002694LL;
  }
  v13 = *(struct _DEVICE_OBJECT **)(Adapter + 8);
  if ( !v13 )
    return 3238002694LL;
  v14 = RaidSyncAcpiEvalMethod(v13, a4, InputBufferLength, Timeout, a7, (__int64)a8);
  return RaidNtStatusToStorStatus(v14);
}
