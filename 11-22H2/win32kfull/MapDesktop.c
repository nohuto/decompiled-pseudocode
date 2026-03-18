/*
 * XREFs of MapDesktop @ 0x1C00E4A20
 * Callers:
 *     zzzComposeDesktop @ 0x1C0058DA4 (zzzComposeDesktop.c)
 *     xxxResolveDesktop @ 0x1C0067670 (xxxResolveDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C00683E4 (xxxCreateDesktopEx.c)
 *     xxxSetThreadDesktop @ 0x1C006A6E4 (xxxSetThreadDesktop.c)
 *     UserCommitDesktopMemory @ 0x1C00A72E0 (UserCommitDesktopMemory.c)
 *     NtUserBuildHwndList @ 0x1C00D1F70 (NtUserBuildHwndList.c)
 * Callees:
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C0070838 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 */

__int64 __fastcall MapDesktop(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  int v5; // r12d
  NTSTATUS v6; // esi
  PERESOURCE *v8; // rax
  __int64 v9; // rdx
  tagDomLock *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // bl
  _QWORD *ProcessWin32Process; // rax
  _QWORD *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int DLT; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  PERESOURCE *v23; // rax
  char *v24; // r14
  PERESOURCE *v25; // rax
  _QWORD *i; // rax
  _QWORD *v27; // r14
  __int64 v28; // rdx
  ULONG v29; // eax
  __int64 v31; // [rsp+60h] [rbp-31h] BYREF
  __int64 v32; // [rsp+68h] [rbp-29h] BYREF
  __int64 v33; // [rsp+70h] [rbp-21h] BYREF
  __int64 v34; // [rsp+78h] [rbp-19h] BYREF
  __int64 v35; // [rsp+80h] [rbp-11h]
  tagDomLock *DomainLockRef; // [rsp+88h] [rbp-9h]
  char v37; // [rsp+90h] [rbp-1h] BYREF
  __int64 v38; // [rsp+98h] [rbp+7h]
  char v39; // [rsp+A0h] [rbp+Fh]
  __int64 v40; // [rsp+A8h] [rbp+17h]
  char v41; // [rsp+B0h] [rbp+1Fh]
  char v42; // [rsp+B8h] [rbp+27h]

  v4 = *(_QWORD *)(a1 + 16);
  v5 = 0;
  v32 = 0LL;
  v6 = 0;
  v33 = 0LL;
  v34 = 0LL;
  v31 = 0LL;
  v8 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(a1, a2, a3, a4);
  if ( ExIsResourceAcquiredSharedLite(*v8) )
  {
    v13 = 0;
  }
  else
  {
    v13 = 1;
    EnterCrit(1LL, 0LL);
  }
  if ( *(_DWORD *)a1 == 3 )
    goto LABEL_50;
  ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(*(_QWORD *)(a1 + 8));
  v15 = ProcessWin32Process;
  if ( !ProcessWin32Process || !*ProcessWin32Process )
  {
    v6 = -1073741811;
    goto LABEL_49;
  }
  v16 = *(_QWORD *)(a1 + 8);
  if ( v16 != gpepCSRSS
    && !(unsigned int)IsProcessDwm(v16)
    && !(unsigned __int8)ObFindHandleForObject(*(_QWORD *)(a1 + 8), v4, ExDesktopObjectType, 0LL, &v34)
    || (v17 = *(_QWORD *)(a1 + 8), v35 = *(_QWORD *)(v4 + 128),
                                   (unsigned int)PsGetProcessSessionId(v17) != *(_DWORD *)v4) )
  {
    v6 = -1073741790;
LABEL_49:
    v29 = RtlNtStatusToDosError(v6);
    UserSetLastError(v29);
    goto LABEL_50;
  }
  DLT = DLT_DESKTOP::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v38 = gDomainDummyLock;
  v40 = 0LL;
  v37 = 1;
  v39 = 0;
  v41 = 0;
  v42 = 0;
  v23 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v20, v19, v21, v22);
  if ( ExIsResourceAcquiredExclusiveLite(*v23) != 1 && IS_USERCRIT_OWNED_AT_ALL() )
  {
    v42 = 1;
    if ( !v41 )
    {
      v24 = &v37;
      do
      {
        v10 = (tagDomLock *)*((_QWORD *)v24 - 1);
        if ( v10 )
        {
          if ( *v24 )
            tagDomLock::LockExclusive(v10);
          else
            tagDomLock::LockShared(v10);
        }
        ++v5;
        v24 += 16;
      }
      while ( !v5 );
      v41 = 1;
    }
  }
  if ( !gbInDestroyHandleTableObjects )
  {
    v25 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v10, v9, v11, v12);
    if ( ExIsResourceAcquiredExclusiveLite(*v25) != 1
      && (!IS_USERCRIT_OWNED_AT_ALL() || !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainDesktopLock)) )
    {
      __int2c();
    }
  }
  for ( i = (_QWORD *)v15[87]; i; i = (_QWORD *)*i )
  {
    if ( i[1] == v4 )
      goto LABEL_38;
  }
  v27 = (_QWORD *)Win32AllocPoolWithQuotaZInit(24LL, 1768977237LL);
  if ( !v27 )
  {
    v6 = -1073741801;
LABEL_33:
    if ( v42 && v41 && DomainLockRef )
    {
      if ( v37 )
        tagDomLock::UnLockExclusive(DomainLockRef);
      else
        tagDomLock::UnLockShared(DomainLockRef);
    }
    goto LABEL_49;
  }
  v28 = *(_QWORD *)(a1 + 8);
  v32 = 0LL;
  v33 = 4096LL;
  v31 = 0LL;
  v6 = MmMapViewOfSection(v35, v28, &v31, 0LL, 0LL, &v33, &v32, 2, 0x400000, 2);
  if ( v6 < 0 )
  {
    Win32FreePool(v27);
    goto LABEL_33;
  }
  v27[1] = v4;
  v27[2] = v31;
  *v27 = v15[87];
  v15[87] = v27;
LABEL_38:
  if ( v42 )
  {
    if ( v41 )
    {
      v10 = DomainLockRef;
      if ( DomainLockRef )
      {
        if ( v37 )
          tagDomLock::UnLockExclusive(DomainLockRef);
        else
          tagDomLock::UnLockShared(DomainLockRef);
      }
    }
  }
LABEL_50:
  if ( v13 )
    UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return (unsigned int)v6;
}
