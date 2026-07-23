/*
 * XREFs of sub_1409B314C @ 0x1409B314C
 * Callers:
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     sub_14093212C @ 0x14093212C (sub_14093212C.c)
 */

__int64 __fastcall sub_1409B314C(ULONG_PTR a1, void *a2, unsigned int a3, _DWORD *a4)
{
  char v7; // r9
  int v8; // ebx
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF

  v7 = *((_BYTE *)KeGetCurrentThread() + 562);
  Object[0] = 0LL;
  v8 = sub_140732D40(a1, 4096, (__int64)PsProcessType, v7, 0x79517350u, Object, 0LL, 0LL);
  if ( v8 >= 0 )
  {
    v8 = sub_14093212C((__int64)Object[0], a2, a3, a4);
    ObfDereferenceObjectWithTag(Object[0], 0x79517350u);
  }
  return (unsigned int)v8;
}
