/*
 * XREFs of ?GetPerMonitorComponentCount@CImmersiveShellCreationBehavior@@UEAAJHPEAI@Z @ 0x1800E1130
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x1800E1180 (-ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::GetPerMonitorComponentCount(
        CImmersiveShellCreationBehavior *this,
        int a2,
        unsigned int *a3)
{
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0;
  v5 = CImmersiveShellCreationBehavior::ValidateThread((CImmersiveShellCreationBehavior *)((char *)this - 32));
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F7,
      (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  else
  {
    *a3 = a2 != 0 ? 9 : 2;
    return 0LL;
  }
}
