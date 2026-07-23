/*
 * XREFs of sub_14021803C @ 0x14021803C
 * Callers:
 *     sub_14030C260 @ 0x14030C260 (sub_14030C260.c)
 *     sub_140374238 @ 0x140374238 (sub_140374238.c)
 *     sub_1405A2D30 @ 0x1405A2D30 (sub_1405A2D30.c)
 *     sub_140970E00 @ 0x140970E00 (sub_140970E00.c)
 *     sub_140971848 @ 0x140971848 (sub_140971848.c)
 *     sub_1409779A4 @ 0x1409779A4 (sub_1409779A4.c)
 * Callees:
 *     sub_1402180C4 @ 0x1402180C4 (sub_1402180C4.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall sub_14021803C(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  bool v3; // zf
  _QWORD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  *((_BYTE *)CurrentThread + 1385) |= 0x80u;
  v3 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v3 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  result = (_QWORD *)sub_1402180C4(a1);
  --*((_WORD *)CurrentThread + 243);
  *((_BYTE *)CurrentThread + 1385) &= ~0x80u;
  v3 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v3 )
  {
    result = (_QWORD *)((char *)CurrentThread + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
