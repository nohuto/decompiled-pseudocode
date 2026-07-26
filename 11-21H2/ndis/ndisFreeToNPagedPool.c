/*
 * XREFs of ndisFreeToNPagedPool @ 0x1C00048F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1KAcquireSpinLock@@QEAA@XZ @ 0x1C0004980 (--1KAcquireSpinLock@@QEAA@XZ.c)
 */

void __fastcall ndisFreeToNPagedPool(_QWORD *Buffer, PLOOKASIDE_LIST_EX Lookaside)
{
  _QWORD *v2; // rdi
  KSpinLockBase *v3; // rbx
  KIRQL v4; // al
  __int64 v5; // r9
  _QWORD *v6; // r8
  KAcquireSpinLock v7; // [rsp+20h] [rbp-18h] BYREF

  v2 = Buffer - 4;
  v3 = (KSpinLockBase *)(*(Buffer - 4) + 8LL);
  v7.m_lock = v3;
  v4 = KeAcquireSpinLockRaiseToDpc(&v3->m_lock);
  v5 = v2[1];
  if ( *(_QWORD **)(v5 + 8) != v2 + 1 || (v6 = (_QWORD *)v2[2], (_QWORD *)*v6 != v2 + 1) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  KeReleaseSpinLock(&v3->m_lock, v4);
  v7.m_oldIrql = -1;
  ExFreePoolWithTag(v2, 0);
  KAcquireSpinLock::~KAcquireSpinLock(&v7);
}
