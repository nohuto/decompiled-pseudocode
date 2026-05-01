/*
 * XREFs of ??_Gimmersive_shell_component@winrt@@UEAAPEAXI@Z @ 0x1803B56DC
 * Callers:
 *     ??_Eimmersive_shell_component@winrt@@WCA@EAAPEAXI@Z @ 0x1801F6E80 (--_Eimmersive_shell_component@winrt@@WCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1immersive_shell_component@winrt@@UEAA@XZ @ 0x1800F7E9C (--1immersive_shell_component@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

winrt::immersive_shell_component *__fastcall winrt::immersive_shell_component::`scalar deleting destructor'(
        winrt::immersive_shell_component *this,
        char a2)
{
  winrt::immersive_shell_component::~immersive_shell_component(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
