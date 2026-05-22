/*
 * XREFs of ?EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z @ 0x1801B1460
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180036848 (-IsEdition@@YA_N_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEAHPEAVInputRedirectionTarget@@@?$vector@U?$pair@KPEAVInputRedirectionTarget@@@std@@V?$allocator@U?$pair@KPEAVInputRedirectionTarget@@@std@@@2@@std@@QEAAPEAU?$pair@KPEAVInputRedirectionTarget@@@1@QEAU21@AEAH$$QEAPEAVInputRedirectionTarget@@@Z @ 0x1801B0F90 (--$_Emplace_reallocate@AEAHPEAVInputRedirectionTarget@@@-$vector@U-$pair@KPEAVInputRedirectionTa.c)
 *     ?CallCallbackWithResult@InputRedirectionProcessor@@AEAAJUtagMsgRoutingInfo@@J@Z @ 0x1801B11C4 (-CallCallbackWithResult@InputRedirectionProcessor@@AEAAJUtagMsgRoutingInfo@@J@Z.c)
 *     ?erase@?$vector@U?$pair@KPEAVInputRedirectionTarget@@@std@@V?$allocator@U?$pair@KPEAVInputRedirectionTarget@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KPEAVInputRedirectionTarget@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KPEAVInputRedirectionTarget@@@std@@@std@@@std@@@2@@Z @ 0x1801B18F4 (-erase@-$vector@U-$pair@KPEAVInputRedirectionTarget@@@std@@V-$allocator@U-$pair@KPEAVInputRedire.c)
 *     ?Create@InputRedirectionTarget@@SAJK_KPEAUtagMsgRoutingInfo@@PEAPEAV1@W4InputType@@_N@Z @ 0x1801B1A18 (-Create@InputRedirectionTarget@@SAJK_KPEAUtagMsgRoutingInfo@@PEAPEAV1@W4InputType@@_N@Z.c)
 *     ?IsValid@InputRedirectionTarget@@QEAA_NXZ @ 0x1801B1E9C (-IsValid@InputRedirectionTarget@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputRedirectionProcessor::EnableInputRedirection(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        char a7)
{
  unsigned __int8 v9; // al
  int v10; // esi
  signed int v11; // ebx
  __int64 i; // rbx
  InputRedirectionTarget *v13; // r12
  __int64 j; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  __int64 v20; // [rsp+30h] [rbp-51h] BYREF
  __int64 v21; // [rsp+38h] [rbp-49h] BYREF
  __int64 v22; // [rsp+40h] [rbp-41h]
  _OWORD v23[2]; // [rsp+50h] [rbp-31h] BYREF
  __int64 v24; // [rsp+70h] [rbp-11h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+47h]

  v22 = a4;
  v21 = a3;
  v9 = IsEdition(8778LL);
  v10 = a6;
  if ( !v9 || a6 == 0x4000 )
  {
    for ( i = *(_QWORD *)(a1 + 72); i != *(_QWORD *)(a1 + 80); i += 16LL )
    {
      if ( (a6 & *(_DWORD *)i) != 0 )
      {
        v13 = *(InputRedirectionTarget **)(i + 8);
        if ( InputRedirectionTarget::IsValid(v13) )
          goto LABEL_3;
        std::vector<std::pair<unsigned long,InputRedirectionTarget *>>::erase(a1 + 72, &v20, i);
        (*(void (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)v13 + 16LL))(v13);
        break;
      }
    }
    v20 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v20);
    v11 = InputRedirectionTarget::Create(a2, v21, v22, &v20, v10, a7);
    if ( v11 >= 0 )
    {
      v11 = 0;
      for ( j = *(_QWORD *)(a1 + 72); j != *(_QWORD *)(a1 + 80); j += 16LL )
      {
        if ( *(_DWORD *)j == v10 )
        {
          v15 = v20;
          v20 = 0LL;
          *(_QWORD *)(j + 8) = v15;
          goto LABEL_21;
        }
        if ( (v10 & *(_DWORD *)j) != 0 )
        {
          v11 = -2147024809;
          goto LABEL_21;
        }
      }
      v16 = v20;
      v20 = 0LL;
      v21 = v16;
      v17 = *(_QWORD *)(a1 + 80);
      if ( v17 == *(_QWORD *)(a1 + 88) )
      {
        std::vector<std::pair<unsigned long,InputRedirectionTarget *>>::_Emplace_reallocate<int &,InputRedirectionTarget *>(
          (char **)(a1 + 72),
          (char *)v17,
          &a6,
          &v21);
      }
      else
      {
        *(_DWORD *)v17 = v10;
        *(_QWORD *)(v17 + 8) = v16;
        *(_QWORD *)(a1 + 80) += 16LL;
      }
    }
LABEL_21:
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v20);
  }
  else
  {
LABEL_3:
    v11 = -2147024891;
  }
  if ( *(_DWORD *)a5 )
  {
    v23[0] = *(_OWORD *)a5;
    v23[1] = *(_OWORD *)(a5 + 16);
    v24 = *(_QWORD *)(a5 + 32);
    v18 = InputRedirectionProcessor::CallCallbackWithResult(a1 - 8, (__int64)v23, v11);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        248LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\l"
                 "ib\\inputredirectionprocessor.cpp",
        (const char *)(unsigned int)v18);
  }
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      256LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\lib"
               "\\inputredirectionprocessor.cpp",
      (const char *)(unsigned int)v11);
  return 0LL;
}
