/*
 * XREFs of sub_1403C7488 @ 0x1403C7488
 * Callers:
 *     sub_140831BF4 @ 0x140831BF4 (sub_140831BF4.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall sub_1403C7488(__int64 a1, void *a2)
{
  NTSTATUS v3; // ebx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  Object = 0LL;
  v3 = ObReferenceObjectByHandle(a2, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
  if ( v3 < 0 )
  {
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  }
  else
  {
    v3 = 0;
    *((_QWORD *)&xmmword_140C490E0 + 1) = Object;
    *(_QWORD *)&xmmword_140C490E0 = a2;
  }
  return (unsigned int)v3;
}
