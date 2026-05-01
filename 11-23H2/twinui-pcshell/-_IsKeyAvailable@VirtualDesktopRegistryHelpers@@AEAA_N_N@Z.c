/*
 * XREFs of ?_IsKeyAvailable@VirtualDesktopRegistryHelpers@@AEAA_N_N@Z @ 0x1801965E4
 * Callers:
 *     ?EnumValues@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x180196470 (-EnumValues@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV-$vector@V-$basic_string@GU-$char_trai.c)
 *     ?ReadData@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1KPEAPEAXPEA_K@Z @ 0x180196520 (-ReadData@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1KPEAPEAXPEA_K@Z.c)
 *     ?WriteData@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1KPEBX_K@Z @ 0x1802E7110 (-WriteData@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1KPEBX_K@Z.c)
 *     ?AddKey@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG@Z @ 0x1805FB510 (-AddKey@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG@Z.c)
 *     ?EnumKeys@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x1805FB5A0 (-EnumKeys@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV-$vector@V-$basic_string@GU-$char_traits.c)
 *     ?RemoveKey@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG@Z @ 0x1805FB8F0 (-RemoveKey@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG@Z.c)
 *     ?RemoveValue@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1@Z @ 0x1805FB940 (-RemoveValue@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall VirtualDesktopRegistryHelpers::_IsKeyAvailable(VirtualDesktopRegistryHelpers *this, char a2)
{
  if ( a2 )
  {
    if ( *((_QWORD *)this + 3) )
      return 1;
  }
  else if ( *((_QWORD *)this + 2) )
  {
    return 1;
  }
  return 0;
}
