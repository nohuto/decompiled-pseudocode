/*
 * XREFs of ??1SearchBoxOnTaskbarSearchAppPositioner@@UEAA@XZ @ 0x18047F970
 * Callers:
 *     ??_ESearchBoxOnTaskbarSearchAppPositioner@@UEAAPEAXI@Z @ 0x18047F9C0 (--_ESearchBoxOnTaskbarSearchAppPositioner@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall SearchBoxOnTaskbarSearchAppPositioner::~SearchBoxOnTaskbarSearchAppPositioner(
        SearchBoxOnTaskbarSearchAppPositioner *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = 0LL;
  if ( v2 )
    (**v2)(v2, 1LL);
  *(_QWORD *)this = &ISearchAppPositioner::`vftable';
}
