/*
 * XREFs of FreeHook @ 0x1C00704F0
 * Callers:
 *     FreeThreadsWindowHooks @ 0x1C006EDF0 (FreeThreadsWindowHooks.c)
 *     zzzUnhookWindowsHookEx @ 0x1C006F404 (zzzUnhookWindowsHookEx.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C011F720 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 * Callees:
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_HOOK@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1C007078C (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_HOOK@@@-$DomainSharedRecursive@$$V@.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C0070838 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C007085C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x1C0070F78 (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainSharedBase@$$V@@IEAA@.c)
 *     ?UnlinkHook@@YAXPEAUtagHOOK@@@Z @ 0x1C007111C (-UnlinkHook@@YAXPEAUtagHOOK@@@Z.c)
 *     RemoveHmodDependency @ 0x1C0071408 (RemoveHmodDependency.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00717AC (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C011B7D0 (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_HOOK@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1C0139C58 (--1-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_HOOK@@@-$DomainSharedRecursive@$$V@.c)
 *     ?DelayHookFree@@YAXPEAUtagHOOK@@@Z @ 0x1C01BB430 (-DelayHookFree@@YAXPEAUtagHOOK@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall FreeHook(struct tagHOOK *a1)
{
  int v2; // eax
  struct tagTHREADINFO *v3; // rcx
  int v4; // edx
  int v5; // esi
  _BYTE *v6; // rdi
  tagDomLock *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  int v11; // esi
  _BYTE *v12; // rdi
  tagDomLock *v13; // rcx
  _BYTE v14[8]; // [rsp+20h] [rbp-59h] BYREF
  tagDomLock *v15; // [rsp+28h] [rbp-51h] BYREF
  _BYTE v16[32]; // [rsp+30h] [rbp-49h] BYREF
  char v17; // [rsp+50h] [rbp-29h]
  tagDomLock *v18; // [rsp+58h] [rbp-21h] BYREF
  char v19; // [rsp+60h] [rbp-19h]
  char v20; // [rsp+80h] [rbp+7h]
  tagDomLock *v21; // [rsp+88h] [rbp+Fh] BYREF
  char v22; // [rsp+90h] [rbp+17h]
  char v23; // [rsp+B0h] [rbp+37h]

  DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_HOOK>::ObjectLockRecursive<>::ObjectLockRecursive<>(&v21);
  if ( tagDomLock::IsLockedShared(gDomainHookLock) && !tagDomLock::IsLockedExclusive(gDomainHookLock) )
  {
    DelayHookFree(a1);
LABEL_36:
    if ( v23 && v21 )
    {
      if ( v22 )
        tagDomLock::UnLockExclusive(v21);
      else
        tagDomLock::UnLockShared(v21);
    }
    return;
  }
  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)v14, a1);
  DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_HOOK>::ObjectLockRecursive<>::ObjectLockRecursive<>(&v18);
  v2 = *((_DWORD *)a1 + 16);
  if ( (v2 & 0x80u) == 0 )
  {
    v3 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 9);
    v4 = *((_DWORD *)a1 + 12);
    *((_DWORD *)a1 + 16) = v2 | 0x80;
    if ( !v3 )
      v3 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
    CheckWHFBits(v3, v4);
  }
  DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>(&v15);
  if ( !v17 )
  {
    v5 = 0;
    v6 = v16;
    do
    {
      v7 = (tagDomLock *)*((_QWORD *)v6 - 1);
      if ( v7 )
      {
        if ( *v6 )
          tagDomLock::LockExclusive(v7);
        else
          tagDomLock::LockShared(v7);
      }
      ++v5;
      v6 += 16;
    }
    while ( !v5 );
    v17 = 1;
  }
  if ( (unsigned int)HMMarkObjectDestroy(a1) )
  {
    if ( v17 && v15 )
    {
      if ( v16[0] )
        tagDomLock::UnLockExclusive(v15);
      else
        tagDomLock::UnLockShared(v15);
    }
    UnlinkHook(a1);
    v10 = *((unsigned int *)a1 + 17);
    if ( (int)v10 >= 0 )
      RemoveHmodDependency(v10);
    DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>(&v15);
    if ( !v17 )
    {
      v11 = 0;
      v12 = v16;
      do
      {
        v13 = (tagDomLock *)*((_QWORD *)v12 - 1);
        if ( v13 )
        {
          if ( *v12 )
            tagDomLock::LockExclusive(v13);
          else
            tagDomLock::LockShared(v13);
        }
        ++v11;
        v12 += 16;
      }
      while ( !v11 );
      v17 = 1;
    }
    HMFreeObject(a1);
    if ( v17 && v15 )
    {
      if ( v16[0] )
        tagDomLock::UnLockExclusive(v15);
      else
        tagDomLock::UnLockShared(v15);
    }
    if ( v20 && v18 )
    {
      if ( v19 )
        tagDomLock::UnLockExclusive(v18);
      else
        tagDomLock::UnLockShared(v18);
    }
    if ( v14[0] )
      gphePrimaryDestroyTarget = 0LL;
    goto LABEL_36;
  }
  if ( v17 )
  {
    if ( v15 )
    {
      if ( v16[0] )
        tagDomLock::UnLockExclusive(v15);
      else
        tagDomLock::UnLockShared(v15);
    }
    v17 = 0;
  }
  if ( v20 )
  {
    if ( v18 )
    {
      if ( v19 )
        tagDomLock::UnLockExclusive(v18);
      else
        tagDomLock::UnLockShared(v18);
    }
    v20 = 0;
  }
  if ( v14[0] )
    gphePrimaryDestroyTarget = 0LL;
  DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_HOOK>::ObjectLockRecursive<>::~ObjectLockRecursive<>(
    &v21,
    v8,
    v9);
}
