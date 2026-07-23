/*
 * XREFs of sub_140B290EC @ 0x140B290EC
 * Callers:
 *     sub_140B1E170 @ 0x140B1E170 (sub_140B1E170.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406BBC4C @ 0x1406BBC4C (sub_1406BBC4C.c)
 *     sub_14085C168 @ 0x14085C168 (sub_14085C168.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char sub_140B290EC()
{
  struct _ERESOURCE *v0; // rbx
  __int64 v1; // rdi
  void *Pool2; // rax

  v0 = &stru_140CF66C0;
  v1 = 4LL;
  do
  {
    ExInitializeResourceLite(v0++);
    --v1;
  }
  while ( v1 );
  ExInitializeResourceLite(&stru_140CF6650);
  stru_140CF6860.Count = 1;
  stru_140CF6860.Event.Header.WaitListHead.Blink = &stru_140CF6860.Event.Header.WaitListHead;
  stru_140CF6860.Event.Header.WaitListHead.Flink = &stru_140CF6860.Event.Header.WaitListHead;
  stru_140CF6860.Owner = 0LL;
  stru_140CF6860.Contention = 0;
  LOWORD(stru_140CF6860.Event.Header.Lock) = 1;
  stru_140CF6860.Event.Header.Size = 6;
  stru_140CF6860.Event.Header.SignalState = 0;
  Pool2 = (void *)ExAllocatePool2(256LL, 0x80uLL, 0x734C6553u);
  qword_140D3CA78 = (__int64)Pool2;
  if ( !Pool2 )
    return 0;
  memset(Pool2, 0, 0x80uLL);
  if ( (int)sub_1406BBC4C((__int64)&qword_140A37C38) < 0 )
    return 0;
  if ( (int)sub_1406BBC4C((__int64)&qword_140A37C20) < 0 )
    return 0;
  dword_140C1B314 = 0;
  memset(byte_140C1B380, 0, 0x76uLL);
  byte_140C1B3C2 = 1;
  qword_140C1B308 = 0LL;
  byte_140C1B311 = 0;
  if ( (int)sub_14085C168() < 0 )
    return 0;
  dword_140D3CEF4 = 1;
  return 1;
}
