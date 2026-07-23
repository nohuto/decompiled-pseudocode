/*
 * XREFs of MiMarkRetpolineBits @ 0x140A34730
 * Callers:
 *     MiMarkKernelImageRetpolineBits @ 0x140A346E4 (MiMarkKernelImageRetpolineBits.c)
 *     MiInitializeRetpoline @ 0x140B44F88 (MiInitializeRetpoline.c)
 *     MiApplyBootLoadedDriversFixups @ 0x140B45CC4 (MiApplyBootLoadedDriversFixups.c)
 *     MmMarkHypercallPageRetpolineBit @ 0x140B99A6C (MmMarkHypercallPageRetpolineBit.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x14020B1E8 (MiSplitBitmapPages.c)
 *     RtlSetBitsEx @ 0x14028B650 (RtlSetBitsEx.c)
 *     RtlClearBitsEx @ 0x14028BDB0 (RtlClearBitsEx.c)
 *     RtlAreBitsClearEx @ 0x140351580 (RtlAreBitsClearEx.c)
 *     MiAddressToRetpolineBit @ 0x14041A51C (MiAddressToRetpolineBit.c)
 */

__int64 __fastcall MiMarkRetpolineBits(__int64 a1)
{
  __int64 v1; // rcx
  unsigned __int64 v2; // rdi
  __int64 v3; // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  int v7; // r8d

  v2 = MiAddressToRetpolineBit(a1);
  v4 = MiAddressToRetpolineBit((v3 + v1 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL);
  v5 = v4;
  v6 = v4 - v2;
  if ( v7 || RtlAreBitsClearEx((unsigned __int64 *)&qword_140C65850, v2, v4 - v2) )
  {
    if ( !(unsigned int)MiSplitBitmapPages(5, (unsigned __int64)qword_140C65858 + (v2 >> 3), v5 + (v2 & 7) - v2) )
      return 3221225495LL;
    RtlSetBitsEx((__int64)&qword_140C65850, v2, v6);
  }
  else
  {
    RtlClearBitsEx((__int64)&qword_140C65850, v2, v6);
  }
  return 0LL;
}
