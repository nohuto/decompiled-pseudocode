/*
 * XREFs of ??$emplace@AEAUTargetingInfo@KeyboardProcessor@@@?$vector@UTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UTargetingInfo@KeyboardProcessor@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UTargetingInfo@KeyboardProcessor@@@std@@@std@@@1@AEAUTargetingInfo@KeyboardProcessor@@@Z @ 0x1801BEAE4
 * Callers:
 *     ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801BF760 (-OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Emplace_reallocate@AEAUTargetingInfo@KeyboardProcessor@@@?$vector@UTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@QEAAPEAUTargetingInfo@KeyboardProcessor@@QEAU23@AEAU23@@Z @ 0x1801BE890 (--$_Emplace_reallocate@AEAUTargetingInfo@KeyboardProcessor@@@-$vector@UTargetingInfo@KeyboardPro.c)
 *     ??0TargetingInfo@KeyboardProcessor@@QEAA@$$QEAU01@@Z @ 0x1801BED30 (--0TargetingInfo@KeyboardProcessor@@QEAA@$$QEAU01@@Z.c)
 *     ??0TargetingInfo@KeyboardProcessor@@QEAA@AEBU01@@Z @ 0x1801BEE20 (--0TargetingInfo@KeyboardProcessor@@QEAA@AEBU01@@Z.c)
 *     ??4TargetingInfo@KeyboardProcessor@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801BF02C (--4TargetingInfo@KeyboardProcessor@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

_QWORD *__fastcall std::vector<KeyboardProcessor::TargetingInfo>::emplace<KeyboardProcessor::TargetingInfo &>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        const struct KeyboardProcessor::TargetingInfo *a4)
{
  __int64 v4; // rbp
  __int64 v8; // rdi
  __int64 v9; // rcx
  _BYTE v11[368]; // [rsp+28h] [rbp-190h] BYREF
  __int64 v12; // [rsp+198h] [rbp-20h] BYREF
  __int64 v13; // [rsp+1A0h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 == *(_QWORD *)(a1 + 16) )
  {
    *a2 = std::vector<KeyboardProcessor::TargetingInfo>::_Emplace_reallocate<KeyboardProcessor::TargetingInfo &>(
            (__int64 *)a1,
            a3,
            a4);
  }
  else
  {
    if ( a3 == v4 )
    {
      KeyboardProcessor::TargetingInfo::TargetingInfo(*(KeyboardProcessor::TargetingInfo **)(a1 + 8), a4);
      *(_QWORD *)(a1 + 8) += 384LL;
    }
    else
    {
      KeyboardProcessor::TargetingInfo::TargetingInfo((KeyboardProcessor::TargetingInfo *)v11, a4);
      v8 = v4 - 384;
      KeyboardProcessor::TargetingInfo::TargetingInfo(v4, v4 - 384);
      *(_QWORD *)(a1 + 8) += 384LL;
      while ( v8 != a3 )
      {
        v9 = v8;
        v8 -= 384LL;
        KeyboardProcessor::TargetingInfo::operator=(v9, v8);
      }
      KeyboardProcessor::TargetingInfo::operator=(a3, v11);
      Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v13);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v12);
    }
    *a2 = a3;
  }
  return a2;
}
