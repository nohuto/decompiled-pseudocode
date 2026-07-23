/*
 * XREFs of PsPicoSystemCallDispatch @ 0x1409B537C
 * Callers:
 *     PsPicoAltSystemCallDispatch @ 0x140463E60 (PsPicoAltSystemCallDispatch.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PsPicoSystemCallDispatch(__int64 a1)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  ((void (__fastcall *)(__int64 *))qword_140C380E8)(&v3);
  return *(_QWORD *)(a1 + 48);
}
