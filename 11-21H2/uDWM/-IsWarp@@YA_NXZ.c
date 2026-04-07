/*
 * XREFs of ?IsWarp@@YA_NXZ @ 0x1800056CC
 * Callers:
 *     ?SendAnimationLastFrameTelemetry@CAnimationFrameStats@@IEAAXXZ @ 0x180004F30 (-SendAnimationLastFrameTelemetry@CAnimationFrameStats@@IEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

bool IsWarp(void)
{
  HMODULE ModuleHandleA; // rax
  bool result; // al
  __int128 v2; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v3[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v4; // [rsp+50h] [rbp-18h]

  ModuleHandleA = (HMODULE)qword_1801423F0;
  if ( qword_1801423F0 == -1 )
  {
    ModuleHandleA = GetModuleHandleA("DComp.dll");
    if ( ModuleHandleA )
      ModuleHandleA = (HMODULE)GetProcAddress(ModuleHandleA, (LPCSTR)0x416);
    qword_1801423F0 = (__int64)ModuleHandleA;
  }
  result = ModuleHandleA
        && (memset(v3, 0, sizeof(v3)),
            v4 = 0LL,
            v2 = 0LL,
            ((int (__fastcall *)(_OWORD *, __int128 *))ModuleHandleA)(v3, &v2) >= 0)
        && DWORD2(v2) != 0;
  return result;
}
