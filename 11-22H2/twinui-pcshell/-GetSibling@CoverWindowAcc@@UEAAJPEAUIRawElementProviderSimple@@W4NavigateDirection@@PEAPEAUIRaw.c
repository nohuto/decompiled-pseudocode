/*
 * XREFs of ?GetSibling@CoverWindowAcc@@UEAAJPEAUIRawElementProviderSimple@@W4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z @ 0x1805DF450
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CoverWindowAcc::GetSibling(
        CoverWindowAcc *this,
        struct IUnknown *a2,
        enum NavigateDirection a3,
        struct IRawElementProviderFragment **a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  unsigned __int64 v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a4 = 0LL;
  if ( (unsigned int)SHIsSameObject(a2, *((struct IUnknown **)this + 3)) )
  {
    if ( a3 == NavigateDirection_NextSibling )
    {
      v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IRawElementProviderFragment **))this + 4))(
             *((_QWORD *)this + 4),
             &GUID_f7063da8_8359_439c_9297_bbc5299a7d87,
             a4);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 280LL;
LABEL_15:
        v11 = (unsigned int)v8;
        goto LABEL_16;
      }
      return v9;
    }
    return 0;
  }
  if ( (unsigned int)SHIsSameObject(a2, *((struct IUnknown **)this + 4)) )
  {
    if ( a3 == NavigateDirection_NextSibling )
      v9 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IRawElementProviderFragment **))this + 5))(
             *((_QWORD *)this + 5),
             &GUID_f7063da8_8359_439c_9297_bbc5299a7d87,
             a4);
    else
      v9 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IRawElementProviderFragment **))this + 3))(
             *((_QWORD *)this + 3),
             &GUID_f7063da8_8359_439c_9297_bbc5299a7d87,
             a4);
    if ( (v9 & 0x80000000) != 0 )
    {
      v11 = v9;
      v10 = 284LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"pcshell\\twinui\\tabletmode\\lib\\coverwindowacc.cpp",
        (const char *)v11);
      return v9;
    }
    return v9;
  }
  if ( a3 == NavigateDirection_NextSibling )
    return 0;
  v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IRawElementProviderFragment **))this + 4))(
         *((_QWORD *)this + 4),
         &GUID_f7063da8_8359_439c_9297_bbc5299a7d87,
         a4);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 289LL;
    goto LABEL_15;
  }
  return v9;
}
