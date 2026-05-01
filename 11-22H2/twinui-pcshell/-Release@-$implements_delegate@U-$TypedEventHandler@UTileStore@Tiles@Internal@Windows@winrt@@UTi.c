/*
 * XREFs of ?Release@?$implements_delegate@U?$TypedEventHandler@UTileStore@Tiles@Internal@Windows@winrt@@UTileStoreChangedEventArgs@2345@@Foundation@Windows@winrt@@V_lambda_ae2144ca514bc0fccfa4c87b511bcbf7_@@@impl@winrt@@UEAAIXZ @ 0x180169920
 * Callers:
 *     <none>
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::TileStoreChangedEventArgs>,_lambda_ae2144ca514bc0fccfa4c87b511bcbf7_>::Release(
        volatile signed __int32 *a1)
{
  int v2; // ebx
  char v3; // zf

  v2 = _InterlockedDecrement(a1 + 8);
  if ( v2 )
  {
    v3 = 0;
    if ( v2 < 0 )
      abort();
  }
  else
  {
    v3 = 1;
  }
  if ( v3 && a1 )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
    operator delete((void *)a1, 0x28uLL);
  }
  return (unsigned int)v2;
}
