/*
 * XREFs of ?UpdatePositionerPriorityForActivation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@@Z @ 0x18007D780
 * Callers:
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@1PEAK@Z @ 0x1800C4260 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1800C4E48 (-PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ShellPositionerManager::UpdatePositionerPriorityForActivation(
        ShellPositionerManager *this,
        struct IShellPositionerPriority *a2,
        struct IApplicationView *a3,
        IUnknown *a4,
        struct IUnknown *a5)
{
  HRESULT v8; // eax
  unsigned int v9; // ebx
  unsigned int i; // ebx
  bool v11; // zf
  __int64 v12; // rax
  _QWORD *v13; // rcx
  void *v14; // rcx
  int v16; // [rsp+20h] [rbp-28h]
  _QWORD *v17; // [rsp+30h] [rbp-18h] BYREF
  void *v18; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v18 = 0LL;
  v8 = IUnknown_QueryService(
         a4,
         &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
         &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
         &v18);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x43B,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v8,
      v16);
  }
  else
  {
    for ( i = 0; i < 0xA; ++i )
    {
      if ( i > 1 )
      {
        v17 = 0LL;
        if ( (*(int (__fastcall **)(void *, _QWORD, GUID *, _QWORD **))(*(_QWORD *)v18 + 24LL))(
               v18,
               i,
               &GUID_ee010e17_919a_4068_868b_675acf787303,
               &v17) >= 0 )
        {
          v11 = (*(unsigned int (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)a2 + 32LL))(
                  a2,
                  i) == 0;
          v12 = *v17;
          if ( v11 )
          {
            if ( (*(unsigned int (__fastcall **)(_QWORD *, struct IApplicationView *, struct IUnknown *))(v12 + 24))(
                   v17,
                   a3,
                   a5) )
            {
              (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, i);
            }
          }
          else if ( !(*(unsigned int (__fastcall **)(_QWORD *, struct IApplicationView *, struct IUnknown *))(v12 + 24))(
                       v17,
                       a3,
                       a5) )
          {
            (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, i);
          }
        }
        v13 = v17;
        if ( v17 )
        {
          v17 = 0LL;
          (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
        }
      }
    }
    ShellPositionerManager::PersistPositionerPriority(this, a3);
    v9 = 0;
  }
  v14 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v9;
}
