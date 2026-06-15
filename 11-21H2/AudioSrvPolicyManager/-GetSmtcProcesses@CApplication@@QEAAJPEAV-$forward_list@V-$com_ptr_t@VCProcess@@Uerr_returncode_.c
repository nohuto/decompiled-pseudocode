/*
 * XREFs of ?GetSmtcProcesses@CApplication@@QEAAJPEAV?$forward_list@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAI@Z @ 0x1800178D0
 * Callers:
 *     ?GetNotificationDataSize@@YAJAEBV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@PEA_K@Z @ 0x18002C3E4 (-GetNotificationDataSize@@YAJAEBV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplication@@@std@.c)
 *     ?SetNotificationData@@YAJAEBV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@PEAE_K@Z @ 0x18002D050 (-SetNotificationData@@YAJAEBV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplication@@@std@@@st.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BCA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplication::GetSmtcProcesses(__int64 a1, char **a2, _DWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // r15
  char *v7; // rbx
  char *v8; // r12
  volatile signed __int32 *v9; // rcx
  _QWORD *v10; // r14
  signed __int32 *v11; // rbx
  HANDLE ProcessHeap; // rax
  char *v13; // rcx
  signed __int32 v14; // eax

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  if ( a2 )
  {
    v7 = *a2;
    *a2 = 0LL;
    if ( v7 )
    {
      do
      {
        v8 = *(char **)v7;
        v9 = (volatile signed __int32 *)*((_QWORD *)v7 + 1);
        if ( v9 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(v9);
        std::_Deallocate<16,0>(v7, 0x10uLL);
        v7 = v8;
      }
      while ( v8 );
    }
  }
  if ( a3 )
    *a3 = 0;
  v10 = *(_QWORD **)(a1 + 72);
  while ( v10 )
  {
    v11 = (signed __int32 *)v10[2];
    v10 = (_QWORD *)*v10;
    if ( !v11[104] && v11[124] )
    {
      if ( a2 )
      {
        ProcessHeap = GetProcessHeap();
        v13 = (char *)HeapAlloc(ProcessHeap, 0, 0x10uLL);
        *((_QWORD *)v13 + 1) = v11;
        if ( v11 )
        {
          do
            v14 = v11[5];
          while ( v14 != 0x7FFFFFFF && v14 != _InterlockedCompareExchange(v11 + 5, v14 + 1, v14) );
        }
        *(_QWORD *)v13 = *a2;
        *a2 = v13;
      }
      if ( a3 )
        ++*a3;
    }
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
