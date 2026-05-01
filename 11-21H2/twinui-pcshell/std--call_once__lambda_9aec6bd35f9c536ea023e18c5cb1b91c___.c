/*
 * XREFs of std::call_once__lambda_9aec6bd35f9c536ea023e18c5cb1b91c___ @ 0x1800632D8
 * Callers:
 *     ?GetRuntimeSiteAggregator@XamlExplorerHost@@AE$AAA?AV?$ComPtr@UIObjMgr@@@WRL@Microsoft@@XZ @ 0x180063244 (-GetRuntimeSiteAggregator@XamlExplorerHost@@AE$AAA-AV-$ComPtr@UIObjMgr@@@WRL@Microsoft@@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x18006337C (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::call_once__lambda_9aec6bd35f9c536ea023e18c5cb1b91c___(union _RTL_RUN_ONCE *a1, _QWORD *a2)
{
  __int64 *v4; // rbx
  HRESULT Instance; // eax
  int ppv; // [rsp+20h] [rbp-28h]
  union _RTL_RUN_ONCE *v7; // [rsp+30h] [rbp-18h] BYREF
  int v8; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  WINBOOL fPending; // [rsp+50h] [rbp+8h] BYREF

  if ( !__std_init_once_begin_initialize(a1, 0, &fPending, 0LL) )
    abort();
  if ( fPending )
  {
    v7 = a1;
    v8 = 4;
    v4 = (__int64 *)(*a2 + 48LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v4);
    Instance = CoCreateInstance(
                 &CLSID_XamlRuntimeSiteAggregator,
                 0LL,
                 1u,
                 &GUID_00bb2761_6a77_11d0_a535_00c04fd7d062,
                 (LPVOID *)v4);
    if ( Instance < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x35,
        (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
        (const char *)(unsigned int)Instance,
        ppv);
    v8 = 0;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v7);
  }
}
