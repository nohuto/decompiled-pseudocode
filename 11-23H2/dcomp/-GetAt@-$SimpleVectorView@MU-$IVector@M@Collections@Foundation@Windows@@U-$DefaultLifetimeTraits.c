/*
 * XREFs of ?GetAt@?$SimpleVectorView@MU?$IVector@M@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@M@Internal@234@UNoVersionTag@6234@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAM@Z @ 0x180170A30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<float,Windows::Foundation::Collections::IVector<float>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<float>,Windows::Foundation::Collections::Internal::NoVersionTag,0>::GetAt(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  int v3; // ebx

  *a3 = 0;
  v3 = *(_DWORD *)(a1 + 48);
  if ( v3 >= 0 )
    return (unsigned int)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 48LL))(*(_QWORD *)(a1 + 40));
  else
    RoOriginateError((unsigned int)v3, 0LL);
  return (unsigned int)v3;
}
