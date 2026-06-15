/*
 * XREFs of ?Order@CAccessAce@CDacl@ATL@@SAHAEBV123@0@Z @ 0x180063374
 * Callers:
 *     ?PrepareAcesForACL@CDacl@ATL@@EEBAXXZ @ 0x180063200 (-PrepareAcesForACL@CDacl@ATL@@EEBAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CDacl::CAccessAce::Order(
        const struct ATL::CDacl::CAccessAce *a1,
        const struct ATL::CDacl::CAccessAce *a2)
{
  char v4; // al
  unsigned int v5; // ebx

  if ( (*((_BYTE *)a1 + 132) & 0x10) != 0 )
  {
    if ( (*((_BYTE *)a2 + 132) & 0x10) == 0 )
      return 0xFFFFFFFFLL;
  }
  else if ( (*((_BYTE *)a2 + 132) & 0x10) != 0 )
  {
    return 1LL;
  }
  v4 = *((_BYTE *)a2 + 144);
  v5 = 0;
  if ( !*((_BYTE *)a1 + 144) )
  {
    if ( !v4 )
      goto LABEL_5;
    return 1LL;
  }
  if ( !v4 )
    return 0xFFFFFFFFLL;
LABEL_5:
  if ( (*(unsigned __int8 (__fastcall **)(const struct ATL::CDacl::CAccessAce *))(*(_QWORD *)a1 + 32LL))(a1)
    && !(*(unsigned __int8 (__fastcall **)(const struct ATL::CDacl::CAccessAce *))(*(_QWORD *)a2 + 32LL))(a2) )
  {
    return 0xFFFFFFFFLL;
  }
  if ( (*(unsigned __int8 (__fastcall **)(const struct ATL::CDacl::CAccessAce *))(*(_QWORD *)a1 + 32LL))(a1) )
    return 0LL;
  LOBYTE(v5) = (*(unsigned __int8 (__fastcall **)(const struct ATL::CDacl::CAccessAce *))(*(_QWORD *)a2 + 32LL))(a2) != 0;
  return v5;
}
