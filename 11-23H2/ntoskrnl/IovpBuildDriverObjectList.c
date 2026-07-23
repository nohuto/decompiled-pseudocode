/*
 * XREFs of IovpBuildDriverObjectList @ 0x140AC18E8
 * Callers:
 *     ObEnumerateObjectsByType @ 0x14097BA54 (ObEnumerateObjectsByType.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x1403379A0 (ObReferenceObjectSafe.c)
 *     PnpIsLegacyDriver @ 0x14068F830 (PnpIsLegacyDriver.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

char __fastcall IovpBuildDriverObjectList(__int64 a1)
{
  __int64 Pool2; // rax
  _QWORD *v3; // rbx

  if ( !(unsigned int)PnpIsLegacyDriver(a1) )
    goto LABEL_6;
  Pool2 = ExAllocatePool2(64LL, 0x10uLL, 0x6F7649u);
  v3 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    if ( ObReferenceObjectSafe(a1) )
    {
      v3[1] = a1;
      *v3 = IovDriverListHead;
      IovDriverListHead = v3;
    }
    else
    {
      ExFreePoolWithTag(v3, 0);
    }
LABEL_6:
    LOBYTE(Pool2) = 1;
  }
  return Pool2;
}
