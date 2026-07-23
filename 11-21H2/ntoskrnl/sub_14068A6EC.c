/*
 * XREFs of sub_14068A6EC @ 0x14068A6EC
 * Callers:
 *     sub_14068A6A0 @ 0x14068A6A0 (sub_14068A6A0.c)
 *     sub_1407B67A0 @ 0x1407B67A0 (sub_1407B67A0.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     sub_14068A79C @ 0x14068A79C (sub_14068A79C.c)
 */

__int64 *__fastcall sub_14068A6EC(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *v2; // rbp
  __int64 *v4; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140D3B148, 0LL);
  v4 = (__int64 *)qword_140D3B2F0;
  if ( Object )
    v4 = (__int64 *)Object[3];
  while ( v4 != &qword_140D3B2F0 )
  {
    if ( ObReferenceObjectSafeWithTag((__int64)(v4 - 3)) )
    {
      v2 = v4 - 3;
      break;
    }
    v4 = (__int64 *)*v4;
  }
  sub_14068A79C(CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  return v2;
}
