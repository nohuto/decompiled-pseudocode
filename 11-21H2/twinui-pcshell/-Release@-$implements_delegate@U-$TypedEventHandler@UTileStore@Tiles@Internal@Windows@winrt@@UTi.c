/*
 * XREFs of ?Release@?$implements_delegate@U?$TypedEventHandler@UTileStore@Tiles@Internal@Windows@winrt@@UTileStoreChangedEventArgs@2345@@Foundation@Windows@winrt@@V_lambda_ae2144ca514bc0fccfa4c87b511bcbf7_@@@impl@winrt@@UEAAIXZ @ 0x180148EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800FA060 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::TileStoreChangedEventArgs>,_lambda_ae2144ca514bc0fccfa4c87b511bcbf7_>::Release(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // edi

  v5 = _InterlockedDecrement(a1 + 8);
  if ( v5 )
  {
    if ( v5 < 0 )
    {
      _o_terminate(a1, a2, a3, a4);
      __debugbreak();
      JUMPOUT(0x1802C5675LL);
    }
  }
  else if ( a1 )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock, a2, a3, a4);
    operator delete((void *)a1, 0x28uLL);
  }
  return (unsigned int)v5;
}
