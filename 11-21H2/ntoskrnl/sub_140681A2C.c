/*
 * XREFs of sub_140681A2C @ 0x140681A2C
 * Callers:
 *     sub_1406819CC @ 0x1406819CC (sub_1406819CC.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 */

_QWORD *__fastcall sub_140681A2C(_QWORD **Object)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rsi
  ULONG_PTR v4; // rcx
  _QWORD **v5; // rax
  _QWORD *i; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = qword_140C5AE28 + 16;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx(v4, 0LL);
  v5 = (_QWORD **)qword_140C5AE28;
  if ( Object )
    v5 = Object;
  for ( i = *v5; i != (_QWORD *)qword_140C5AE28; i = (_QWORD *)*i )
  {
    if ( ObReferenceObjectSafeWithTag((__int64)i) )
    {
      v3 = i;
      break;
    }
  }
  sub_1402935D0(qword_140C5AE28 + 16);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x74456F50u);
  return v3;
}
