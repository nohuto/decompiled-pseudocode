/*
 * XREFs of ?InitializeRTOperatingMode@CRTThreadManager@@AEAAJXZ @ 0x14002909C
 * Callers:
 *     ?RuntimeClassInitialize@CRTThreadManager@@QEAAJXZ @ 0x14002904C (-RuntimeClassInitialize@CRTThreadManager@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCLocalMmcssWorkQueue@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCLocalMmcssWorkQueue@@@Z @ 0x14006BE50 (--$MakeAndInitialize@VCLocalMmcssWorkQueue@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCLocalMmcssW.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CRTThreadManager::InitializeRTOperatingMode(CRTThreadManager *this)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  HRESULT v5; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  HRESULT v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v13; // [rsp+50h] [rbp+8h] BYREF
  DWORD v14; // [rsp+58h] [rbp+10h] BYREF
  DWORD taskId; // [rsp+60h] [rbp+18h] BYREF

  v13 = 0;
  v14 = 4;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"RTOperatingMode",
          0x18u,
          0LL,
          &v13,
          &v14) )
    *((_DWORD *)this + 4) = v13;
  v2 = *((_DWORD *)this + 4);
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 != 1 )
          return 0LL;
        taskId = 0;
        v5 = RtwqLockSharedWorkQueue(L"Audio", 0, &taskId, (DWORD *)this + 6);
        if ( v5 >= 0 )
          return 0LL;
        v7 = 56LL;
      }
      else
      {
        v8 = *((_QWORD *)this + 4);
        *((_QWORD *)this + 4) = 0LL;
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        v5 = Microsoft::WRL::Details::MakeAndInitialize<CLocalMmcssWorkQueue,CLocalMmcssWorkQueue,>((char *)this + 32);
        if ( v5 >= 0 )
          return 0LL;
        v7 = 50LL;
      }
    }
    else
    {
      taskId = 0;
      v9 = RtwqLockSharedWorkQueue(L"Audio", 0, &taskId, (DWORD *)this + 6);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2D,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
          (const char *)(unsigned int)v9);
        return v10;
      }
      v11 = *((_QWORD *)this + 4);
      *((_QWORD *)this + 4) = 0LL;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      v5 = Microsoft::WRL::Details::MakeAndInitialize<CLocalMmcssWorkQueue,CLocalMmcssWorkQueue,>((char *)this + 32);
      if ( v5 >= 0 )
        return 0LL;
      v7 = 46LL;
    }
  }
  else
  {
    v5 = RtwqLockSharedWorkQueue(L"Audio", 0, (DWORD *)this + 5, (DWORD *)this + 6);
    if ( v5 >= 0 )
      return 0LL;
    v7 = 40LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
