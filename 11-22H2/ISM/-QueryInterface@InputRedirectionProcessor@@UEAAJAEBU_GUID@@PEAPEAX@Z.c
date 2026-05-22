/*
 * XREFs of ?QueryInterface@InputRedirectionProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003B2E0
 * Callers:
 *     ?QueryInterface@InputRedirectionProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007E710 (-QueryInterface@InputRedirectionProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@InputRedirectionProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007E730 (-QueryInterface@InputRedirectionProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@InputRedirectionProcessor@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007E750 (-QueryInterface@InputRedirectionProcessor@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     IsEqualGUID @ 0x180022FE0 (IsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall InputRedirectionProcessor::QueryInterface(
        InputRedirectionProcessor *this,
        struct _GUID *a2,
        InputRedirectionProcessor **a3)
{
  InputRedirectionProcessor *v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // r9
  unsigned __int64 v7; // rax
  _QWORD *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = this;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b.Data4;
    if ( !v5 )
    {
      (*(void (__fastcall **)(InputRedirectionProcessor *, struct _GUID *, InputRedirectionProcessor **, struct _GUID *))(*(_QWORD *)this + 8LL))(
        this,
        a2,
        a3,
        a2);
      goto LABEL_8;
    }
    if ( IsEqualGUID(a2, &GUID_548c27d0_a710_4ec7_92d1_67a7dee54efb) )
    {
      (*(void (__fastcall **)(InputRedirectionProcessor *))(*(_QWORD *)v4 + 8LL))(v4);
      v7 = (unsigned __int64)v4 + 8;
LABEL_7:
      v4 = (InputRedirectionProcessor *)(v7 & -(__int64)(v4 != 0LL));
LABEL_8:
      *a3 = v4;
      return 0LL;
    }
    if ( IsEqualGUID(v6, &GUID_5b7fc71f_fd86_45ae_9cd7_c6f402bcd2e6) )
    {
      (*(void (__fastcall **)(InputRedirectionProcessor *))(*(_QWORD *)v4 + 8LL))(v4);
      v7 = (unsigned __int64)v4 + 16;
      goto LABEL_7;
    }
    if ( IsEqualGUID(v9, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      (*(void (__fastcall **)(InputRedirectionProcessor *))(*(_QWORD *)v4 + 8LL))(v4);
      v7 = (unsigned __int64)v4 + 24;
      goto LABEL_7;
    }
    return 2147500034LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\lib"
               "\\inputredirectionprocessor.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
