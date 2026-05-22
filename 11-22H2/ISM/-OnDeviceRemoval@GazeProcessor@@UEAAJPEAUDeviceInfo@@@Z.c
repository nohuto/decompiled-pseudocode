/*
 * XREFs of ?OnDeviceRemoval@GazeProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801E6E20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GazeProcessor::OnDeviceRemoval(GazeProcessor *this, struct DeviceInfo *a2)
{
  __int64 v2; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  int v7[24]; // [rsp+20h] [rbp-78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v2 = *((_QWORD *)this + 38);
  if ( !v2 )
    return 0LL;
  memset_0(v7, 0, 0x59uLL);
  v7[1] = **((_DWORD **)this + 5);
  v7[0] = 0x4000;
  v7[6] = 96;
  v7[10] = 2;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 24LL))(v2, v7);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAB,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
