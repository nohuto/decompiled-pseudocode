/*
 * XREFs of ExEnterCriticalRegionAndAcquireResourceShared @ 0x140224140
 * Callers:
 *     sub_140608180 @ 0x140608180 (sub_140608180.c)
 * Callees:
 *     sub_1402B1170 @ 0x1402B1170 (sub_1402B1170.c)
 *     ExAcquireFastResourceShared @ 0x14039B6B0 (ExAcquireFastResourceShared.c)
 *     sub_14039C618 @ 0x14039C618 (sub_14039C618.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireResourceShared(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax
  USHORT Flag; // ax
  __int64 v4; // rdx
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v7; // rdx
  void *v8; // rdi

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  Flag = Resource->Flag;
  v4 = (unsigned __int8)Flag;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Flag & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v7 = KeGetCurrentThread();
    if ( CurrentIrql > 1u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
    if ( (*((_BYTE *)v7 + 192) & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !CurrentIrql && (*((_DWORD *)v7 + 29) & 0x400) == 0 && !*((_DWORD *)v7 + 121) )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    v8 = (void *)sub_14039C618();
    if ( !(unsigned __int8)ExAcquireFastResourceShared((ULONG_PTR)Resource, (ULONG_PTR)v8) )
      ExFreePoolWithTag(v8, 0);
  }
  else
  {
    LOBYTE(v4) = 1;
    sub_1402B1170(Resource, v4);
  }
  return (PVOID)*((_QWORD *)KeGetCurrentThread() + 57);
}
