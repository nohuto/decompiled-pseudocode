/*
 * XREFs of ?OnRenderStreamCountChanged@CProcessSubmixManager@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x180017420
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     _lambda_4353f9e11044a5b317e93e9c877fb0e4_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__ @ 0x1800CFF3C (_lambda_4353f9e11044a5b317e93e9c877fb0e4_--operator()_std--unique_ptr_CAppSubmixClientContext_st.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcessSubmixManager::OnRenderStreamCountChanged(
        CProcessSubmixManager *this,
        struct IProcessSubmixProxy *a2)
{
  __int64 v3; // rax
  LPCWCH **i; // rbx
  const WCHAR *v6; // rax
  unsigned int v7; // r14d
  bool v8; // zf
  LPCWCH *v9; // r14
  LPCWCH *v10; // r14
  _QWORD v11[2]; // [rsp+30h] [rbp-10h] BYREF
  struct IProcessSubmixProxy *v12; // [rsp+68h] [rbp+28h] BYREF
  __int64 v13; // [rsp+70h] [rbp+30h] BYREF

  v12 = a2;
  if ( !(*(unsigned __int8 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)a2 + 160LL))(a2) )
    return 0LL;
  v3 = *(_QWORD *)v12;
  v13 = 0LL;
  (*(void (__fastcall **)(struct IProcessSubmixProxy *, __int64 *))(v3 + 80))(v12, &v13);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v13 + 272LL))(v13) )
    goto LABEL_7;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v11[0] = &v12;
  v11[1] = this;
  for ( i = (LPCWCH **)*((_QWORD *)this + 7); i != *((LPCWCH ***)this + 8); ++i )
  {
    switch ( *((_DWORD *)*i + 3) )
    {
      case 1:
        v10 = *i;
        if ( *((_DWORD *)v10 + 4) == (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v12
                                                                                                  + 216LL))(v12)
          && *((_DWORD *)v10 + 2) )
        {
          v8 = *((_DWORD *)*i + 2) == (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v12 + 144LL))(v12);
LABEL_25:
          if ( !v8 )
            continue;
LABEL_26:
          lambda_4353f9e11044a5b317e93e9c877fb0e4_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__(
            v11,
            i);
          continue;
        }
        break;
      case 2:
        v9 = *i;
        if ( *((_DWORD *)v9 + 4) == (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v12 + 216LL))(v12)
          && (*(unsigned __int8 (__fastcall **)(struct IProcessSubmixProxy *, _QWORD))(*(_QWORD *)v12 + 152LL))(
               v12,
               *((unsigned int *)v9 + 2)) )
        {
          goto LABEL_26;
        }
        break;
      case 3:
        if ( *((_DWORD *)*i + 4) == (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v12 + 216LL))(v12) )
        {
          v7 = *((_DWORD *)*i + 2);
          if ( v7 != (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v12 + 144LL))(v12) )
          {
            v8 = (*(unsigned __int8 (__fastcall **)(struct IProcessSubmixProxy *, _QWORD))(*(_QWORD *)v12 + 152LL))(
                   v12,
                   v7) == 0;
            goto LABEL_25;
          }
        }
        break;
      case 4:
        v6 = (const WCHAR *)(*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v12 + 208LL))(v12);
        if ( CompareStringOrdinal(**i, -1, v6, -1, 1) == 2
          && *((_DWORD *)*i + 4) == (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v12 + 216LL))(v12) )
        {
          goto LABEL_26;
        }
        break;
    }
  }
  if ( this != (CProcessSubmixManager *)-16LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
LABEL_7:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v13);
  return 0LL;
}
