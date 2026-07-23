/*
 * XREFs of sub_1409A6714 @ 0x1409A6714
 * Callers:
 *     sub_1409A6270 @ 0x1409A6270 (sub_1409A6270.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ObInsertObject @ 0x14066BA50 (ObInsertObject.c)
 *     sub_1409A50EC @ 0x1409A50EC (sub_1409A50EC.c)
 *     sub_1409A651C @ 0x1409A651C (sub_1409A651C.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 *     sub_1409AB130 @ 0x1409AB130 (sub_1409AB130.c)
 */

__int64 __fastcall sub_1409A6714(__int64 a1, _QWORD *a2)
{
  void *v2; // rcx
  PVOID v4; // rdi
  int inserted; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  HANDLE v9; // rax
  PVOID v11[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+20h] BYREF
  PVOID Object; // [rsp+70h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+38h] BYREF

  v2 = *(void **)(a1 + 8);
  v12 = 0LL;
  v11[0] = 0LL;
  v4 = 0LL;
  Handle = 0LL;
  Object = 0LL;
  inserted = sub_1409A651C(v2, 1, 0, &v12, v11);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v7 = 307LL;
LABEL_3:
    sub_1409A8628("TtmpDispatchCreateEventQueue", v7, (unsigned int)inserted, (unsigned int)inserted);
    goto LABEL_11;
  }
  v8 = sub_1409AB130(v12, &Object);
  v6 = v8;
  if ( v8 >= 0 )
  {
    v4 = Object;
    inserted = sub_1409A50EC(v12, (__int64)Object);
    v6 = inserted;
    if ( inserted < 0 )
    {
      v7 = 323LL;
      goto LABEL_3;
    }
    inserted = ObInsertObject(v4, 0LL, 0x1F0000u, 0, 0LL, &Handle);
    v4 = 0LL;
    v6 = inserted;
    if ( inserted < 0 )
    {
      v7 = 342LL;
      goto LABEL_3;
    }
    v9 = Handle;
    Handle = 0LL;
    v6 = 0;
    *a2 = v9;
  }
  else
  {
    sub_1409A8628("TtmpDispatchCreateEventQueue", 313LL, (unsigned int)v8, (unsigned int)v8);
    v4 = Object;
  }
LABEL_11:
  if ( v12 )
  {
    ExReleaseResourceLite(&stru_140C1C020);
    KeLeaveCriticalRegion();
  }
  if ( v11[0] )
    ObfDereferenceObject(v11[0]);
  if ( v4 )
    ObfDereferenceObject(v4);
  return v6;
}
