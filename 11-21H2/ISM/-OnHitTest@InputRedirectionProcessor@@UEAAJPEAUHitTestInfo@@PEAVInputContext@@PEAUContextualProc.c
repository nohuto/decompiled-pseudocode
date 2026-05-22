/*
 * XREFs of ?OnHitTest@InputRedirectionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180001D70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?erase@?$vector@U?$pair@KPEAVInputRedirectionTarget@@@std@@V?$allocator@U?$pair@KPEAVInputRedirectionTarget@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KPEAVInputRedirectionTarget@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KPEAVInputRedirectionTarget@@@std@@@std@@@std@@@2@@Z @ 0x1801B18F4 (-erase@-$vector@U-$pair@KPEAVInputRedirectionTarget@@@std@@V-$allocator@U-$pair@KPEAVInputRedire.c)
 *     ?IsValid@InputRedirectionTarget@@QEAA_NXZ @ 0x1801B1E9C (-IsValid@InputRedirectionTarget@@QEAA_NXZ.c)
 */

__int64 __fastcall InputRedirectionProcessor::OnHitTest(
        InputRedirectionProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  __int64 v5; // rcx
  int v7; // esi
  __int64 i; // rbx
  _DWORD *v10; // rcx
  InputRedirectionTarget *v11; // rsi
  int v12; // eax
  __int64 (__fastcall *v13)(InputRedirectionTarget *, GUID *, char *); // rdi
  int v14; // eax
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
    v10 = (_DWORD *)*((_QWORD *)this + 10);
    if ( v10 != *((_DWORD **)this + 11) )
    {
      while ( (*(_DWORD *)(v17 + 4) & *v10) == 0 )
      {
        v10 += 4;
        if ( v10 == *((_DWORD **)this + 11) )
          goto LABEL_2;
      }
      v7 = *(_DWORD *)(v17 + 4);
    }
  }
LABEL_2:
  for ( i = *((_QWORD *)this + 10); i != *((_QWORD *)this + 11); i += 16LL )
  {
    if ( (v7 & *(_DWORD *)i) != 0 )
    {
      v11 = *(InputRedirectionTarget **)(i + 8);
      if ( InputRedirectionTarget::IsValid(v11) )
      {
        v12 = 0;
        if ( v17 )
          v12 = *(_DWORD *)(v17 + 16);
        if ( *((_DWORD *)v11 + 16) != v12 )
        {
          v13 = **(__int64 (__fastcall ***)(InputRedirectionTarget *, GUID *, char *))v11;
          Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((char *)a4 + 8);
          v14 = v13(v11, &GUID_00000000_0000_0000_c000_000000000046, (char *)a4 + 8);
          if ( v14 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x179,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection"
                            "\\system\\lib\\inputredirectionprocessor.cpp",
              (const char *)(unsigned int)v14,
              v15);
          *(_DWORD *)a4 = ((*(unsigned __int8 (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)v11 + 32LL))(v11) != 0)
                        + 2;
        }
      }
      else
      {
        std::vector<std::pair<unsigned long,InputRedirectionTarget *>>::erase((char *)this + 80, &v18, i);
        (*(void (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)v11 + 16LL))(v11);
      }
      return 0LL;
    }
  }
  return 0LL;
}
