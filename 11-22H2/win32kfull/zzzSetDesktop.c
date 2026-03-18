/*
 * XREFs of zzzSetDesktop @ 0x1C006A860
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C00683E4 (xxxCreateDesktopEx.c)
 *     xxxSetThreadDesktop @ 0x1C006A6E4 (xxxSetThreadDesktop.c)
 *     xxxCreateWindowStation @ 0x1C006B42C (xxxCreateWindowStation.c)
 *     xxxSwitchDesktop @ 0x1C006BB2C (xxxSwitchDesktop.c)
 * Callees:
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1C005C644 (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C0070838 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C007085C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     PhkNextValid @ 0x1C00719E4 (PhkNextValid.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall zzzSetDesktop(struct tagTHREADINFO *a1, __int64 a2, void *a3)
{
  __int64 v6; // rsi
  unsigned int v8; // r12d
  int v9; // r15d
  __int64 v10; // rcx
  __int64 CurrentProcessWin32Process; // rax
  PVOID **v12; // r12
  PVOID *v13; // r15
  __int64 v14; // r14
  __int64 *ThreadWin32Thread; // rax
  char *v16; // r14
  struct tagTHREADINFO **v17; // rdx
  struct tagTHREADINFO **v18; // rcx
  _QWORD *v19; // rdx
  _QWORD *v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  char *Heap; // rax
  char *v24; // r13
  __int64 v25; // r10
  _QWORD *v26; // r9
  __int64 *v27; // r8
  int v28; // ecx
  __int64 v29; // rax
  char *v30; // rcx
  __int64 v31; // rax
  PERESOURCE *v32; // rax
  bool IsLockedShared; // al
  __int64 Valid; // rcx
  PERESOURCE *v35; // rax
  bool v36; // al
  tagQ *v37; // rcx
  __int64 *v38; // rax
  PVOID Object; // [rsp+50h] [rbp-C8h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v41; // [rsp+60h] [rbp-B8h] BYREF
  PVOID *v42; // [rsp+68h] [rbp-B0h]
  void (*v43)(void); // [rsp+70h] [rbp-A8h]
  __int128 v44; // [rsp+A0h] [rbp-78h]
  __int128 v45; // [rsp+B0h] [rbp-68h]
  __int128 v46; // [rsp+C0h] [rbp-58h]

  v6 = 0LL;
  if ( a2 && (*(_DWORD *)(a2 + 48) & 6) != 0 && a2 != *((_QWORD *)a1 + 57) && a1 != (struct tagTHREADINFO *)gTermIO[2] )
    return 3221225506LL;
  *((_DWORD *)a1 + 122) &= ~0x400000u;
  *((_QWORD *)a1 + 74) = a3;
  if ( a3 )
  {
    HandleInformation = 0LL;
    Object = 0LL;
    if ( ObReferenceObjectByHandle(a3, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, &HandleInformation) < 0 )
    {
      *((_DWORD *)a1 + 224) = 0;
    }
    else
    {
      ObfDereferenceObject(Object);
      *((_DWORD *)a1 + 224) = HandleInformation.GrantedAccess;
      v8 = 3 * ((unsigned int)a3 >> 2);
      v9 = 0;
      v44 = 0LL;
      v45 = 0LL;
      v46 = 0LL;
      EnterHandleFlagsCrit();
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
      if ( CurrentProcessWin32Process )
      {
        if ( !*(_QWORD *)CurrentProcessWin32Process )
          CurrentProcessWin32Process = 0LL;
        if ( CurrentProcessWin32Process
          && v8 < *(_DWORD *)(CurrentProcessWin32Process + 712)
          && _bittest64(*(const signed __int64 **)(CurrentProcessWin32Process + 720), v8) )
        {
          v9 = 1;
        }
      }
      LeaveHandleFlagsCrit();
      if ( v9 )
        *((_DWORD *)a1 + 122) |= 0x400000u;
      if ( !(unsigned int)SetHandleFlag(a3, 1LL, 1LL) )
        return 3221225495LL;
    }
  }
  else
  {
    *((_DWORD *)a1 + 224) = 0;
  }
  v12 = (PVOID **)((char *)a1 + 456);
  if ( a2 && (PVOID *)a2 == *v12 )
    return 0LL;
  v13 = *v12;
  v14 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v14 = *ThreadWin32Thread;
  v41 = *(_QWORD *)(v14 + 16);
  *(_QWORD *)(v14 + 16) = &v41;
  v42 = v13;
  v43 = (void (*)(void))UserDereferenceObject;
  if ( v13 )
    ObfReferenceObject(v13);
  v16 = (char *)*((_QWORD *)a1 + 56);
  if ( *v12 )
  {
    v17 = (struct tagTHREADINFO **)*((_QWORD *)a1 + 93);
    v18 = (struct tagTHREADINFO **)*((_QWORD *)a1 + 94);
    if ( v17[1] != (struct tagTHREADINFO *)((char *)a1 + 744) || *v18 != (struct tagTHREADINFO *)((char *)a1 + 744) )
LABEL_34:
      __fastfail(3u);
    *v18 = (struct tagTHREADINFO *)v17;
    v17[1] = (struct tagTHREADINFO *)v18;
  }
  LockObjectAssignment((char *)a1 + 456, a2);
  if ( a2 )
  {
    *((_QWORD *)a1 + 58) = *(_QWORD *)(a2 + 8);
    v20 = (_QWORD *)((char *)a1 + 744);
    v21 = (_QWORD *)(a2 + 176);
    v22 = *(_QWORD *)(a2 + 176);
    if ( *(_QWORD *)(v22 + 8) != a2 + 176 )
      goto LABEL_34;
    *v20 = v22;
    *((_QWORD *)a1 + 94) = v21;
    *(_QWORD *)(v22 + 8) = v20;
    *v21 = v20;
    Heap = (char *)RtlAllocateHeap(*(PVOID *)(a2 + 136), 0, 0x30uLL);
    *((_QWORD *)a1 + 56) = Heap;
    v24 = (char *)a1 + 1056;
    if ( !Heap )
    {
      *((_QWORD *)a1 + 56) = v24;
      Heap = (char *)a1 + 1056;
    }
  }
  else
  {
    *((_QWORD *)a1 + 58) = gpkdiStatic;
    Heap = (char *)a1 + 1056;
    *((_QWORD *)a1 + 56) = (char *)a1 + 1056;
    v24 = (char *)a1 + 1056;
  }
  if ( v16 )
  {
    if ( v16 != Heap )
    {
      *(_OWORD *)Heap = *(_OWORD *)v16;
      *((_OWORD *)Heap + 1) = *((_OWORD *)v16 + 1);
      *((_OWORD *)Heap + 2) = *((_OWORD *)v16 + 2);
    }
    if ( v16 != v24 )
      RtlFreeHeap(v13[17], 0, v16);
  }
  else
  {
    *(_OWORD *)Heap = 0LL;
    *((_OWORD *)Heap + 1) = 0LL;
    *((_OWORD *)Heap + 2) = 0LL;
  }
  if ( !a2 )
    goto LABEL_50;
  v19 = *(_QWORD **)(*((_QWORD *)a1 + 53) + 696LL);
  if ( !v19 )
    goto LABEL_50;
  do
  {
    if ( v19[1] == a2 )
      break;
    v19 = (_QWORD *)*v19;
  }
  while ( v19 );
  if ( v19 )
  {
    v25 = *(_QWORD *)(a2 + 16) - v19[2];
    v26 = (_QWORD *)((char *)a1 + 472);
    *((_QWORD *)a1 + 59) = v25;
    v27 = (__int64 *)((char *)a1 + 480);
    *(_QWORD *)(*((_QWORD *)a1 + 60) + 32LL) = **((_QWORD **)a1 + 58) - v25;
    *(_QWORD *)(*((_QWORD *)a1 + 60) + 40LL) = v19[2];
  }
  else
  {
LABEL_50:
    v26 = (_QWORD *)((char *)a1 + 472);
    *((_QWORD *)a1 + 59) = 0LL;
    v27 = (__int64 *)((char *)a1 + 480);
    *(_QWORD *)(*((_QWORD *)a1 + 60) + 32LL) = 0LL;
    *(_QWORD *)(*((_QWORD *)a1 + 60) + 40LL) = 0LL;
    v28 = (gdwGTERMFlags & 1) - 1;
    *((_DWORD *)a1 + 190) = v28;
    v29 = *((_QWORD *)a1 + 54);
    if ( v29 )
      *(_DWORD *)(v29 + 392) = v28;
  }
  v30 = (char *)*((_QWORD *)a1 + 56);
  v31 = *v27;
  if ( v30 == v24 )
  {
    *(_QWORD *)(v31 + 96) = 0LL;
  }
  else
  {
    v30 -= *v26;
    *(_QWORD *)(v31 + 96) = v30;
  }
  if ( *((_QWORD *)a1 + 54) && (*((_DWORD *)a1 + 122) & 0x80u) == 0 && *v12 )
  {
    if ( !gbInDestroyHandleTableObjects )
    {
      v32 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v30, v19, v27, v26);
      if ( ExIsResourceAcquiredExclusiveLite(*v32) != 1 )
      {
        if ( !IS_USERCRIT_OWNED_AT_ALL() )
          goto LABEL_65;
        if ( tagDomLock::IsLockedExclusive(gDomainHookLock)
          || (IsLockedShared = tagDomLock::IsLockedShared(gDomainHookLock)) )
        {
          IsLockedShared = 1;
        }
        if ( !IsLockedShared )
LABEL_65:
          __int2c();
      }
    }
    Valid = *(_QWORD *)(*((_QWORD *)a1 + 58) + 56LL);
    if ( Valid )
    {
      if ( (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
        Valid = PhkNextValid();
      if ( Valid )
        goto LABEL_82;
    }
    if ( !gbInDestroyHandleTableObjects )
    {
      v35 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(Valid, v19, v27, v26);
      if ( ExIsResourceAcquiredExclusiveLite(*v35) != 1 )
      {
        if ( !IS_USERCRIT_OWNED_AT_ALL() )
          goto LABEL_77;
        if ( tagDomLock::IsLockedExclusive(gDomainHookLock) || (v36 = tagDomLock::IsLockedShared(gDomainHookLock)) )
          v36 = 1;
        if ( !v36 )
LABEL_77:
          __int2c();
      }
    }
    Valid = *(_QWORD *)(*((_QWORD *)a1 + 58) + 48LL);
    if ( Valid )
    {
      if ( (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
        Valid = PhkNextValid();
      if ( Valid )
      {
LABEL_82:
        v37 = *(tagQ **)(*(_QWORD *)(Valid + 16) + 432LL);
        if ( v37 )
          tagQ::zzzAttachToQueue(v37, a1, 0LL);
      }
    }
  }
  v38 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v38 )
    v6 = *v38;
  *(_QWORD *)(v6 + 16) = v41;
  if ( v42 )
    v43();
  return 0LL;
}
