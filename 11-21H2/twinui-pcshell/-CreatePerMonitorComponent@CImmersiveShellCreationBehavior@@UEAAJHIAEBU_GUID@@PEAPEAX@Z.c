/*
 * XREFs of ?CreatePerMonitorComponent@CImmersiveShellCreationBehavior@@UEAAJHIAEBU_GUID@@PEAPEAX@Z @ 0x180147890
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateComponent@CImmersiveShellCreationBehavior@@AEAAJAEBUImmersiveComponentInfo@@AEBU_GUID@@PEAPEAX@Z @ 0x1801479B0 (-CreateComponent@CImmersiveShellCreationBehavior@@AEAAJAEBUImmersiveComponentInfo@@AEBU_GUID@@PE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::CreatePerMonitorComponent(
        CImmersiveShellCreationBehavior *this,
        int a2,
        unsigned int a3,
        const struct _GUID *a4,
        void **a5)
{
  __int64 v6; // rdi
  int v9; // eax
  unsigned __int64 v10; // rcx
  int v11; // eax
  int Component; // ebx
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = a3;
  *a5 = 0LL;
  if ( !*((_DWORD *)this + 8) )
    _InterlockedCompareExchange((volatile signed __int32 *)this + 8, GetCurrentThreadId(), 0);
  if ( *((_DWORD *)this + 8) == GetCurrentThreadId() )
  {
    if ( a2 )
    {
      if ( (unsigned int)v6 >= 9 )
      {
        Component = -2147483637;
        v14 = 771LL;
      }
      else
      {
        v9 = dword_1807A93D8[6 * v6];
        if ( (v9 & 4) != 0 )
        {
          v10 = 40LL;
        }
        else if ( (v9 & 2) != 0 )
        {
          v10 = 48LL;
        }
        else
        {
          v10 = (-(__int64)((v9 & 8) != 0) & 0xFFFFFFFFFFFFFFF8uLL) + 64;
        }
        v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _GUID *, void **))(**(_QWORD **)((char *)this + v10)
                                                                                       + 24LL))(
                *(_QWORD *)((char *)this + v10),
                *(&off_1807A93D0 + 3 * v6),
                a4,
                a5);
        Component = v11;
        if ( v11 >= 0 )
          return 0LL;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2CE,
          (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
          (const char *)(unsigned int)v11);
        v14 = 772LL;
      }
    }
    else if ( (unsigned int)v6 >= 2 )
    {
      Component = -2147483637;
      v14 = 776LL;
    }
    else
    {
      Component = CImmersiveShellCreationBehavior::CreateComponent(
                    (CImmersiveShellCreationBehavior *)((char *)this - 32),
                    (const struct ImmersiveComponentInfo *)(&_ImageBase + 6 * v6 + 2008294),
                    a4,
                    a5);
      if ( Component >= 0 )
        return 0LL;
      v14 = 777LL;
    }
  }
  else
  {
    Component = -2147417842;
    v14 = 768LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
    (const char *)(unsigned int)Component);
  return (unsigned int)Component;
}
