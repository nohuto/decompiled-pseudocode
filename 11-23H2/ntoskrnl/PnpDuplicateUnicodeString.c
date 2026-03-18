/*
 * XREFs of PnpDuplicateUnicodeString @ 0x1403CDE80
 * Callers:
 *     PiDevCfgProcessDeviceCallback @ 0x140842950 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1408797E4 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140879C70 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgConfigureDevice @ 0x14087A734 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgBuildIndirectString @ 0x14087B7D4 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x14087C4F8 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgQueryDriverNode @ 0x14087D8E0 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgAppendMultiSz @ 0x14095C634 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14095F208 (PiDevCfgQueryIncludedDriverNode.c)
 * Callees:
 *     memmove @ 0x140435700 (memmove.c)
 *     ExpAllocateStringRoutine @ 0x1407C6F90 (ExpAllocateStringRoutine.c)
 */

char __fastcall PnpDuplicateUnicodeString(__int64 a1, __int64 a2)
{
  void *StringRoutine; // rax

  if ( *(_QWORD *)(a2 + 8) )
  {
    StringRoutine = (void *)ExpAllocateStringRoutine(*(unsigned __int16 *)(a2 + 2));
    *(_QWORD *)(a1 + 8) = StringRoutine;
    if ( !StringRoutine )
      return (char)StringRoutine;
    memmove(StringRoutine, *(const void **)(a2 + 8), *(unsigned __int16 *)(a2 + 2));
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_WORD *)a1 = *(_WORD *)a2;
  *(_WORD *)(a1 + 2) = *(_WORD *)(a2 + 2);
  LOBYTE(StringRoutine) = 1;
  return (char)StringRoutine;
}
