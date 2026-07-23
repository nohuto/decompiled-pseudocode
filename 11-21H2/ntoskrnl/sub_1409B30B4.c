/*
 * XREFs of sub_1409B30B4 @ 0x1409B30B4
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     sub_140931FBC @ 0x140931FBC (sub_140931FBC.c)
 */

__int64 __fastcall sub_1409B30B4(ULONG_PTR a1, const void *a2, unsigned int a3)
{
  char v5; // r9
  int v6; // ebx
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v5 = *((_BYTE *)KeGetCurrentThread() + 562);
  Object = 0LL;
  v6 = sub_140732D40(a1, 0x2000, (__int64)PsProcessType, v5, 0x79517350u, &Object, 0LL, 0LL);
  if ( v6 >= 0 )
  {
    v6 = sub_140931FBC((__int64)Object, a2, a3);
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
  }
  return (unsigned int)v6;
}
