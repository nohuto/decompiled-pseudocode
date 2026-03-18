/*
 * XREFs of ??_ECHwLightCollectionBuffer@@EEAAPEAXI@Z @ 0x180010CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

CHwLightCollectionBuffer *__fastcall CHwLightCollectionBuffer::`vector deleting destructor'(
        CHwLightCollectionBuffer *this,
        char a2)
{
  *(_QWORD *)this = &CHwLightCollectionBuffer::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x208uLL);
  return this;
}
