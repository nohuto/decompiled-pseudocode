/*
 * XREFs of ?Release@?$implements_delegate@U?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_66ed2df52651243ff863a12d97446406_@@@impl@winrt@@UEAAIXZ @ 0x18001A0C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800AB354 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs>,_lambda_66ed2df52651243ff863a12d97446406_>::Release(
        volatile signed __int32 *a1)
{
  int v2; // ebx
  char v3; // zf

  v2 = _InterlockedDecrement(a1 + 6);
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
    operator delete((void *)a1, 0x20uLL);
  }
  return (unsigned int)v2;
}
