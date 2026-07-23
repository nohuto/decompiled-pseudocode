/*
 * XREFs of sub_14069A534 @ 0x14069A534
 * Callers:
 *     sub_1407CB6C0 @ 0x1407CB6C0 (sub_1407CB6C0.c)
 * Callees:
 *     sub_140220664 @ 0x140220664 (sub_140220664.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     sub_140353BB0 @ 0x140353BB0 (sub_140353BB0.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

void __fastcall sub_14069A534(PVOID *a1, volatile signed __int64 *a2)
{
  char v2; // r15
  volatile signed __int64 *v3; // rbp
  char v6; // si
  unsigned __int64 v7; // r11
  signed __int64 *v8; // rbx
  signed __int64 *v9; // rbx

  v2 = *((_BYTE *)a1 + 22);
  v3 = a2 + 37;
  v6 = 1;
  v7 = sub_140347C10((__int64)(a2 + 37), 0LL);
  if ( !_InterlockedCompareExchange64(v3, 17LL, 0LL) || sub_140220664((signed __int64 *)v3, 0) )
  {
    if ( v7 )
      *(_BYTE *)(v7 + 18) = 1;
    v8 = (signed __int64 *)*a1;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)*a1 + 37, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v8 + 37);
    sub_1402AFC00((ULONG_PTR)(v8 + 37));
    v6 = 0;
  }
  else
  {
    if ( v7 )
      sub_140353BB0((ULONG_PTR)v3, v7);
    ObfReferenceObjectWithTag((PVOID)a2, 0x554C624Fu);
    v9 = (signed __int64 *)*a1;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)*a1 + 37, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v9 + 37);
    sub_1402AFC00((ULONG_PTR)(v9 + 37));
    ExAcquirePushLockSharedEx((ULONG_PTR)v3, 0LL);
  }
  *((_BYTE *)a1 + 22) = v6;
  if ( v2 )
    ObDereferenceObjectDeferDeleteWithTag(*a1, 0x554C624Fu);
  *a1 = (PVOID)a2;
}
