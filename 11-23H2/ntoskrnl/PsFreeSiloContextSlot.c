/*
 * XREFs of PsFreeSiloContextSlot @ 0x1409AC790
 * Callers:
 *     VrpRegistryUnload @ 0x140A72300 (VrpRegistryUnload.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     PspGetNextSilo @ 0x1406A31F4 (PspGetNextSilo.c)
 *     PspStorageGetObject @ 0x1407D95C0 (PspStorageGetObject.c)
 *     PspStorageFreeSlot @ 0x1409B8044 (PspStorageFreeSlot.c)
 */

__int64 __fastcall PsFreeSiloContextSlot(unsigned int a1)
{
  ULONG_PTR *i; // rcx
  __int64 v3; // rcx
  ULONG_PTR *NextSilo; // rax
  ULONG_PTR *v5; // rbx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  Object = 0LL;
  for ( i = 0LL; ; i = v5 )
  {
    NextSilo = (ULONG_PTR *)PspGetNextSilo(i, 0);
    v5 = NextSilo;
    if ( !NextSilo )
      break;
    v3 = NextSilo[190];
    if ( v3 && (int)PspStorageGetObject(v3, a1, (unsigned __int64 *)&Object) >= 0 )
    {
      ObfDereferenceObject(Object);
      KeBugCheckEx(0x199u, v5[190], 0LL, 0LL, 0LL);
    }
  }
  return PspStorageFreeSlot(a1);
}
