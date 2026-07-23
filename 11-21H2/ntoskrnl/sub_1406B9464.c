/*
 * XREFs of sub_1406B9464 @ 0x1406B9464
 * Callers:
 *     sub_140668C60 @ 0x140668C60 (sub_140668C60.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1406B94DC @ 0x1406B94DC (sub_1406B94DC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

POBJECT_TYPE __fastcall sub_1406B9464(char *Object)
{
  _QWORD *v2; // rbx
  POBJECT_TYPE result; // rax
  void *v4; // rcx

LABEL_1:
  v2 = (_QWORD *)sub_1406B94DC(Object);
  while ( 1 )
  {
    result = (POBJECT_TYPE)ObfDereferenceObjectWithTag(Object, 0x6944624Fu);
    if ( !v2 )
      return result;
    Object = (char *)v2[1];
    v4 = v2;
    v2 = (_QWORD *)*v2;
    ExFreePoolWithTag(v4, 0);
    result = qword_140C24FB8;
    if ( ((unsigned __int8)dword_140D06C0C ^ (unsigned __int8)(*(Object - 24) ^ ((unsigned __int16)((_WORD)Object - 48) >> 8))) == *((_BYTE *)qword_140C24FB8 + 40) )
    {
      if ( Object )
        goto LABEL_1;
      return result;
    }
  }
}
