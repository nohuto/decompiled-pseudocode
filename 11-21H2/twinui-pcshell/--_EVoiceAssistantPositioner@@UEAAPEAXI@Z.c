/*
 * XREFs of ??_EVoiceAssistantPositioner@@UEAAPEAXI@Z @ 0x1800A96D4
 * Callers:
 *     ??_EVoiceAssistantPositioner@@WCI@EAAPEAXI@Z @ 0x18020A3F0 (--_EVoiceAssistantPositioner@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1VoiceAssistantPositioner@@UEAA@XZ @ 0x1800A9710 (--1VoiceAssistantPositioner@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

VoiceAssistantPositioner *__fastcall VoiceAssistantPositioner::`vector deleting destructor'(
        VoiceAssistantPositioner *this,
        char a2)
{
  VoiceAssistantPositioner::~VoiceAssistantPositioner(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x1B0uLL);
  return this;
}
