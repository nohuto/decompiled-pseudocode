/*
 * XREFs of ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800E84E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x18001C748 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001C878 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x18001CB14 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18001CDF4 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CE68 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18002219C (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180028C1C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     MIDL_user_allocate @ 0x18003EE80 (MIDL_user_allocate.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x18003EEA0 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionManager::GetCurrentSession(
        CAudioSessionManager *this,
        struct IAudioProcess *a2,
        const struct _GUID *a3,
        int a4,
        unsigned int a5,
        int a6,
        void **a7,
        unsigned __int16 **a8)
{
  struct CAudioSession *v12; // r14
  const unsigned __int16 *v13; // r8
  int v14; // edi
  unsigned __int16 *v15; // rbx
  __int64 v16; // rdi
  unsigned __int16 *v17; // rax
  __int64 v18; // rax
  struct IAudioProcess *v19; // r14
  unsigned int v20; // eax
  CAudioSessionManager *v21; // r15
  __int64 (__fastcall *v22)(CAudioSessionManager *, _QWORD, __int64, struct CAudioSession *, void **); // rdi
  unsigned int v23; // eax
  __int64 v24; // r8
  struct CAudioSession *v26; // [rsp+40h] [rbp-91h] BYREF
  unsigned __int16 *v27; // [rsp+48h] [rbp-89h] BYREF
  void *v28; // [rsp+50h] [rbp-81h] BYREF
  struct IAudioProcess *v29; // [rsp+58h] [rbp-79h]
  CAudioSessionManager *v30; // [rsp+60h] [rbp-71h]
  void **v31; // [rsp+68h] [rbp-69h]
  _BYTE v32[80]; // [rsp+70h] [rbp-61h] BYREF

  v29 = a2;
  v30 = this;
  v31 = a7;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v27, (__int64)&ATL::g_strmgr);
  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v32);
  v12 = 0LL;
  v26 = 0LL;
  v28 = 0LL;
  *a8 = 0LL;
  v13 = (const unsigned __int16 *)((char *)this + 240);
  if ( *((_QWORD *)this + 33) >= 8uLL )
    v13 = *(const unsigned __int16 **)v13;
  v14 = CAudioSessionInstanceId::Initialize((CAudioSessionInstanceId *)v32, a2, v13, a3, a6);
  if ( v14 < 0 || (v14 = CAudioSessionInstanceId::ToString((__int64)v32, &v27), v14 < 0) )
  {
    v15 = v27;
  }
  else
  {
    v15 = v27;
    v16 = (unsigned int)(*((_DWORD *)v27 - 4) + 1);
    v17 = (unsigned __int16 *)MIDL_user_allocate(2 * v16);
    *a8 = v17;
    if ( v17 )
    {
      v14 = StringCchCopyW((char *)v17, (unsigned int)v16, (char *)v15);
      if ( v14 >= 0 )
      {
        if ( a6 )
        {
          v18 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
          if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 )
            v18 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
          if ( !v18 )
            a4 |= 4u;
        }
        v19 = v29;
        v20 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v29 + 40LL))(v29);
        v21 = v30;
        v14 = CAudioSessionManager::CreateAudioSession(
                (union _RTL_RUN_ONCE *)v30,
                v19,
                (struct CAudioSessionInstanceId *)v32,
                a4,
                a5,
                v20,
                &v26);
        if ( v14 < 0 )
        {
          v12 = v26;
        }
        else
        {
          v22 = **(__int64 (__fastcall ***)(CAudioSessionManager *, _QWORD, __int64, struct CAudioSession *, void **))v21;
          v23 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v19 + 40LL))(v19);
          v12 = v26;
          LOBYTE(v24) = 1;
          v14 = v22(v21, v23, v24, v26, &v28);
          if ( v14 >= 0 )
          {
            *v31 = v28;
            goto LABEL_21;
          }
        }
      }
      else
      {
        operator delete(*a8);
        *a8 = 0LL;
      }
    }
    else
    {
      v14 = -2147024882;
    }
  }
  if ( *a8 )
  {
    operator delete(*a8);
    *a8 = 0LL;
  }
LABEL_21:
  if ( v12 )
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v14 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::GetCurrentSession", 1360, v14);
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v32);
  ATL::CStringData::Release((ATL::CStringData *)(v15 - 12));
  return (unsigned int)v14;
}
