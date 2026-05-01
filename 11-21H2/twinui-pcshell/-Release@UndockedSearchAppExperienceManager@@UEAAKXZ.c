/*
 * XREFs of ?Release@UndockedSearchAppExperienceManager@@UEAAKXZ @ 0x18012EE90
 * Callers:
 *     ?Release@UndockedSearchAppExperienceManager@@W7EAAKXZ @ 0x1801F5C70 (-Release@UndockedSearchAppExperienceManager@@W7EAAKXZ.c)
 *     ?Release@UndockedSearchAppExperienceManager@@WBA@EAAKXZ @ 0x1801F5C90 (-Release@UndockedSearchAppExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@UndockedSearchAppExperienceManager@@WBI@EAAKXZ @ 0x1801F5CB0 (-Release@UndockedSearchAppExperienceManager@@WBI@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::Release(UndockedSearchAppExperienceManager *this)
{
  signed __int64 v1; // rdx
  signed __int32 v2; // r8d
  unsigned __int32 v3; // ebx
  bool v5; // zf
  signed __int64 v6; // rax

  v1 = *((_QWORD *)this + 5);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 5, v1 - 1, v1);
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
      (*(void (__fastcall **)(UndockedSearchAppExperienceManager *, __int64))(*(_QWORD *)this + 464LL))(this, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
