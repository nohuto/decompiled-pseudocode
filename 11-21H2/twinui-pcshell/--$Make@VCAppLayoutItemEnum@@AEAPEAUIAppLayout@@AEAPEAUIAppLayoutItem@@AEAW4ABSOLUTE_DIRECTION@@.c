/*
 * XREFs of ??$Make@VCAppLayoutItemEnum@@AEAPEAUIAppLayout@@AEAPEAUIAppLayoutItem@@AEAW4ABSOLUTE_DIRECTION@@AEAW4APP_LAYOUT_ENUM_FLAGS@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCAppLayoutItemEnum@@@12@AEAPEAUIAppLayout@@AEAPEAUIAppLayoutItem@@AEAW4ABSOLUTE_DIRECTION@@AEAW4APP_LAYOUT_ENUM_FLAGS@@@Z @ 0x180615FB8
 * Callers:
 *     ?s_CreateInstance@CAppLayoutItemEnum@@SAJPEAUIAppLayout@@PEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ENUM_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x180618DD4 (-s_CreateInstance@CAppLayoutItemEnum@@SAJPEAUIAppLayout@@PEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTIO.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CAppLayoutItemEnum@@QEAA@PEAUIAppLayout@@PEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ENUM_FLAGS@@@Z @ 0x180616058 (--0CAppLayoutItemEnum@@QEAA@PEAUIAppLayout@@PEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYO.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make<CAppLayoutItemEnum,IAppLayout * &,IAppLayoutItem * &,enum ABSOLUTE_DIRECTION &,enum APP_LAYOUT_ENUM_FLAGS &>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4,
        _DWORD *a5)
{
  void *v9; // rax
  __int64 v10; // rdi

  *a1 = 0LL;
  v9 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v10 = CAppLayoutItemEnum::CAppLayoutItemEnum(v9, *a2, *a3, *a4, *a5);
    if ( *a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v10;
  }
  return a1;
}
