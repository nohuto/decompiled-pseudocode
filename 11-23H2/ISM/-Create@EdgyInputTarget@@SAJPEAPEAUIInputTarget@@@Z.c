/*
 * XREFs of ?Create@EdgyInputTarget@@SAJPEAPEAUIInputTarget@@@Z @ 0x1801CC520
 * Callers:
 *     ?EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z @ 0x1801CC664 (-EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003BD6C (--2RefCountedObject@@SAPEAX_K@Z.c)
 */

__int64 __fastcall EdgyInputTarget::Create(struct IInputTarget **a1)
{
  _DWORD *v2; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = RefCountedObject::operator new(0x28uLL);
  if ( v2 )
  {
    v2[8] = 0;
    *((_QWORD *)v2 + 2) = &RefCountedObject::`vftable';
    *(_QWORD *)v2 = &EdgyInputTarget::`vftable'{for `IInputTarget'};
    *((_QWORD *)v2 + 1) = &EdgyInputTarget::`vftable'{for `IDCompInputTarget'};
    *((_QWORD *)v2 + 2) = &EdgyInputTarget::`vftable'{for `RefCountedObject'};
    v2[6] = 1;
    *a1 = (struct IInputTarget *)v2;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x170,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyimpl.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
