/*
 * XREFs of ?GetAppViewTitle@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ_KPEAPEAUHSTRING__@@@Z @ 0x18013B880
 * Callers:
 *     <none>
 * Callees:
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x18013B958 (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E911C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::GetAppViewTitle(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *this,
        __int64 a2,
        HSTRING *a3)
{
  _QWORD *v4; // rax
  unsigned __int64 v5; // rdx
  void *v6; // rcx
  HSTRING v7; // rax
  HSTRING string; // [rsp+20h] [rbp-48h] BYREF
  void *v10; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+30h] [rbp-38h] BYREF
  void *v12; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp-18h]

  *a3 = 0LL;
  string = 0LL;
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(char *, void **, __int64))(*((_QWORD *)this - 3) + 72LL))(
                   (char *)this - 24,
                   &v12,
                   a2);
  if ( v4[3] >= 8uLL )
    v4 = (_QWORD *)*v4;
  v10 = v4;
  Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(&string);
  if ( v13 >= 8 )
  {
    v5 = 2 * v13 + 2;
    v11 = v5;
    v6 = v12;
    v10 = v12;
    if ( v5 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v10, &v11);
      v5 = v11;
      v6 = v10;
    }
    operator delete(v6, v5);
  }
  v7 = string;
  string = 0LL;
  *a3 = v7;
  WindowsDeleteString(0LL);
  return 0LL;
}
