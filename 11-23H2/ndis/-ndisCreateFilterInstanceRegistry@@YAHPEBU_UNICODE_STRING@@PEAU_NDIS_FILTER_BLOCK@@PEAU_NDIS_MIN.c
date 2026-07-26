/*
 * XREFs of ?ndisCreateFilterInstanceRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0064B58
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C014A490 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x1C000CF50 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000D050 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisGetOrCreateFilterInstanceKey@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@EPEAEPEAU1@@Z @ 0x1C0065A44 (-ndisGetOrCreateFilterInstanceKey@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MIN.c)
 *     ?ndisSetAllFilterDefaultParameters@@YAHPEBU_UNICODE_STRING@@00E@Z @ 0x1C00663D0 (-ndisSetAllFilterDefaultParameters@@YAHPEBU_UNICODE_STRING@@00E@Z.c)
 */

__int64 __fastcall ndisCreateFilterInstanceRegistry(
        const struct _UNICODE_STRING *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        struct _NDIS_MINIPORT_BLOCK *a3)
{
  unsigned __int8 v7; // r14
  int v8; // edx
  unsigned int v9; // ebx
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rax
  struct _UNICODE_STRING v11; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int8 v12; // [rsp+A8h] [rbp+20h] BYREF

  if ( RtlIsStateSeparationEnabled() )
    return 0LL;
  *(_QWORD *)&v11.Length = 0LL;
  v7 = 1;
  v11.Buffer = 0LL;
  v12 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x50u,
      (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
      (char)a1,
      (char)a3,
      a2);
  v9 = ndisGetOrCreateFilterInstanceKey(a1, a2, a3, 1u, &v12, &v11);
  if ( !v9 && !v12 )
  {
    FilterDriver = a2->FilterDriver;
    if ( FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion <= 6u
      && (FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion != 6
       || FilterDriver->DefaultFilterCharacteristics.MinorNdisVersion < 0x28u) )
    {
      v7 = 0;
    }
    v9 = ndisSetAllFilterDefaultParameters(a1, &v11, &ndisFilterInstanceParamsStr, v7);
  }
  if ( v11.Buffer )
    ExFreePoolWithTag(v11.Buffer, 0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      1u,
      0x51u,
      (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
      (char)a1,
      (char)a3,
      (char)a2,
      v9);
  return v9;
}
