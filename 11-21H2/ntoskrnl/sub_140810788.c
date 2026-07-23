/*
 * XREFs of sub_140810788 @ 0x140810788
 * Callers:
 *     sub_1402DDAE4 @ 0x1402DDAE4 (sub_1402DDAE4.c)
 *     sub_14081059C @ 0x14081059C (sub_14081059C.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     IoSetDeviceInterfaceState @ 0x140769100 (IoSetDeviceInterfaceState.c)
 *     sub_140779CA0 @ 0x140779CA0 (sub_140779CA0.c)
 *     sub_14077BAB8 @ 0x14077BAB8 (sub_14077BAB8.c)
 *     sub_140787F7C @ 0x140787F7C (sub_140787F7C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140810788(unsigned __int16 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *Pool2; // rbx
  int inited; // edi
  unsigned int v5; // r14d
  const WCHAR *v6; // rsi
  int v7; // eax
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v10; // [rsp+98h] [rbp+38h] BYREF
  __int16 *v11; // [rsp+A0h] [rbp+40h] BYREF

  v10 = 0;
  CurrentThread = KeGetCurrentThread();
  Pool2 = 0LL;
  v11 = 0LL;
  DestinationString = 0LL;
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C462A0, 1u);
  inited = sub_140779CA0(&v11, 0LL, a1);
  if ( inited >= 0 )
  {
    v10 = 4096;
    inited = -1073741789;
    v5 = 0;
    while ( v5 < 5 )
    {
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      Pool2 = (void *)ExAllocatePool2(256LL, 2LL * v10, 538996816LL);
      v6 = (const WCHAR *)Pool2;
      if ( !Pool2 )
      {
        inited = -1073741670;
        break;
      }
      v7 = sub_140787F7C(
             *(__int64 *)&qword_140D00AC0,
             0LL,
             (__int64)v11,
             1,
             0LL,
             0LL,
             (__int64)Pool2,
             v10,
             (__int64)&v10,
             0);
      ++v5;
      inited = v7;
      if ( v7 != -1073741789 )
      {
        if ( v7 >= 0 )
        {
          while ( *v6 )
          {
            inited = RtlInitUnicodeStringEx(&DestinationString, v6);
            if ( inited >= 0 )
              IoSetDeviceInterfaceState(&DestinationString, 0);
            v6 += ((unsigned __int64)DestinationString.Length + 2) >> 1;
          }
        }
        break;
      }
    }
  }
  ExReleaseResourceLite(&stru_140C462A0);
  KeLeaveCriticalRegion();
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  sub_14077BAB8(v11, (__int64)a1);
  return (unsigned int)inited;
}
