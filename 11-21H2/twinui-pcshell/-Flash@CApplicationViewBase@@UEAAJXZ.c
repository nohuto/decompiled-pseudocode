/*
 * XREFs of ?Flash@CApplicationViewBase@@UEAAJXZ @ 0x180314C80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationViewBase::Flash(CApplicationViewBase *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  BOOL v4; // eax
  UINT uCount; // ecx
  $C811A85A3CBAF233E045382DA27E29BF pfwi; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  HWND v8; // [rsp+50h] [rbp+10h] BYREF

  v1 = (*(__int64 (__fastcall **)(CApplicationViewBase *, HWND *))(*(_QWORD *)this + 504LL))(this, &v8);
  v2 = v1;
  if ( v1 >= 0 )
  {
    *(&pfwi.cbSize + 1) = 0;
    *(_QWORD *)&pfwi.uCount = 0LL;
    *(&pfwi.dwTimeout + 1) = 0;
    pfwi.hwnd = v8;
    pfwi.cbSize = 32;
    pfwi.dwFlags = 14;
    v4 = SystemParametersInfoW(0x2004u, 0, &pfwi.uCount, 0);
    uCount = pfwi.uCount;
    if ( !v4 )
      uCount = 1;
    pfwi.uCount = uCount;
    FlashWindowEx(&pfwi);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA2,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
      (const char *)(unsigned int)v1);
    return v2;
  }
}
