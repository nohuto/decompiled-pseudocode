/*
 * XREFs of ?Create@SystemButtonProcessor@@SAJPEAPEAV1@@Z @ 0x180039C68
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035B8C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SystemButtonProcessor::Create(struct SystemButtonProcessor **a1)
{
  unsigned int v1; // ebx
  _QWORD *v3; // rax
  __int64 v5; // rdx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = 0;
  if ( !a1 )
  {
    v1 = -2147024809;
    v5 = 21LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\systembutton\\system\\li"
                    "b\\systembuttonprocessor.cpp",
      (const char *)v1,
      v6);
    return v1;
  }
  v3 = RefCountedObject::operator new(0x20uLL);
  if ( !v3 )
  {
    v1 = -2147024882;
    v5 = 27LL;
    goto LABEL_7;
  }
  *v3 = 0LL;
  v3[2] = 0LL;
  v3[3] = 0LL;
  v3[1] = &RefCountedObject::`vftable';
  *v3 = &SystemButtonProcessor::`vftable'{for `IContextualProcessor'};
  v3[1] = &SystemButtonProcessor::`vftable'{for `RefCountedObject'};
  *((_DWORD *)v3 + 4) = 1;
  v3[3] = 0LL;
  *a1 = (struct SystemButtonProcessor *)v3;
  return v1;
}
