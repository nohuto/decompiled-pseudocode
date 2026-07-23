/*
 * XREFs of sub_1409380B4 @ 0x1409380B4
 * Callers:
 *     sub_140938A9C @ 0x140938A9C (sub_140938A9C.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140559E1C @ 0x140559E1C (sub_140559E1C.c)
 *     sub_1406CF67C @ 0x1406CF67C (sub_1406CF67C.c)
 *     sub_140938A3C @ 0x140938A3C (sub_140938A3C.c)
 */

LONG_PTR __fastcall sub_1409380B4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v7 = 0LL;
  LOBYTE(a4) = *((_BYTE *)KeGetCurrentThread() + 562);
  Object = 0LL;
  if ( (*(_DWORD *)(a2 + 4) & 2) != 0 )
  {
    LODWORD(v7) = -1073741811;
  }
  else
  {
    LODWORD(v7) = sub_140938A3C(a1, a2, 0LL, a4, &Object);
    if ( (int)v7 >= 0 )
      LODWORD(v7) = sub_1406CF67C((__int64)Object, *(_QWORD *)(a2 + 24));
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return sub_140559E1C(a1, *(_QWORD *)(a2 + 48), &v7, 0);
}
