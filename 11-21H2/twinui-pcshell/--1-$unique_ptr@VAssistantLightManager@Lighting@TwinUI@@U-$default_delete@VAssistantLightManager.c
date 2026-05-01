/*
 * XREFs of ??1?$unique_ptr@VAssistantLightManager@Lighting@TwinUI@@U?$default_delete@VAssistantLightManager@Lighting@TwinUI@@@wistd@@@wistd@@QEAA@XZ @ 0x18055E09C
 * Callers:
 *     _TwinUI::Lighting::AssistantLightWNFListener::AssistantLightWNFListener_::_1_::dtor$1 @ 0x18021FC07 (_TwinUI--Lighting--AssistantLightWNFListener--AssistantLightWNFListener_--_1_--dtor$1.c)
 * Callees:
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x1800E2738 (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

void __fastcall wistd::unique_ptr<TwinUI::Lighting::AssistantLightManager,wistd::default_delete<TwinUI::Lighting::AssistantLightManager>>::~unique_ptr<TwinUI::Lighting::AssistantLightManager,wistd::default_delete<TwinUI::Lighting::AssistantLightManager>>(
        TwinUI::Lighting::AssistantLightManager **a1,
        void *a2)
{
  TwinUI::Lighting::AssistantLightManager *v2; // rbx

  v2 = *a1;
  *a1 = 0LL;
  if ( v2 )
  {
    TwinUI::Lighting::AssistantLightManager::~AssistantLightManager(v2, a2);
    operator delete(v2);
  }
}
