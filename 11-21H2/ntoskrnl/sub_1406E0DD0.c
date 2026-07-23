/*
 * XREFs of sub_1406E0DD0 @ 0x1406E0DD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140257E3C @ 0x140257E3C (sub_140257E3C.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

_QWORD *__fastcall sub_1406E0DD0(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  _QWORD *v5; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C15890, 0LL);
  v3 = (_QWORD *)(a1 + 40);
  v4 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  return sub_140257E3C((__int64)CurrentThread);
}
