/*
 * XREFs of ?get_Current@?$SimpleVectorIterator@MU?$IVector@M@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@M@Internal@234@UNoVersionTag@6234@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAM@Z @ 0x1801719A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<float,Windows::Foundation::Collections::IVector<float>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<float>,Windows::Foundation::Collections::Internal::NoVersionTag,0>::get_Current(
        __int64 a1,
        _DWORD *a2)
{
  int v2; // ebx

  *a2 = 0;
  v2 = *(_DWORD *)(a1 + 48);
  if ( v2 >= 0 )
    return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(**(_QWORD **)(a1 + 32) + 48LL))(
                           *(_QWORD *)(a1 + 32),
                           *(unsigned int *)(a1 + 40),
                           a2);
  else
    RoOriginateError((unsigned int)v2, 0LL);
  return (unsigned int)v2;
}
