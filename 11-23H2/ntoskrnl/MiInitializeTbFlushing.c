/*
 * XREFs of MiInitializeTbFlushing @ 0x140B5C038
 * Callers:
 *     MiInitSystem @ 0x140B44518 (MiInitSystem.c)
 * Callees:
 *     KeGetTbSize @ 0x140B5C088 (KeGetTbSize.c)
 *     MiInitializeTbFlush @ 0x140B5C1BC (MiInitializeTbFlush.c)
 */

__int64 MiInitializeTbFlushing()
{
  __int64 TbSize; // rbx
  __int64 result; // rax

  TbSize = KeGetTbSize();
  if ( !TbSize )
    TbSize = 2048LL;
  qword_140C65B90 = -1LL;
  result = MiInitializeTbFlush(TbSize);
  if ( qword_140C65B90 == TbSize && TbSize != 2048 )
  {
    qword_140C65B90 = -1LL;
    return MiInitializeTbFlush(2048LL);
  }
  return result;
}
