/*
 * XREFs of IopSetTypeSpecificFoExtension @ 0x140302AE0
 * Callers:
 *     IopGetSetSpecificExtension @ 0x1403017F8 (IopGetSetSpecificExtension.c)
 *     IoSetOplockPrivateFoExt @ 0x140302758 (IoSetOplockPrivateFoExt.c)
 *     IoSetOplockKeyContext @ 0x1403CF318 (IoSetOplockKeyContext.c)
 *     IoSetShadowFileInformation @ 0x140557830 (IoSetShadowFileInformation.c)
 *     IopSymlinkSetFoExtension @ 0x140881590 (IopSymlinkSetFoExtension.c)
 *     IopSetFileObjectIosbRange @ 0x140946138 (IopSetFileObjectIosbRange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140947CCC (IopSetFileMemoryPartitionInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopSetTypeSpecificFoExtension(__int64 a1, unsigned int a2, signed __int64 a3)
{
  if ( a2 > 9 )
    return 3221225485LL;
  else
    return _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8LL * (int)a2 + 8), a3, 0LL) != 0
         ? 0xC0000001
         : 0;
}
