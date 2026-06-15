/*
 * XREFs of ?RegisterAPONotifications@CAPONode@@QEAAJXZ @ 0x14000F6F4
 * Callers:
 *     ?ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z @ 0x14000F760 (-ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAPONode::RegisterAPONotifications(CAPONode *this)
{
  int v3; // eax
  unsigned int v4; // edi
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_QWORD *)this + 4) || !*((_QWORD *)this + 5) || *((_BYTE *)this + 56) )
    return 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 40LL))(*((_QWORD *)this + 6));
  v4 = v3;
  if ( v3 >= 0 )
  {
    *((_BYTE *)this + 56) = 1;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1CC,
    (unsigned int)"avcore\\audiocore\\Engine\\Include\\AudioEngineObjects.h",
    (const char *)(unsigned int)v3,
    v5);
  return v4;
}
