/*
 * XREFs of _lambda_9908ef596f629d302acb4d2b2b826918_::operator() @ 0x18006B5C0
 * Callers:
 *     ?CreateMicInjectionBridgeSourceStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@_JPEBUtWAVEFORMATEX@@PEAUIStreamInstanceProxy@@PEAPEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@@Z @ 0x18006BA80 (-CreateMicInjectionBridgeSourceStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDes.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCBridgeStreamInstanceProxy@@UIBridgeStreamInstanceProxy@@AEA_J@Details@WRL@Microsoft@@YAJPEAPEAUIBridgeStreamInstanceProxy@@AEA_J@Z @ 0x1800D78F8 (--$MakeAndInitialize@VCBridgeStreamInstanceProxy@@UIBridgeStreamInstanceProxy@@AEA_J@Details@WRL.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_9908ef596f629d302acb4d2b2b826918_::operator()(_QWORD **a1)
{
  __int64 v2; // r9
  _QWORD *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  _QWORD *v7; // rsi
  __int64 *v8; // rdi
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // rdx
  int v13; // eax
  unsigned int v14; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)**a1 + 104LL))(**a1, *a1[1] + 284LL);
  v2 = *a1[2];
  if ( v2 )
  {
    v3 = a1[1];
    *(_DWORD *)(*v3 + 288LL) = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL) + 16LL) + 18;
    v4 = *(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL);
  }
  else
  {
    v5 = *a1[3];
    v6 = *(_QWORD *)(v5 + 16);
    if ( !v6 )
      goto LABEL_6;
    v3 = a1[1];
    *(_DWORD *)(*v3 + 288LL) = *(unsigned __int16 *)(v6 + 16) + 18;
    v4 = *(_QWORD *)(v5 + 16);
  }
  *(_QWORD *)(*v3 + 296LL) = v4;
LABEL_6:
  v7 = a1[5];
  v8 = a1[4];
  v9 = *v8;
  *v8 = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = Microsoft::WRL::Details::MakeAndInitialize<CBridgeStreamInstanceProxy,IBridgeStreamInstanceProxy,__int64 &>(
          v8,
          v7);
  if ( v10 < 0 )
  {
    v11 = 3527LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)*a1[4] + 88LL))(
          *a1[4],
          *a1[1],
          *a1[6],
          *a1[7]);
  if ( v10 < 0 )
  {
    v11 = 3529LL;
    goto LABEL_10;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1[4] + 56LL))(*a1[4], **a1);
  v14 = v13;
  if ( v13 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xDCB,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v13);
  return v14;
}
