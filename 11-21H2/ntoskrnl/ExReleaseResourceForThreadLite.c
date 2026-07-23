/*
 * XREFs of ExReleaseResourceForThreadLite @ 0x140220DF0
 * Callers:
 *     sub_140609610 @ 0x140609610 (sub_140609610.c)
 *     CcUnpinDataForThread @ 0x14090BB90 (CcUnpinDataForThread.c)
 * Callees:
 *     sub_1402B02B0 @ 0x1402B02B0 (sub_1402B02B0.c)
 *     sub_1402B1740 @ 0x1402B1740 (sub_1402B1740.c)
 *     sub_140311C70 @ 0x140311C70 (sub_140311C70.c)
 *     sub_14039CA48 @ 0x14039CA48 (sub_14039CA48.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14045A10C @ 0x14045A10C (sub_14045A10C.c)
 */

void __stdcall ExReleaseResourceForThreadLite(PERESOURCE Resource, ERESOURCE_THREAD ResourceThreadId)
{
  USHORT Flag; // cx
  unsigned __int8 v5; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v7; // rdx
  struct _KTHREAD *v8; // r8
  USHORT v9; // cx
  __int64 v10; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rcx
  int v13; // eax
  _QWORD v14[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]

  Flag = Resource->Flag;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Flag & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
    if ( !CurrentIrql && (*((_DWORD *)CurrentThread + 29) & 0x400) == 0 && !*((_DWORD *)CurrentThread + 121) )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    if ( (struct _KTHREAD *)ResourceThreadId != KeGetCurrentThread() )
      KeBugCheckEx(0x1C6u, 0x11uLL, (ULONG_PTR)Resource, ResourceThreadId, 0LL);
    sub_14039CA48((ULONG_PTR)Resource);
  }
  else
  {
    v15 = 0LL;
    v14[0] = 0LL;
    v14[1] = &Resource->SpinLock;
    v5 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v5 <= 0xFu )
    {
      v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v10 + 20) |= (-1 << (v5 + 1)) & 4;
    }
    LOBYTE(v15) = v5;
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v7 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v13 = *(_DWORD *)(v7 + 24);
        *(_DWORD *)(v7 + 24) = v13 + 1;
        if ( v13 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
    {
      sub_14045A10C(v14, &Resource->SpinLock);
    }
    else if ( _InterlockedExchange64((volatile __int64 *)&Resource->SpinLock, (__int64)v14) )
    {
      sub_140311C70(v14);
    }
    v8 = KeGetCurrentThread();
    v9 = Resource->Flag;
    if ( ((v9 & 1) != 0 || dword_140C11740) && (ResourceThreadId & 3) != 3 && (struct _KTHREAD *)ResourceThreadId != v8 )
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)v8, ResourceThreadId, 0LL);
    if ( (v9 & 0x80u) != 0 )
      sub_1402B02B0((ULONG_PTR)Resource, ResourceThreadId);
    else
      sub_1402B1740((ULONG_PTR)Resource, ResourceThreadId);
  }
}
