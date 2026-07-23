/*
 * XREFs of sub_1403CB9F0 @ 0x1403CB9F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140217454 @ 0x140217454 (sub_140217454.c)
 *     sub_140255E00 @ 0x140255E00 (sub_140255E00.c)
 *     sub_1402A9790 @ 0x1402A9790 (sub_1402A9790.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KeSetPriorityThread @ 0x140344340 (KeSetPriorityThread.c)
 *     sub_1403CBB10 @ 0x1403CBB10 (sub_1403CBB10.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall __noreturn sub_1403CB9F0(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  struct _KTHREAD *v3; // rax
  struct _KTHREAD *v4; // rax
  _DWORD v6[68]; // [rsp+20h] [rbp-138h] BYREF

  memset(&v6[1], 0, 0x10CuLL);
  CurrentThread = KeGetCurrentThread();
  KeSetPriorityThread(CurrentThread, 31);
  _interlockedbittestandset((volatile signed __int32 *)CurrentThread + 30, 8u);
  sub_1403CBB10(*(unsigned int *)(a1 + 36), 0LL);
  *(_BYTE *)(a1 + 13240) = 1;
  while ( 1 )
  {
    v6[0] = 0;
    sub_140217454(a1 + 32320, 5u);
    v3 = KeGetCurrentThread();
    --*((_WORD *)v3 + 243);
    do
    {
      *(_WORD *)(a1 + 13246) = 1;
      if ( dword_140D069F0 )
        __asm { clac }
      _disable();
      sub_1402A9790(a1, (unsigned __int64)CurrentThread, v6, 1u);
      _enable();
      if ( dword_140D069F0 )
        __asm { stac }
    }
    while ( !sub_140255E00((volatile signed __int16 *)(a1 + 13246), a1 + 13168) );
    v4 = KeGetCurrentThread();
    if ( (*((_WORD *)v4 + 243))++ == 0xFFFF && *((struct _KTHREAD **)v4 + 19) != (struct _KTHREAD *)((char *)v4 + 152) )
      KiCheckForKernelApcDelivery();
  }
}
