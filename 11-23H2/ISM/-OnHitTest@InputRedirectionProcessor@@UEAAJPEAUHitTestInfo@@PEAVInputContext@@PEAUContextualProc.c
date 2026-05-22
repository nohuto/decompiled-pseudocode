/*
 * XREFs of ?OnHitTest@InputRedirectionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801CFB90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?erase@?$vector@U?$pair@KPEAVInputRedirectionTarget@@@std@@V?$allocator@U?$pair@KPEAVInputRedirectionTarget@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KPEAVInputRedirectionTarget@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KPEAVInputRedirectionTarget@@@std@@@std@@@std@@@2@@Z @ 0x1801CFE34 (-erase@-$vector@U-$pair@KPEAVInputRedirectionTarget@@@std@@V-$allocator@U-$pair@KPEAVInputRedire.c)
 *     ?IsValid@InputRedirectionTarget@@QEAA_NXZ @ 0x1801D03E4 (-IsValid@InputRedirectionTarget@@QEAA_NXZ.c)
 */

__int64 __fastcall InputRedirectionProcessor::OnHitTest(
        InputRedirectionProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  __int64 v5; // rcx
  int v7; // esi
  _DWORD *v8; // rcx
  __int64 i; // rbx
  InputRedirectionTarget *v10; // rsi
  int v11; // eax
  __int64 (__fastcall *v12)(InputRedirectionTarget *, GUID *, char *); // rdi
  int v13; // eax
  int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF
  char v18; // [rsp+48h] [rbp+10h] BYREF

  *(_DWORD *)a4 = 0;
  v5 = *((_QWORD *)this + 9);
  v17 = 0LL;
  v7 = *(_DWORD *)a2;
  if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v5 + 24LL))(v5, *((unsigned int *)a2 + 1), &v17) >= 0 )
  {
    v8 = (_DWORD *)*((_QWORD *)this + 10);
    if ( v8 != *((_DWORD **)this + 11) )
    {
      while ( (*(_DWORD *)(v17 + 4) & *v8) == 0 )
      {
        v8 += 4;
        if ( v8 == *((_DWORD **)this + 11) )
          goto LABEL_7;
      }
      v7 = *(_DWORD *)(v17 + 4);
    }
  }
LABEL_7:
  for ( i = *((_QWORD *)this + 10); i != *((_QWORD *)this + 11); i += 16LL )
  {
    if ( (v7 & *(_DWORD *)i) != 0 )
    {
      v10 = *(InputRedirectionTarget **)(i + 8);
      if ( InputRedirectionTarget::IsValid(v10) )
      {
        v11 = 0;
        if ( v17 )
          v11 = *(_DWORD *)(v17 + 16);
        if ( *((_DWORD *)v10 + 16) != v11 )
        {
          v12 = **(__int64 (__fastcall ***)(InputRedirectionTarget *, GUID *, char *))v10;
          Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)a4 + 1);
          v13 = v12(v10, &GUID_00000000_0000_0000_c000_000000000046, (char *)a4 + 8);
          if ( v13 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x179,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\"
                   "lib\\inputredirectionprocessor.cpp",
              (const char *)(unsigned int)v13,
              v15);
          *(_DWORD *)a4 = ((*(unsigned __int8 (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)v10 + 32LL))(v10) != 0)
                        + 2;
        }
      }
      else
      {
        std::vector<std::pair<unsigned long,InputRedirectionTarget *>>::erase((char *)this + 80, &v18, i);
        (*(void (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)v10 + 16LL))(v10);
      }
      return 0LL;
    }
  }
  return 0LL;
}
