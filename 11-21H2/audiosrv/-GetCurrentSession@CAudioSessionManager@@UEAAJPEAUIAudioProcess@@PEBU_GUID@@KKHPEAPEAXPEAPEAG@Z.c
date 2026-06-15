/*
 * XREFs of ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180004D00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18000C0AC (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180019510 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18001ACB0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001C8C0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CA60 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001CAA0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x18001DD20 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18001E150 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     memcpy_s @ 0x180025BEC (memcpy_s.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005F02C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _invalid_parameter_noinfo @ 0x18005F922 (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x18006A67B (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x1800C36C0 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManager::GetCurrentSession(
        CAudioSessionManager *this,
        struct IAudioProcess *a2,
        const struct _GUID *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        void **a7,
        unsigned __int16 **a8)
{
  struct IAudioProcess *v9; // r12
  struct CAudioSession *v11; // r14
  const unsigned __int16 *v12; // rdx
  int v13; // esi
  int v14; // r15d
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rbx
  __int64 v19; // rdi
  unsigned __int16 *v20; // rax
  int v21; // r8d
  __int64 v22; // rdx
  __int64 v23; // rbx
  unsigned __int16 v24; // cx
  __int64 v25; // rax
  unsigned int v26; // ebx
  unsigned int v27; // eax
  CAudioSessionManager *v28; // rdi
  __int64 (__fastcall *v29)(CAudioSessionManager *, _QWORD, __int64, struct CAudioSession *, void **); // rbx
  unsigned int v30; // eax
  __int64 v31; // r8
  _QWORD *v32; // rdx
  _QWORD *v33; // rdx
  _QWORD *v34; // rdx
  _QWORD *v35; // rdx
  _QWORD *v36; // rdx
  _QWORD *v37; // rdx
  __int64 v39; // rax
  const void *v40; // rdi
  __int64 v41; // rbx
  int *v42; // rcx
  __int64 v43; // rbx
  __int64 v44; // rax
  const void *v45; // rdi
  __int64 v46; // rbx
  char *v47; // rcx
  unsigned __int64 v48; // r12
  unsigned __int64 v49; // rsi
  rsize_t v50; // rdx
  char *v51; // r10
  unsigned __int64 v52; // r12
  unsigned __int64 v53; // rsi
  rsize_t v54; // rdx
  void **v55; // rdi
  void *v56; // rbx
  HANDLE ProcessHeap; // rax
  void *v58; // rbx
  HANDLE v59; // rax
  struct CAudioSession *v61; // [rsp+50h] [rbp-99h] BYREF
  __int64 v62; // [rsp+58h] [rbp-91h] BYREF
  struct IAudioProcess *v63; // [rsp+60h] [rbp-89h]
  void *v64; // [rsp+68h] [rbp-81h] BYREF
  const struct _GUID *v65; // [rsp+70h] [rbp-79h]
  CAudioSessionManager *v66; // [rsp+78h] [rbp-71h]
  void **v67; // [rsp+80h] [rbp-69h]
  __int64 v68; // [rsp+90h] [rbp-59h] BYREF
  void *Destination; // [rsp+98h] [rbp-51h] BYREF
  void *v70; // [rsp+A0h] [rbp-49h] BYREF
  GUID v71; // [rsp+A8h] [rbp-41h]
  __int64 v72; // [rsp+B8h] [rbp-31h]
  int v73; // [rsp+C0h] [rbp-29h]
  int v74; // [rsp+C8h] [rbp-21h]
  int v75; // [rsp+CCh] [rbp-1Dh]
  int v76; // [rsp+D0h] [rbp-19h]
  __int64 v77; // [rsp+D8h] [rbp-11h]

  v65 = a3;
  v9 = a2;
  v63 = a2;
  v66 = this;
  v67 = a7;
  v62 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  v68 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  Destination = (void *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
  v70 = (void *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
  v72 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  v71 = GUID_00000000_0000_0000_0000_000000000000;
  v73 = 0;
  v75 = -1;
  v74 = 0;
  v76 = 0;
  v77 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  v11 = 0LL;
  v61 = 0LL;
  v64 = 0LL;
  *a8 = 0LL;
  v12 = (const unsigned __int16 *)((char *)this + 240);
  if ( *((_QWORD *)this + 33) >= 8uLL )
    v12 = *(const unsigned __int16 **)v12;
  v13 = CAudioEndpointId::Initialize((CAudioEndpointId *)&v68, v12);
  if ( v13 < 0 )
  {
    v14 = a6;
LABEL_95:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 0x38Fu, v13);
    goto LABEL_17;
  }
  v14 = a6;
  if ( a6 )
  {
    if ( !a3 )
    {
      v13 = -2147024809;
      goto LABEL_72;
    }
    v15 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v15 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( !v15 )
    {
      v13 = -2147024809;
      goto LABEL_72;
    }
LABEL_11:
    v71 = *a3;
    if ( a6 )
      goto LABEL_12;
    goto LABEL_54;
  }
  if ( a3 )
    goto LABEL_11;
  v71 = GUID_00000000_0000_0000_0000_000000000000;
LABEL_54:
  v39 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v9 + 72LL))(v9);
  v40 = (const void *)v39;
  if ( !v39 )
    goto LABEL_58;
  v41 = -1LL;
  do
    ++v41;
  while ( *(_WORD *)(v39 + 2 * v41) );
  if ( (_DWORD)v41 )
  {
    v51 = (char *)v70;
    v52 = *((unsigned int *)v70 - 4);
    v53 = (v39 - (__int64)v70) >> 1;
    if ( ((1 - *((_DWORD *)v70 - 2)) | (*((_DWORD *)v70 - 3) - (int)v41)) < 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v70, (unsigned int)v41);
      v51 = (char *)v70;
    }
    v54 = 2LL * (int)v41;
    if ( v53 > v52 )
    {
      memcpy_s(v51, v54, v40, 2LL * (int)v41);
    }
    else if ( v54 )
    {
      if ( v51 && &v51[2 * v53] )
      {
        memmove_0(v51, &v51[2 * v53], 2LL * (int)v41);
      }
      else
      {
        *(_DWORD *)_o__errno() = 22;
        invalid_parameter_noinfo();
      }
    }
    ATL::CSimpleStringT<unsigned short,0>::SetLength(&v70, (unsigned int)v41);
    v9 = v63;
  }
  else
  {
LABEL_58:
    v42 = (int *)((char *)v70 - 24);
    v43 = *((_QWORD *)v70 - 3);
    if ( *((_DWORD *)v70 - 4) )
    {
      if ( v42[4] >= 0 )
      {
        ATL::CStringData::Release((ATL::CStringData *)v42);
        v70 = (void *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 24LL))(v43) + 24);
      }
      else
      {
        ATL::CSimpleStringT<unsigned short,0>::SetLength(&v70, 0LL);
      }
    }
  }
  v44 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v9 + 80LL))(v9);
  v45 = (const void *)v44;
  if ( !v44 )
    goto LABEL_93;
  v46 = -1LL;
  do
    ++v46;
  while ( *(_WORD *)(v44 + 2 * v46) );
  if ( (_DWORD)v46 )
  {
    v47 = (char *)Destination;
    v48 = *((unsigned int *)Destination - 4);
    v49 = (v44 - (__int64)Destination) >> 1;
    if ( ((1 - *((_DWORD *)Destination - 2)) | (*((_DWORD *)Destination - 3) - (int)v46)) < 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&Destination, (unsigned int)v46);
      v47 = (char *)Destination;
    }
    v50 = 2LL * (int)v46;
    if ( v49 <= v48 )
    {
      if ( v50 )
      {
        if ( v47 && &v47[2 * v49] )
        {
          memmove_0(v47, &v47[2 * v49], 2LL * (int)v46);
        }
        else
        {
          *(_DWORD *)_o__errno() = 22;
          invalid_parameter_noinfo();
        }
      }
    }
    else
    {
      memcpy_s(v47, v50, v45, 2LL * (int)v46);
    }
    ATL::CSimpleStringT<unsigned short,0>::SetLength(&Destination, (unsigned int)v46);
    v9 = v63;
  }
  else
  {
LABEL_93:
    ATL::CSimpleStringT<unsigned short,0>::Empty(&Destination);
  }
  v14 = a6;
LABEL_12:
  v73 = v14;
  v13 = CAppAudioSessionId::CalculateStaticId((CAppAudioSessionId *)&Destination);
  if ( v13 < 0 )
LABEL_72:
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 0x173u, v13);
  if ( v13 < 0 )
    goto LABEL_95;
  v76 = v14;
  v16 = *(_QWORD *)v9;
  if ( v14 )
  {
    v74 = 0;
    v17 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(v16 + 48))(v9);
  }
  else
  {
    v74 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(v16 + 40))(v9);
    v17 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v9 + 48LL))(v9);
  }
  v75 = v17;
  v13 = CAudioSessionInstanceId::CalculateStaticId((CAudioSessionInstanceId *)&v68);
  if ( v13 < 0 )
    goto LABEL_95;
LABEL_17:
  if ( v13 < 0 || (v13 = CAudioSessionInstanceId::ToString(&v68, &v62), v13 < 0) )
  {
LABEL_103:
    v55 = (void **)a8;
    goto LABEL_104;
  }
  v18 = v62;
  v19 = (unsigned int)(*(_DWORD *)(v62 - 16) + 1);
  if ( (unsigned __int64)(2 * v19) > 0x40000 )
  {
    v55 = (void **)a8;
    *a8 = 0LL;
  }
  else
  {
    v20 = (unsigned __int16 *)operator new[](2 * v19, (const struct std::nothrow_t *)&std::nothrow);
    *a8 = v20;
    if ( v20 )
    {
      if ( (unsigned __int64)(v19 - 1) > 0x7FFFFFFE )
      {
        v21 = -2147024809;
        v13 = -2147024809;
        if ( v19 )
        {
          *v20 = 0;
          goto LABEL_100;
        }
      }
      else
      {
        v21 = 0;
        v22 = 2147483646 - v19;
        v23 = v18 - (_QWORD)v20;
        while ( v22 + v19 )
        {
          v24 = *(unsigned __int16 *)((char *)v20 + v23);
          if ( !v24 )
          {
            if ( v19 )
              break;
LABEL_97:
            --v20;
            v21 = -2147024774;
            break;
          }
          *v20++ = v24;
          if ( !--v19 )
            goto LABEL_97;
        }
        *v20 = 0;
      }
      v13 = v21;
      if ( v21 >= 0 )
      {
        if ( v14 )
        {
          v25 = *(_QWORD *)&v65->Data1 - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
          if ( *(_QWORD *)&v65->Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 )
            v25 = *(_QWORD *)v65->Data4 - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
          v26 = a4;
          if ( !v25 )
            v26 = a4 | 4;
        }
        else
        {
          v26 = a4;
        }
        v27 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v9 + 40LL))(v9);
        v28 = v66;
        v13 = CAudioSessionManager::CreateAudioSession(
                v66,
                v9,
                (struct CAudioSessionInstanceId *)&v68,
                v26,
                a5,
                v27,
                &v61);
        if ( v13 < 0 )
        {
          v11 = v61;
        }
        else
        {
          v29 = **(__int64 (__fastcall ***)(CAudioSessionManager *, _QWORD, __int64, struct CAudioSession *, void **))v28;
          v30 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v9 + 40LL))(v9);
          v11 = v61;
          LOBYTE(v31) = 1;
          v13 = v29(v28, v30, v31, v61, &v64);
          if ( v13 >= 0 )
          {
            *v67 = v64;
            goto LABEL_38;
          }
        }
        goto LABEL_103;
      }
LABEL_100:
      v56 = *a8;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v56);
      *a8 = 0LL;
LABEL_101:
      AudSrvTraceLoggingErrorHelper("CAudioSessionManager::GetCurrentSession", 0x55Au, v13);
      goto LABEL_41;
    }
    v55 = (void **)a8;
  }
  v13 = -2147024882;
LABEL_104:
  v58 = *v55;
  if ( *v55 )
  {
    v59 = GetProcessHeap();
    HeapFree(v59, 0, v58);
    *v55 = 0LL;
  }
LABEL_38:
  if ( v11 )
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v13 < 0 )
    goto LABEL_101;
LABEL_41:
  v32 = (_QWORD *)(v77 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v77 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v32 + 8LL))(*v32);
  v33 = (_QWORD *)(v72 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v72 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v33 + 8LL))(*v33);
  v34 = (char *)v70 - 24;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v70 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v34 + 8LL))(*v34);
  v35 = (char *)Destination - 24;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Destination - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v35 + 8LL))(*v35);
  v36 = (_QWORD *)(v68 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v68 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v36 + 8LL))(*v36);
  v37 = (_QWORD *)(v62 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v62 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v37 + 8LL))(*v37);
  return (unsigned int)v13;
}
