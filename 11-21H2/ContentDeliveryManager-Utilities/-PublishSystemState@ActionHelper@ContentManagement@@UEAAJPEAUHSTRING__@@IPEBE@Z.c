/*
 * XREFs of ?PublishSystemState@ActionHelper@ContentManagement@@UEAAJPEAUHSTRING__@@IPEBE@Z @ 0x18003C190
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWellKnownWnfStateByName@Triggers@CreativeFramework@@YAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z @ 0x1800B30E0 (-GetWellKnownWnfStateByName@Triggers@CreativeFramework@@YAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z.c)
 */

__int64 __fastcall ContentManagement::ActionHelper::PublishSystemState(
        ContentManagement::ActionHelper *this,
        HSTRING a2,
        unsigned int a3,
        const unsigned __int8 *a4)
{
  const WCHAR *StringRawBuffer; // rax
  const struct _WNF_STATE_NAME **v7; // r8
  int WellKnownWnfStateByName; // ebx
  __int64 v9; // rdx
  int v11; // eax
  int v12; // [rsp+20h] [rbp-28h]
  unsigned __int16 v13[12]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  WellKnownWnfStateByName = CreativeFramework::Triggers::GetWellKnownWnfStateByName(StringRawBuffer, v13, v7);
  if ( WellKnownWnfStateByName < 0 )
  {
    v9 = 646LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)WellKnownWnfStateByName,
      v12);
    return (unsigned int)WellKnownWnfStateByName;
  }
  v12 = 0;
  v11 = RtlPublishWnfStateData(**(_QWORD **)v13, 0LL, a4, a3);
  WellKnownWnfStateByName = v11 | 0x10000000;
  if ( v11 < 0 )
  {
    v9 = 647LL;
    goto LABEL_3;
  }
  return 0LL;
}
