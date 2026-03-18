/*
 * XREFs of ?MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z @ 0x1800F3DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?StartCompositionThread@CConnection@@AEAAJH@Z @ 0x1800F3E8C (-StartCompositionThread@CConnection@@AEAAJH@Z.c)
 *     ??0CInternalMilCmdConnection@@QEAA@XZ @ 0x1800F3FC8 (--0CInternalMilCmdConnection@@QEAA@XZ.c)
 *     ??_GCInternalMilCmdConnection@@UEAAPEAXI@Z @ 0x180191DF0 (--_GCInternalMilCmdConnection@@UEAAPEAXI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall MilCompositionEngine_Initialize(int a1, struct HMIL_CONNECTION__ **a2)
{
  CInternalMilCmdConnection *v4; // rax
  CConnection *v5; // rbx
  int started; // eax
  unsigned int v7; // edi
  CInternalMilCmdConnection *v8; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v10 = -2147024809;
    v11 = 50LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\exportsg.cpp",
      (const char *)v10);
    return v10;
  }
  if ( g_pConnection )
  {
    v10 = -2147483634;
    v11 = 51LL;
    goto LABEL_13;
  }
  v4 = (CInternalMilCmdConnection *)DefaultHeap::AllocClear(0xC0uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v5 = CInternalMilCmdConnection::CInternalMilCmdConnection(v4);
  started = CConnection::StartCompositionThread(v5, a1);
  v7 = started;
  if ( started < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\connection.cpp",
      (const char *)(unsigned int)started);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\exportsg.cpp",
      (const char *)v7);
    if ( v5 )
      CInternalMilCmdConnection::`scalar deleting destructor'(v5, 1u);
  }
  else
  {
    v8 = g_pConnection;
    g_pConnection = v5;
    if ( v8 )
    {
      CInternalMilCmdConnection::`scalar deleting destructor'(v8, 1u);
      v5 = g_pConnection;
    }
    *a2 = v5;
    return 0;
  }
  return v7;
}
