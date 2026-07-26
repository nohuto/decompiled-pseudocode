/*
 * XREFs of NdisTryAcquireNicActive @ 0x1C0006590
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisValidComponentId@@YAEW4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C0006678 (-ndisValidComponentId@@YAEW4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0006690 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C002BB0C (WPP_RECORDER_SF_DDD.c)
 *     ?ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C003CCFA (-ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C005797C (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     McTemplateK0xqqq_EtwWriteTransfer @ 0x1C005B340 (McTemplateK0xqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_LDD @ 0x1C005BA40 (WPP_RECORDER_SF_LDD.c)
 */

__int64 __fastcall NdisTryAcquireNicActive(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  char v3; // r14
  int v6; // r15d
  __int64 v7; // rdi
  PVOID *v8; // rdx
  struct _GUID *v9; // rdx
  KIRQL v11; // r12
  int v12; // edx
  int v13; // ecx
  unsigned int v14; // ebx
  char active; // al
  int v16; // edx
  int v17; // ecx
  struct _GUID *v18; // [rsp+20h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  LOBYTE(v6) = 0;
  v7 = *(_QWORD *)(v2 + 4456);
  v8 = WPP_1cdba23956c23e7115893e836b18f005_Traceguids;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v8,
      14,
      48,
      (struct _GUID *)WPP_1cdba23956c23e7115893e836b18f005_Traceguids,
      a1,
      a2);
  }
  if ( !(unsigned __int8)ndisValidComponentId(a2, WPP_1cdba23956c23e7115893e836b18f005_Traceguids) )
    return 3221225485LL;
  if ( *(_QWORD *)(v2 + 4456) )
  {
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7);
    if ( ndisAoAcIsD0Required((struct _NDIS_MINIPORT_AOAC *)v7) && ((v13 = *(_DWORD *)(v7 + 376)) == 0 || v13 == 3) )
    {
      if ( *(_DWORD *)(v7 + 52) == 0x7FFFFFFF )
      {
        v14 = -1073741675;
      }
      else
      {
        active = ndisAoAcActiveRefIncrement(v7, a2);
        ++*(_DWORD *)(a1 + 848);
        v3 = active;
        v6 = *(_DWORD *)(a1 + 848);
        v14 = 0;
      }
    }
    else
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 3;
        WPP_RECORDER_SF_LDD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v12,
          14,
          50,
          (struct _GUID *)WPP_1cdba23956c23e7115893e836b18f005_Traceguids,
          *(_DWORD *)(v7 + 376),
          *(_DWORD *)(v7 + 52),
          *(_DWORD *)(v7 + 380));
      }
      v14 = -1071448017;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v7, v11);
    if ( !v14 && (byte_1C00F7643 & 4) != 0 )
      McTemplateK0xqqq_EtwWriteTransfer(
        v17,
        (unsigned int)&NicActiveAcquired,
        v2 + 4008,
        *(_QWORD *)(v2 + 4024),
        a2,
        v6,
        v3);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_DDD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v16,
        14,
        51,
        (struct _GUID *)WPP_1cdba23956c23e7115893e836b18f005_Traceguids,
        v14,
        v3,
        v6);
    }
    return v14;
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v18 = v9;
      LOBYTE(v9) = 3;
      WPP_RECORDER_SF_(*((_QWORD *)WPP_GLOBAL_Control + 8), (int)v9, 14, 49, v18);
    }
    return 3221225659LL;
  }
}
