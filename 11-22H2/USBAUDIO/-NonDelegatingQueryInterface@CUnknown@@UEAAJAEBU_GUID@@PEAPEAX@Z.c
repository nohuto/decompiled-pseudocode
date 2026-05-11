/*
 * XREFs of ?NonDelegatingQueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1C0019220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CUnknown::NonDelegatingQueryInterface(CUnknown *this, const struct _GUID *a2, void **a3)
{
  int v4; // eax
  void *v5; // rcx

  v4 = -(*(_OWORD *)a2 == *(_OWORD *)&IID_IUnknown);
  v5 = (void *)((unsigned __int64)this & -(__int64)(*(_OWORD *)a2 == *(_OWORD *)&IID_IUnknown));
  *a3 = v5;
  if ( ((unsigned __int64)this & -(__int64)(v4 != 0)) == 0 )
    return 3221225485LL;
  (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
