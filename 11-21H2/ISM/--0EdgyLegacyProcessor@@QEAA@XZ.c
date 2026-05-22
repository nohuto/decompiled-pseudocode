/*
 * XREFs of ??0EdgyLegacyProcessor@@QEAA@XZ @ 0x1801A9DBC
 * Callers:
 *     ?Create@EdgyLegacyProcessor@@SAJPEAPEAV1@@Z @ 0x1801A9F0C (-Create@EdgyLegacyProcessor@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0QpcTimeConverter@@QEAA@XZ @ 0x180033384 (--0QpcTimeConverter@@QEAA@XZ.c)
 *     ?Get@EdgyConnection@@SAPEAV1@XZ @ 0x18003B2E8 (-Get@EdgyConnection@@SAPEAV1@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
EdgyLegacyProcessor *__fastcall EdgyLegacyProcessor::EdgyLegacyProcessor(EdgyLegacyProcessor *this)
{
  struct EdgyConnection *v2; // rax
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &EdgyLegacyProcessor::`vftable'{for `IContextualProcessor'};
  *((_QWORD *)this + 1) = &EdgyLegacyProcessor::`vftable'{for `RefCountedObject'};
  *((_DWORD *)this + 6) = -1;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *(_OWORD *)((char *)this + 56) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  v2 = EdgyConnection::Get();
  *((_QWORD *)this + 13) = v2;
  if ( v2 )
    (*(void (__fastcall **)(struct EdgyConnection *))(*(_QWORD *)v2 + 8LL))(v2);
  *((_QWORD *)this + 14) = 0LL;
  QpcTimeConverter::QpcTimeConverter((EdgyLegacyProcessor *)((char *)this + 120));
  if ( !*((_QWORD *)this + 13) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      18LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyimpl.cpp",
      v3);
  return this;
}
