/*
 * XREFs of ?OnFocusRequest@InputRedirectionProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801CFA70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?erase@?$vector@U?$pair@KPEAVInputRedirectionTarget@@@std@@V?$allocator@U?$pair@KPEAVInputRedirectionTarget@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KPEAVInputRedirectionTarget@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KPEAVInputRedirectionTarget@@@std@@@std@@@std@@@2@@Z @ 0x1801CFE34 (-erase@-$vector@U-$pair@KPEAVInputRedirectionTarget@@@std@@V-$allocator@U-$pair@KPEAVInputRedire.c)
 *     ?IsValid@InputRedirectionTarget@@QEAA_NXZ @ 0x1801D03E4 (-IsValid@InputRedirectionTarget@@QEAA_NXZ.c)
 */

__int64 __fastcall InputRedirectionProcessor::OnFocusRequest(
        InputRedirectionProcessor *this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  char *v4; // r15
  __int64 v5; // rbx
  int v7; // edx
  InputRedirectionTarget *v9; // rsi
  __int64 (__fastcall *v10)(InputRedirectionTarget *, GUID *, char *); // rdi
  int v11; // eax
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v15; // [rsp+40h] [rbp+8h] BYREF

  *(_DWORD *)a4 = 0;
  v4 = (char *)this + 80;
  v5 = *((_QWORD *)this + 10);
  v7 = *((_DWORD *)a2 + 1);
  while ( v5 != *((_QWORD *)this + 11) )
  {
    if ( (v7 & *(_DWORD *)v5) != 0 )
    {
      v9 = *(InputRedirectionTarget **)(v5 + 8);
      if ( InputRedirectionTarget::IsValid(v9) )
      {
        if ( *((_DWORD *)v9 + 16) != *((_DWORD *)a2 + 4) )
        {
          v10 = **(__int64 (__fastcall ***)(InputRedirectionTarget *, GUID *, char *))v9;
          Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)a4 + 1);
          v11 = v10(v9, &GUID_00000000_0000_0000_c000_000000000046, (char *)a4 + 8);
          if ( v11 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x1AB,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\"
                   "lib\\inputredirectionprocessor.cpp",
              (const char *)(unsigned int)v11,
              v13);
          *(_DWORD *)a4 = ((*(unsigned __int8 (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)v9 + 32LL))(v9) != 0)
                        + 2;
        }
      }
      else
      {
        std::vector<std::pair<unsigned long,InputRedirectionTarget *>>::erase(v4, &v15, v5);
        (*(void (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)v9 + 16LL))(v9);
      }
      return 0LL;
    }
    v5 += 16LL;
  }
  return 0LL;
}
