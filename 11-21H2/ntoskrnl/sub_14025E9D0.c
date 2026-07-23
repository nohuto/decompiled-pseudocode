/*
 * XREFs of sub_14025E9D0 @ 0x14025E9D0
 * Callers:
 *     sub_14025E94C @ 0x14025E94C (sub_14025E94C.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_14037556C @ 0x14037556C (sub_14037556C.c)
 *     sub_14037592C @ 0x14037592C (sub_14037592C.c)
 *     sub_14037717C @ 0x14037717C (sub_14037717C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14025E9D0(__int64 a1, int a2)
{
  ULONG_PTR v4; // rcx
  int v5; // ebx
  _QWORD *v6; // rsi
  unsigned int v7; // ebx
  unsigned int v9; // eax
  struct _KTHREAD *CurrentThread; // rcx
  volatile signed __int64 *v11; // rdi
  struct _KTHREAD *v12; // rax
  bool v13; // zf
  _OWORD v14[3]; // [rsp+28h] [rbp-50h] BYREF

  v4 = *(_QWORD *)(a1 + 6584);
  memset(v14, 0, sizeof(v14));
  sub_14030D5C0(v4);
  if ( !a2 )
  {
    v9 = sub_14037717C(a1);
    goto LABEL_8;
  }
  v5 = a2 - 1;
  if ( !v5 )
  {
    v9 = sub_14037556C(a1);
LABEL_8:
    v7 = v9;
    goto LABEL_6;
  }
  if ( v5 == 1 )
  {
    v6 = *(_QWORD **)(a1 + 6568);
    if ( (unsigned __int64)v6 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      if ( v6 == (_QWORD *)_InterlockedCompareExchange64(
                             (volatile signed __int64 *)(a1 + 6568),
                             -1LL,
                             (signed __int64)v6) )
      {
        if ( *v6 )
          v7 = sub_14037592C(2LL);
        else
          v7 = -1073741661;
        _InterlockedExchange64((volatile __int64 *)(a1 + 6568), 0LL);
        CurrentThread = KeGetCurrentThread();
        --*((_WORD *)CurrentThread + 243);
        v11 = (volatile signed __int64 *)(a1 + 6024);
        ExAcquirePushLockSharedEx((ULONG_PTR)v11, 0LL);
        if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v11);
        sub_1402AFC00((ULONG_PTR)v11);
        v12 = KeGetCurrentThread();
        v13 = (*((_WORD *)v12 + 243))++ == 0xFFFF;
        if ( v13 && *((struct _KTHREAD **)v12 + 19) != (struct _KTHREAD *)((char *)v12 + 152) )
          KiCheckForKernelApcDelivery();
        ExFreePoolWithTag(v6, 0);
      }
      else
      {
        v7 = -1073740682;
      }
    }
    else
    {
      v7 = -1073741661;
    }
  }
  else
  {
    v7 = -1073741811;
  }
LABEL_6:
  sub_1402D0930(v14, 0LL);
  return v7;
}
