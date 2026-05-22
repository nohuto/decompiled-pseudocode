/*
 * XREFs of _lambda_058a17f7b797e76983050a020a22a1d6_::operator() @ 0x1800FD8D4
 * Callers:
 *     wil::init_once_nothrow__lambda_058a17f7b797e76983050a020a22a1d6___ @ 0x1800FD81C (wil--init_once_nothrow__lambda_058a17f7b797e76983050a020a22a1d6___.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180037D1C (--2RefCountedObject@@SAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 lambda_058a17f7b797e76983050a020a22a1d6_::operator()()
{
  _QWORD *v0; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  qword_180278230 = 0LL;
  v0 = RefCountedObject::operator new(0x10uLL);
  if ( v0 )
  {
    v0[1] = 0LL;
    *v0 = &RefCountedObject::`vftable';
    *((_DWORD *)v0 + 2) = 1;
    *v0 = &LampArrayTelemetry::`vftable';
    qword_180278230 = (RefCountedObject *)v0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraytelemetry.cpp",
      (const char *)0x8007000ELL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraytelemetry.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
