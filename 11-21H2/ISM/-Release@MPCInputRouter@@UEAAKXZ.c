/*
 * XREFs of ?Release@MPCInputRouter@@UEAAKXZ @ 0x180011E50
 * Callers:
 *     ?Release@MPCInputRouter@@W7EAAKXZ @ 0x18004FD60 (-Release@MPCInputRouter@@W7EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WBA@EAAKXZ @ 0x18004FD80 (-Release@MPCInputRouter@@WBA@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WBI@EAAKXZ @ 0x18004FDA0 (-Release@MPCInputRouter@@WBI@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WCA@EAAKXZ @ 0x18004FDC0 (-Release@MPCInputRouter@@WCA@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WCI@EAAKXZ @ 0x18004FDE0 (-Release@MPCInputRouter@@WCI@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WDA@EAAKXZ @ 0x18004FE00 (-Release@MPCInputRouter@@WDA@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WDAA@EAAKXZ @ 0x18004FE20 (-Release@MPCInputRouter@@WDAA@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WDAI@EAAKXZ @ 0x18004FE40 (-Release@MPCInputRouter@@WDAI@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WDI@EAAKXZ @ 0x18004FE60 (-Release@MPCInputRouter@@WDI@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WEA@EAAKXZ @ 0x18004FE80 (-Release@MPCInputRouter@@WEA@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WEI@EAAKXZ @ 0x18004FEA0 (-Release@MPCInputRouter@@WEI@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCInputRouter::Release(MPCInputRouter *this)
{
  char *v1; // rdi
  unsigned __int32 v2; // ebx
  __int64 v4; // rax
  __int64 v5; // r8

  v1 = (char *)this + 72;
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 20);
  if ( !v2 )
  {
    v4 = *(_QWORD *)v1;
    *((_DWORD *)this + 20) = 1;
    (*(void (__fastcall **)(char *))(v4 + 32))((char *)this + 72);
    v5 = *(_QWORD *)v1;
    *((_DWORD *)v1 + 2) = 0;
    (*(void (__fastcall **)(char *, __int64))(v5 + 24))(v1, 1LL);
  }
  return v2;
}
