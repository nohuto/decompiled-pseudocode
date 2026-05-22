/*
 * XREFs of ?OnInputReport@HeatDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800EFFE0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall HeatDeviceCollection::OnInputReport(HeatDeviceCollection *this, int a2, void *a3, int a4)
{
  DWORD TickCount; // ebx
  __int64 v9; // rcx
  int v10; // eax
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-C08h] BYREF
  _DWORD v13[4]; // [rsp+30h] [rbp-BF8h] BYREF
  LARGE_INTEGER v14; // [rsp+40h] [rbp-BE8h]
  int v15; // [rsp+48h] [rbp-BE0h]
  int v16; // [rsp+70h] [rbp-BB8h]
  void *v17; // [rsp+78h] [rbp-BB0h]
  wil::details::in1diag3 *retaddr; // [rsp+C28h] [rbp+0h]

  memset_0(v13, 0, 0xBC0uLL);
  v15 = 3008;
  TickCount = GetTickCount();
  QueryPerformanceCounter(&PerformanceCount);
  v9 = *((_QWORD *)this + 2);
  v13[1] = a2;
  v13[0] = 2048;
  v13[2] = TickCount;
  v14 = PerformanceCount;
  v17 = a3;
  v16 = a4;
  v10 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v9 + 24LL))(v9, v13);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xAF,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\heatdevicecollection.cpp",
      (const char *)(unsigned int)v10,
      PerformanceCount.LowPart);
  return 0LL;
}
