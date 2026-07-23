/*
 * XREFs of EtwpCaptureRegistryData @ 0x1409F46C4
 * Callers:
 *     EtwpRegTraceCallback @ 0x1408AADC0 (EtwpRegTraceCallback.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpCaptureRegistryData(_QWORD *a1, const void *a2, unsigned int a3)
{
  size_t v3; // rbx
  void *v6; // rdi
  unsigned int v7; // eax
  void *Pool2; // rax

  LOWORD(v3) = a3;
  v6 = 0LL;
  if ( a3 )
  {
    v7 = 2048;
    if ( a3 <= 0x800 )
      v7 = a3;
    v3 = v7;
    Pool2 = (void *)ExAllocatePool2(256LL, v7, 829912133LL);
    v6 = Pool2;
    if ( Pool2 )
      memmove(Pool2, a2, v3);
    else
      LOWORD(v3) = 0;
  }
  *a1 = v6;
  return (unsigned __int16)v3;
}
