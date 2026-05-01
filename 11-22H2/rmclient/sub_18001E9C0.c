/*
 * XREFs of sub_18001E9C0 @ 0x18001E9C0
 * Callers:
 *     HamRegisterDesktopProcessWithAppContainerToken @ 0x180001AF0 (HamRegisterDesktopProcessWithAppContainerToken.c)
 * Callees:
 *     HamConnectToServerEx @ 0x180003150 (HamConnectToServerEx.c)
 *     sub_18001CDA8 @ 0x18001CDA8 (sub_18001CDA8.c)
 *     sub_18001EA7C @ 0x18001EA7C (sub_18001EA7C.c)
 */

__int64 __fastcall sub_18001E9C0(__int64 **a1)
{
  __int64 *Heap; // rax
  __int64 *v3; // rbx
  int v4; // edi

  Heap = (__int64 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x18uLL);
  v3 = Heap;
  if ( Heap )
  {
    *(_OWORD *)Heap = 0LL;
    Heap[2] = 0LL;
    PsmTimerInitialize(Heap + 2);
    v4 = HamConnectToServerEx((__int64)sub_18001CE50, 0, 0LL, 0LL, 0LL, v3);
    if ( v4 < 0 || (v4 = sub_18001CDA8(v3 + 1, *v3), v4 < 0) )
    {
      sub_18001EA7C(v3);
    }
    else
    {
      *a1 = v3;
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v4;
}
