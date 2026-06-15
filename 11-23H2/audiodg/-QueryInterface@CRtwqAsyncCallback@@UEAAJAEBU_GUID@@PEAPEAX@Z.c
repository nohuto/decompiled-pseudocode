/*
 * XREFs of ?QueryInterface@CRtwqAsyncCallback@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140074E70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400190C0 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CRtwqAsyncCallback::QueryInterface(CRtwqAsyncCallback *this, const struct _GUID *a2, void **a3)
{
  _QWORD *v4; // r8
  __int64 v5; // r9
  const struct _GUID *v6; // r10
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    if ( IsEqualGUID(a2, &GUID_a27003cf_2354_4f2a_8d6a_ab7cff15437e)
      || IsEqualGUID(v6, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *v4 = v5;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      return 0LL;
    }
    else
    {
      *v4 = 0LL;
      return 2147500034LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAF,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
