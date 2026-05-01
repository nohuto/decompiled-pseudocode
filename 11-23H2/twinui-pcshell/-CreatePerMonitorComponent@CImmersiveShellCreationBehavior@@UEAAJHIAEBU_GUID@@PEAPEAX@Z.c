/*
 * XREFs of ?CreatePerMonitorComponent@CImmersiveShellCreationBehavior@@UEAAJHIAEBU_GUID@@PEAPEAX@Z @ 0x18017E670
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateComponent@CImmersiveShellCreationBehavior@@AEAAJAEBUImmersiveComponentInfo@@AEBU_GUID@@PEAPEAX@Z @ 0x18017E73C (-CreateComponent@CImmersiveShellCreationBehavior@@AEAAJAEBUImmersiveComponentInfo@@AEBU_GUID@@PE.c)
 *     ?ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x18017E7B4 (-ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::CreatePerMonitorComponent(
        CImmersiveShellCreationBehavior *this,
        int a2,
        unsigned int a3,
        const struct _GUID *a4,
        void **a5)
{
  CImmersiveShellCreationBehavior *v5; // rbp
  __int64 v6; // rbx
  int v9; // eax
  unsigned int v10; // edi
  int Component; // ebx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = (CImmersiveShellCreationBehavior *)((char *)this - 32);
  v6 = a3;
  *a5 = 0LL;
  v9 = CImmersiveShellCreationBehavior::ValidateThread((CImmersiveShellCreationBehavior *)((char *)this - 32));
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39D,
      (int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)(unsigned int)v9);
    return v10;
  }
  if ( a2 )
  {
    if ( (unsigned int)v6 < 9 )
    {
      Component = CImmersiveShellCreationBehavior::CreateComponent(
                    v5,
                    (const struct ImmersiveComponentInfo *)&(&off_180985560)[4 * (unsigned int)v6],
                    a4,
                    a5);
      if ( Component >= 0 )
        return 0LL;
      v13 = 929LL;
      goto LABEL_13;
    }
    v13 = 928LL;
  }
  else
  {
    if ( (unsigned int)v6 < 2 )
    {
      Component = CImmersiveShellCreationBehavior::CreateComponent(
                    v5,
                    (const struct ImmersiveComponentInfo *)&(&off_180985520)[4 * v6],
                    a4,
                    a5);
      if ( Component >= 0 )
        return 0LL;
      v13 = 934LL;
      goto LABEL_13;
    }
    v13 = 933LL;
  }
  Component = -2147483637;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
    (const char *)(unsigned int)Component);
  return (unsigned int)Component;
}
