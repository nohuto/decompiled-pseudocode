/*
 * XREFs of sub_1405CC2CC @ 0x1405CC2CC
 * Callers:
 *     sub_1405CBD34 @ 0x1405CBD34 (sub_1405CBD34.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405DD7DC @ 0x1405DD7DC (sub_1405DD7DC.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14080B5F0 (DbgkWerCaptureLiveKernelDump.c)
 */

__int64 __fastcall sub_1405CC2CC(ULONG_PTR BugCheckParameter2, int a2, unsigned __int8 a3)
{
  __int64 result; // rax
  ULONG_PTR v5; // rsi

  result = *(unsigned int *)(BugCheckParameter2 + 824);
  v5 = a3;
  if ( (result & 1) == 0 )
  {
    if ( a2 < 0 )
      sub_1405DD7DC();
    result = (unsigned int)dword_140C0C634;
    if ( dword_140C0C634 && a2 < 0 )
    {
      if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && dword_140C0C634 == 3 )
        __int2c();
      result = *(_QWORD *)(BugCheckParameter2 + 48);
      if ( dword_140C0C634 == 2 )
        KeBugCheckEx(0x9Fu, 6uLL, BugCheckParameter2, v5, 0LL);
      if ( (*(_DWORD *)(result + 760) & 0x40) == 0 )
        return DbgkWerCaptureLiveKernelDump(
                 (unsigned int)L"DirectedFxPowerStateFailure",
                 425,
                 BugCheckParameter2,
                 v5,
                 0LL,
                 0LL,
                 0LL,
                 0LL,
                 0);
    }
  }
  return result;
}
