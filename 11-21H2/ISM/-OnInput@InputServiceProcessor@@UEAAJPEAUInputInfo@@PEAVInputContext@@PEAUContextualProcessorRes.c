/*
 * XREFs of ?OnInput@InputServiceProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180151D00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180036848 (-IsEdition@@YA_N_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     memcpy_s_1 @ 0x1800E6AA0 (memcpy_s_1.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800EE878 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?CreateKeyboardEvent@InputServiceProcessor@@SA?AUKeyboardEvent@@QEBUKeyboardInputInfo@@@Z @ 0x1801515A8 (-CreateKeyboardEvent@InputServiceProcessor@@SA-AUKeyboardEvent@@QEBUKeyboardInputInfo@@@Z.c)
 *     ?DeliverToInputService@Keyboard@InputTraceLogging@@SAXHK@Z @ 0x18015170C (-DeliverToInputService@Keyboard@InputTraceLogging@@SAXHK@Z.c)
 *     ?GetContainerIdFromInputTarget@@YA_NV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAUCONTAINER_ID@@@Z @ 0x180151944 (-GetContainerIdFromInputTarget@@YA_NV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAUCONTAINER_ID@@@.c)
 *     ?GetKeyboardInputData@KeyboardInputInfo@@QEAA?AU_KEYBOARD_INPUT_DATA@@XZ @ 0x180151C44 (-GetKeyboardInputData@KeyboardInputInfo@@QEAA-AU_KEYBOARD_INPUT_DATA@@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_KeyboardInputVirtualization@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180152070 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_KeyboardInputVirtualization@@@details@wil.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputServiceProcessor::OnInput(
        InputServiceProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  unsigned int v6; // r14d
  _OWORD *KeyboardEvent; // rax
  rsize_t v8; // r9
  _OWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax
  _KEYBOARD_INPUT_DATA v15; // [rsp+20h] [rbp-E0h] BYREF
  int v16; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v17[74]; // [rsp+38h] [rbp-C8h] BYREF
  struct _KEYBOARD_INPUT_DATA v18; // [rsp+160h] [rbp+60h] BYREF
  int v19; // [rsp+174h] [rbp+74h]
  int v20; // [rsp+178h] [rbp+78h]
  __int64 v21; // [rsp+188h] [rbp+88h]
  _BYTE v22[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  int v23; // [rsp+1A4h] [rbp+A4h]
  unsigned __int16 v24; // [rsp+1B2h] [rbp+B2h]
  _BYTE Destination[266]; // [rsp+1C6h] [rbp+C6h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+308h] [rbp+208h]

  if ( (*(_BYTE *)a2 & 4) != 0 )
  {
    *((_DWORD *)a4 + 2) = 3;
    v6 = 1;
    if ( !*((_BYTE *)a2 + 358) )
    {
      KeyboardEvent = InputServiceProcessor::CreateKeyboardEvent(v17, (__int64)a2);
      v9 = v22;
      v10 = 2LL;
      do
      {
        *v9 = *KeyboardEvent;
        v9[1] = KeyboardEvent[1];
        v9[2] = KeyboardEvent[2];
        v9[3] = KeyboardEvent[3];
        v9[4] = KeyboardEvent[4];
        v9[5] = KeyboardEvent[5];
        v9[6] = KeyboardEvent[6];
        v9 += 8;
        *(v9 - 1) = KeyboardEvent[7];
        KeyboardEvent += 8;
        --v10;
      }
      while ( v10 );
      *v9 = *KeyboardEvent;
      v9[1] = KeyboardEvent[1];
      *((_QWORD *)v9 + 4) = *((_QWORD *)KeyboardEvent + 4);
      memcpy_s_1(Destination, 0LL, (char *)a2 + 96, v8);
      if ( IsEdition(8778LL) )
      {
        v16 = 0;
        *(_QWORD *)&v15.UnitId = 0LL;
        if ( *((_QWORD *)a3 + 2) )
        {
          if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(
                      (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a3 + 2,
                      (__int64 *)&v15) >= 0 )
          {
            v12 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)&v15.UnitId + 40LL))(
                    *(_QWORD *)&v15.UnitId,
                    &v16);
            if ( v12 < 0 )
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0x9E,
                (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputservice\\system\\l"
                     "ib\\inputserviceprocessor.cpp",
                (const char *)(unsigned int)v12,
                *(int *)&v15.UnitId);
          }
          if ( v16 )
            MITSetLastInputRecipient();
        }
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v15);
      }
      if ( *((_QWORD *)a3 + 2) )
      {
        LOBYTE(v11) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_KeyboardInputVirtualization>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_KeyboardInputVirtualization>::GetImpl'::`2'::impl,
          v11);
        *(_QWORD *)&v15.UnitId = *((_QWORD *)a3 + 2);
        Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v15);
        if ( GetContainerIdFromInputTarget((__int64 *)&v15, (_DWORD *)a2 + 90) )
        {
          v23 = 1;
          if ( v24 == 3 || !v24 || v24 >= 7u )
            v6 = 3;
        }
        else
        {
          v23 = 0;
        }
      }
      InputTraceLogging::Keyboard::DeliverToInputService((*((_WORD *)a2 + 47) & 1) == 0, *((_DWORD *)a2 + 1));
      v13 = (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, _BYTE *))(*(_QWORD *)NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer
                                                                              + 32LL))(
              NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer,
              v22);
      if ( v13 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xB3,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputservice\\system\\lib\\in"
               "putserviceprocessor.cpp",
          (const char *)(unsigned int)v13,
          *(int *)&v15.UnitId);
    }
    memset_0(&v18, 0, 0x40uLL);
    v21 = *((unsigned int *)a2 + 1);
    v18 = *KeyboardInputInfo::GetKeyboardInputData(a2, &v15);
    v19 = 1;
    v20 = *((_DWORD *)a2 + 90);
    if ( (v6 & 2) != 0 && (*((_WORD *)a2 + 29) == 54 || *((_WORD *)a2 + 29) == 69) )
      v18.Flags &= ~2u;
    NtMITSynthesizeKeyboardInput(v6, &v18, 0LL);
  }
  else
  {
    *((_DWORD *)a4 + 2) = 0;
  }
  return 0LL;
}
