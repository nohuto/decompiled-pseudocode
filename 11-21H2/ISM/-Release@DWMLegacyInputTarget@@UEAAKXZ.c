/*
 * XREFs of ?Release@DWMLegacyInputTarget@@UEAAKXZ @ 0x18000AB90
 * Callers:
 *     ?Release@DWMLegacyInputTarget@@W7EAAKXZ @ 0x180053540 (-Release@DWMLegacyInputTarget@@W7EAAKXZ.c)
 *     ?Release@DWMLegacyInputTarget@@WBA@EAAKXZ @ 0x180053560 (-Release@DWMLegacyInputTarget@@WBA@EAAKXZ.c)
 *     ?Release@DWMLegacyInputTarget@@WBI@EAAKXZ @ 0x180053580 (-Release@DWMLegacyInputTarget@@WBI@EAAKXZ.c)
 *     ?Release@DWMLegacyInputTarget@@WCA@EAAKXZ @ 0x1800535A0 (-Release@DWMLegacyInputTarget@@WCA@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMLegacyInputTarget::Release(DWMLegacyInputTarget *this)
{
  char *v1; // rdi
  unsigned __int32 v2; // ebx
  __int64 v4; // rax
  __int64 v5; // r8

  v1 = (char *)this + 32;
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 10);
  if ( !v2 )
  {
    v4 = *(_QWORD *)v1;
    *((_DWORD *)this + 10) = 1;
    (*(void (__fastcall **)(char *))(v4 + 32))((char *)this + 32);
    v5 = *(_QWORD *)v1;
    *((_DWORD *)v1 + 2) = 0;
    (*(void (__fastcall **)(char *, __int64))(v5 + 24))(v1, 1LL);
  }
  return v2;
}
