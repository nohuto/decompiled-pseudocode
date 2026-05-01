/*
 * XREFs of ?RemoveObjectAt@CEnumerableObjectCollection@@UEAAJI@Z @ 0x1802E7100
 * Callers:
 *     <none>
 * Callees:
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CEnumerableObjectCollection::RemoveObjectAt(CEnumerableObjectCollection *this, unsigned int a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v4; // rdx
  __int64 v5; // rdi
  unsigned int v6; // ebx

  v2 = a2;
  if ( (unsigned __int64)a2 >= *((_QWORD *)this + 6) )
    return (unsigned int)-2147316575;
  _mm_lfence();
  v4 = *((_QWORD *)this + 6);
  v5 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v2);
  if ( v2 >= v4 )
  {
    return (unsigned int)-2147316575;
  }
  else
  {
    if ( v2 != v4 - 1 )
    {
      memmove_0(
        (void *)(*((_QWORD *)this + 5) + 8 * v2),
        (const void *)(*((_QWORD *)this + 5) + 8 * v2 + 8),
        8 * (v4 - v2) - 8);
      v4 = *((_QWORD *)this + 6);
    }
    *((_QWORD *)this + 6) = v4 - 1;
    v6 = 0;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v6;
}
