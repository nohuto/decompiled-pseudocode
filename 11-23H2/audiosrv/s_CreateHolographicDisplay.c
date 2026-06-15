/*
 * XREFs of s_CreateHolographicDisplay @ 0x18010FAA0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@std@@QEAA@XZ @ 0x18010F558 (--1-$unique_ptr@VCVpoContextProxy@@U-$default_delete@VCVpoContextProxy@@@std@@@std@@QEAA@XZ.c)
 *     ?InitHolographicDisplay@CHMDManager@@QEAAJXZ @ 0x18010F7F4 (-InitHolographicDisplay@CHMDManager@@QEAAJXZ.c)
 */

__int64 __fastcall s_CreateHolographicDisplay(__int64 a1, CHMDManager **a2)
{
  RPC_STATUS v3; // ebx
  unsigned int v4; // ebx
  __int64 v5; // rdx
  CHMDManager *v7; // rax
  CHMDManager *v8; // rbx
  int inited; // eax
  unsigned int v10; // edi
  __int64 v11; // r9
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int Pid; // [rsp+38h] [rbp+10h] BYREF
  CHMDManager *v15; // [rsp+40h] [rbp+18h] BYREF

  *a2 = 0LL;
  v3 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  if ( v3 )
  {
    v4 = v3 | 0x80010000;
    v5 = 105LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\hmdmanager.cpp",
      (const char *)v4);
    return v4;
  }
  if ( LODWORD(g_ADGProcess[2].OwningThread) != Pid )
  {
    v4 = -2147024891;
    v5 = 110LL;
    goto LABEL_3;
  }
  v7 = (CHMDManager *)operator new(0x18uLL);
  v8 = v7;
  if ( v7 )
  {
    *(_QWORD *)v7 = 0LL;
    *((_QWORD *)v7 + 1) = 0LL;
    *((_QWORD *)v7 + 2) = 0LL;
    v15 = v7;
    inited = CHMDManager::InitHolographicDisplay(v7);
    v10 = inited;
    if ( inited >= 0 )
    {
      *a2 = v8;
      return 0LL;
    }
    v11 = (unsigned int)inited;
    v12 = 116LL;
  }
  else
  {
    v15 = 0LL;
    v10 = -2147024882;
    v11 = 2147942414LL;
    v12 = 114LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\hmdmanager.cpp",
    (const char *)v11);
  std::unique_ptr<CVpoContextProxy>::~unique_ptr<CVpoContextProxy>(&v15);
  return v10;
}
