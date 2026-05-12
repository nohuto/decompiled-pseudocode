/*
 * XREFs of StorpFreeWorkItem @ 0x1C004570C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     WPP_SF_ @ 0x1C003C48C (WPP_SF_.c)
 *     WPP_SF_qq @ 0x1C003C710 (WPP_SF_qq.c)
 */

__int64 __fastcall StorpFreeWorkItem(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  PDEVICE_OBJECT v5; // rcx
  unsigned __int16 v6; // dx
  _DWORD *Adapter; // rsi
  signed __int32 v8; // r9d
  signed __int32 v10; // eax

  v2 = 0;
  if ( !a1 || !a2 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x40u,
        (__int64)&WPP_27c524ad26413fc7d405974726332488_Traceguids,
        a1,
        a2);
    }
    return (unsigned int)-1056964602;
  }
  if ( !*(_QWORD *)a2 )
  {
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1056964607;
    }
    v6 = 65;
LABEL_29:
    WPP_SF_((__int64)v5->AttachedDevice, v6, (__int64)&WPP_27c524ad26413fc7d405974726332488_Traceguids);
    return (unsigned int)-1056964607;
  }
  if ( *(_QWORD *)(a2 + 8) )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x42u,
        (__int64)&WPP_27c524ad26413fc7d405974726332488_Traceguids);
    }
    return (unsigned int)-1056964596;
  }
  if ( KeGetCurrentIrql() > 2u )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x43u,
        (__int64)&WPP_27c524ad26413fc7d405974726332488_Traceguids);
    }
    return (unsigned int)-1056964600;
  }
  Adapter = RaidpPortGetAdapter(a1);
  if ( !Adapter )
    return 3238002694LL;
  v10 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 24), v8, 1);
  if ( v10 )
  {
    if ( v10 == v8 )
    {
      v5 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < (unsigned __int8)v8 )
      {
        return (unsigned int)-1056964607;
      }
      v6 = 68;
      goto LABEL_29;
    }
  }
  else
  {
    IoFreeWorkItem(*(PIO_WORKITEM *)a2);
    *(_QWORD *)a2 = 0LL;
    ExFreePoolWithTag((PVOID)a2, 0x49576152u);
    _InterlockedDecrement(Adapter + 1190);
  }
  return v2;
}
