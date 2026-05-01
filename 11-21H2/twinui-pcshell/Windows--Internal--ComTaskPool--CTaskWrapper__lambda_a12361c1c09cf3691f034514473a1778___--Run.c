/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a12361c1c09cf3691f034514473a1778___::Run @ 0x180116BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x1800E2738 (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 *     ??$make_unique_nothrow@VAssistantLightWNFListener@Lighting@TwinUI@@$$V@wil@@YA?AV?$unique_ptr@VAssistantLightWNFListener@Lighting@TwinUI@@U?$default_delete@VAssistantLightWNFListener@Lighting@TwinUI@@@wistd@@@wistd@@XZ @ 0x180116C40 (--$make_unique_nothrow@VAssistantLightWNFListener@Lighting@TwinUI@@$$V@wil@@YA-AV-$unique_ptr@VA.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a12361c1c09cf3691f034514473a1778___::Run(
        __int64 a1)
{
  __int64 *v2; // rax
  _QWORD *v3; // rdx
  __int64 v4; // rcx
  _QWORD *v5; // rbx
  _QWORD *v6; // rbx
  TwinUI::Lighting::AssistantLightManager *v7; // rdi
  TwinUI::Lighting::AssistantLightManager *v8; // rdi
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)wil::make_unique_nothrow<TwinUI::Lighting::AssistantLightWNFListener,>(&v9);
  v3 = *(_QWORD **)(a1 + 16);
  v4 = *v2;
  *v2 = 0LL;
  v5 = (_QWORD *)v3[31];
  v3[31] = v4;
  if ( v5 )
  {
    v7 = (TwinUI::Lighting::AssistantLightManager *)v5[1];
    v5[1] = 0LL;
    if ( v7 )
    {
      TwinUI::Lighting::AssistantLightManager::~AssistantLightManager(v7, v3);
      operator delete(v7, 0x70uLL);
    }
    operator delete(v5, 0x10uLL);
  }
  v6 = v9;
  v9 = 0LL;
  if ( v6 )
  {
    v8 = (TwinUI::Lighting::AssistantLightManager *)v6[1];
    v6[1] = 0LL;
    if ( v8 )
    {
      TwinUI::Lighting::AssistantLightManager::~AssistantLightManager(v8, v3);
      operator delete(v8, 0x70uLL);
    }
    operator delete(v6, 0x10uLL);
  }
}
