/*
 * XREFs of ??_GAssistantLightBlock@Lighting@TwinUI@@UEAAPEAXI@Z @ 0x180560C70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

TwinUI::Lighting::AssistantLightBlock *__fastcall TwinUI::Lighting::AssistantLightBlock::`scalar deleting destructor'(
        TwinUI::Lighting::AssistantLightBlock *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 1);
  if ( v4 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *(_QWORD *)this = &TwinUI::Lighting::IAssistantLight::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
