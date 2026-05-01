/*
 * XREFs of ?FetchAllSessions@AppList@GamingAudio@@AEAAXXZ @ 0x18033F024
 * Callers:
 *     _lambda_b00c0a52bd3e015b702ddb883117dd85_::operator() @ 0x18033EB64 (_lambda_b00c0a52bd3e015b702ddb883117dd85_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetEndpointSessions@AppList@GamingAudio@@AEAAXV?$ComPtr@UIMMDevice@@@WRL@Microsoft@@@Z @ 0x18033F1A8 (-GetEndpointSessions@AppList@GamingAudio@@AEAAXV-$ComPtr@UIMMDevice@@@WRL@Microsoft@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall GamingAudio::AppList::FetchAllSessions(GamingAudio::AppList *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, _QWORD, __int64, __int64 *); // rbx
  int v4; // r14d
  unsigned int i; // esi
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64 *); // rdi
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+30h]
  unsigned int v10; // [rsp+70h] [rbp+38h] BYREF
  __int64 v11; // [rsp+78h] [rbp+40h] BYREF
  __int64 v12; // [rsp+80h] [rbp+48h] BYREF
  __int64 v13; // [rsp+88h] [rbp+50h] BYREF

  v11 = 0LL;
  v2 = *((_QWORD *)this + 19);
  v3 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v2 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  v4 = v3(v2, (unsigned int)GamingAudio::c_dataFlow, 1LL, &v11);
  if ( v4 >= 0 )
  {
    v10 = 0;
    v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 24LL))(v11, &v10);
    if ( v4 >= 0 )
    {
      for ( i = 0; i < v10; ++i )
      {
        v12 = 0LL;
        v6 = v11;
        v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 32LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
        v8 = v7(v6, i, &v12);
        if ( v8 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x26C,
            (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
            (const char *)(unsigned int)v8);
        v13 = v12;
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        GamingAudio::AppList::GetEndpointSessions(this, &v13);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
      }
    }
  }
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x272,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
      (const char *)(unsigned int)v4);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
}
