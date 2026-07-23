/*
 * XREFs of sub_1409F3D68 @ 0x1409F3D68
 * Callers:
 *     sub_14081C05C @ 0x14081C05C (sub_14081C05C.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1406D75F4 @ 0x1406D75F4 (sub_1406D75F4.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1409F2984 @ 0x1409F2984 (sub_1409F2984.c)
 *     sub_1409F3514 @ 0x1409F3514 (sub_1409F3514.c)
 */

__int64 __fastcall sub_1409F3D68(unsigned __int64 a1, unsigned int a2, char a3, unsigned int *a4)
{
  PVOID v8; // rdi
  int v9; // ebx
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  HANDLE Handle[2]; // [rsp+38h] [rbp-30h]

  v8 = 0LL;
  Object = 0LL;
  if ( a2 < 0x10 )
  {
    v9 = -1073741820;
    goto LABEL_19;
  }
  *(_OWORD *)Handle = *(_OWORD *)a1;
  if ( BYTE5(Handle[0]) != 0xCF )
    goto LABEL_4;
  if ( BYTE4(Handle[0]) != 1 )
  {
    if ( BYTE4(Handle[0]) != 3 )
    {
      if ( BYTE4(Handle[0]) != 4 )
      {
        v9 = -1073741821;
        goto LABEL_19;
      }
      if ( a3 )
      {
        v9 = sub_1406D75F4(a3);
        if ( v9 >= 0 )
        {
          *a4 = 24;
          if ( a2 >= 0x18 )
            v9 = sub_1409F3514((bool *)(a1 + 16));
          else
            v9 = -1073741789;
        }
        goto LABEL_19;
      }
    }
LABEL_4:
    v9 = -1073741637;
    goto LABEL_19;
  }
  if ( !a3 )
    goto LABEL_4;
  v9 = sub_1406D75F4(a3);
  if ( v9 >= 0 )
  {
    Object = 0LL;
    v9 = ObReferenceObjectByHandle(Handle[1], 1u, qword_140C15D70, a3, &Object, 0LL);
    v8 = Object;
    if ( v9 >= 0 )
    {
      v9 = sub_1409F2984((ULONG_PTR)Object, a1, a2, a4);
      if ( v9 >= 0 )
        v9 = 0;
    }
  }
LABEL_19:
  if ( v8 )
    ObfDereferenceObject(v8);
  return (unsigned int)v9;
}
