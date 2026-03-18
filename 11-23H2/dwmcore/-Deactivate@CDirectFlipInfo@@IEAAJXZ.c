/*
 * XREFs of ?Deactivate@CDirectFlipInfo@@IEAAJXZ @ 0x1801F6B14
 * Callers:
 *     ?Reset@CDirectFlipInfo@@QEAAXXZ @ 0x1800FC77C (-Reset@CDirectFlipInfo@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDirectFlipInfo::Deactivate(CDirectFlipInfo *this, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = *((_BYTE *)this + 125);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 2) + 248LL))(
    *((_QWORD *)this + 2),
    *((_QWORD *)this + 3),
    a3);
  result = 0LL;
  *((_DWORD *)this + 12) = 2;
  *((_BYTE *)this + 124) = 0;
  return result;
}
