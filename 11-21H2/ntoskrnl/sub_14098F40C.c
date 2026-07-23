/*
 * XREFs of sub_14098F40C @ 0x14098F40C
 * Callers:
 *     sub_140A6B1E0 @ 0x140A6B1E0 (sub_140A6B1E0.c)
 * Callees:
 *     IoGetDeviceProperty @ 0x140773C30 (IoGetDeviceProperty.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_14098F40C(__int64 a1, DEVICE_REGISTRY_PROPERTY a2, struct _DEVICE_OBJECT *a3)
{
  void *Pool2; // rbx
  __int64 v7; // rax
  ULONG BufferLength; // [rsp+68h] [rbp+20h] BYREF

  BufferLength = 0;
  if ( IoGetDeviceProperty(a3, a2, 0, 0LL, &BufferLength) == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, BufferLength, 544040269LL);
    if ( Pool2 )
    {
      if ( IoGetDeviceProperty(a3, a2, BufferLength, Pool2, &BufferLength) < 0 )
      {
        ExFreePoolWithTag(Pool2, 0x206D654Du);
      }
      else
      {
        *(_WORD *)(a1 + 2) = BufferLength;
        v7 = -1LL;
        do
          ++v7;
        while ( *((_WORD *)Pool2 + v7) );
        *(_QWORD *)(a1 + 8) = Pool2;
        *(_WORD *)a1 = 2 * v7;
      }
    }
  }
}
