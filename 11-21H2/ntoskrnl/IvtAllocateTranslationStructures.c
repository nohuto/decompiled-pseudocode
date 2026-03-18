/*
 * XREFs of IvtAllocateTranslationStructures @ 0x14052DEFC
 * Callers:
 *     IvtAttachDeviceDomainInternal @ 0x14052DF88 (IvtAttachDeviceDomainInternal.c)
 *     IvtProcessDeviceExceptions @ 0x140A64544 (IvtProcessDeviceExceptions.c)
 *     HalpIvtpInitializeReservedDomain @ 0x140A650A8 (HalpIvtpInitializeReservedDomain.c)
 * Callees:
 *     IvtAllocateContextTable @ 0x14052D9E0 (IvtAllocateContextTable.c)
 *     IvtAllocateScalableModePasidTables @ 0x14052DC38 (IvtAllocateScalableModePasidTables.c)
 */

__int64 __fastcall IvtAllocateTranslationStructures(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  v9 = 0LL;
  if ( *(_BYTE *)(a1 + 320) )
  {
    result = IvtAllocateScalableModePasidTables(a1, a2, a3, 0, &v9);
    if ( (int)result < 0 )
      return result;
    v5 = v9;
  }
  result = IvtAllocateContextTable(a1, a2);
  if ( (int)result >= 0 )
  {
    if ( a5 )
      *a5 = v5;
  }
  return result;
}
