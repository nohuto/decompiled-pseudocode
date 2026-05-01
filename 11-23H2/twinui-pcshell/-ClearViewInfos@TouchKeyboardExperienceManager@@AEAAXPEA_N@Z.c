/*
 * XREFs of ?ClearViewInfos@TouchKeyboardExperienceManager@@AEAAXPEA_N@Z @ 0x18050EADC
 * Callers:
 *     _lambda_ca8ece6d0ba6e230db3589fff51d060c_::operator() @ 0x18020866C (_lambda_ca8ece6d0ba6e230db3589fff51d060c_--operator().c)
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x180514850 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800E15F0 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1805095DC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18050F280 (-DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchKeyboardExperienceManager::ClearViewInfos(RTL_SRWLOCK *this, bool *a2)
{
  _BYTE *v4; // rbx
  struct KBViewInfo ***v5; // rax
  struct KBViewInfo **v6; // rdi
  struct KBViewInfo **Ptr; // r15
  struct KBViewInfo **v8; // rsi
  struct KBViewInfo **v9; // r14
  wil::details::in1diag3 *v10; // rcx
  int v11; // eax
  _DWORD *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct KBViewInfo **i; // rdi
  std::_Ref_count_base *v16; // rcx
  __int128 v17; // [rsp+30h] [rbp-20h] BYREF
  _BYTE *v18; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v20; // [rsp+90h] [rbp+40h] BYREF
  __int64 v21; // [rsp+98h] [rbp+48h] BYREF

  v17 = 0LL;
  v4 = 0LL;
  v18 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive((RTL_SRWLOCK **)&v20, this + 53);
  v5 = (struct KBViewInfo ***)&this[54];
  v6 = 0LL;
  Ptr = 0LL;
  if ( &v17 == (__int128 *)&this[54] )
  {
    v9 = (struct KBViewInfo **)*((_QWORD *)&v17 + 1);
    v8 = (struct KBViewInfo **)v17;
  }
  else
  {
    v6 = *v5;
    v8 = *v5;
    *(_QWORD *)&v17 = *v5;
    *v5 = 0LL;
    Ptr = (struct KBViewInfo **)this[55].Ptr;
    v9 = Ptr;
    *((_QWORD *)&v17 + 1) = Ptr;
    this[55].Ptr = 0LL;
    v4 = this[56].Ptr;
    v18 = v4;
    this[56].Ptr = 0LL;
  }
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((RTL_SRWLOCK **)&v20);
  if ( a2 )
    *a2 = v6 != Ptr;
  while ( v6 != Ptr )
  {
    v11 = TouchKeyboardExperienceManager::DestroyView((TouchKeyboardExperienceManager *)this, *v6);
    v10 = retaddr;
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x15CC,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
    v6 += 2;
  }
  v12 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                    (__int64)v10,
                    _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
  if ( *v12 > 5u )
  {
    LODWORD(v20) = ((char *)v9 - (char *)v8) >> 4;
    v21 = (__int64)"viewInfo cleared";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)v12,
      byte_18085D6FB,
      v13,
      v14,
      (const wchar_t **)&v21,
      (__int64)&v20);
  }
  if ( v8 )
  {
    for ( i = v8; i != v9; i += 2 )
    {
      v16 = i[1];
      if ( v16 )
        std::_Ref_count_base::_Decref(v16);
    }
    std::_Deallocate<16,0>(v8, (v4 - (_BYTE *)v8) & 0xFFFFFFFFFFFFFFF0uLL);
  }
}
