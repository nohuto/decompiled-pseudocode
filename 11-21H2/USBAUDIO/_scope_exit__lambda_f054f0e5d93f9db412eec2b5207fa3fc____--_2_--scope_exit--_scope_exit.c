/*
 * XREFs of _scope_exit__lambda_f054f0e5d93f9db412eec2b5207fa3fc____::_2_::scope_exit::_scope_exit @ 0x1C001172C
 * Callers:
 *     ?StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C001614C (-StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

ULONG *__fastcall scope_exit__lambda_f054f0e5d93f9db412eec2b5207fa3fc____::_2_::scope_exit::_scope_exit(PIRP **a1)
{
  char v1; // r8
  char v2; // dl
  ULONG *result; // rax
  int v4; // [rsp+20h] [rbp-38h]

  if ( *((_BYTE *)a1 + 16) )
  {
    (**a1)->IoStatus.Status = *(_DWORD *)a1[1];
    IofCompleteRequest(**a1, 0);
    v1 = 1;
    v2 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    result = &WPP_RECORDER_INITIALIZED;
    if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v1 = 0;
    if ( v2 || v1 )
      return (ULONG *)WPP_RECORDER_AND_TRACE_SF_d(
                        (__int64)WPP_GLOBAL_Control->AttachedDevice,
                        v2,
                        v1,
                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                        v4,
                        9u,
                        0x59u,
                        (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
  }
  return result;
}
