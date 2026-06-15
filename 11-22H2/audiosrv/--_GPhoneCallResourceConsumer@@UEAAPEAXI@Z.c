/*
 * XREFs of ??_GPhoneCallResourceConsumer@@UEAAPEAXI@Z @ 0x18015F840
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 */

PhoneCallResourceConsumer *__fastcall PhoneCallResourceConsumer::`scalar deleting destructor'(
        PhoneCallResourceConsumer *this,
        char a2)
{
  *(_QWORD *)this = &KeywordDetectorResourceConsumer::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
