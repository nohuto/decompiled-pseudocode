/*
 * XREFs of IommupHvUnmapDevice @ 0x1405259B8
 * Callers:
 *     IommupMapDeviceInternal @ 0x1405240B8 (IommupMapDeviceInternal.c)
 *     IommupUnmapDeviceInternal @ 0x140524478 (IommupUnmapDeviceInternal.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommupHvUnmapDevice(ULONG_PTR BugCheckParameter2)
{
  if ( (unsigned int)((__int64 (*)(void))qword_140C625F8)() == 3473497 )
    KeBugCheckEx(0x159u, 0x3000uLL, BugCheckParameter2, 0LL, 0LL);
  ((void (__fastcall *)(ULONG_PTR))qword_140C625A8)(BugCheckParameter2);
  return ((__int64 (__fastcall *)(ULONG_PTR, __int64))qword_140C625E8)(BugCheckParameter2, 5LL);
}
