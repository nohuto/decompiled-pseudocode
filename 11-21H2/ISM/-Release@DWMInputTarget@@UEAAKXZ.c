/*
 * XREFs of ?Release@DWMInputTarget@@UEAAKXZ @ 0x18000BE30
 * Callers:
 *     ?Release@DWMInputTarget@@W7EAAKXZ @ 0x18004F880 (-Release@DWMInputTarget@@W7EAAKXZ.c)
 *     ?Release@DWMInputTarget@@WBA@EAAKXZ @ 0x18004F8A0 (-Release@DWMInputTarget@@WBA@EAAKXZ.c)
 *     ?Release@DWMInputTarget@@WBI@EAAKXZ @ 0x18004F8C0 (-Release@DWMInputTarget@@WBI@EAAKXZ.c)
 *     ?Release@DWMInputTarget@@WCA@EAAKXZ @ 0x18004F8E0 (-Release@DWMInputTarget@@WCA@EAAKXZ.c)
 *     ?Release@DWMInputTarget@@WCI@EAAKXZ @ 0x18004F900 (-Release@DWMInputTarget@@WCI@EAAKXZ.c)
 *     ?Release@DWMInputTarget@@WDA@EAAKXZ @ 0x18004F920 (-Release@DWMInputTarget@@WDA@EAAKXZ.c)
 *     ?Release@DWMInputTarget@@WDI@EAAKXZ @ 0x18004F940 (-Release@DWMInputTarget@@WDI@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputTarget::Release(DWMInputTarget *this)
{
  char *v1; // rdi
  unsigned __int32 v2; // ebx
  __int64 v4; // rax
  __int64 v5; // r8

  v1 = (char *)this + 56;
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 16);
  if ( !v2 )
  {
    v4 = *(_QWORD *)v1;
    *((_DWORD *)this + 16) = 1;
    (*(void (__fastcall **)(char *))(v4 + 32))((char *)this + 56);
    v5 = *(_QWORD *)v1;
    *((_DWORD *)v1 + 2) = 0;
    (*(void (__fastcall **)(char *, __int64))(v5 + 24))(v1, 1LL);
  }
  return v2;
}
