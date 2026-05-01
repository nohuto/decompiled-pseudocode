/*
 * XREFs of ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18035B308
 * Callers:
 *     ??$MakeAndInitialize@VCortanaSharedExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18035693C (--$MakeAndInitialize@VCortanaSharedExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@D.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CortanaExperienceManagerNotification@@QEAA@PEAVCortanaSharedExperienceManager@@@Z @ 0x1803574B0 (--0CortanaExperienceManagerNotification@@QEAA@PEAVCortanaSharedExperienceManager@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18035AF80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILig_ea_18035AF80.c)
 *     ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VIPositionerSelector@Cortana@TwinUI@@U?$default_delete@VIPositionerSelector@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x18035B410 (-RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaE.c)
 *     ??0CortanaPositionerSelector@Cortana@TwinUI@@QEAA@PEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@12@@Z @ 0x1803903C8 (--0CortanaPositionerSelector@Cortana@TwinUI@@QEAA@PEAUIServiceProvider@@PEAVICortanaExperienceMa.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaSharedExperienceManager::RuntimeClassInitialize(
        CortanaSharedExperienceManager *this,
        struct IServiceProvider *a2)
{
  CortanaExperienceManagerNotification *v4; // rax
  CortanaExperienceManagerNotification *v5; // rbx
  TwinUI::Cortana::CortanaPositionerSelector *v6; // rax
  int v7; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CortanaExperienceManagerNotification *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
    v5 = CortanaExperienceManagerNotification::CortanaExperienceManagerNotification(v4, this);
  else
    v5 = 0LL;
  v6 = (TwinUI::Cortana::CortanaPositionerSelector *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    TwinUI::Cortana::CortanaPositionerSelector::CortanaPositionerSelector(
      v6,
      a2,
      (struct TwinUI::Cortana::ICortanaExperienceManagerNotification *)(((unsigned __int64)v5 + 8) & -(__int64)(v5 != 0LL)));
  v7 = CortanaSharedExperienceManager::RuntimeClassInitialize(this);
  v8 = v7;
  if ( v7 >= 0 )
    v8 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x145,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,IInputHostLayoutChanges>::Release((__int64)v5);
  return v8;
}
