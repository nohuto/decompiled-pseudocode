/*
 * XREFs of ?DeactivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@@Z @ 0x14000C9F0
 * Callers:
 *     ??1CAudioProcessor@@QEAA@XZ @ 0x140022288 (--1CAudioProcessor@@QEAA@XZ.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ @ 0x14000B15C (-RemoveAll@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ.c)
 *     ?RemoveAt@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000CF38 (-RemoveAt@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000EDC8 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ValidateTransactionState@CAudioProcessor@@AEAAJ_K@Z @ 0x14001108C (-ValidateTransactionState@CAudioProcessor@@AEAAJ_K@Z.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140011930 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z @ 0x140068A98 (-AddHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z.c)
 *     ?UnlockForProcess@CAPONode@@QEAAJXZ @ 0x140082754 (-UnlockForProcess@CAPONode@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioProcessor::DeactivateAPO(
        struct ATL::CAtlPlex **this,
        unsigned __int64 a2,
        struct IAudioProcessingObject *a3)
{
  int v6; // eax
  unsigned int v7; // edi
  _QWORD *v8; // rdx
  struct IAudioProcessingObject **v9; // rdi
  struct ATL::CAtlPlex *v10; // rcx
  struct ATL::CAtlPlex *v11; // r15
  struct ATL::CAtlPlex *v12; // rcx
  struct ATL::CAtlPlex *v13; // rax
  struct ATL::CAtlPlex *v14; // rax
  __int64 **v15; // r8
  __int64 *v16; // rax
  __int64 *v17; // rdx
  __int64 *v18; // rcx
  bool v19; // zf
  struct ATL::CAtlPlex *v21; // r8
  int v22; // edx
  struct ATL::CAtlPlex *v23; // rcx
  int i; // edx
  int v25; // [rsp+20h] [rbp-78h]
  _QWORD v26[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v27; // [rsp+40h] [rbp-58h] BYREF
  struct ATL::CAtlPlex *v28; // [rsp+48h] [rbp-50h]
  LPCRITICAL_SECTION v29; // [rsp+60h] [rbp-38h] BYREF
  char v30; // [rsp+68h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+B8h] [rbp+20h] BYREF

  v26[1] = this;
  if ( a3 )
  {
    if ( a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x87B,
        (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
        (const char *)0x80070006LL,
        v25);
      return 2147942406LL;
    }
    else
    {
      v29 = (LPCRITICAL_SECTION)(this + 11);
      v30 = 0;
      ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v29);
      v6 = CAudioProcessor::ValidateTransactionState((CAudioProcessor *)this, a2);
      v7 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x881,
          (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
          (const char *)(unsigned int)v6,
          v25);
        if ( v30 )
          LeaveCriticalSection(v29);
        return v7;
      }
      else
      {
        (*(void (__fastcall **)(struct ATL::CAtlPlex *, LPCRITICAL_SECTION *, __int64 *, _QWORD))(*(_QWORD *)this[99]
                                                                                                + 24LL))(
          this[99],
          &lpCriticalSection,
          &v27,
          0LL);
        v8 = **(_QWORD ***)this[96];
        if ( !v8 )
          goto LABEL_48;
        while ( 1 )
        {
          v9 = (struct IAudioProcessingObject **)v8[2];
          v8 = (_QWORD *)*v8;
          if ( v9[1] == a3 )
            break;
          if ( !v8 )
            goto LABEL_48;
        }
        v26[0] = v9;
        if ( v9 )
        {
          v10 = this[16];
          if ( v10 )
          {
            while ( *(struct IAudioProcessingObject **)(*((_QWORD *)v10 + 2) + 8LL) != v9[1] )
            {
              v10 = *(struct ATL::CAtlPlex **)v10;
              if ( !v10 )
                goto LABEL_10;
            }
            v28 = v10;
            ATL::CAtlList<CAPONode *,CAPONodeTraits>::AddHead(v27, v26);
            ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAt(this + 16, v28);
            CAPONode::UnlockForProcess((CAPONode *)v9);
          }
          else
          {
LABEL_10:
            v11 = this[22];
            if ( !this[26] )
            {
              v21 = ATL::CAtlPlex::Create(this + 25, *((unsigned int *)this + 54), 0x18uLL);
              if ( !v21 )
                ATL::AtlThrowImpl(-2147024882);
              v22 = *((_DWORD *)this + 54);
              v23 = (struct ATL::CAtlPlex *)((char *)v21 + 16 * (v22 - 1) + 8 * (unsigned int)(v22 - 1) + 8);
              for ( i = v22 - 1; i >= 0; --i )
              {
                *(_QWORD *)v23 = this[26];
                this[26] = v23;
                v23 = (struct ATL::CAtlPlex *)((char *)v23 - 24);
              }
            }
            v12 = this[26];
            v13 = *(struct ATL::CAtlPlex **)v12;
            *((_QWORD *)v12 + 2) = v9;
            this[26] = v13;
            *((_QWORD *)v12 + 1) = 0LL;
            *(_QWORD *)v12 = v11;
            this[24] = (struct ATL::CAtlPlex *)((char *)this[24] + 1);
            v14 = this[22];
            if ( v14 )
              *((_QWORD *)v14 + 1) = v12;
            else
              this[23] = v12;
            this[22] = v12;
          }
          v15 = *(__int64 ***)this[96];
          v16 = *v15;
          if ( *v15 )
          {
            while ( *(struct IAudioProcessingObject **)(v16[2] + 8) != v9[1] )
            {
              v16 = (__int64 *)*v16;
              if ( !v16 )
                goto LABEL_46;
            }
          }
          else
          {
LABEL_46:
            v16 = 0LL;
          }
          if ( !v16 )
            ATL::AtlThrowImpl(-2147467259);
          v17 = (__int64 *)*v16;
          if ( v16 == *v15 )
            *v15 = v17;
          else
            *(_QWORD *)v16[1] = v17;
          v18 = (__int64 *)v16[1];
          if ( v16 == v15[1] )
            v15[1] = v18;
          else
            *(_QWORD *)(*v16 + 8) = v18;
          *v16 = (__int64)v15[4];
          v15[4] = v16;
          v19 = v15[2] == (__int64 *)1;
          v15[2] = (__int64 *)((char *)v15[2] - 1);
          if ( v19 )
            ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAll((__int64)v15);
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          if ( v30 )
            LeaveCriticalSection(v29);
          return 0LL;
        }
        else
        {
LABEL_48:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x889,
            (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
            (const char *)0x887C001ALL,
            v25);
          if ( lpCriticalSection )
          {
            LeaveCriticalSection(lpCriticalSection);
            lpCriticalSection = 0LL;
          }
          if ( v30 )
            LeaveCriticalSection(v29);
          return 2289827866LL;
        }
      }
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87A,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x80004003LL,
      v25);
    return 2147500035LL;
  }
}
