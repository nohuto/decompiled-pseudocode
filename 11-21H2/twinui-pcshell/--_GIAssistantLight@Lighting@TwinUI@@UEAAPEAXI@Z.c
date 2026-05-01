/*
 * XREFs of ??_GIAssistantLight@Lighting@TwinUI@@UEAAPEAXI@Z @ 0x180560CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

TwinUI::Lighting::IAssistantLight *__fastcall TwinUI::Lighting::IAssistantLight::`scalar deleting destructor'(
        TwinUI::Lighting::IAssistantLight *this,
        char a2)
{
  *(_QWORD *)this = &TwinUI::Lighting::IAssistantLight::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
