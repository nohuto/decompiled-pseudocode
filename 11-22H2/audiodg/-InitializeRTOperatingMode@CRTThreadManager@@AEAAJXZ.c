/*
 * XREFs of ?InitializeRTOperatingMode@CRTThreadManager@@AEAAJXZ @ 0x140074C74
 * Callers:
 *     ?RuntimeClassInitialize@CRTThreadManager@@QEAAJXZ @ 0x140075114 (-RuntimeClassInitialize@CRTThreadManager@@QEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCLocalMmcssWorkQueue@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCLocalMmcssWorkQueue@@@Z @ 0x1400742EC (--$MakeAndInitialize@VCLocalMmcssWorkQueue@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCLocalMmcssW.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CRTThreadManager::InitializeRTOperatingMode(CRTThreadManager *this)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v11; // [rsp+50h] [rbp+8h] BYREF
  DWORD v12; // [rsp+58h] [rbp+10h] BYREF
  DWORD taskId; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0;
  v12 = 4;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"RTOperatingMode",
          0x18u,
          0LL,
          &v11,
          &v12) )
    *((_DWORD *)this + 4) = v11;
  v2 = *((_DWORD *)this + 4);
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 1 )
        {
          taskId = 0;
          v5 = RtwqLockSharedWorkQueue(L"Audio", 0, &taskId, (DWORD *)this + 6);
          if ( v5 < 0 )
          {
            v6 = 56LL;
LABEL_21:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v6,
              (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
              (const char *)(unsigned int)v5);
            return (unsigned int)v5;
          }
        }
      }
      else
      {
        v7 = *((_QWORD *)this + 4);
        *((_QWORD *)this + 4) = 0LL;
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        v5 = Microsoft::WRL::Details::MakeAndInitialize<CLocalMmcssWorkQueue,CLocalMmcssWorkQueue,>((_QWORD *)this + 4);
        if ( v5 < 0 )
        {
          v6 = 50LL;
          goto LABEL_21;
        }
      }
    }
    else
    {
      taskId = 0;
      v5 = RtwqLockSharedWorkQueue(L"Audio", 0, &taskId, (DWORD *)this + 6);
      if ( v5 < 0 )
      {
        v6 = 45LL;
        goto LABEL_21;
      }
      v8 = *((_QWORD *)this + 4);
      *((_QWORD *)this + 4) = 0LL;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      v5 = Microsoft::WRL::Details::MakeAndInitialize<CLocalMmcssWorkQueue,CLocalMmcssWorkQueue,>((_QWORD *)this + 4);
      if ( v5 < 0 )
      {
        v6 = 46LL;
        goto LABEL_21;
      }
    }
  }
  else
  {
    v5 = RtwqLockSharedWorkQueue(L"Audio", 0, (DWORD *)this + 5, (DWORD *)this + 6);
    if ( v5 < 0 )
    {
      v6 = 40LL;
      goto LABEL_21;
    }
  }
  return 0LL;
}
