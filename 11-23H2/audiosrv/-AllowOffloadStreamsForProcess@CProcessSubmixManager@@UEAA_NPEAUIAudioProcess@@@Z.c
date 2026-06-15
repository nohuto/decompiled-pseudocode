/*
 * XREFs of ?AllowOffloadStreamsForProcess@CProcessSubmixManager@@UEAA_NPEAUIAudioProcess@@@Z @ 0x180081000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CProcessSubmixManager::AllowOffloadStreamsForProcess(
        CProcessSubmixManager *this,
        struct IAudioProcess *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  LPCWCH **i; // rbx
  const WCHAR *v6; // rax
  bool v7; // zf
  unsigned int v8; // ebp
  LPCWCH *v9; // rbp
  LPCWCH *v11; // rbp

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  for ( i = (LPCWCH **)*((_QWORD *)this + 7); i != *((LPCWCH ***)this + 8); ++i )
  {
    if ( *((_DWORD *)*i + 3) == 1 )
    {
      v11 = *i;
      if ( *((_DWORD *)v11 + 4) != (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2)
        || !*((_DWORD *)v11 + 2) )
      {
        continue;
      }
      v7 = *((_DWORD *)*i + 2) == (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
      goto LABEL_20;
    }
    if ( *((_DWORD *)*i + 3) != 2 )
    {
      if ( *((_DWORD *)*i + 3) == 3 )
      {
        if ( *((_DWORD *)*i + 4) != (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2) )
          continue;
        v8 = *((_DWORD *)*i + 2);
        if ( v8 == (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2) )
          continue;
        v7 = (*(unsigned __int8 (__fastcall **)(struct IAudioProcess *, _QWORD))(*(_QWORD *)a2 + 384LL))(a2, v8) == 0;
      }
      else
      {
        if ( *((_DWORD *)*i + 3) != 4 )
          continue;
        v6 = (const WCHAR *)(*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 72LL))(a2);
        if ( CompareStringOrdinal(**i, -1, v6, -1, 1) != 2 )
          continue;
        v7 = *((_DWORD *)*i + 4) == (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2);
      }
LABEL_20:
      if ( v7 )
        goto LABEL_14;
      continue;
    }
    v9 = *i;
    if ( *((_DWORD *)v9 + 4) == (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2)
      && (*(unsigned __int8 (__fastcall **)(struct IAudioProcess *, _QWORD))(*(_QWORD *)a2 + 384LL))(
           a2,
           *((unsigned int *)v9 + 2)) )
    {
LABEL_14:
      if ( v2 )
        LeaveCriticalSection(v2);
      return 0;
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 1;
}
