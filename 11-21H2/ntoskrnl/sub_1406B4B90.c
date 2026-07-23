/*
 * XREFs of sub_1406B4B90 @ 0x1406B4B90
 * Callers:
 *     <none>
 * Callees:
 *     sub_140239F94 @ 0x140239F94 (sub_140239F94.c)
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 */

__int64 __fastcall sub_1406B4B90(__int64 a1, __int64 a2, int a3, TIMER_TYPE a4)
{
  _QWORD *v5; // r14
  char v6; // si
  int v7; // ecx
  __int64 v8; // r9
  __int64 v9; // r15
  __int64 v11; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // r12
  struct _KTHREAD *v14; // rax
  __int64 v16; // [rsp+58h] [rbp-40h] BYREF
  __int64 v17; // [rsp+60h] [rbp-38h]

  v5 = (_QWORD *)a1;
  v16 = 0LL;
  if ( (unsigned int)a4 > SynchronizationTimer )
    return 3221225714LL;
  v6 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v6 )
  {
    a1 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v5 < 0x7FFFFFFF0000LL )
      a1 = (__int64)v5;
    *(_QWORD *)a1 = *(_QWORD *)a1;
  }
  LOBYTE(a1) = v6;
  v7 = sub_14072B3B0(a1, (_DWORD)ExTimerObjectType, a3, v6);
  if ( v7 >= 0 )
  {
    KeInitializeDpc((PRKDPC)0xA0, (PKDEFERRED_ROUTINE)sub_1402566A0, 0LL);
    KeInitializeTimerEx(0LL, a4);
    MEMORY[0x40] = 0LL;
    MEMORY[0x130] = 0;
    MEMORY[0x100] = 0LL;
    MEMORY[0x108] = 0LL;
    v17 = 280LL;
    MEMORY[0x118] = 0LL;
    if ( v6 )
    {
      v9 = *((_QWORD *)KeGetCurrentThread() + 23);
      if ( (*(_DWORD *)(v9 + 632) & 0x10) != 0 )
      {
        v11 = *(_QWORD *)(v9 + 1296);
        LOBYTE(v8) = 0;
        if ( v11 )
        {
          CurrentThread = KeGetCurrentThread();
          --*((_WORD *)CurrentThread + 243);
          v13 = v11 + 56;
          ExAcquireResourceExclusiveLite((PERESOURCE)(v11 + 56), 1u);
          LOBYTE(v8) = (*(_DWORD *)(v11 + 1512) & 0x40000) != 0 && *(_DWORD *)(v11 + 1048);
        }
        else
        {
          v13 = 56LL;
        }
        sub_140239F94((KSPIN_LOCK *)v9, (_QWORD *)0x120, (KSPIN_LOCK *)0x40, v8, (KSPIN_LOCK **)v17);
        if ( v11 )
        {
          ExReleaseResourceLite((PERESOURCE)v13);
          v14 = KeGetCurrentThread();
          if ( (*((_WORD *)v14 + 243))++ == 0xFFFF
            && *((struct _KTHREAD **)v14 + 19) != (struct _KTHREAD *)((char *)v14 + 152) )
          {
            KiCheckForKernelApcDelivery();
          }
        }
      }
    }
    v7 = sub_140729C30(0LL, 0LL, 0, 0LL, (__int64)&v16);
    if ( v7 >= 0 )
      *v5 = v16;
  }
  return (unsigned int)v7;
}
