/*
 * XREFs of sub_14096E7E4 @ 0x14096E7E4
 * Callers:
 *     sub_1407DE5F0 @ 0x1407DE5F0 (sub_1407DE5F0.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 */

__int64 __fastcall sub_14096E7E4(__int64 a1, __int64 a2, KPROCESSOR_MODE a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  volatile signed __int64 *v6; // rsi
  NTSTATUS v7; // ebx
  signed __int64 *v8; // rdi
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  bool v11; // zf

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( (*(_DWORD *)(a2 + 8) & (a3 != 0 ? 7666 : 73714)) == *(_DWORD *)(a2 + 8) )
  {
    if ( SeSinglePrivilegeCheck(stru_140D3CA80, a3) )
    {
      --*((_WORD *)CurrentThread + 243);
      v8 = (signed __int64 *)(a1 + 16672);
      ExAcquirePushLockSharedEx(a1 + 16672, 0LL);
      v9 = (_QWORD *)(a1 + 16624);
      v10 = *(_QWORD **)(a1 + 16624);
      if ( (_QWORD *)*v9 != v9 )
      {
        while ( v10[2] != *(_QWORD *)a2 )
        {
          v10 = (_QWORD *)*v10;
          if ( v10 == v9 )
            goto LABEL_11;
        }
        v6 = *(volatile signed __int64 **)(v10[8] + 176LL);
        if ( _InterlockedIncrement64(v6 + 3) <= 1 )
          __fastfail(0xEu);
      }
LABEL_11:
      if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v8);
      sub_1402AFC00((ULONG_PTR)v8);
      v11 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
      if ( v11 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
        KiCheckForKernelApcDelivery();
      if ( v6 )
      {
        v7 = ObOpenObjectByPointer(
               (PVOID)v6,
               *(_DWORD *)(a2 + 8),
               0LL,
               *(_DWORD *)(a2 + 12),
               PsPartitionType,
               0,
               (PHANDLE)(a2 + 16));
        if ( v7 >= 0 )
          v7 = 0;
        sub_1403606C4((__int64)v6);
      }
      else
      {
        return (unsigned int)-1073741275;
      }
    }
    else
    {
      return (unsigned int)-1073741727;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
