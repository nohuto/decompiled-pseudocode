/*
 * XREFs of ?RuntimeClassInitialize@COperationWaiter@@QEAAJXZ @ 0x18001150C
 * Callers:
 *     ??$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCOperationWaiter@@@Z @ 0x180011478 (--$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCOperationWaiter.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18004EB90 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall COperationWaiter::RuntimeClassInitialize(COperationWaiter *this)
{
  HANDLE Event; // rax
  unsigned int v3; // ecx

  Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  v3 = 0;
  *((_QWORD *)this + 5) = Event;
  if ( !Event )
    return (unsigned int)ResultFromKnownLastError();
  return v3;
}
