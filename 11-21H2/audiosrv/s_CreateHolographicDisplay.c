/*
 * XREFs of s_CreateHolographicDisplay @ 0x18010EF10
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180008710 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CHMDManager@@QEAA@XZ @ 0x18010EA24 (--1CHMDManager@@QEAA@XZ.c)
 *     ?InitHolographicDisplay@CHMDManager@@QEAAJXZ @ 0x18010EC7C (-InitHolographicDisplay@CHMDManager@@QEAAJXZ.c)
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
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int Pid; // [rsp+38h] [rbp+10h] BYREF

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
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\hmdmanager.cpp",
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
  if ( !v7 )
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x72,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\hmdmanager.cpp",
      (const char *)0x8007000ELL);
    v8 = 0LL;
LABEL_11:
    if ( v8 )
    {
      CHMDManager::~CHMDManager(v8);
      operator delete(v8);
    }
    return v10;
  }
  *(_QWORD *)v7 = 0LL;
  *((_QWORD *)v7 + 1) = 0LL;
  *((_QWORD *)v7 + 2) = 0LL;
  inited = CHMDManager::InitHolographicDisplay(v7);
  v10 = inited;
  if ( inited < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x74,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\hmdmanager.cpp",
      (const char *)(unsigned int)inited);
    goto LABEL_11;
  }
  *a2 = v8;
  return 0;
}
