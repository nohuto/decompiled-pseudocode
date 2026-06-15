/*
 * XREFs of ??_GKeywordDetectorResourceConsumer@@UEAAPEAXI@Z @ 0x180158420
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 */

KeywordDetectorResourceConsumer *__fastcall KeywordDetectorResourceConsumer::`scalar deleting destructor'(
        KeywordDetectorResourceConsumer *this,
        char a2)
{
  *(_QWORD *)this = &KeywordDetectorResourceConsumer::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
