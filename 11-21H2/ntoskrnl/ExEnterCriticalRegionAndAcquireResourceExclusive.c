/*
 * XREFs of ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x1402AEE80
 * Callers:
 *     sub_140608070 @ 0x140608070 (sub_140608070.c)
 * Callees:
 *     sub_1402AE9D0 @ 0x1402AE9D0 (sub_1402AE9D0.c)
 *     sub_14039BA38 @ 0x14039BA38 (sub_14039BA38.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireResourceExclusive(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax
  USHORT Flag; // ax
  unsigned __int8 CurrentIrql; // dl
  struct _KTHREAD *v5; // r8

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  Flag = Resource->Flag;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Flag & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v5 = KeGetCurrentThread();
    if ( CurrentIrql > 1u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
    if ( (*((_BYTE *)v5 + 192) & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !CurrentIrql && (*((_DWORD *)v5 + 29) & 0x400) == 0 && !*((_DWORD *)v5 + 121) )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    sub_14039BA38((ULONG_PTR)Resource);
  }
  else
  {
    sub_1402AE9D0((__int64)Resource, 1);
  }
  return (PVOID)*((_QWORD *)KeGetCurrentThread() + 57);
}
