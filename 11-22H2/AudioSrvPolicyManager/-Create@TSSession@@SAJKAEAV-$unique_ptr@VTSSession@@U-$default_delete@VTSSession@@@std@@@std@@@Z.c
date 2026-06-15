/*
 * XREFs of ?Create@TSSession@@SAJKAEAV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@Z @ 0x180035040
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180038354 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180016E5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0TSSession@@AEAA@XZ @ 0x180033D10 (--0TSSession@@AEAA@XZ.c)
 *     ??1?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@QEAA@XZ @ 0x180034144 (--1-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@QEAA@XZ.c)
 *     ??R?$default_delete@VTSSession@@@std@@QEBAXPEAVTSSession@@@Z @ 0x180034DE0 (--R-$default_delete@VTSSession@@@std@@QEBAXPEAVTSSession@@@Z.c)
 *     ??$MakeAndInitialize@VCEndpointVolumeStateManager@@UIEndpointVolumeStateManager@@AEAPEAUIVolumeProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointVolumeStateManager@@AEAPEAUIVolumeProvider@@@Z @ 0x1800406A8 (--$MakeAndInitialize@VCEndpointVolumeStateManager@@UIEndpointVolumeStateManager@@AEAPEAUIVolumeP.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TSSession::Create(int a1, TSSession **a2)
{
  TSSession *v4; // rax
  TSSession *v5; // rbx
  const char *v6; // r9
  __int64 result; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // esi
  TSSession *v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  TSSession *v14; // [rsp+40h] [rbp+18h] BYREF
  struct IVolumeProvider *v15; // [rsp+48h] [rbp+20h] BYREF

  v4 = (TSSession *)operator new(0x460uLL, (const struct std::nothrow_t *)&std::nothrow);
  try
  {
    v14 = v4;
    if ( v4 )
      v5 = TSSession::TSSession(v4);
    else
      v5 = 0LL;
    v14 = v5;
    if ( v5 )
    {
      *(_DWORD *)v5 = a1;
      v8 = *((_QWORD *)v5 + 130);
      *((_QWORD *)v5 + 130) = 0LL;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      v15 = g_VolumeProvider;
      v9 = Microsoft::WRL::Details::MakeAndInitialize<CEndpointVolumeStateManager,IEndpointVolumeStateManager,IVolumeProvider * &>(
             (char *)v5 + 1040,
             &v15);
      v11 = v9;
      if ( v9 >= 0 )
      {
        if ( a2 != &v14 )
        {
          v14 = 0LL;
          v12 = *a2;
          *a2 = v5;
          if ( v12 )
            std::default_delete<TSSession>::operator()(v10, v12);
        }
        std::unique_ptr<TSSession>::~unique_ptr<TSSession>(&v14);
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBE,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)v9);
        std::unique_ptr<TSSession>::~unique_ptr<TSSession>(&v14);
        result = v11;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBB,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)0x8007000ELL);
      std::unique_ptr<TSSession>::~unique_ptr<TSSession>(&v14);
      result = 2147942414LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC4,
                           (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                           v6);
  }
  return result;
}
