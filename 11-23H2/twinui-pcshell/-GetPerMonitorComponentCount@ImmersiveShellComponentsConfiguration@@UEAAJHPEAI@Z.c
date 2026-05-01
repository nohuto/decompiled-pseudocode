/*
 * XREFs of ?GetPerMonitorComponentCount@ImmersiveShellComponentsConfiguration@@UEAAJHPEAI@Z @ 0x18048A740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ImmersiveShellComponentsConfiguration::GetPerMonitorComponentCount(
        ImmersiveShellComponentsConfiguration *this,
        int a2,
        unsigned int *a3)
{
  __int64 v3; // rax

  if ( a2 )
    v3 = *((_QWORD *)this + 7) - *((_QWORD *)this + 6);
  else
    v3 = *((_QWORD *)this + 10) - *((_QWORD *)this + 9);
  *a3 = -1431655765 * (v3 >> 3);
  return 0LL;
}
