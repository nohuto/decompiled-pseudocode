/*
 * XREFs of ?RemoveAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x14000DF80
 * Callers:
 *     <none>
 * Callees:
 *     memmove_s @ 0x14000A578 (memmove_s.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000EDC8 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z @ 0x14000F460 (-EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z.c)
 *     ?ValidateTransactionState@CAudioProcessor@@AEAAJ_K@Z @ 0x14001108C (-ValidateTransactionState@CAudioProcessor@@AEAAJ_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@AEAPEAU__POSITION@@@Z @ 0x140068C78 (-GetNext@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@AEAPEAU__POSITION@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioProcessor::RemoveAPOOutputConnection(
        CAudioProcessor *this,
        unsigned __int64 a2,
        struct IAudioProcessingObject *a3,
        __int64 a4)
{
  int v8; // eax
  unsigned int v9; // r14d
  struct _RTL_CRITICAL_SECTION *v10; // rcx
  _QWORD *v11; // rcx
  __int64 v12; // rsi
  struct _RTL_CRITICAL_SECTION *v13; // rbx
  struct CConnectionNode *v14; // rbp
  _QWORD *p_Type; // rax
  struct CConnectionNode *v16; // rdx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  __int64 v19; // rax
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  int v24; // eax
  int v25; // ebx
  errno_t v27; // eax
  errno_t v28; // eax
  __int64 Next; // rax
  __int64 v30; // rdx
  __int64 v31; // r9
  __int64 v32; // rdx
  int v33; // [rsp+20h] [rbp-58h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-48h] BYREF
  LPCRITICAL_SECTION v35; // [rsp+38h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION **v36; // [rsp+40h] [rbp-38h] BYREF
  LPCRITICAL_SECTION v37; // [rsp+48h] [rbp-30h] BYREF
  char v38; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v40; // [rsp+90h] [rbp+18h] BYREF

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA85,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x80070057LL,
      v33);
    return 2147942487LL;
  }
  if ( (unsigned __int64)(a4 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v32 = 2694LL;
    goto LABEL_68;
  }
  if ( a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v32 = 2695LL;
LABEL_68:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v32,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x80070006LL,
      v33);
    return 2147942406LL;
  }
  v37 = (LPCRITICAL_SECTION)((char *)this + 88);
  v38 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v37);
  v8 = CAudioProcessor::ValidateTransactionState(this, a2);
  v9 = v8;
  if ( v8 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *, struct _RTL_CRITICAL_SECTION ***, _QWORD))(**((_QWORD **)this + 99) + 24LL))(
      *((_QWORD *)this + 99),
      &v35,
      &v36,
      0LL);
    v10 = *v36;
    v40 = v10;
    if ( !v10 )
      goto LABEL_6;
    while ( 1 )
    {
      Next = ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetNext(v10, &v40);
      v12 = *(_QWORD *)Next;
      if ( *(struct IAudioProcessingObject **)(*(_QWORD *)Next + 8LL) == a3 )
        break;
      if ( !v40 )
        goto LABEL_6;
    }
    if ( !v12 )
    {
LABEL_6:
      v11 = (_QWORD *)*((_QWORD *)this + 22);
      if ( !v11 )
        goto LABEL_61;
      while ( 1 )
      {
        v12 = v11[2];
        v11 = (_QWORD *)*v11;
        if ( *(struct IAudioProcessingObject **)(v12 + 8) == a3 )
          break;
        if ( !v11 )
          goto LABEL_61;
      }
      if ( !v12 )
      {
LABEL_61:
        v30 = 2713LL;
        goto LABEL_62;
      }
    }
    (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *, _QWORD, struct _RTL_CRITICAL_SECTION **))(**((_QWORD **)this + 99)
                                                                                                  + 24LL))(
      *((_QWORD *)this + 99),
      &lpCriticalSection,
      0LL,
      &v40);
    v13 = v40;
    EnterCriticalSection(v40 + 3);
    v9 = 0;
    v14 = 0LL;
    p_Type = &(&v13->DebugInfo)[6 * (LOWORD(v13[2].SpinCount) ^ 1LL)]->Type;
    if ( p_Type )
    {
      while ( 1 )
      {
        v16 = (struct CConnectionNode *)p_Type[2];
        p_Type = (_QWORD *)*p_Type;
        if ( *((_QWORD *)v16 + 2) == a4 )
          break;
        if ( !p_Type )
          goto LABEL_16;
      }
      v14 = v16;
    }
LABEL_16:
    LeaveCriticalSection(v40 + 3);
    if ( lpCriticalSection )
    {
      LeaveCriticalSection(lpCriticalSection);
      lpCriticalSection = 0LL;
    }
    if ( v14 )
    {
      v17 = *(_QWORD *)(v12 + 168);
      v18 = 0LL;
      if ( v17 )
      {
        while ( 1 )
        {
          if ( v18 >= v17 )
            goto LABEL_60;
          v19 = *(_QWORD *)(v12 + 160);
          v20 = v18 + 1;
          if ( *(struct CConnectionNode **)(v19 + 8 * v18) == v14 )
            break;
          ++v18;
          if ( v20 >= v17 )
            goto LABEL_47;
        }
        if ( v20 < v18 || v18 == -1LL || v20 > v17 )
          goto LABEL_60;
        v21 = v17 - v20;
        if ( v21 )
        {
          v27 = memmove_s((void *const)(v19 + 8 * v18), 8 * v21, (const void *const)(v19 + 8 * v20), 8 * v21);
          if ( v27 )
          {
            if ( v27 == 12 )
              goto LABEL_58;
            if ( v27 == 22 || v27 == 34 )
              goto LABEL_60;
            if ( v27 != 80 )
              goto LABEL_57;
          }
        }
        --*(_QWORD *)(v12 + 168);
        v22 = *(_QWORD *)(v12 + 296);
        if ( v20 > v22 )
          goto LABEL_60;
        v23 = v22 - v20;
        if ( !v23
          || (v28 = memmove_s(
                      (void *const)(*(_QWORD *)(v12 + 288) + 8 * v18),
                      8 * v23,
                      (const void *const)(*(_QWORD *)(v12 + 288) + 8 * v20),
                      8 * v23)) == 0 )
        {
LABEL_28:
          --*(_QWORD *)(v12 + 296);
          --*((_DWORD *)v14 + 3);
          v24 = CAudioProcessor::EvaluateConnectionOwnership(this, v14);
          v25 = v24;
          if ( v24 >= 0 )
          {
            if ( v35 )
              LeaveCriticalSection(v35);
            goto LABEL_31;
          }
          v31 = (unsigned int)v24;
          v30 = 2727LL;
          goto LABEL_63;
        }
        if ( v28 != 12 )
        {
          if ( v28 != 22 && v28 != 34 )
          {
            if ( v28 != 80 )
LABEL_57:
              ATL::AtlThrowImpl(-2147467259);
            goto LABEL_28;
          }
LABEL_60:
          ATL::AtlThrowImpl(-2147024809);
        }
LABEL_58:
        ATL::AtlThrowImpl(-2147024882);
      }
LABEL_47:
      v30 = 2720LL;
    }
    else
    {
      v30 = 2716LL;
    }
LABEL_62:
    v25 = -2005139430;
    v31 = 2289827866LL;
LABEL_63:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)v31,
      v33);
    if ( v35 )
      LeaveCriticalSection(v35);
    v9 = v25;
    goto LABEL_31;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA8C,
    (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
    (const char *)(unsigned int)v8,
    v33);
LABEL_31:
  if ( v38 )
    LeaveCriticalSection(v37);
  return v9;
}
