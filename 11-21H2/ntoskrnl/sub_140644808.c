/*
 * XREFs of sub_140644808 @ 0x140644808
 * Callers:
 *     WheaHwErrorReportAbandonDeviceDriver @ 0x140644250 (WheaHwErrorReportAbandonDeviceDriver.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x1406443F0 (WheaHwErrorReportSubmitDeviceDriver.c)
 * Callees:
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_140643F2C @ 0x140643F2C (sub_140643F2C.c)
 *     sub_1406447D0 @ 0x1406447D0 (sub_1406447D0.c)
 */

char __fastcall sub_140644808(ULONG_PTR BugCheckParameter3)
{
  __int64 *v2; // rax
  __int64 v3; // rdi
  volatile __int32 *v4; // rax

  v2 = sub_140643F2C((__int64)&unk_140CE1A98, *(_DWORD *)(BugCheckParameter3 + 12));
  v3 = (unsigned __int64)(v2 + 12) & -(__int64)(v2 != 0LL);
  LOBYTE(v4) = sub_1406447D0(v3);
  if ( (_BYTE)v4 )
  {
    v4 = *(volatile __int32 **)(BugCheckParameter3 + 32);
    *(_DWORD *)BugCheckParameter3 = 0;
    if ( *(_BYTE *)(BugCheckParameter3 + 48) )
    {
      _InterlockedExchange(v4, 0);
    }
    else
    {
      sub_140348B40((ULONG_PTR)v4);
      LOBYTE(v4) = sub_140348B40(BugCheckParameter3);
    }
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 152));
  }
  return (char)v4;
}
