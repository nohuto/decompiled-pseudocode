/*
 * XREFs of StorpFreeWorkItem @ 0x1C00146C0
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     WPP_SF_ @ 0x1C003E820 (WPP_SF_.c)
 *     WPP_SF_qq @ 0x1C003EAA4 (WPP_SF_qq.c)
 */

__int64 __fastcall StorpFreeWorkItem(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _DWORD *Adapter; // rsi
  signed __int32 v6; // r9d
  signed __int32 v7; // eax
  PDEVICE_OBJECT v9; // rcx
  __int64 v10; // rdx

  v2 = 0;
  if ( !a1 || !a2 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 64LL, &WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids, a1, a2);
    }
    return (unsigned int)-1056964602;
  }
  if ( !*(_QWORD *)a2 )
  {
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1056964607;
    }
    v10 = 65LL;
    goto LABEL_30;
  }
  if ( *(_QWORD *)(a2 + 8) )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 66LL, &WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids);
    }
    return (unsigned int)-1056964596;
  }
  if ( KeGetCurrentIrql() > 2u )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 67LL, &WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids);
    }
    return (unsigned int)-1056964600;
  }
  Adapter = RaidpPortGetAdapter(a1);
  if ( Adapter )
  {
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 24), v6, 1);
    if ( !v7 )
    {
      IoFreeWorkItem(*(PIO_WORKITEM *)a2);
      *(_QWORD *)a2 = 0LL;
      ExFreePoolWithTag((PVOID)a2, 0x49576152u);
      _InterlockedDecrement(Adapter + 1206);
      return v2;
    }
    if ( v7 != v6 )
      return v2;
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < (unsigned __int8)v6 )
    {
      return (unsigned int)-1056964607;
    }
    v10 = 68LL;
LABEL_30:
    WPP_SF_(v9->AttachedDevice, v10, &WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids);
    return (unsigned int)-1056964607;
  }
  return 3238002694LL;
}
