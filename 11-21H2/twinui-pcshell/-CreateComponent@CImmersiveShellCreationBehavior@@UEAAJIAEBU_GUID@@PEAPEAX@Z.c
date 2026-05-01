/*
 * XREFs of ?CreateComponent@CImmersiveShellCreationBehavior@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x1800CA5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::CreateComponent(
        CImmersiveShellCreationBehavior *this,
        unsigned int a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v6; // rdi
  int v8; // eax
  unsigned __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a4 = 0LL;
  v6 = a2;
  if ( !*((_DWORD *)this + 8) )
    _InterlockedCompareExchange((volatile signed __int32 *)this + 8, GetCurrentThreadId(), 0);
  if ( *((_DWORD *)this + 8) == GetCurrentThreadId() )
  {
    if ( (unsigned int)v6 >= 0x8E )
    {
      v11 = -2147483637;
      v13 = 735LL;
    }
    else
    {
      v8 = *((_DWORD *)&off_180628510 + 6 * v6 + 2);
      if ( (v8 & 4) != 0 )
      {
        v9 = 40LL;
      }
      else if ( (v8 & 2) != 0 )
      {
        v9 = 48LL;
      }
      else
      {
        v9 = (-(__int64)((v8 & 8) != 0) & 0xFFFFFFFFFFFFFFF8uLL) + 64;
      }
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _GUID *, void **))(**(_QWORD **)((char *)this + v9)
                                                                                     + 24LL))(
              *(_QWORD *)((char *)this + v9),
              *(&off_180628510 + 3 * v6),
              a3,
              a4);
      v11 = v10;
      if ( v10 >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2CE,
        (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
        (const char *)(unsigned int)v10);
      v13 = 736LL;
    }
  }
  else
  {
    v11 = -2147417842;
    v13 = 734LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
    (const char *)v11);
  return v11;
}
