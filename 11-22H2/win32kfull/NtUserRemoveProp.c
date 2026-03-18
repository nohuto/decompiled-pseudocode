/*
 * XREFs of NtUserRemoveProp @ 0x1C0092B50
 * Callers:
 *     <none>
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C00C6854 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 */

__int64 __fastcall NtUserRemoveProp(HWND a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r14
  struct tagWND *v9; // rax
  struct tagWND *v10; // rbp
  __int128 *v11; // rbx
  __int64 v12; // xmm1_8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  PERESOURCE *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  PERESOURCE *v21; // rax
  int v22; // edi
  tagObjLock **v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _BYTE v29[16]; // [rsp+30h] [rbp-78h] BYREF
  __int128 v30; // [rsp+40h] [rbp-68h]
  __int64 v31; // [rsp+50h] [rbp-58h]
  __int64 v32; // [rsp+58h] [rbp-50h]
  char v33; // [rsp+60h] [rbp-48h]
  __int128 v34; // [rsp+68h] [rbp-40h] BYREF
  char v35; // [rsp+78h] [rbp-30h]
  char v36; // [rsp+80h] [rbp-28h]

  v3 = a2;
  v4 = 0LL;
  if ( (unsigned __int8)ShouldRunShared(0LL) )
    EnterSharedCrit(v6, v5, v7);
  else
    EnterCrit(0LL, 0LL);
  CHMRefHwndByHandle::CHMRefHwndByHandle((CHMRefHwndByHandle *)v29, a1, 1, 1, 1, 1);
  if ( CHMRefHwndByHandle::bValid((CHMRefHwndByHandle *)v29) )
  {
    v8 = v3;
    v9 = CHMRefHwndByHandle::rpwnd((CHMRefHwndByHandle *)v29);
    v32 = gDomainDummyLock;
    v10 = v9;
    v33 = 0;
    v11 = (__int128 *)*((_QWORD *)v9 + 18);
    v34 = 0LL;
    v35 = 0;
    v12 = *((_QWORD *)v11 + 2);
    v30 = *v11;
    v36 = 0;
    v31 = v12;
    v16 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(gDomainDummyLock, v13, v14, v15);
    if ( ExIsResourceAcquiredExclusiveLite(*v16) != 1 )
    {
      v21 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v18, v17, v19, v20);
      if ( ExIsResourceAcquiredSharedLite(*v21) )
      {
        v36 = 1;
        if ( v11 == (__int128 *)gObjDummyLock )
          v11 = 0LL;
        *(_QWORD *)&v34 = v11;
        if ( !v35 )
        {
          v22 = 0;
          v23 = (tagObjLock **)&v34;
          do
          {
            if ( *v23 )
              tagObjLock::LockExclusive(*v23);
            ++v22;
            ++v23;
          }
          while ( !v22 );
          v35 = 1;
        }
      }
    }
    if ( (_WORD)v8 == word_1C035E350 )
    {
      LockRefactorStagingAssertOwned(*((const struct tagObjLock **)v10 + 18));
      *(_QWORD *)(*((_QWORD *)v10 + 5) + 312LL) = 0LL;
    }
    v4 = RealInternalRemoveProp(*((_QWORD *)v10 + 18), v8, 0LL);
    if ( v36 && v35 && (_QWORD)v34 )
      tagObjLock::UnLockExclusive((tagObjLock *)v34);
  }
  CHMRefHwndByHandle::~CHMRefHwndByHandle((CHMRefHwndByHandle *)v29);
  UserSessionSwitchLeaveCrit(v25, v24, v26, v27);
  return v4;
}
