/*
 * XREFs of ?Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z @ 0x1801EEC80
 * Callers:
 *     <none>
 * Callees:
 *     ?Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ @ 0x180041104 (-Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x180041F08 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x1800A72B4 (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 */

__int64 __fastcall DWMCursor::Set3DHitData(DWMCursor *this, struct Cursor3DHitData *a2)
{
  RTL_SRWLOCK *Instance; // rax
  const char *v5; // r9
  char *v6; // rbx
  __int128 v7; // xmm0
  char *v8; // rdi
  RTL_SRWLOCK *v9; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
  if ( !MPC3DStateHelper::Is3DCompositorRunning(Instance) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x176,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      v5);
  v6 = (char *)this + 168;
  *(_OWORD *)v6 = *(_OWORD *)a2;
  *((_OWORD *)v6 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)v6 + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)v6 + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)v6 + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)v6 + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)v6 + 6) = *((_OWORD *)a2 + 6);
  v7 = *((_OWORD *)a2 + 7);
  v8 = (char *)a2 + 128;
  *((_OWORD *)v6 + 7) = v7;
  *((_OWORD *)v6 + 8) = *(_OWORD *)v8;
  *((_OWORD *)v6 + 9) = *((_OWORD *)v8 + 1);
  *((_OWORD *)v6 + 10) = *((_OWORD *)v8 + 2);
  *((_OWORD *)v6 + 11) = *((_OWORD *)v8 + 3);
  *((_QWORD *)v6 + 24) = *((_QWORD *)v8 + 8);
  v9 = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
  PostProcessor = MPC3DStateHelper::GetPostProcessor(v9);
  return (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, char *))(*(_QWORD *)PostProcessor + 48LL))(
           PostProcessor,
           v6);
}
