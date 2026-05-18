/*
 * XREFs of sub_1800DA9DC @ 0x1800DA9DC
 * Callers:
 *     sub_1800DB0F0 @ 0x1800DB0F0 (sub_1800DB0F0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_1800DAFFC @ 0x1800DAFFC (sub_1800DAFFC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_1800DA9DC(__int64 a1)
{
  void (__fastcall *v2)(__int64, void *, _QWORD, char *); // rbx
  unsigned int v3; // eax
  int v4; // [rsp+20h] [rbp-128h]
  char String[256]; // [rsp+30h] [rbp-118h] BYREF

  if ( a1 )
  {
    memset(String, 0, sizeof(String));
    v4 = dword_1801D3D98++;
    sub_1800DAFFC(String, -1LL, "%S(%u)", L"CoreEngine", v4);
    v2 = *(void (__fastcall **)(__int64, void *, _QWORD, char *))(*(_QWORD *)a1 + 280LL);
    v3 = strnlen(String, 0x7FFFFFFFuLL);
    v2(a1, &unk_180105FA0, v3, String);
  }
}
