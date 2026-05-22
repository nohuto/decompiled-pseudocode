/*
 * XREFs of ?Create@SystemButtonProcessor@@SAJPEAPEAV1@@Z @ 0x18003BBB0
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035D10 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003BD6C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??1?$unique_ptr@VSystemButtonProcessor@@U?$default_delete@VSystemButtonProcessor@@@std@@@std@@QEAA@XZ @ 0x1801D3100 (--1-$unique_ptr@VSystemButtonProcessor@@U-$default_delete@VSystemButtonProcessor@@@std@@@std@@QE.c)
 */

__int64 __fastcall SystemButtonProcessor::Create(struct SystemButtonProcessor **a1)
{
  _QWORD *v2; // rax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( a1 )
  {
    v2 = RefCountedObject::operator new(0x20uLL);
    if ( v2 )
    {
      *v2 = 0LL;
      v2[2] = 0LL;
      v2[3] = 0LL;
      v2[3] = 0LL;
      v2[1] = &RefCountedObject::`vftable';
      *v2 = &SystemButtonProcessor::`vftable'{for `IContextualProcessor'};
      v2[1] = &SystemButtonProcessor::`vftable'{for `RefCountedObject'};
      *((_DWORD *)v2 + 4) = 1;
      *a1 = (struct SystemButtonProcessor *)v2;
      return 0LL;
    }
    v4 = -2147024882;
    v5 = 27LL;
  }
  else
  {
    v4 = -2147024809;
    v5 = 21LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\systembutton\\system\\lib\\syst"
             "embuttonprocessor.cpp",
    (const char *)v4);
  std::unique_ptr<SystemButtonProcessor>::~unique_ptr<SystemButtonProcessor>(&v7);
  return v4;
}
