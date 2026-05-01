/*
 * XREFs of ??$make_shared@VInputAppViewCoodinatorHandler@@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@YA?AV?$shared_ptr@VInputAppViewCoodinatorHandler@@@0@$$QEAW4ShellView@Shell@UI@WindowsUdk@winrt@@@Z @ 0x180094D3C
 * Callers:
 *     ?InitializeViewCoordinators@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180094F5C (-InitializeViewCoordinators@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??0InputAppViewCoodinatorHandler@@QEAA@W4ShellView@Shell@UI@WindowsUdk@winrt@@@Z @ 0x180093E4C (--0InputAppViewCoodinatorHandler@@QEAA@W4ShellView@Shell@UI@WindowsUdk@winrt@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<InputAppViewCoodinatorHandler,enum winrt::WindowsUdk::UI::Shell::ShellView>(
        _QWORD *a1,
        int *a2)
{
  _DWORD *v5; // [rsp+40h] [rbp+8h]

  v5 = operator new(0x68uLL);
  *(_OWORD *)v5 = 0LL;
  v5[2] = 1;
  v5[3] = 1;
  *(_QWORD *)v5 = &std::_Ref_count_obj2<InputAppViewCoodinatorHandler>::`vftable';
  InputAppViewCoodinatorHandler::InputAppViewCoodinatorHandler((__int64)(v5 + 4), *a2);
  *a1 = v5 + 4;
  a1[1] = v5;
  return a1;
}
