/*
 * XREFs of ?SetSize@CText@@UEAAJPEBUtagSIZE@@@Z @ 0x18000D140
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CText::SetSize(CText *this, const struct tagSIZE *a2)
{
  char v4; // cl
  LONG v5; // eax
  bool v6; // zf

  v4 = *((_BYTE *)this + 288);
  if ( (v4 & 1) == 0
    || a2->cy != *((_DWORD *)this + 33)
    || (v5 = *((_DWORD *)this + 102), a2->cx < v5)
    || *((_DWORD *)this + 32) < v5 )
  {
    (*(void (__fastcall **)(CText *, __int64))(*(_QWORD *)this + 24LL))(this, 4096LL);
    v4 = *((_BYTE *)this + 288);
  }
  if ( (v4 & 4) != 0 && a2->cx != *((_DWORD *)this + 32) )
    (*(void (__fastcall **)(CText *, __int64))(*(_QWORD *)this + 24LL))(this, 0x8000LL);
  if ( *((_DWORD *)this + 32) != a2->cx || *((_DWORD *)this + 33) != a2->cy )
  {
    v6 = (*((_BYTE *)this + 92) & 1) == 0;
    *((struct tagSIZE *)this + 16) = *a2;
    if ( !v6 )
      (*(void (__fastcall **)(CText *, __int64))(*(_QWORD *)this + 24LL))(this, 16LL);
    (*(void (__fastcall **)(CText *, __int64))(*(_QWORD *)this + 24LL))(this, 2LL);
  }
  return 0LL;
}
