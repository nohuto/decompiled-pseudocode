/*
 * XREFs of ?GetPatternProvider@AccessibleElementBase@@UEAAJHPEAPEAUIUnknown@@@Z @ 0x1804CCD00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall AccessibleElementBase::GetPatternProvider(AccessibleElementBase *this, int a2, struct IUnknown **a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 *v7; // rax
  int v8; // r8d
  _OWORD v9[3]; // [rsp+20h] [rbp-48h] BYREF
  int v10; // [rsp+50h] [rbp-18h]
  int v11; // [rsp+54h] [rbp-14h]
  __int64 v12; // [rsp+58h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( a2 == 10009 && *((_DWORD *)this + 31) == 50032 )
  {
    v4 = (**(__int64 (__fastcall ***)(AccessibleElementBase *, GUID *, struct IUnknown **, struct IUnknown **))this)(
           this,
           &GUID_00000000_0000_0000_c000_000000000046,
           a3,
           a3);
    if ( v4 < 0 )
    {
      v5 = 22LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
        (const char *)(unsigned int)v4);
    }
  }
  else
  {
    v7 = (__int64 *)v9;
    v8 = *((_DWORD *)this + 30);
    v9[0] = _mm_load_si128((const __m128i *)&_xmm);
    v10 = 256;
    v9[2] = _mm_load_si128((const __m128i *)&_xmm);
    v11 = 10006;
    v9[1] = _mm_load_si128((const __m128i *)&_xmm);
    while ( (v8 & *(_DWORD *)v7) == 0 || a2 != *((_DWORD *)v7 + 1) )
    {
      if ( ++v7 == &v12 )
        return 2147746308LL;
    }
    v4 = (**(__int64 (__fastcall ***)(AccessibleElementBase *, GUID *, struct IUnknown **))this)(
           this,
           &GUID_00000000_0000_0000_c000_000000000046,
           a3);
    if ( v4 < 0 )
    {
      v5 = 43LL;
      goto LABEL_5;
    }
  }
  return (unsigned int)v4;
}
