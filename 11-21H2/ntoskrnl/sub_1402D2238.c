/*
 * XREFs of sub_1402D2238 @ 0x1402D2238
 * Callers:
 *     sub_1402D2478 @ 0x1402D2478 (sub_1402D2478.c)
 *     sub_140777578 @ 0x140777578 (sub_140777578.c)
 *     sub_140859618 @ 0x140859618 (sub_140859618.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1405CE94C @ 0x1405CE94C (sub_1405CE94C.c)
 *     sub_1407494FC @ 0x1407494FC (sub_1407494FC.c)
 *     sub_1408119E8 @ 0x1408119E8 (sub_1408119E8.c)
 */

void __fastcall sub_1402D2238(__int64 a1, char a2)
{
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR *v7; // rdi
  ULONG_PTR *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0LL;
  _m_prefetchw((const void *)(a1 + 296));
  if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 296), 0) & 1) != 0 )
    return;
  _m_prefetchw((const void *)(a1 + 296));
  v4 = *(_DWORD *)(a1 + 296);
  do
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 296), v4, v4);
  }
  while ( v5 != v4 );
  if ( (v4 & 2) != 0 )
    goto LABEL_7;
  if ( (unsigned int)sub_1407494FC(a1, &v11) != -1073741738 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 296), 2u);
LABEL_7:
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C23C48, 0LL);
    v7 = (ULONG_PTR *)qword_140C23B70;
    v8 = 0LL;
    while ( v7 != &qword_140C23B70 )
    {
      if ( (unsigned __int8)sub_1405CE94C((ULONG_PTR)v7) )
      {
        LOBYTE(v10) = 1;
        sub_1408119E8(a1, v7, a1 + 128, v10);
        v8 = v7;
        if ( v7 )
          goto LABEL_10;
        break;
      }
      v7 = (ULONG_PTR *)*v7;
    }
    if ( !a2 )
      goto LABEL_11;
LABEL_10:
    *(_QWORD *)(a1 + 144) = v8;
    _InterlockedOr((volatile signed __int32 *)(a1 + 296), 1u);
    *(_WORD *)(a1 + 96) = 0;
    *(_QWORD *)(a1 + 112) = a1 + 104;
    *(_QWORD *)(a1 + 104) = a1 + 104;
    *(_BYTE *)(a1 + 98) = 6;
    *(_DWORD *)(a1 + 100) = 0;
LABEL_11:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C23C48, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(&qword_140C23C48);
    sub_1402AFC00((ULONG_PTR)&qword_140C23C48);
    KeLeaveCriticalRegion();
  }
  v9 = v11;
  if ( v11 )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(v11 + 276)) )
      KeSetEvent((PRKEVENT)(v9 + 280), 0, 0);
  }
}
