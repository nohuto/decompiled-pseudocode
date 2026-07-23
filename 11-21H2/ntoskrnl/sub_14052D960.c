/*
 * XREFs of sub_14052D960 @ 0x14052D960
 * Callers:
 *     <none>
 * Callees:
 *     sub_14052D8D0 @ 0x14052D8D0 (sub_14052D8D0.c)
 */

ULONG_PTR sub_14052D960()
{
  unsigned int i; // edi
  ULONG_PTR result; // rax

  for ( i = 0; i < (unsigned int)dword_140C4A0DC; ++i )
    result = sub_14052D8D0(i);
  _InterlockedExchange(&dword_140C49E80, 0);
  return result;
}
