/*
 * XREFs of ?Destroy@CObjectCache@@QEAAXXZ @ 0x180271648
 * Callers:
 *     ??1CThreadContext@@AEAA@XZ @ 0x180271528 (--1CThreadContext@@AEAA@XZ.c)
 *     ?DestroyObjectCaches@CThreadContext@@SAXXZ @ 0x180271688 (-DestroyObjectCaches@CThreadContext@@SAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 */

void __fastcall CObjectCache::Destroy(CObjectCache *this)
{
  _QWORD *v1; // rdi
  void *v3; // rcx

  v1 = (_QWORD *)*((_QWORD *)this + 1);
  while ( v1 )
  {
    v3 = v1;
    v1 = (_QWORD *)*v1;
    operator delete(v3);
  }
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_QWORD *)this + 1) = 0LL;
}
