/*
 * XREFs of ??_G?$heap_implements@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@impl@winrt@@UEAAPEAXI@Z @ 0x18050D410
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UEAA@XZ @ 0x18050CC94 (--1TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UEAA@XZ.c)
 */

SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting *__fastcall winrt::impl::heap_implements<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting>::`scalar deleting destructor'(
        SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting *a1,
        char a2)
{
  SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::~TouchKeyboardTapInvokeSetting(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
