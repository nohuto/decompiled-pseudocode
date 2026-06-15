/*
 * XREFs of ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x180017E90
 * Callers:
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@@Z @ 0x18001FF3C (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCAppl.c)
 * Callees:
 *     ?SubjectToStreamClassPolicyGains@CProcess@@UEAAHXZ @ 0x18001C890 (-SubjectToStreamClassPolicyGains@CProcess@@UEAAHXZ.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x18001D210 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplication::HasDuckedStream(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned int v3; // ebp
  _QWORD *v4; // rdi
  __int64 v5; // rbx
  unsigned int v6; // edx
  int v7; // ebp
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r14
  _DWORD *v11; // r13
  _QWORD *v12; // r12
  unsigned int v13; // r15d
  int v14; // r15d
  int v16; // [rsp+90h] [rbp+8h]
  __int64 v17; // [rsp+A0h] [rbp+18h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v3 = 0;
  v4 = (_QWORD *)*((_QWORD *)this + 9);
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = v4[2];
      v4 = (_QWORD *)*v4;
      if ( !*(_DWORD *)(v5 + 416) )
      {
        v16 = 0;
        if ( (unsigned int)CProcess::SubjectToStreamClassPolicyGains((CProcess *)v5) )
        {
          v7 = 0;
          v8 = *(_DWORD *)(v5 + 272);
          if ( v8 > 0 )
          {
            v9 = 0LL;
            v17 = 0LL;
            v10 = 0LL;
            do
            {
              if ( v10 < 0 || v7 >= v8 )
              {
                ATL::_AtlRaiseException(v9, v6);
                JUMPOUT(0x180018041LL);
              }
              v11 = *(_DWORD **)(v10 + *(_QWORD *)(v5 + 264));
              v12 = (_QWORD *)(v9 + *(_QWORD *)(v5 + 256));
              if ( v12[3] >= 8uLL )
                v12 = (_QWORD *)*v12;
              v13 = 0;
              while ( !*v11
                   || !(*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD *, _QWORD, _DWORD, bool))(*(_QWORD *)g_StreamClassPolicyManager + 32LL))(
                         g_StreamClassPolicyManager,
                         *(unsigned int *)(v5 + 164),
                         v12,
                         v13,
                         0,
                         *(_DWORD *)(*(_QWORD *)(v5 + 224) + 208LL) != 0) )
              {
                ++v13;
                ++v11;
                if ( v13 >= 0x18 )
                {
                  v14 = v16;
                  goto LABEL_15;
                }
              }
              v14 = 1;
              v16 = 1;
LABEL_15:
              ++v7;
              v10 += 8LL;
              v9 = v17 + 32;
              v17 += 32LL;
              v8 = *(_DWORD *)(v5 + 272);
            }
            while ( v7 < v8 );
            if ( v14 )
              break;
          }
        }
      }
      if ( !v4 )
      {
        v3 = 0;
        goto LABEL_19;
      }
    }
    v3 = 1;
  }
LABEL_19:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v3;
}
