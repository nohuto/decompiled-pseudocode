/*
 * XREFs of ??_GImmersiveShellComponentsConfiguration@@UEAAPEAXI@Z @ 0x18048A284
 * Callers:
 *     ??_E?$heap_implements@UImmersiveShellComponentsConfiguration@@@impl@winrt@@W7EAAPEAXI@Z @ 0x18029A350 (--_E-$heap_implements@UImmersiveShellComponentsConfiguration@@@impl@winrt@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1ImmersiveShellComponentsConfiguration@@UEAA@XZ @ 0x18048A10C (--1ImmersiveShellComponentsConfiguration@@UEAA@XZ.c)
 */

ImmersiveShellComponentsConfiguration *__fastcall ImmersiveShellComponentsConfiguration::`scalar deleting destructor'(
        ImmersiveShellComponentsConfiguration *this,
        char a2)
{
  ImmersiveShellComponentsConfiguration::~ImmersiveShellComponentsConfiguration(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
