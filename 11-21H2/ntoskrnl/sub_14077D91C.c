/*
 * XREFs of sub_14077D91C @ 0x14077D91C
 * Callers:
 *     sub_1406D2EE0 @ 0x1406D2EE0 (sub_1406D2EE0.c)
 *     sub_1406E67F0 @ 0x1406E67F0 (sub_1406E67F0.c)
 *     sub_14076B308 @ 0x14076B308 (sub_14076B308.c)
 *     sub_1407783C4 @ 0x1407783C4 (sub_1407783C4.c)
 *     sub_14077B6F4 @ 0x14077B6F4 (sub_14077B6F4.c)
 *     sub_14077C860 @ 0x14077C860 (sub_14077C860.c)
 *     sub_14077D670 @ 0x14077D670 (sub_14077D670.c)
 *     sub_1407879A8 @ 0x1407879A8 (sub_1407879A8.c)
 *     sub_14078B5D8 @ 0x14078B5D8 (sub_14078B5D8.c)
 *     IoGetDeviceDirectory @ 0x140943540 (IoGetDeviceDirectory.c)
 *     sub_140948814 @ 0x140948814 (sub_140948814.c)
 * Callees:
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14077D91C(
        ULONG Tag,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        PVOID *a9,
        unsigned int *a10,
        int a11)
{
  PVOID *v11; // rdi
  __int64 v12; // rbp
  int v13; // r12d
  __int64 v15; // r13
  __int64 Pool2; // rax
  int v19; // eax
  unsigned int v20; // ebx
  unsigned int v22; // eax
  unsigned int v23; // [rsp+98h] [rbp+10h] BYREF

  v11 = a9;
  LODWORD(v12) = 0;
  v13 = a11;
  v15 = a8;
  v23 = a2;
  *a9 = 0LL;
  while ( 1 )
  {
    if ( a2 > (unsigned int)v12 )
    {
      v12 = a2;
      if ( *v11 )
        ExFreePoolWithTag(*v11, Tag);
      Pool2 = ExAllocatePool2(256LL, v12, Tag);
      *v11 = (PVOID)Pool2;
      if ( !Pool2 )
      {
        v20 = -1073741670;
LABEL_8:
        if ( *v11 )
        {
          ExFreePoolWithTag(*v11, Tag);
          *v11 = 0LL;
        }
        return v20;
      }
    }
    v23 = 0;
    v19 = sub_14077DA5C(qword_140D00AC0, a3, a4, a5, a6, a7, v15, (__int64)*v11, v12, (__int64)&v23, v13);
    v20 = v19;
    if ( v19 != -1073741789 )
      break;
    a2 = v23;
  }
  if ( v19 < 0 )
    goto LABEL_8;
  v22 = v23;
  if ( a10 )
    *a10 = v23;
  if ( !v22 )
    goto LABEL_8;
  return v20;
}
