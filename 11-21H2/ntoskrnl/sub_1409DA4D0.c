/*
 * XREFs of sub_1409DA4D0 @ 0x1409DA4D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14062B1A8 @ 0x14062B1A8 (sub_14062B1A8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409DA4D0(_QWORD *P, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v5; // rcx
  _OWORD v6[3]; // [rsp+20h] [rbp-48h] BYREF

  v5 = P[4];
  memset(v6, 0, sizeof(v6));
  sub_14030D5C0(v5, 0LL, (__int64)v6, a4);
  sub_14062B1A8(*(volatile LONG **)(P[4] + 2288LL), (_QWORD *)P[5], P[6]);
  sub_1402D0930((__int64)v6, 0LL);
  ObfDereferenceObject((PVOID)P[4]);
  ExFreePoolWithTag(P, 0);
}
