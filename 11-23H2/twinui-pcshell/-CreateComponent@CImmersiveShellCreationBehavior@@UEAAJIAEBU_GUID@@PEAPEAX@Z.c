/*
 * XREFs of ?CreateComponent@CImmersiveShellCreationBehavior@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x1801539A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::CreateComponent(
        CImmersiveShellCreationBehavior *this,
        unsigned int a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v6; // rdi
  _UNKNOWN **v8; // rdx
  int v9; // eax
  unsigned __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a4 = 0LL;
  v6 = a2;
  if ( !*((_DWORD *)this + 8) )
    _InterlockedCompareExchange((volatile signed __int32 *)this + 8, GetCurrentThreadId(), 0);
  if ( *((_DWORD *)this + 8) == GetCurrentThreadId() )
  {
    if ( (unsigned int)v6 >= 0x92 )
    {
      v12 = -2147483637;
      v14 = 891LL;
    }
    else
    {
      v8 = &off_1807BAE60 + 4 * v6;
      v9 = *((_DWORD *)v8 + 2);
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
              *v8,
              a3,
              a4);
      v12 = v11;
      if ( v11 >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36A,
        (int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
        (const char *)(unsigned int)v11);
      v14 = 892LL;
    }
  }
  else
  {
    v12 = -2147417842;
    v14 = 890LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
    (const char *)v12);
  return v12;
}
