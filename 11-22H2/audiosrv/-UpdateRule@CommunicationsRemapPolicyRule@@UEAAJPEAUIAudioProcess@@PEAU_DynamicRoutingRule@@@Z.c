/*
 * XREFs of ?UpdateRule@CommunicationsRemapPolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@@Z @ 0x180140580
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateRule@RemapPolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@@Z @ 0x180140A40 (-UpdateRule@RemapPolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@@Z.c)
 */

__int64 __fastcall CommunicationsRemapPolicyRule::UpdateRule(
        CommunicationsRemapPolicyRule *this,
        struct IAudioProcess *a2,
        struct _DynamicRoutingRule *a3)
{
  int updated; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  updated = RemapPolicyRule::UpdateRule(this, a2, a3);
  v5 = updated;
  if ( updated >= 0 )
  {
    *((_BYTE *)this + 344) = *((_DWORD *)this + 19) == *((_DWORD *)this + 16);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C0,
      (int)"avcore\\audiocore\\server\\AudioSrv\\inc\\defaultdevice.h",
      (const char *)(unsigned int)updated);
    return v5;
  }
}
