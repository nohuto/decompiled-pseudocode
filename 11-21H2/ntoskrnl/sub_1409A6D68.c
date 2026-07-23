/*
 * XREFs of sub_1409A6D68 @ 0x1409A6D68
 * Callers:
 *     sub_1409A6270 @ 0x1409A6270 (sub_1409A6270.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1409A37AC @ 0x1409A37AC (sub_1409A37AC.c)
 *     sub_1409A651C @ 0x1409A651C (sub_1409A651C.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 */

__int64 __fastcall sub_1409A6D68(__int64 a1)
{
  int v2; // eax
  _DWORD *v3; // rsi
  unsigned int v4; // edi
  PVOID v5; // rbx
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v7 = 0LL;
  Object = 0LL;
  v2 = sub_1409A651C(*(void **)(a1 + 8), 1, 1, &v7, &Object);
  v3 = (_DWORD *)v7;
  v4 = v2;
  v5 = Object;
  if ( v2 >= 0 )
  {
    if ( !*((_DWORD *)Object + 7) )
      *(_BYTE *)(v7 + 240) = 0;
    sub_1409A37AC(v3, (__int64)v5, *(_DWORD *)(a1 + 16), *(_DWORD *)(a1 + 20));
    v4 = 0;
  }
  else
  {
    sub_1409A8628("TtmpDispatchSetDisplayTimeouts", 543LL, (unsigned int)v2, (unsigned int)v2);
  }
  if ( v3 )
  {
    ExReleaseResourceLite(&stru_140C1C020);
    KeLeaveCriticalRegion();
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  return v4;
}
