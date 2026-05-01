/*
 * XREFs of ??_EAssistantLightStrip@Lighting@TwinUI@@UEAAPEAXI@Z @ 0x1805613A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1AssistantLightStrip@Lighting@TwinUI@@UEAA@XZ @ 0x180561334 (--1AssistantLightStrip@Lighting@TwinUI@@UEAA@XZ.c)
 */

TwinUI::Lighting::AssistantLightStrip *__fastcall TwinUI::Lighting::AssistantLightStrip::`vector deleting destructor'(
        TwinUI::Lighting::AssistantLightStrip *this,
        char a2)
{
  TwinUI::Lighting::AssistantLightStrip::~AssistantLightStrip(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
