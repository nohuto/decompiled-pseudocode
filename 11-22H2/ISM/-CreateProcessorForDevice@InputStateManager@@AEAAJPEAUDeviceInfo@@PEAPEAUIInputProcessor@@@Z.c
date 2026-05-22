/*
 * XREFs of ?CreateProcessorForDevice@InputStateManager@@AEAAJPEAUDeviceInfo@@PEAPEAUIInputProcessor@@@Z @ 0x180040C58
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x180040590 (-OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall InputStateManager::CreateProcessorForDevice(
        InputStateManager *this,
        struct DeviceInfo *a2,
        struct IInputProcessor **a3)
{
  char *v4; // rax
  unsigned int v5; // esi
  __int64 (__fastcall **v6)(const struct DeviceInfo *); // rbx
  __int64 v7; // rdi
  int v8; // edi
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IInputProcessor *v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0LL;
  v10[2] = 0LL;
  v10[0] = a2;
  if ( this )
    v4 = (char *)this + 8;
  else
    v4 = 0LL;
  v10[1] = v4;
  if ( !a2 || !v4 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xDD,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
      (const char *)0x80070057LL,
      v10[0]);
  v5 = 0;
  v6 = &off_180275020;
  do
  {
    v7 = (__int64)*(v6 - 1);
    if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
      __fastfail(7u);
    if ( _bittest64(&v7, gdwDeviceFamily) && (!*v6 || (unsigned int)(*v6)((const struct DeviceInfo *)v10[0])) )
    {
      v8 = ((__int64 (__fastcall *)(_QWORD *, struct IInputProcessor **))v6[1])(v10, &v12);
      if ( v8 >= 0 )
        break;
    }
    ++v5;
    v6 += 6;
    v8 = -2147023728;
  }
  while ( v5 < 0x13 );
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
      (const char *)(unsigned int)v8);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x261,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  else
  {
    *a3 = v12;
    return 0LL;
  }
}
