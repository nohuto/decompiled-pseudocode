/*
 * XREFs of _FreeGestureInfo @ 0x1C0221710
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     xxxInterSendMsgEx @ 0x1C00517B0 (xxxInterSendMsgEx.c)
 *     xxxRealInternalGetMessage @ 0x1C0055460 (xxxRealInternalGetMessage.c)
 *     fnHkINLPMSG @ 0x1C0076120 (fnHkINLPMSG.c)
 *     UnlinkSendListSms @ 0x1C00AC18C (UnlinkSendListSms.c)
 *     ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1C0117934 (-CleanInputMessage@@YAXIPEAUtagQMSG@@@Z.c)
 *     NtUserGetGestureExtArgs @ 0x1C01F4390 (NtUserGetGestureExtArgs.c)
 *     NtUserGetGestureInfo @ 0x1C01F44F0 (NtUserGetGestureInfo.c)
 *     NtUserInjectGesture @ 0x1C01F7FF0 (NtUserInjectGesture.c)
 *     SendGestureMessage @ 0x1C02213C4 (SendGestureMessage.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C01D57F8 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 */

__int64 __fastcall FreeGestureInfo(int a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned int v4; // ebx
  tagDomLock *v6; // [rsp+20h] [rbp-48h] BYREF
  char v7; // [rsp+28h] [rbp-40h]
  char v8; // [rsp+48h] [rbp-20h]
  char v9; // [rsp+50h] [rbp-18h]

  SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::ObjectLock<>((__int64)&v6);
  v2 = HMValidateHandleNoSecure(a1, 21);
  v3 = v2;
  if ( v2 && *(_BYTE *)(_HMPheFromObject(v2) + 24) == 21 )
  {
    HMDestroyObject(v3);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  if ( v9 && v8 && v6 )
  {
    if ( v7 )
      tagDomLock::UnLockExclusive(v6);
    else
      tagDomLock::UnLockShared(v6);
  }
  return v4;
}
