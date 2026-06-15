/*
 * XREFs of ?OnRenderStreamCountChanged@CProcessSubmixManager@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x18000B470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     _lambda_4353f9e11044a5b317e93e9c877fb0e4_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__ @ 0x1801063E8 (_lambda_4353f9e11044a5b317e93e9c877fb0e4_--operator()_std--unique_ptr_CAppSubmixClientContext_st.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcessSubmixManager::OnRenderStreamCountChanged(
        CProcessSubmixManager *this,
        struct IProcessSubmixProxy *a2)
{
  __int64 v3; // rax
  LPCWCH **i; // rbx
  const WCHAR *v6; // rax
  unsigned int v7; // ebp
  LPCWCH *v8; // rbp
  LPCWCH *v9; // rbp
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF
  struct IProcessSubmixProxy *v11; // [rsp+68h] [rbp+10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  v11 = a2;
  if ( !(*(unsigned __int8 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)a2 + 120LL))(a2) )
    return 0LL;
  v3 = *(_QWORD *)v11;
  v12 = 0LL;
  (*(void (__fastcall **)(struct IProcessSubmixProxy *, __int64 *))(v3 + 80))(v11, &v12);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v12 + 232LL))(v12) )
    goto LABEL_7;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v10[0] = &v11;
  v10[1] = this;
  for ( i = (LPCWCH **)*((_QWORD *)this + 7); i != *((LPCWCH ***)this + 8); ++i )
  {
    switch ( *((_DWORD *)*i + 3) )
    {
      case 1:
        v9 = *i;
        if ( *((_DWORD *)v9 + 4) == (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v11 + 176LL))(v11)
          && *((_DWORD *)v9 + 2)
          && *((_DWORD *)*i + 2) == (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v11 + 104LL))(v11) )
        {
LABEL_27:
          lambda_4353f9e11044a5b317e93e9c877fb0e4_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__(
            v10,
            i);
          continue;
        }
        break;
      case 2:
        v8 = *i;
        if ( *((_DWORD *)v8 + 4) == (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v11 + 176LL))(v11)
          && (*(unsigned __int8 (__fastcall **)(struct IProcessSubmixProxy *, _QWORD))(*(_QWORD *)v11 + 112LL))(
               v11,
               *((unsigned int *)v8 + 2)) )
        {
          goto LABEL_27;
        }
        break;
      case 3:
        if ( *((_DWORD *)*i + 4) == (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v11 + 176LL))(v11) )
        {
          v7 = *((_DWORD *)*i + 2);
          if ( v7 != (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v11 + 104LL))(v11)
            && !(*(unsigned __int8 (__fastcall **)(struct IProcessSubmixProxy *, _QWORD))(*(_QWORD *)v11 + 112LL))(
                  v11,
                  v7) )
          {
            goto LABEL_27;
          }
        }
        break;
      case 4:
        v6 = (const WCHAR *)(*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v11 + 168LL))(v11);
        if ( CompareStringOrdinal(**i, -1, v6, -1, 1) == 2
          && *((_DWORD *)*i + 4) == (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v11 + 176LL))(v11) )
        {
          goto LABEL_27;
        }
        break;
    }
  }
  if ( this != (CProcessSubmixManager *)-16LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
LABEL_7:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return 0LL;
}
