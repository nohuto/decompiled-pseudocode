/*
 * XREFs of ?QueryInterface@InjectionRawInputProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F7930
 * Callers:
 *     ?QueryInterface@InjectionRawInputProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180079F70 (-QueryInterface@InjectionRawInputProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall InjectionRawInputProvider::QueryInterface(
        InjectionRawInputProvider *this,
        const struct _GUID *a2,
        InjectionRawInputProvider **a3)
{
  __int64 v4; // rax
  InjectionRawInputProvider *v5; // rdx
  __int64 v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\injection\\lib\\injectionrawinputprovider.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v4 )
  {
    v5 = (InjectionRawInputProvider *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
LABEL_11:
    _InterlockedIncrement((volatile signed __int32 *)this + 4);
    *a3 = v5;
    return 0LL;
  }
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data4;
  if ( !v6 )
  {
    v5 = this;
    goto LABEL_11;
  }
  *a3 = 0LL;
  return 2147500034LL;
}
