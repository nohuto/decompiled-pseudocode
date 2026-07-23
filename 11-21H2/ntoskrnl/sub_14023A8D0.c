/*
 * XREFs of sub_14023A8D0 @ 0x14023A8D0
 * Callers:
 *     sub_14023A860 @ 0x14023A860 (sub_14023A860.c)
 *     sub_140390C08 @ 0x140390C08 (sub_140390C08.c)
 *     IoFlushAdapterBuffers @ 0x140393E00 (IoFlushAdapterBuffers.c)
 *     sub_1403CD4E0 @ 0x1403CD4E0 (sub_1403CD4E0.c)
 *     HalAllocateAdapterChannel @ 0x140456840 (HalAllocateAdapterChannel.c)
 *     sub_140456892 @ 0x140456892 (sub_140456892.c)
 *     sub_14045693C @ 0x14045693C (sub_14045693C.c)
 *     sub_14045699C @ 0x14045699C (sub_14045699C.c)
 *     IoFreeAdapterChannel @ 0x140456A00 (IoFreeAdapterChannel.c)
 *     IoFreeMapRegisters @ 0x140456A30 (IoFreeMapRegisters.c)
 *     HalAllocateCommonBuffer @ 0x1405054E0 (HalAllocateCommonBuffer.c)
 *     sub_140505534 @ 0x140505534 (sub_140505534.c)
 *     sub_1405055B8 @ 0x1405055B8 (sub_1405055B8.c)
 *     sub_140512C04 @ 0x140512C04 (sub_140512C04.c)
 *     sub_140845A60 @ 0x140845A60 (sub_140845A60.c)
 *     sub_140845F30 @ 0x140845F30 (sub_140845F30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14023A8D0(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 148);
  result = 2LL;
  if ( v1 != 2 )
  {
    result = 0xFFFFFFFFLL;
    if ( v1 == 3 )
      return 3LL;
  }
  return result;
}
