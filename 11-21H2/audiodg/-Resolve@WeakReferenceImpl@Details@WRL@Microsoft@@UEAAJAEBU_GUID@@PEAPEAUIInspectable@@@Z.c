/*
 * XREFs of ?Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x14002B110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::WeakReferenceImpl::Resolve(
        Microsoft::WRL::Details::WeakReferenceImpl *this,
        const struct _GUID *a2,
        struct IInspectable **a3)
{
  signed __int32 v4; // eax
  unsigned int v5; // ebx

  *a3 = 0LL;
  while ( 1 )
  {
    v4 = *((_DWORD *)this + 4);
    if ( !v4 )
      break;
    if ( v4 == _InterlockedCompareExchange((volatile signed __int32 *)this + 4, v4 + 1, v4) )
    {
      v5 = (***((__int64 (__fastcall ****)(_QWORD, const struct _GUID *))this + 3))(*((_QWORD *)this + 3), a2);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 16LL))(*((_QWORD *)this + 3));
      return v5;
    }
  }
  return 0LL;
}
