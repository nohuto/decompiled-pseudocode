/*
 * XREFs of ?SetNotificationData@@YAJAEBV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@PEAE_K@Z @ 0x18002D050
 * Callers:
 *     ?GenerateMediaManagerNotification@@YAJAEAV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@AEAV?$unique_ptr@UMEDIAMANAGER_NOTIFICATION_BLOCK@@U?$default_delete@UMEDIAMANAGER_NOTIFICATION_BLOCK@@@std@@@2@@Z @ 0x18002C224 (-GenerateMediaManagerNotification@@YAJAEAV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplicati.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BCA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ?GetSmtcProcesses@CApplication@@QEAAJPEAV?$forward_list@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAI@Z @ 0x1800178D0 (-GetSmtcProcesses@CApplication@@QEAAJPEAV-$forward_list@V-$com_ptr_t@VCProcess@@Uerr_returncode_.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800182B0 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     memcpy_0 @ 0x180044443 (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SetNotificationData(__int64 **a1, __int64 a2, unsigned __int64 a3)
{
  size_t v5; // r15
  __int64 *v6; // rsi
  int SmtcProcesses; // eax
  unsigned int v8; // edi
  char *i; // rbx
  _WORD *v10; // rdx
  __int64 v11; // rcx
  size_t v12; // r8
  __int64 v13; // rax
  size_t v14; // rdi
  char *v15; // rbx
  char *v16; // rdi
  volatile signed __int32 *v17; // rcx
  char *v19; // rbx
  char *v20; // rdi
  volatile signed __int32 *v21; // rcx
  char *v22; // rbx
  char *v23; // rdi
  volatile signed __int32 *v24; // rcx
  char *v25; // rbx
  char *v26; // rdi
  volatile signed __int32 *v27; // rcx
  char *v28; // rbx
  char *v29; // rdi
  volatile signed __int32 *v30; // rcx
  char *v31; // rbx
  char *v32; // rsi
  volatile signed __int32 *v33; // rcx
  char *v34; // rbx
  char *v35; // rsi
  volatile signed __int32 *v36; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]
  char *v38; // [rsp+60h] [rbp+40h] BYREF
  __int64 *v39; // [rsp+78h] [rbp+58h]

  v5 = 0LL;
  v6 = *a1;
  v39 = a1[1];
  if ( v6 == v39 )
    return 0LL;
  while ( 2 )
  {
    v38 = 0LL;
    SmtcProcesses = CApplication::GetSmtcProcesses(*v6, &v38, 0LL);
    v8 = SmtcProcesses;
    if ( SmtcProcesses >= 0 )
    {
      for ( i = v38; i; i = *(char **)i )
      {
        v10 = *(_WORD **)(*v6 + 24);
        if ( !v10 )
        {
          v8 = -2147024809;
LABEL_42:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x177,
            (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
            (const char *)v8);
          v31 = v38;
          v38 = 0LL;
          if ( v31 )
          {
            do
            {
              v32 = *(char **)v31;
              v33 = (volatile signed __int32 *)*((_QWORD *)v31 + 1);
              if ( v33 )
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(v33);
              std::_Deallocate<16,0>(v31, 0x10uLL);
              v31 = v32;
            }
            while ( v32 );
          }
          return v8;
        }
        v11 = 1024LL;
        do
        {
          if ( !*v10 )
            break;
          ++v10;
          --v11;
        }
        while ( v11 );
        v8 = v11 == 0 ? 0x80070057 : 0;
        if ( !v11 )
          goto LABEL_42;
        v12 = ((2 * (1024 - v11)) & -(__int64)(v11 != 0)) + 2;
        v13 = v5 + 4;
        if ( v5 + 4 > a3 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x17B,
            (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
            (const char *)0x8007007ALL);
          v28 = v38;
          v38 = 0LL;
          if ( v28 )
          {
            do
            {
              v29 = *(char **)v28;
              v30 = (volatile signed __int32 *)*((_QWORD *)v28 + 1);
              if ( v30 )
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(v30);
              std::_Deallocate<16,0>(v28, 0x10uLL);
              v28 = v29;
            }
            while ( v29 );
          }
          return 2147942522LL;
        }
        *(_DWORD *)(v5 + a2) = v12;
        v14 = v12 + v13;
        if ( v12 + v13 > a3 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x180,
            (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
            (const char *)0x8007007ALL);
          v25 = v38;
          v38 = 0LL;
          if ( v25 )
          {
            do
            {
              v26 = *(char **)v25;
              v27 = (volatile signed __int32 *)*((_QWORD *)v25 + 1);
              if ( v27 )
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(v27);
              std::_Deallocate<16,0>(v25, 0x10uLL);
              v25 = v26;
            }
            while ( v26 );
          }
          return 2147942522LL;
        }
        memcpy_0((void *)(v13 + a2), *(const void **)(*v6 + 24), v12);
        if ( v14 + 4 > a3 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x185,
            (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
            (const char *)0x8007007ALL);
          v22 = v38;
          v38 = 0LL;
          if ( v22 )
          {
            do
            {
              v23 = *(char **)v22;
              v24 = (volatile signed __int32 *)*((_QWORD *)v22 + 1);
              if ( v24 )
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(v24);
              std::_Deallocate<16,0>(v22, 0x10uLL);
              v22 = v23;
            }
            while ( v23 );
          }
          return 2147942522LL;
        }
        *(_DWORD *)(v14 + a2) = *(_DWORD *)(*((_QWORD *)i + 1) + 160LL);
        v5 = v14 + 8;
        if ( v14 + 8 > a3 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x18A,
            (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
            (const char *)0x8007007ALL);
          v19 = v38;
          v38 = 0LL;
          if ( v19 )
          {
            do
            {
              v20 = *(char **)v19;
              v21 = (volatile signed __int32 *)*((_QWORD *)v19 + 1);
              if ( v21 )
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(v21);
              std::_Deallocate<16,0>(v19, 0x10uLL);
              v19 = v20;
            }
            while ( v20 );
          }
          return 2147942522LL;
        }
        *(_DWORD *)(v14 + 4 + a2) = CApplication::IsBackgroundAudioCapable((CApplication *)*v6);
      }
      v15 = v38;
      v38 = 0LL;
      if ( v15 )
      {
        do
        {
          v16 = *(char **)v15;
          v17 = (volatile signed __int32 *)*((_QWORD *)v15 + 1);
          if ( v17 )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(v17);
          std::_Deallocate<16,0>(v15, 0x10uLL);
          v15 = v16;
        }
        while ( v16 );
      }
      if ( ++v6 != v39 )
        continue;
      return 0LL;
    }
    break;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x171,
    (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)(unsigned int)SmtcProcesses);
  v34 = v38;
  v38 = 0LL;
  if ( v34 )
  {
    do
    {
      v35 = *(char **)v34;
      v36 = (volatile signed __int32 *)*((_QWORD *)v34 + 1);
      if ( v36 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(v36);
      std::_Deallocate<16,0>(v34, 0x10uLL);
      v34 = v35;
    }
    while ( v35 );
  }
  return v8;
}
