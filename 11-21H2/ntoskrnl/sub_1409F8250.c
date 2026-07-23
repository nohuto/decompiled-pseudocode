/*
 * XREFs of sub_1409F8250 @ 0x1409F8250
 * Callers:
 *     <none>
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     PsIsHostSilo @ 0x1402A6DF0 (PsIsHostSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     ZwSetSystemTime @ 0x14041EE40 (ZwSetSystemTime.c)
 */

char __fastcall sub_1409F8250(PVOID Object)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  char result; // al

  v2 = PsAttachSiloToCurrentThread((__int64)Object);
  v3 = *((_QWORD *)sub_140204738((__int64)Object) + 157);
  do
    ZwSetSystemTime(0LL, 0LL);
  while ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 928), 0xFFFFFFFF) != 1 );
  PsDetachSiloFromCurrentThread(v2);
  result = PsIsHostSilo((__int64)Object);
  if ( !result )
    return ObfDereferenceObjectWithTag(Object, 0x53707845u);
  return result;
}
