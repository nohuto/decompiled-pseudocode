/*
 * XREFs of ?UnlockForProcess@CAPONode@@QEAAJXZ @ 0x140022E00
 * Callers:
 *     ?ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z @ 0x14000F760 (-ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z.c)
 *     ?CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x1400118B0 (-CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 *     ?DeactivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@@Z @ 0x140020030 (-DeactivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@@Z.c)
 *     sub_1400403E4 @ 0x1400403E4 (sub_1400403E4.c)
 *     wil::details::lambda_call__lambda_64d0eb5368601f43b2aeea154398bca8___::_lambda_call__lambda_64d0eb5368601f43b2aeea154398bca8___ @ 0x14008EB34 (wil--details--lambda_call__lambda_64d0eb5368601f43b2aeea154398bca8___--_lambda_call__lambda_64d0.c)
 *     ?CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14008EE60 (-CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140038160 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAPONode::UnlockForProcess(CAPONode *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // eax
  unsigned int v6; // edi
  int v7; // [rsp+20h] [rbp-8h]
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 56) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 6) + 48LL))(
           *((_QWORD *)this + 6),
           *((_QWORD *)this + 5));
    v6 = v5;
    if ( v5 >= 0 )
    {
      *((_BYTE *)this + 56) = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D7,
        (unsigned int)"avcore\\audiocore\\Engine\\Include\\AudioEngineObjects.h",
        (const char *)(unsigned int)v5,
        v7);
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1EA,
        (unsigned int)"avcore\\audiocore\\Engine\\Include\\AudioEngineObjects.h",
        (const char *)v6,
        v8);
    }
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 32LL))(*((_QWORD *)this + 3));
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1EB,
    (unsigned int)"avcore\\audiocore\\Engine\\Include\\AudioEngineObjects.h",
    (const char *)(unsigned int)v2,
    v7);
  return v3;
}
