/*
 * XREFs of ??1DefaultChangedContext@@QEAA@XZ @ 0x180119838
 * Callers:
 *     ??_GDefaultChangedContext@@QEAAPEAXI@Z @ 0x180119A8C (--_GDefaultChangedContext@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 */

void __fastcall DefaultChangedContext::~DefaultChangedContext(DefaultChangedContext *this)
{
  struct _TP_WORK *v2; // rcx

  v2 = (struct _TP_WORK *)*((_QWORD *)this + 3);
  if ( v2 )
    CloseThreadpoolWork(v2);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 2);
  ATL::CStringData::Release((ATL::CStringData *)(*(_QWORD *)this - 24LL));
}
