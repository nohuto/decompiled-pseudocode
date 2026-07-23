/*
 * XREFs of sub_14024CB6C @ 0x14024CB6C
 * Callers:
 *     sub_1406F89A4 @ 0x1406F89A4 (sub_1406F89A4.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_14030EA70 @ 0x14030EA70 (sub_14030EA70.c)
 */

__int64 sub_14024CB6C()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v1; // rbp
  __int64 result; // rax
  void **v3; // rbx
  void *v4; // rsi

  CurrentThread = KeGetCurrentThread();
  v1 = 2LL;
  result = *((_QWORD *)CurrentThread + 23);
  v3 = (void **)(*(_QWORD *)(result + 1680) + 440LL);
  do
  {
    v4 = *v3;
    if ( *v3 )
    {
      --*((_WORD *)CurrentThread + 243);
      ExAcquirePushLockSharedEx((ULONG_PTR)v4 + 40, 0LL);
      *((_BYTE *)CurrentThread + 1385) |= 0x40u;
      result = sub_14030EA70(v4);
      *v3 = 0LL;
    }
    v3 += 4;
    --v1;
  }
  while ( v1 );
  return result;
}
