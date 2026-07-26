/*
 * XREFs of ndisAoAcTraceRundown @ 0x1C00B1964
 * Callers:
 *     ndisMEmitTraceRundown @ 0x1C00B1CE4 (ndisMEmitTraceRundown.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_L @ 0x1C0030D84 (WPP_RECORDER_SF_L_ea_1C0030D84.c)
 *     WPP_RECORDER_SF_LDD @ 0x1C005BA60 (WPP_RECORDER_SF_LDD.c)
 *     WPP_RECORDER_SF_Ld @ 0x1C00B2358 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_Zd @ 0x1C00B2414 (WPP_RECORDER_SF_Zd.c)
 */

void __fastcall ndisAoAcTraceRundown(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rdi
  int v3; // edx
  KIRQL v4; // bp
  int v5; // r8d
  int v6; // r9d
  __int64 *i; // rbx
  int v8; // edx
  _NDIS_OPEN_BLOCK *j; // rbx
  unsigned int AoAcReferences; // ecx
  int v11; // [rsp+20h] [rbp-48h]
  KIRQL NewIrql; // [rsp+70h] [rbp+8h] BYREF

  AoAc = a1->AoAc;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  NewIrql = v4;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      1u,
      2u,
      0xAu,
      (struct _GUID *)&WPP_b4da289a22fb3fb85c881fb62f41861d_Traceguids,
      *((_DWORD *)AoAc + 94),
      *((_DWORD *)AoAc + 13));
  if ( *((_DWORD *)AoAc + 16) && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_L(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      1u,
      2u,
      0xBu,
      (struct _GUID *)&WPP_b4da289a22fb3fb85c881fb62f41861d_Traceguids);
  for ( i = (__int64 *)*((_QWORD *)AoAc + 1); i != (__int64 *)((char *)AoAc + 8); i = (__int64 *)*i )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Ld(*((_QWORD *)WPP_GLOBAL_Control + 8), v3, v5, v6, v11, *((_DWORD *)i + 4), *((_DWORD *)i + 5));
  }
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v4);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  for ( j = a1->OpenQueue; j; j = j->MiniportNextOpen )
  {
    AoAcReferences = j->AoAcReferences;
    if ( AoAcReferences && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 1;
      WPP_RECORDER_SF_Zd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        2,
        13,
        (struct _GUID *)&WPP_b4da289a22fb3fb85c881fb62f41861d_Traceguids,
        (__int64)&j->ProtocolHandle->Name,
        AoAcReferences);
    }
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, NewIrql);
}
