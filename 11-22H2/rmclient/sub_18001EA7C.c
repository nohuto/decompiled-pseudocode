/*
 * XREFs of sub_18001EA7C @ 0x18001EA7C
 * Callers:
 *     HamRegisterDesktopProcessWithAppContainerToken @ 0x180001AF0 (HamRegisterDesktopProcessWithAppContainerToken.c)
 *     sub_18001E9B0 @ 0x18001E9B0 (sub_18001E9B0.c)
 *     sub_18001E9C0 @ 0x18001E9C0 (sub_18001E9C0.c)
 * Callees:
 *     sub_1800010E0 @ 0x1800010E0 (sub_1800010E0.c)
 *     sub_1800011A0 @ 0x1800011A0 (sub_1800011A0.c)
 *     sub_180001340 @ 0x180001340 (sub_180001340.c)
 *     sub_180008C00 @ 0x180008C00 (sub_180008C00.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 *     sub_18001CD28 @ 0x18001CD28 (sub_18001CD28.c)
 */

BOOLEAN __fastcall sub_18001EA7C(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  int v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = a1[1];
  if ( v2 )
  {
    sub_18001CD28(v2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1[1] + 16LL))(a1[1]);
  }
  v3 = *a1;
  if ( *a1 )
  {
    if ( (unsigned int)dword_180032038 > 4 && sub_1800010E0((__int64)&dword_180032038, 1LL) )
      sub_1800011A0((__int64)&dword_180032038, byte_18002A8CF);
    sub_180008C00(v3);
    if ( (unsigned int)dword_180032038 > 4 && sub_1800010E0((__int64)&dword_180032038, 3LL) )
    {
      v7 = 0;
      v8 = v3;
      sub_180001340((__int64)&dword_180032038, byte_18002A8F0, v4, v5, (__int64)&v7, (__int64)&v8);
    }
  }
  PsmTimerCleanup(a1 + 2);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
