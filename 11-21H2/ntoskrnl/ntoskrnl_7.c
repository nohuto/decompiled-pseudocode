/*
 * XREFs of ntoskrnl_7 @ 0x1402AA8D0
 * Callers:
 *     sub_140200230 @ 0x140200230 (sub_140200230.c)
 *     sub_140249930 @ 0x140249930 (sub_140249930.c)
 *     KeExpandKernelStackAndCallout @ 0x14025D2A0 (KeExpandKernelStackAndCallout.c)
 *     KeExpandKernelStackAndCalloutEx @ 0x1402AA8A0 (KeExpandKernelStackAndCalloutEx.c)
 *     sub_140394080 @ 0x140394080 (sub_140394080.c)
 *     sub_140B03800 @ 0x140B03800 (sub_140B03800.c)
 * Callees:
 *     sub_1402AA9B0 @ 0x1402AA9B0 (sub_1402AA9B0.c)
 *     KeBugCheck @ 0x14041F3B0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14056AA7C @ 0x14056AA7C (sub_14056AA7C.c)
 */

__int64 __fastcall ntoskrnl_7(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, int a3, int a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v8; // rdx
  unsigned __int8 CurrentIrql; // si
  struct _KTHREAD *CurrentThread; // rbx
  int v11; // eax
  char v12; // r14
  unsigned __int8 v13; // al

  result = sub_1402AA9B0(BugCheckParameter2, BugCheckParameter3, a3, a4, a5);
  if ( (_DWORD)result == -1073740661 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    v11 = *((_DWORD *)CurrentThread + 29);
    if ( (v11 & 0x1000) != 0 )
    {
      v12 = 1;
    }
    else
    {
      *((_DWORD *)CurrentThread + 29) = v11 | 0x1000;
      v12 = 0;
    }
    sub_14042A5E0(BugCheckParameter3, v8);
    if ( !v12 )
      *((_DWORD *)CurrentThread + 29) &= ~0x1000u;
    if ( KeGetCurrentIrql() != CurrentIrql )
    {
      v13 = KeGetCurrentIrql();
      KeBugCheckEx(
        0xC8u,
        ((CurrentIrql | ((unsigned __int64)v13 << 8)) << 8) | 2,
        BugCheckParameter2,
        BugCheckParameter3,
        0LL);
    }
    return 0LL;
  }
  return result;
}
