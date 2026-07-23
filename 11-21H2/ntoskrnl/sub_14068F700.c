/*
 * XREFs of sub_14068F700 @ 0x14068F700
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020C7B0 @ 0x14020C7B0 (sub_14020C7B0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 */

unsigned __int64 __fastcall sub_14068F700(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *v2; // r14
  int v3; // esi
  __int64 *v5; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v3 = 0;
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140D3CAC8, 0LL);
  v5 = (__int64 *)qword_140C1BF80;
  if ( Object )
    v5 = (__int64 *)Object[137];
  while ( v5 != &qword_140C1BF80 )
  {
    v2 = v5 - 137;
    if ( ObReferenceObjectSafeWithTag((__int64)(v5 - 137)) )
    {
      v3 = 1;
      break;
    }
    v5 = (__int64 *)*v5;
  }
  sub_14020C7B0((__int64)CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return (unsigned __int64)v2 & -(__int64)(v3 != 0);
}
