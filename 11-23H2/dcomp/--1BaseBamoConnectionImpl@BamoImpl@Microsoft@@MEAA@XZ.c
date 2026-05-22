/*
 * XREFs of ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x18016AA64
 * Callers:
 *     ??_GBamoConnection@dcompwinrtnestedg_AutoBamos@@MEAAPEAXI@Z @ 0x18016AE70 (--_GBamoConnection@dcompwinrtnestedg_AutoBamos@@MEAAPEAXI@Z.c)
 *     ??_EBaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAAPEAXI@Z @ 0x18016AEC0 (--_EBaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAAPEAXI@Z.c)
 *     ??_GDiagCallbackClientConnection@@UEAAPEAXI@Z @ 0x18016B0D0 (--_GDiagCallbackClientConnection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x180012A48 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?_Tidy@?$vector@IV?$allocator@I@std@@@std@@AEAAXXZ @ 0x180080744 (-_Tidy@-$vector@IV-$allocator@I@std@@@std@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VBufferingMessageCallHost@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18016A9E8 (--1-$com_ptr_t@VBufferingMessageCallHost@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18016DDE0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx
  void *v5; // rdx
  wil::details *v6; // rcx
  Microsoft::BamoImpl::BamoImplObject *v7; // rcx

  *(_QWORD *)this = &Microsoft::BamoImpl::BaseBamoConnectionImpl::`vftable';
  v2 = *((_QWORD *)this + 28);
  if ( v2 )
  {
    v3 = *(_QWORD **)(v2 + 528);
    *(_QWORD *)(v2 + 528) = 0LL;
    *((_QWORD *)this + 28) = 0LL;
    if ( v3 )
    {
      do
      {
        v4 = (_QWORD *)v3[66];
        operator delete(v3);
        v3 = v4;
      }
      while ( v4 );
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  std::vector<unsigned int>::_Tidy((__int64)this + 192);
  v6 = (wil::details *)*((_QWORD *)this + 16);
  *((_QWORD *)this + 16) = 0LL;
  if ( v6 )
    wil::details::FreeProcessHeap(v6, v5);
  wil::com_ptr_t<Microsoft::BamoImpl::BufferingMessageCallHost,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::BufferingMessageCallHost,wil::err_returncode_policy>((__int64 *)this + 15);
  v7 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 13);
  if ( v7 )
    Microsoft::BamoImpl::BamoImplObject::Release(v7);
  wil::com_ptr_t<Microsoft::BamoImpl::BufferingMessageCallHost,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::BufferingMessageCallHost,wil::err_returncode_policy>((__int64 *)this + 11);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 10);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 9);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 8);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 7);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 6);
}
