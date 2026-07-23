/*
 * XREFs of HalpDmaInitSystem @ 0x140A907E0
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaInitPowerManagement @ 0x14039C33C (HalpDmaInitPowerManagement.c)
 *     HalpDmaInitEarly @ 0x140B604AC (HalpDmaInitEarly.c)
 *     HalpDmaInitDiscard @ 0x140B60550 (HalpDmaInitDiscard.c)
 *     HalpDmaInit @ 0x140B605F8 (HalpDmaInit.c)
 *     HalpDmaFinalizeDoubleBufferingDisposition @ 0x140B60B4C (HalpDmaFinalizeDoubleBufferingDisposition.c)
 */

__int64 __fastcall HalpDmaInitSystem(int a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rcx

  v3 = 0;
  v4 = a1 - 4;
  if ( v4 )
  {
    v5 = v4 - 3;
    if ( !v5 )
    {
      HalpDmaPdoListLock = 0LL;
      qword_140C61C78 = (__int64)&HalpDmaControllers;
      HalpDmaControllers = (__int64)&HalpDmaControllers;
      qword_140C64338 = (__int64)&HalpDmaHibernateAdapters;
      HalpDmaHibernateAdapters = (__int64)&HalpDmaHibernateAdapters;
      qword_140C64348 = (__int64)&HalpDmaShadowDumpAdapters;
      HalpDmaShadowDumpAdapters = (__int64)&HalpDmaShadowDumpAdapters;
      qword_140C64318 = (__int64)&HalpDmaPdoList;
      HalpDmaPdoList = (__int64)&HalpDmaPdoList;
      HalpDmaReservedLaRegions = 0LL;
      HalpDmaReservedLaRegionsCount = 0;
      return v3;
    }
    v6 = v5 - 1;
    if ( !v6 )
      return (unsigned int)HalpDmaInitDiscard(a3, 0LL);
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = (unsigned int)(v7 - 16);
      if ( (_DWORD)v8 )
      {
        v9 = (unsigned int)(v8 - 2);
        if ( (_DWORD)v9 )
        {
          if ( (_DWORD)v9 != 2 )
            return v3;
          return (unsigned int)HalpDmaInitPowerManagement();
        }
        else
        {
          HalpDmaFinalizeDoubleBufferingDisposition(v9, 0LL);
          return (unsigned int)HalpDmaInitEarly();
        }
      }
      else
      {
        return (unsigned int)HalpDmaInit(v8, 0LL);
      }
    }
  }
  return v3;
}
