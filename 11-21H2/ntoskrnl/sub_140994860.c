/*
 * XREFs of sub_140994860 @ 0x140994860
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_14036972C @ 0x14036972C (sub_14036972C.c)
 *     sub_1408193F4 @ 0x1408193F4 (sub_1408193F4.c)
 *     sub_140995414 @ 0x140995414 (sub_140995414.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

void __fastcall sub_140994860(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // rcx

  KeInitializeEvent((PRKEVENT)(a1 + 80), SynchronizationEvent, 0);
  if ( ++dword_140C229B0 == 1 )
  {
    sub_140A48330(v2);
    if ( byte_140C2341E != 1 )
    {
      byte_140C2341E = 1;
      sub_1408193F4();
    }
    sub_140A47CF8(v4, v3);
    _m_prefetchw(&dword_140C1F210);
    if ( !_InterlockedOr(&dword_140C1F210, 1u) )
      ExQueueWorkItem(&stru_140C1F220, DelayedWorkQueue);
  }
  sub_1402D66A8((ULONG_PTR)&qword_140C229A0);
  byte_140C229B8 = 1;
  sub_140995414(a1);
  sub_14036972C(8u);
  sub_1402935D0((ULONG_PTR)&qword_140C229A0);
}
