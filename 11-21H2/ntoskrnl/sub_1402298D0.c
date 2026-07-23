/*
 * XREFs of sub_1402298D0 @ 0x1402298D0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x140229990 (ExReleaseSpinLockExclusive.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406A05E4 @ 0x1406A05E4 (sub_1406A05E4.c)
 */

__int64 __fastcall sub_1402298D0(_QWORD *a1)
{
  volatile LONG *v1; // rdi
  KIRQL v3; // al
  _QWORD *v4; // rsi
  void *v5; // rsi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v1 = (volatile LONG *)(a1 + 72);
  while ( 1 )
  {
    v3 = ExAcquireSpinLockExclusive(v1);
    v4 = (_QWORD *)a1[67];
    if ( !v4 )
      break;
    a1[67] = *v4;
    *v4 = 0LL;
    ExReleaseSpinLockExclusive(v1, v3);
    v5 = (void *)v4[1];
    if ( (int)sub_14042A5E0(a1[44], v5, &v7) >= 0 )
      sub_1406A05E4(a1, v7, v5);
    ObfDereferenceObject(v5);
  }
  a1[71] = 0LL;
  ExReleaseSpinLockExclusive(v1, v3);
  return sub_1402AD030(a1 + 45);
}
