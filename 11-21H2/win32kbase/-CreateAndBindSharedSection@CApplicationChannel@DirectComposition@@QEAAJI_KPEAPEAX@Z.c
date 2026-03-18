/*
 * XREFs of ?CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z @ 0x1C008451C
 * Callers:
 *     NtDCompositionCreateAndBindSharedSection @ 0x1C0084460 (NtDCompositionCreateAndBindSharedSection.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C0085EE4 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?InitializeSection@CDCompMappedSharedSectionMarshaler@DirectComposition@@QEAAJ_KPEAPEAX@Z @ 0x1C00866B8 (-InitializeSection@CDCompMappedSharedSectionMarshaler@DirectComposition@@QEAAJ_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateAndBindSharedSection(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned __int64 a3,
        void **a4)
{
  unsigned __int64 v5; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  DirectComposition::CDCompMappedSharedSectionMarshaler *v10; // rdi
  int v11; // ebx

  v5 = (unsigned int)(a2 - 1);
  if ( a2
    && v5 < *((_QWORD *)this + 10)
    && (_mm_lfence(),
        v8 = *((_QWORD *)this + 7),
        v9 = v5 * *((_QWORD *)this + 11),
        (v10 = *(DirectComposition::CDCompMappedSharedSectionMarshaler **)(v9 + v8)) != 0LL)
    && ((*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*(_QWORD *)(v9 + v8)) == 168
     || (*(unsigned int (__fastcall **)(DirectComposition::CDCompMappedSharedSectionMarshaler *))(*(_QWORD *)v10 + 8LL))(v10) == 46) )
  {
    v11 = DirectComposition::CDCompMappedSharedSectionMarshaler::InitializeSection(v10, a3, a4);
    if ( v11 >= 0 )
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v10);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v11;
}
