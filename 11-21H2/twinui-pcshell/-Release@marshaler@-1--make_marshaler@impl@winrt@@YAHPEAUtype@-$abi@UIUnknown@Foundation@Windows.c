/*
 * XREFs of ?Release@marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@34@PEAPEAX@Z@UEAAIXZ @ 0x180133450
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall `winrt::impl::make_marshaler'::`2'::marshaler::Release(char *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  __int64 *v6; // rcx

  v5 = _InterlockedDecrement((volatile signed __int32 *)a1 + 6);
  if ( v5 )
  {
    if ( v5 < 0 )
    {
      _o_terminate(a1, a2, a3, a4);
      __debugbreak();
      JUMPOUT(0x1802C1307LL);
    }
  }
  else if ( a1 )
  {
    v6 = (__int64 *)(a1 + 16);
    if ( *v6 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v6);
    if ( *((_QWORD *)a1 + 1) )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)a1 + 1);
    operator delete(a1, 0x20uLL);
  }
  return (unsigned int)v5;
}
