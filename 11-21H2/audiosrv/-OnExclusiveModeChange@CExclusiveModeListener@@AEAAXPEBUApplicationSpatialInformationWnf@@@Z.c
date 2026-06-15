/*
 * XREFs of ?OnExclusiveModeChange@CExclusiveModeListener@@AEAAXPEBUApplicationSpatialInformationWnf@@@Z @ 0x18012CC64
 * Callers:
 *     ?SpatialApplicationInfoUpdateCallback@CExclusiveModeListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18012E160 (-SpatialApplicationInfoUpdateCallback@CExclusiveModeListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYP.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18003FB14 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GetRecordFromWnf @ 0x18012C7F8 (GetRecordFromWnf.c)
 *     ?UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ @ 0x18012E1A0 (-UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CExclusiveModeListener::OnExclusiveModeChange(
        struct _RTL_CRITICAL_SECTION *this,
        const struct ApplicationSpatialInformationWnf *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r12
  const char *v5; // r9
  unsigned int v6; // esi
  unsigned __int8 v7; // di
  unsigned int v8; // r14d
  __int64 LockCount; // rdx
  __int64 v10; // rdx
  int updated; // eax
  LONG v12; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+48h] [rbp-38h] BYREF
  _QWORD *v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+70h] [rbp-10h]
  int v17; // [rsp+74h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v4 = this + 2;
  EnterCriticalSection(this + 2);
  v13[1] = v4;
  v6 = 0;
  v12 = 0;
  v7 = 0;
  if ( *((_DWORD *)a2 + 1) )
  {
    v7 = 1;
    v8 = 0;
    if ( *(_DWORD *)a2 )
    {
      while ( (int)GetRecordFromWnf((unsigned int *)a2, v8, v13, v5) < 0 || !*(_DWORD *)(v13[0] + 16LL) )
      {
        if ( ++v8 >= *(_DWORD *)a2 )
          goto LABEL_8;
      }
      v6 = *(_DWORD *)(v13[0] + 24LL);
    }
LABEL_8:
    LockCount = (unsigned int)this[9].LockCount;
    if ( (_DWORD)LockCount && (_DWORD)LockCount != v6 )
    {
      (*(void (__fastcall **)(struct IAudioPolicyManager *, __int64, unsigned __int64))(*(_QWORD *)g_PolicyManager
                                                                                      + 352LL))(
        g_PolicyManager,
        LockCount,
        (unsigned __int64)&this->LockCount & -(__int64)(this != 0LL));
      this[9].LockCount = 0;
    }
    if ( v6 )
    {
      (*(void (__fastcall **)(struct IAudioPolicyManager *, _QWORD, LONG *))(*(_QWORD *)g_PolicyManager + 48LL))(
        g_PolicyManager,
        v6,
        &v12);
      if ( this[9].LockCount != v6 )
      {
        this[9].LockCount = v6;
        (*(void (__fastcall **)(struct IAudioPolicyManager *, _QWORD, unsigned __int64))(*(_QWORD *)g_PolicyManager
                                                                                       + 344LL))(
          g_PolicyManager,
          v6,
          (unsigned __int64)&this->LockCount & -(__int64)(this != 0LL));
      }
    }
  }
  else
  {
    v10 = (unsigned int)this[9].LockCount;
    if ( (_DWORD)v10 )
    {
      (*(void (__fastcall **)(struct IAudioPolicyManager *, __int64, unsigned __int64))(*(_QWORD *)g_PolicyManager
                                                                                      + 352LL))(
        g_PolicyManager,
        v10,
        (unsigned __int64)&this->LockCount & -(__int64)(this != 0LL));
      this[9].LockCount = 0;
    }
  }
  if ( v7 == LOBYTE(this[9].OwningThread) )
  {
    if ( v12 == this[9].RecursionCount )
      goto LABEL_24;
  }
  else
  {
    if ( (unsigned int)dword_1801C0178 > 4 )
    {
      LODWORD(v13[0]) = v7;
      v15 = v13;
      v16 = 4;
      v17 = 0;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_1801C0178,
        (unsigned __int8 *)dword_18018BF9A,
        0LL,
        0LL,
        3u,
        &v14);
    }
    LOBYTE(this[9].OwningThread) = v7;
  }
  this[9].RecursionCount = v12;
  updated = CExclusiveModeListener::UpdateExclusiveViewingMode((CExclusiveModeListener *)this);
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x213,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      (const char *)(unsigned int)updated);
LABEL_24:
  if ( v4 )
    LeaveCriticalSection(v4);
}
