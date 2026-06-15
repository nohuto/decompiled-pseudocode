/*
 * XREFs of ??_EStreamResourceConsumer@@UEAAPEAXI@Z @ 0x1801584A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 */

StreamResourceConsumer *__fastcall StreamResourceConsumer::`vector deleting destructor'(
        StreamResourceConsumer *this,
        char a2)
{
  *(_QWORD *)this = &KeywordDetectorResourceConsumer::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
