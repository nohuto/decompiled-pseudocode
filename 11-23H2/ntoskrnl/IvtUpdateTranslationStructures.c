/*
 * XREFs of IvtUpdateTranslationStructures @ 0x14052E0DC
 * Callers:
 *     IvtAttachDeviceDomainInternal @ 0x14052B808 (IvtAttachDeviceDomainInternal.c)
 *     IvtProcessDeviceExceptions @ 0x140A98E94 (IvtProcessDeviceExceptions.c)
 *     HalpIvtpInitializeReservedDomain @ 0x140A99938 (HalpIvtpInitializeReservedDomain.c)
 * Callees:
 *     IvtUpdateContextEntry @ 0x14052D984 (IvtUpdateContextEntry.c)
 *     IvtUpdateScalableModeTranslationStructures @ 0x14052DF0C (IvtUpdateScalableModeTranslationStructures.c)
 */

__int64 __fastcall IvtUpdateTranslationStructures(
        __int64 a1,
        int *a2,
        __int64 a3,
        __int64 *a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  int v10; // [rsp+20h] [rbp-38h]
  int v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+38h] [rbp-20h]

  if ( *(_BYTE *)(a1 + 320) )
    return IvtUpdateScalableModeTranslationStructures(a1, a2, a3, a4, v10, v11, a7, v12, a9);
  else
    return IvtUpdateContextEntry(a1, (unsigned int *)a2, a7, (__int64)a4, a9);
}
