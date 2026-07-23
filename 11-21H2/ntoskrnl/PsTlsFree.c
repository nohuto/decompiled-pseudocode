/*
 * XREFs of PsTlsFree @ 0x1409B2FC0
 * Callers:
 *     sub_140852FB4 @ 0x140852FB4 (sub_140852FB4.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1409C0960 @ 0x1409C0960 (sub_1409C0960.c)
 */

char __fastcall PsTlsFree(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v2; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  --*((_WORD *)CurrentThread + 243);
  if ( (int)sub_1409C0960(a1, (unsigned int)a1, &v5) < 0 )
    __fastfail(0x46u);
  v2 = KeGetCurrentThread();
  if ( (*((_WORD *)v2 + 243))++ == 0xFFFF )
  {
    v2 = (struct _KTHREAD *)((char *)v2 + 152);
    if ( *(struct _KTHREAD **)v2 != v2 )
      LOBYTE(v2) = KiCheckForKernelApcDelivery();
  }
  return (char)v2;
}
