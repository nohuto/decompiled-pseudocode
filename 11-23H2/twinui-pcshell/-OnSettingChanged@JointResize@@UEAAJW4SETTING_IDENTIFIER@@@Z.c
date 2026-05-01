/*
 * XREFs of ?OnSettingChanged@JointResize@@UEAAJW4SETTING_IDENTIFIER@@@Z @ 0x1805E40F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterForEvents@JointResize@@AEAAJXZ @ 0x18013875C (-RegisterForEvents@JointResize@@AEAAJXZ.c)
 *     ?UnregisterFromEvents@JointResize@@AEAAJXZ @ 0x1801AE510 (-UnregisterFromEvents@JointResize@@AEAAJXZ.c)
 *     ?IsJointResizeEnabled@JointResize@@AEAA_NXZ @ 0x1801B8E80 (-IsJointResizeEnabled@JointResize@@AEAA_NXZ.c)
 */

__int64 __fastcall JointResize::OnSettingChanged(JointResize *a1, __int64 a2, __int64 a3, __int64 a4)
{
  JointResize *v4; // rbx
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (_DWORD)a2 == 5 )
  {
    v4 = (JointResize *)((char *)a1 - 104);
    if ( JointResize::IsJointResizeEnabled(a1, a2, a3, a4) )
    {
      v5 = JointResize::RegisterForEvents(v4);
      if ( v5 < 0 )
      {
        v6 = 382LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v6,
          (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
          (const char *)(unsigned int)v5);
        return (unsigned int)v5;
      }
    }
    else
    {
      v5 = JointResize::UnregisterFromEvents(v4);
      if ( v5 < 0 )
      {
        v6 = 386LL;
        goto LABEL_5;
      }
    }
  }
  return 0LL;
}
