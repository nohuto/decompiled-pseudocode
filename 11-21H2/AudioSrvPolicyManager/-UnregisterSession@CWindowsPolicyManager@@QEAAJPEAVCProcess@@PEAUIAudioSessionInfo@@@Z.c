/*
 * XREFs of ?UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x18000D92C
 * Callers:
 *     ?UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x18001CB10 (-UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18000A580 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180024E94 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CWindowsPolicyManager::UnregisterSession(
        CWindowsPolicyManager *this,
        struct CProcess *a2,
        struct IAudioSessionInfo *a3)
{
  CWindowsPolicyManager *v5; // r12
  CApplicationManager *v6; // r13
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  __int64 v8; // rcx
  unsigned __int64 i; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 *v13; // rdi
  __int64 *v14; // rax
  __int64 **v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rbx
  struct _RTL_CRITICAL_SECTION *v19; // rdi
  char **v20; // rcx
  char *v21; // r8
  char *v22; // rax
  char *v23; // r8
  char *v24; // rbx
  char *v26; // [rsp+28h] [rbp-18h] BYREF
  char **v27; // [rsp+30h] [rbp-10h]
  CWindowsPolicyManager *v28; // [rsp+80h] [rbp+40h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+88h] [rbp+48h] BYREF
  struct _RTL_CRITICAL_SECTION *v30; // [rsp+90h] [rbp+50h]

  v28 = this;
  v5 = g_PolicyManager;
  CWindowsPolicyManager::Lock((__int64)g_PolicyManager, &lpCriticalSection);
  v6 = g_ApplicationManager;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v30 = v7;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 24));
  v28 = a3;
  v8 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
    v8 = 0x100000001B3LL * (*((unsigned __int8 *)&v28 + i) ^ (unsigned __int64)v8);
  v10 = v8 & *((_QWORD *)a2 + 14);
  v11 = *((_QWORD *)a2 + 11);
  v12 = 2 * v10;
  v13 = *(__int64 **)(v11 + 16 * v10 + 8);
  v14 = (__int64 *)*((_QWORD *)a2 + 9);
  if ( v13 != v14 )
  {
    while ( a3 != (struct IAudioSessionInfo *)v13[2] )
    {
      if ( v13 == *(__int64 **)(v11 + 16 * v10) )
        goto LABEL_18;
      v13 = (__int64 *)v13[1];
    }
    if ( v13 )
    {
      v15 = (__int64 **)(v11 + 16 * v10);
      if ( *(__int64 **)(v11 + 8 * v12 + 8) == v13 )
      {
        if ( *v15 == v13 )
          *v15 = v14;
        else
          v14 = (__int64 *)v13[1];
        *(_QWORD *)(v11 + 8 * v12 + 8) = v14;
      }
      else if ( *v15 == v13 )
      {
        *v15 = (__int64 *)*v13;
      }
      v16 = *v13;
      --*((_QWORD *)a2 + 10);
      *(_QWORD *)v13[1] = v16;
      *(_QWORD *)(v16 + 8) = v13[1];
      v17 = v13[3];
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      std::_Deallocate<16,0>((char *)v13, 0x20uLL);
    }
  }
LABEL_18:
  if ( a2 != (struct CProcess *)-24LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 24));
  CApplicationManager::Unregister(v6, a2);
  if ( v7 )
    LeaveCriticalSection(v7);
  v18 = *((_QWORD *)v5 + 5);
  v19 = (struct _RTL_CRITICAL_SECTION *)(v18 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(v18 + 24));
  v20 = (char **)(v18 + 64);
  v21 = 0LL;
  v26 = 0LL;
  v27 = &v26;
  v22 = *(char **)(v18 + 64);
  if ( v22 )
  {
    do
    {
      if ( *((struct IAudioSessionInfo **)v22 + 1) == a3 )
      {
        v23 = *v20;
        v22 = *(char **)*v20;
        *(_QWORD *)v23 = 0LL;
        *v20 = v22;
        *v27 = v23;
        v27 = (char **)v23;
      }
      else
      {
        v20 = (char **)v22;
        v22 = *(char **)v22;
      }
    }
    while ( v22 );
    v21 = v26;
  }
  if ( v21 )
  {
    do
    {
      v24 = *(char **)v21;
      std::_Deallocate<16,0>(v21, 0x10uLL);
      v21 = v24;
    }
    while ( v24 );
  }
  if ( v19 )
    LeaveCriticalSection(v19);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
