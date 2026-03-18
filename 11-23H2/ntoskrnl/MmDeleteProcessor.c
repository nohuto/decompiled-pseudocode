/*
 * XREFs of MmDeleteProcessor @ 0x140617BCC
 * Callers:
 *     KiStartDynamicProcessor @ 0x140973808 (KiStartDynamicProcessor.c)
 *     MmInitializeProcessor @ 0x140A89098 (MmInitializeProcessor.c)
 *     KeStartAllProcessors @ 0x140B47590 (KeStartAllProcessors.c)
 * Callees:
 *     MiReleasePtes @ 0x1402CB8E0 (MiReleasePtes.c)
 *     MiDeleteUltraThreadContext @ 0x1402E92A4 (MiDeleteUltraThreadContext.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MmDeleteProcessor(__int64 a1)
{
  __int64 **v1; // rbx

  v1 = *(__int64 ***)(a1 + 33592);
  if ( v1 )
  {
    MiReleasePtes((__int64)&qword_140C69940, v1[1578], 1u);
    MiDeleteUltraThreadContext((__int64)(v1 + 1544));
    ExFreePoolWithTag(v1, 0);
    *(_QWORD *)(a1 + 33592) = 0LL;
  }
}
