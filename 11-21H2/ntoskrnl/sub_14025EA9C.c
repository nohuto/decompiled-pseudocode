/*
 * XREFs of sub_14025EA9C @ 0x14025EA9C
 * Callers:
 *     sub_14025EC08 @ 0x14025EC08 (sub_14025EC08.c)
 * Callees:
 *     sub_14025EB44 @ 0x14025EB44 (sub_14025EB44.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1406EC048 @ 0x1406EC048 (sub_1406EC048.c)
 */

struct _KTHREAD *__fastcall sub_14025EA9C(_QWORD *a1, __int64 a2, char a3)
{
  int v6; // edi
  struct _KTHREAD *result; // rax
  struct _KTHREAD *CurrentThread; // r8

  v6 = a3 & 2;
  if ( (a3 & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 243);
  }
  result = (struct _KTHREAD *)sub_1406EC048((HANDLE)-(__int64)(*a1 < 0xFFFF800000000000uLL));
  if ( v6 )
  {
    result = KeGetCurrentThread();
    if ( (*((_WORD *)result + 243))++ == 0xFFFF )
    {
      result = (struct _KTHREAD *)((char *)result + 152);
      if ( *(struct _KTHREAD **)result != result )
        result = (struct _KTHREAD *)KiCheckForKernelApcDelivery();
    }
  }
  if ( (a3 & 1) == 0 )
    return (struct _KTHREAD *)sub_14025EB44(a1, a2);
  return result;
}
