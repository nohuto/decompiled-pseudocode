/*
 * XREFs of ??_E?$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z @ 0x18001C580
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800026F0 (--1-$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x180009EE0 (-FinalRelease@CVADServer@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1CAppAudioSessionId@@QEAA@XZ @ 0x18000DB78 (--1CAppAudioSessionId@@QEAA@XZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CA60 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char *__fastcall ATL::CComObject<CVADServer>::`vector deleting destructor'(char *a1, char a2)
{
  void *v4; // rcx
  __int64 v5; // rcx
  std::_Ref_count_base *v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)a1 = &ATL::CComObject<CVADServer>::`vftable';
  *((_DWORD *)a1 + 2) = -1073741823;
  CVADServer::FinalRelease((CVADServer *)a1);
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>((__int64 *)a1 + 67);
  v4 = (void *)*((_QWORD *)a1 + 65);
  if ( v4 )
    operator delete(v4, 1uLL);
  v5 = *((_QWORD *)a1 + 64);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = (std::_Ref_count_base *)*((_QWORD *)a1 + 63);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 456));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)a1 + 27) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)a1 + 26) - 24LL));
  v7 = *((_QWORD *)a1 + 24);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  CoTaskMemFree(*((LPVOID *)a1 + 22));
  *((_QWORD *)a1 + 22) = 0LL;
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)a1 + 18) - 24LL));
  CAppAudioSessionId::~CAppAudioSessionId((CAppAudioSessionId *)(a1 + 80));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)a1 + 9) - 24LL));
  if ( a1[56] )
  {
    a1[56] = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  }
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x240uLL);
  return a1;
}
