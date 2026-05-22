/*
 * XREFs of ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801B1780
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180044CFC (--4-$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     memcpy_s_0 @ 0x18009AD94 (memcpy_s_0.c)
 *     ??$emplace@AEAUTargetingInfo@KeyboardProcessor@@@?$vector@UTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UTargetingInfo@KeyboardProcessor@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UTargetingInfo@KeyboardProcessor@@@std@@@std@@@1@AEAUTargetingInfo@KeyboardProcessor@@@Z @ 0x1801B0B04 (--$emplace@AEAUTargetingInfo@KeyboardProcessor@@@-$vector@UTargetingInfo@KeyboardProcessor@@V-$a.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_KeyboardProcessor::TargetingInfo_______lambda_8ff6b2d91b019428ca0582bb0ab092c7___ @ 0x1801B0BF4 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_KeyboardProcessor--Target.c)
 *     _lambda_ebc29ddd5dd0a3c27fbc9fad58cec528_::operator() @ 0x1801B11A0 (_lambda_ebc29ddd5dd0a3c27fbc9fad58cec528_--operator().c)
 *     ?GetTargetingInfo@KeyboardProcessor@@AEAAJPEAPEAVInputContext@@PEAPEAUIInputTarget@@@Z @ 0x1801B1250 (-GetTargetingInfo@KeyboardProcessor@@AEAAJPEAPEAVInputContext@@PEAPEAUIInputTarget@@@Z.c)
 *     ?KeyboardModifierFromScanCode@KeyboardModifierState@@SAJGPEAW4KeyboardModifier@@@Z @ 0x1801B2F30 (-KeyboardModifierFromScanCode@KeyboardModifierState@@SAJGPEAW4KeyboardModifier@@@Z.c)
 *     ?UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z @ 0x1801B3054 (-UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall KeyboardProcessor::OnInputReport(KeyboardProcessor *this, struct InputInfo *Source)
{
  unsigned __int16 v4; // bx
  __int16 v5; // cx
  __int16 v6; // si
  bool v7; // r15
  __int64 v9; // r8
  int v10; // ebx
  int updated; // eax
  unsigned int v12; // edi
  int v13; // eax
  int TargetingInfo; // eax
  __int64 *v15; // rcx
  const struct KeyboardProcessor::TargetingInfo *v16; // rbx
  int v17; // eax
  int v18; // eax
  struct InputContext *v19; // [rsp+20h] [rbp-E0h] BYREF
  struct IInputTarget *v20; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v21[4]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD Destination[92]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v23; // [rsp+1C0h] [rbp+C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+118h]

  v4 = 0;
  LODWORD(v19) = 0;
  v5 = *((_WORD *)Source + 47);
  v6 = v5 & 0x20;
  v7 = (v5 & 1) == 0;
  if ( (*(_BYTE *)Source & 4) == 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFE,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( (v5 & 0x20) == 0 && (v5 & 0x40) == 0 )
  {
    v4 = *((_WORD *)Source + 29) | 0xE000;
    if ( (v5 & 2) == 0 )
      v4 = *((_WORD *)Source + 29);
    if ( (v5 & 4) != 0 )
      v4 |= 0xE100u;
  }
  AcquireSRWLockExclusive(&KeyboardProcessor::s_keyStateSnapshotLock);
  v21[2] = &KeyboardProcessor::s_keyStateSnapshotLock;
  memcpy_s_0(&KeyboardProcessor::s_keyStateSnapshot, 0x100uLL, (char *)Source + 96, 0x100uLL);
  if ( (unsigned int)KeyboardModifierState::KeyboardModifierFromScanCode(v4, (enum KeyboardModifier *)&v19)
    || (v10 = (int)v19, v7) && ((unsigned int)v19 & *((_DWORD *)this + 14)) != 0 )
  {
LABEL_17:
    v20 = 0LL;
    if ( v6 )
    {
      v19 = 0LL;
      Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v20);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v19);
      TargetingInfo = KeyboardProcessor::GetTargetingInfo(this, &v19, &v20);
      v12 = TargetingInfo;
      if ( TargetingInfo < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x14B,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
          (const char *)(unsigned int)TargetingInfo);
        v15 = (__int64 *)&v19;
LABEL_20:
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v15);
LABEL_21:
        Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v20);
        goto LABEL_35;
      }
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v19);
    }
    else
    {
      v21[0] = Source;
      v21[1] = this;
      if ( v7 )
      {
        lambda_ebc29ddd5dd0a3c27fbc9fad58cec528_::operator()(v21);
        Destination[90] = 0;
        memset_0(Destination, 0, sizeof(Destination));
        Destination[0] = 4;
        Destination[6] = 368;
        v23 = 0LL;
        memcpy_s_0(Destination, 0x180uLL, Source, *((unsigned int *)Source + 6));
        v16 = (const struct KeyboardProcessor::TargetingInfo *)*std::vector<KeyboardProcessor::TargetingInfo>::emplace<KeyboardProcessor::TargetingInfo &>(
                                                                  (__int64)this + 64,
                                                                  &v19,
                                                                  *((_QWORD *)this + 9),
                                                                  (const struct KeyboardProcessor::TargetingInfo *)Destination);
        Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)v16 + 47);
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)v16 + 46);
        v17 = KeyboardProcessor::GetTargetingInfo(
                this,
                (struct InputContext **)v16 + 46,
                (struct IInputTarget **)v16 + 47);
        v12 = v17;
        if ( v17 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x167,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
            (const char *)(unsigned int)v17);
          Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v23 + 1);
          v15 = (__int64 *)&v23;
          goto LABEL_20;
        }
        Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v23 + 1);
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v23);
      }
      else
      {
        v16 = *std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_KeyboardProcessor::TargetingInfo_______lambda_8ff6b2d91b019428ca0582bb0ab092c7___(
                 &v19,
                 *((const struct KeyboardProcessor::TargetingInfo **)this + 8),
                 *((const struct KeyboardProcessor::TargetingInfo **)this + 9),
                 (__int64)Source);
      }
      if ( v16 != *((const struct KeyboardProcessor::TargetingInfo **)this + 9) )
      {
        Microsoft::WRL::ComPtr<IMessageSession>::operator=((__int64 *)&v20, (__int64 *)v16 + 47);
        if ( !v7 )
          lambda_ebc29ddd5dd0a3c27fbc9fad58cec528_::operator()(v21);
      }
    }
    if ( !v20
      || (v18 = (*(__int64 (__fastcall **)(struct IInputTarget *, struct InputInfo *))(*(_QWORD *)v20 + 24LL))(
                  v20,
                  Source),
          v12 = v18,
          v18 >= 0) )
    {
      Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v20);
      v12 = 0;
      goto LABEL_35;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
      (const char *)(unsigned int)v18);
    goto LABEL_21;
  }
  LOBYTE(v9) = v7;
  updated = KeyboardModifierState::UpdateKeyModifierArray(*((_QWORD *)this + 6), (unsigned int)v19, v9);
  v12 = updated;
  if ( updated >= 0 )
  {
    v13 = *((_DWORD *)this + 14);
    if ( v7 )
      *((_DWORD *)this + 14) = v10 | v13;
    else
      *((_DWORD *)this + 14) = v13 & ~v10;
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x133,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
    (const char *)(unsigned int)updated);
LABEL_35:
  ReleaseSRWLockExclusive(&KeyboardProcessor::s_keyStateSnapshotLock);
  return v12;
}
