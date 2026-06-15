/*
 * XREFs of ?AllowOffloadStreamsForProcess@CProcessSubmixManager@@UEAA_NPEAUIAudioProcess@@@Z @ 0x1800027E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CProcessSubmixManager::AllowOffloadStreamsForProcess(
        CProcessSubmixManager *this,
        struct IAudioProcess *a2)
{
  char *v2; // rbx
  char v5; // si
  LPCWCH **i; // rbx
  const WCHAR *v8; // rax
  bool v9; // zf
  unsigned int v10; // ebp
  LPCWCH *v11; // rbp
  LPCWCH *v12; // rbp
  char *v13; // [rsp+50h] [rbp+8h] BYREF

  v2 = (char *)this + 16;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v13 = v2;
  v5 = 0;
  for ( i = (LPCWCH **)*((_QWORD *)this + 7); i != *((LPCWCH ***)this + 8); ++i )
  {
    if ( *((_DWORD *)*i + 3) == 1 )
    {
      v12 = *i;
      if ( *((_DWORD *)v12 + 4) != (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2)
        || !*((_DWORD *)v12 + 2) )
      {
        continue;
      }
      v9 = *((_DWORD *)*i + 2) == (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
      goto LABEL_20;
    }
    if ( *((_DWORD *)*i + 3) != 2 )
    {
      if ( *((_DWORD *)*i + 3) == 3 )
      {
        if ( *((_DWORD *)*i + 4) != (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2) )
          continue;
        v10 = *((_DWORD *)*i + 2);
        if ( v10 == (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2) )
          continue;
        v9 = (*(unsigned __int8 (__fastcall **)(struct IAudioProcess *, _QWORD))(*(_QWORD *)a2 + 384LL))(a2, v10) == 0;
      }
      else
      {
        if ( *((_DWORD *)*i + 3) != 4 )
          continue;
        v8 = (const WCHAR *)(*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 72LL))(a2);
        if ( CompareStringOrdinal(**i, -1, v8, -1, 1) != 2 )
          continue;
        v9 = *((_DWORD *)*i + 4) == (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2);
      }
LABEL_20:
      if ( v9 )
        goto LABEL_4;
      continue;
    }
    v11 = *i;
    if ( *((_DWORD *)v11 + 4) == (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2)
      && (*(unsigned __int8 (__fastcall **)(struct IAudioProcess *, _QWORD))(*(_QWORD *)a2 + 384LL))(
           a2,
           *((unsigned int *)v11 + 2)) )
    {
      goto LABEL_4;
    }
  }
  v5 = 1;
LABEL_4:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v13);
  return v5;
}
