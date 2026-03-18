/*
 * XREFs of AdminQueuesFreeResources @ 0x1C000955C
 * Callers:
 *     NVMeControllerRemove @ 0x1C000E2F4 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000ED70 (NVMeControllerStop.c)
 * Callees:
 *     memset @ 0x1C0004D40 (memset.c)
 */

void *__fastcall AdminQueuesFreeResources(__int64 a1)
{
  __int64 v2; // r8
  void *result; // rax
  __int64 v4; // r8
  void *v5; // rcx
  void **v6; // rbx
  __int64 v7; // rdi
  void *v8; // rcx

  if ( !*(_BYTE *)(a1 + 20) )
  {
    v2 = *(_QWORD *)(a1 + 368);
    if ( v2 )
      result = (void *)StorPortExtendedFunction(1LL, a1, v2);
    *(_QWORD *)(a1 + 368) = 0LL;
    v4 = *(_QWORD *)(a1 + 376);
    if ( v4 )
      result = (void *)StorPortExtendedFunction(1LL, a1, v4);
    *(_QWORD *)(a1 + 376) = 0LL;
    v5 = *(void **)(a1 + 1040);
    *(_BYTE *)(a1 + 944) = 0;
    if ( v5 )
      result = memset(v5, 0, 0x10A0uLL);
    v6 = (void **)(a1 + 1168);
    v7 = 6LL;
    do
    {
      v8 = *v6;
      *((_BYTE *)v6 - 96) = 0;
      if ( v8 )
        result = memset(v8, 0, 0x10A0uLL);
      v6 += 16;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
