/*
 * XREFs of StorpAllocatePool @ 0x1C001E118
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     WPP_SF_ @ 0x1C003C48C (WPP_SF_.c)
 */

__int64 __fastcall StorpAllocatePool(__int64 a1, unsigned int a2, unsigned int a3, __int64 *a4)
{
  unsigned int v4; // ebx
  __int64 Pool; // rax

  v4 = 0;
  if ( a4 )
  {
    *a4 = 0LL;
    if ( KeGetCurrentIrql() > 2u )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 27LL, &WPP_27c524ad26413fc7d405974726332488_Traceguids);
      }
      return (unsigned int)-1056964600;
    }
    else
    {
      Pool = RaidAllocatePool(64LL, a2, a3, 0LL);
      *a4 = Pool;
      if ( !Pool )
      {
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 28LL, &WPP_27c524ad26413fc7d405974726332488_Traceguids);
        }
        return (unsigned int)-1056964605;
      }
    }
  }
  else
  {
    return (unsigned int)-1056964602;
  }
  return v4;
}
