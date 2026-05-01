/*
 * XREFs of ?Release@CStartExperienceManager@@UEAAKXZ @ 0x180138560
 * Callers:
 *     ?Release@CStartExperienceManager@@W7EAAKXZ @ 0x1801F46A0 (-Release@CStartExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CStartExperienceManager@@WCA@EAAKXZ @ 0x1801F46C0 (-Release@CStartExperienceManager@@WCA@EAAKXZ.c)
 *     ?Release@CStartExperienceManager@@WCI@EAAKXZ @ 0x1801F46E0 (-Release@CStartExperienceManager@@WCI@EAAKXZ.c)
 *     ?Release@CStartExperienceManager@@WDA@EAAKXZ @ 0x1801F4700 (-Release@CStartExperienceManager@@WDA@EAAKXZ.c)
 *     ?Release@CStartExperienceManager@@WDI@EAAKXZ @ 0x1801F4720 (-Release@CStartExperienceManager@@WDI@EAAKXZ.c)
 *     ?Release@CStartExperienceManager@@WEA@EAAKXZ @ 0x1801F4740 (-Release@CStartExperienceManager@@WEA@EAAKXZ.c)
 *     ?Release@CStartExperienceManager@@WEI@EAAKXZ @ 0x1801F4760 (-Release@CStartExperienceManager@@WEI@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CStartExperienceManager::Release(CStartExperienceManager *this)
{
  signed __int64 v1; // rdx
  signed __int32 v2; // r8d
  unsigned __int32 v3; // ebx
  bool v5; // zf
  signed __int64 v6; // rax

  v1 = *((_QWORD *)this + 11);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 11, v1 - 1, v1);
    v5 = v1 == v6;
    v1 = v6;
    if ( v5 )
      goto LABEL_6;
  }
  do
    v2 = *(_DWORD *)(2 * v1 + 0x10);
  while ( v2 != 0x7FFFFFFF && v2 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v1 + 16), v2 - 1, v2) );
  v3 = v2 - 1;
LABEL_6:
  if ( !v3 )
  {
    if ( this )
      (*(void (__fastcall **)(CStartExperienceManager *, __int64))(*(_QWORD *)this + 48LL))(this, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
