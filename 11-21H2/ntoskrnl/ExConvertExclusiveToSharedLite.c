/*
 * XREFs of ExConvertExclusiveToSharedLite @ 0x140239790
 * Callers:
 *     sub_14028B12C @ 0x14028B12C (sub_14028B12C.c)
 *     sub_140607A20 @ 0x140607A20 (sub_140607A20.c)
 *     sub_140678C4C @ 0x140678C4C (sub_140678C4C.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_1409174A4 @ 0x1409174A4 (sub_1409174A4.c)
 *     sub_140A05860 @ 0x140A05860 (sub_140A05860.c)
 * Callees:
 *     sub_140239810 @ 0x140239810 (sub_140239810.c)
 *     sub_14039C830 @ 0x14039C830 (sub_14039C830.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __stdcall ExConvertExclusiveToSharedLite(PERESOURCE Resource)
{
  USHORT Flag; // dx
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rdx

  Flag = Resource->Flag;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Flag & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > 1u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
    if ( !CurrentIrql && (*((_DWORD *)CurrentThread + 29) & 0x400) == 0 && !*((_DWORD *)CurrentThread + 121) )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    sub_14039C830((ULONG_PTR)Resource);
  }
  else
  {
    sub_140239810();
  }
}
