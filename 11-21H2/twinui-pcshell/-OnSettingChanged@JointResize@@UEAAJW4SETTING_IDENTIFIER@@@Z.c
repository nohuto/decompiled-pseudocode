/*
 * XREFs of ?OnSettingChanged@JointResize@@UEAAJW4SETTING_IDENTIFIER@@@Z @ 0x18052A150
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnregisterFromEvents@JointResize@@AEAAJXZ @ 0x1800AAAF8 (-UnregisterFromEvents@JointResize@@AEAAJXZ.c)
 *     ?RegisterForEvents@JointResize@@AEAAJXZ @ 0x18015000C (-RegisterForEvents@JointResize@@AEAAJXZ.c)
 *     ?IsJointResizeEnabled@JointResize@@AEAA_NXZ @ 0x18017C1E8 (-IsJointResizeEnabled@JointResize@@AEAA_NXZ.c)
 */

__int64 __fastcall JointResize::OnSettingChanged(__int64 a1, int a2)
{
  JointResize *v2; // rbx
  int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == 5 )
  {
    v2 = (JointResize *)(a1 - 104);
    if ( JointResize::IsJointResizeEnabled((JointResize *)(a1 - 104)) )
    {
      v3 = JointResize::RegisterForEvents(v2);
      if ( v3 < 0 )
      {
        v4 = 378LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v4,
          (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
          (const char *)(unsigned int)v3);
        return (unsigned int)v3;
      }
    }
    else
    {
      v3 = JointResize::UnregisterFromEvents(v2);
      if ( v3 < 0 )
      {
        v4 = 382LL;
        goto LABEL_5;
      }
    }
  }
  return 0LL;
}
