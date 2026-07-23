/*
 * XREFs of sub_1409A6CB4 @ 0x1409A6CB4
 * Callers:
 *     sub_1409A6270 @ 0x1409A6270 (sub_1409A6270.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1409A3648 @ 0x1409A3648 (sub_1409A3648.c)
 *     sub_1409A651C @ 0x1409A651C (sub_1409A651C.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 */

__int64 __fastcall sub_1409A6CB4(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  Object = 0LL;
  v2 = sub_1409A651C(*(void **)(a1 + 8), 1, 1, &v6, &Object);
  v3 = v2;
  if ( v2 >= 0 )
  {
    sub_1409A3648(v6, (unsigned int *)Object, *(_BYTE *)(a1 + 16), *(_DWORD *)(a1 + 20), 0x53445354u);
    v3 = 0;
  }
  else
  {
    sub_1409A8628("TtmpDispatchSetDisplayState", 475LL, (unsigned int)v2, (unsigned int)v2);
  }
  if ( v6 )
  {
    ExReleaseResourceLite(&stru_140C1C020);
    KeLeaveCriticalRegion();
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v3;
}
