/*
 * XREFs of ?Order@CAccessAce@CDacl@ATL@@SAHAEBV123@0@Z @ 0x18003EFBC
 * Callers:
 *     ?PrepareAcesForACL@CDacl@ATL@@EEBAXXZ @ 0x18003EE80 (-PrepareAcesForACL@CDacl@ATL@@EEBAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CDacl::CAccessAce::Order(
        const struct ATL::CDacl::CAccessAce *a1,
        const struct ATL::CDacl::CAccessAce *a2)
{
  char v3; // al
  char v5; // al

  v3 = *((_BYTE *)a2 + 132) & 0x10;
  if ( (*((_BYTE *)a1 + 132) & 0x10) != 0 )
  {
    if ( !v3 )
      return 0xFFFFFFFFLL;
  }
  else if ( v3 )
  {
    return 1LL;
  }
  v5 = *((_BYTE *)a2 + 144);
  if ( !*((_BYTE *)a1 + 144) )
  {
    if ( v5 )
      return 1LL;
    goto LABEL_5;
  }
  if ( !v5 )
    return 0xFFFFFFFFLL;
LABEL_5:
  if ( (*(unsigned __int8 (__fastcall **)(const struct ATL::CDacl::CAccessAce *))(*(_QWORD *)a1 + 32LL))(a1)
    && !(*(unsigned __int8 (__fastcall **)(const struct ATL::CDacl::CAccessAce *))(*(_QWORD *)a2 + 32LL))(a2) )
  {
    return 0xFFFFFFFFLL;
  }
  return !(*(unsigned __int8 (__fastcall **)(const struct ATL::CDacl::CAccessAce *))(*(_QWORD *)a1 + 32LL))(a1)
      && (*(unsigned __int8 (__fastcall **)(const struct ATL::CDacl::CAccessAce *))(*(_QWORD *)a2 + 32LL))(a2);
}
