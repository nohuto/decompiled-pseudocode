/*
 * XREFs of ?Release@CToastCenterExperienceManager@@UEAAKXZ @ 0x180146060
 * Callers:
 *     ?Release@CToastCenterExperienceManager@@W7EAAKXZ @ 0x1801F38F0 (-Release@CToastCenterExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CToastCenterExperienceManager@@WBA@EAAKXZ @ 0x1801F3910 (-Release@CToastCenterExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CToastCenterExperienceManager@@WBI@EAAKXZ @ 0x1801F3930 (-Release@CToastCenterExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CToastCenterExperienceManager@@WCA@EAAKXZ @ 0x1801F3950 (-Release@CToastCenterExperienceManager@@WCA@EAAKXZ.c)
 *     ?Release@CToastCenterExperienceManager@@WCI@EAAKXZ @ 0x1801F3970 (-Release@CToastCenterExperienceManager@@WCI@EAAKXZ.c)
 *     ?Release@CToastCenterExperienceManager@@WDA@EAAKXZ @ 0x1801F3990 (-Release@CToastCenterExperienceManager@@WDA@EAAKXZ.c)
 *     ?Release@CToastCenterExperienceManager@@WDI@EAAKXZ @ 0x1801F39B0 (-Release@CToastCenterExperienceManager@@WDI@EAAKXZ.c)
 *     ?Release@CToastCenterExperienceManager@@WEA@EAAKXZ @ 0x1801F39D0 (-Release@CToastCenterExperienceManager@@WEA@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CToastCenterExperienceManager::Release(CToastCenterExperienceManager *this)
{
  signed __int64 v1; // rdx
  signed __int32 v2; // r8d
  unsigned __int32 v3; // ebx
  bool v5; // zf
  signed __int64 v6; // rax

  v1 = *((_QWORD *)this + 10);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 10, v1 - 1, v1);
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
      (*(void (__fastcall **)(CToastCenterExperienceManager *, __int64))(*(_QWORD *)this + 88LL))(this, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
