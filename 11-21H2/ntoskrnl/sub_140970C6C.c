/*
 * XREFs of sub_140970C6C @ 0x140970C6C
 * Callers:
 *     sub_140970C20 @ 0x140970C20 (sub_140970C20.c)
 *     sub_140B04F8C @ 0x140B04F8C (sub_140B04F8C.c)
 *     sub_140B0A4A8 @ 0x140B0A4A8 (sub_140B0A4A8.c)
 *     sub_140B5210C @ 0x140B5210C (sub_140B5210C.c)
 * Callees:
 *     RtlAreBitsClearEx @ 0x14022C900 (RtlAreBitsClearEx.c)
 *     sub_140246420 @ 0x140246420 (sub_140246420.c)
 *     RtlSetBitsEx @ 0x14030B740 (RtlSetBitsEx.c)
 *     RtlClearBitsEx @ 0x14030BB30 (RtlClearBitsEx.c)
 *     sub_140419298 @ 0x140419298 (sub_140419298.c)
 */

__int64 __fastcall sub_140970C6C(__int64 a1)
{
  __int64 v1; // rcx
  unsigned __int64 v2; // rdi
  __int64 v3; // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  int v7; // r8d

  v2 = sub_140419298(a1);
  v4 = sub_140419298((v3 + v1 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL);
  v5 = v4;
  v6 = v4 - v2;
  if ( v7 || RtlAreBitsClearEx((__int64)&qword_140C4F410, v2, v4 - v2) )
  {
    if ( !(unsigned int)sub_140246420(5, (unsigned __int64)qword_140C4F418 + (v2 >> 3), v5 + (v2 & 7) - v2) )
      return 3221225495LL;
    RtlSetBitsEx((__int64)&qword_140C4F410, v2, v6);
  }
  else
  {
    RtlClearBitsEx((__int64)&qword_140C4F410, v2, v6);
  }
  return 0LL;
}
