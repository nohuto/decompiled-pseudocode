/*
 * XREFs of HampCltDelayCloseContextCreate @ 0x18001DF00
 * Callers:
 *     HamRegisterDesktopProcessWithAppContainerToken @ 0x180002160 (HamRegisterDesktopProcessWithAppContainerToken.c)
 * Callees:
 *     HamConnectToServerEx @ 0x180002CD0 (HamConnectToServerEx.c)
 *     ?CreateInstance@HamActivityWrapper@@SAJPEAPEAV1@PEAX_K@Z @ 0x18001C3D8 (-CreateInstance@HamActivityWrapper@@SAJPEAPEAV1@PEAX_K@Z.c)
 *     HampCltDelayCloseContextDestroy @ 0x18001DFB0 (HampCltDelayCloseContextDestroy.c)
 */

__int64 __fastcall HampCltDelayCloseContextCreate(struct HamActivityWrapper ***a1)
{
  struct HamActivityWrapper **Heap; // rax
  struct HamActivityWrapper **v3; // rbx
  int Instance; // edi

  Heap = (struct HamActivityWrapper **)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x18uLL);
  v3 = Heap;
  if ( Heap )
  {
    *(_OWORD *)Heap = 0LL;
    Heap[2] = 0LL;
    PsmTimerInitialize(Heap + 2);
    Instance = HamConnectToServerEx((__int64)HamActivityWrapper::HamCallback, 0, v3);
    if ( Instance < 0 || (Instance = HamActivityWrapper::CreateInstance(v3 + 1, *v3), Instance < 0) )
    {
      HampCltDelayCloseContextDestroy(v3);
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
  return (unsigned int)Instance;
}
