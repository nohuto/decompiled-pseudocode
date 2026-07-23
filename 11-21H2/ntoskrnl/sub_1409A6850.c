/*
 * XREFs of sub_1409A6850 @ 0x1409A6850
 * Callers:
 *     sub_1409A6270 @ 0x1409A6270 (sub_1409A6270.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1409A2F78 @ 0x1409A2F78 (sub_1409A2F78.c)
 *     sub_1409A651C @ 0x1409A651C (sub_1409A651C.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 */

__int64 __fastcall sub_1409A6850(__int64 a1, HANDLE *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdi
  ACCESS_MASK v7; // edx
  int v8; // eax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  Object = 0LL;
  v4 = sub_1409A651C(*(void **)(a1 + 16), 1, 0, &v10, &Object);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = *(_DWORD *)(a1 + 8);
    v6 = v10;
    v8 = sub_1409A2F78(v10, v7, *((_BYTE *)KeGetCurrentThread() + 562), a2, a2 + 1, 0LL);
    v5 = v8;
    if ( v8 >= 0 )
      v5 = 0;
    else
      sub_1409A8628("TtmpDispatchCreateTerminal", 239LL, (unsigned int)v8, (unsigned int)v8);
  }
  else
  {
    sub_1409A8628("TtmpDispatchCreateTerminal", 227LL, (unsigned int)v4, (unsigned int)v4);
    v6 = v10;
  }
  if ( v6 )
  {
    ExReleaseResourceLite(&stru_140C1C020);
    KeLeaveCriticalRegion();
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v5;
}
