/*
 * XREFs of ?ndisMergeEncapsulations@@YAHPEAU_NDIS_OFFLOAD_ENCAPSULATION@@0@Z @ 0x1C00A03D8
 * Callers:
 *     ?ndisMRestoreFilterSettings@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@E@Z @ 0x1C001704C (-ndisMRestoreFilterSettings@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@E@Z.c)
 *     ?ndisOidPreOpenSetEncapsulation@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00A2788 (-ndisOidPreOpenSetEncapsulation@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisMergeEncapsulations(
        struct _NDIS_OFFLOAD_ENCAPSULATION *a1,
        struct _NDIS_OFFLOAD_ENCAPSULATION *a2)
{
  unsigned int Enabled; // r9d
  unsigned int v4; // edx
  unsigned int v5; // eax
  unsigned int EncapsulationType; // eax
  char v7; // al

  if ( a1->Header.Type != 0xA8 || !a1->Header.Revision || a1->Header.Size < 0x1Cu )
    return (unsigned int)-1073741637;
  Enabled = a2->IPv4.Enabled;
  v4 = 0;
  if ( !Enabled && a1->IPv4.Enabled == 1 )
  {
    a2->IPv4.Enabled = 1;
    Enabled = 1;
    a2->IPv4.EncapsulationType = a1->IPv4.EncapsulationType;
    a2->IPv4.HeaderSize = a1->IPv4.HeaderSize;
  }
  v5 = a2->IPv6.Enabled;
  if ( !v5 && a1->IPv6.Enabled == 1 )
  {
    a2->IPv6.Enabled = 1;
    a2->IPv6.EncapsulationType = a1->IPv6.EncapsulationType;
    a2->IPv6.HeaderSize = a1->IPv6.HeaderSize;
    v5 = 1;
  }
  if ( Enabled != 1 || v5 != 1 )
    return v4;
  if ( a2->IPv4.HeaderSize != a2->IPv6.HeaderSize )
    return (unsigned int)-1073741637;
  EncapsulationType = a2->IPv4.EncapsulationType;
  if ( (EncapsulationType & 2) != 0 )
  {
    v7 = a2->IPv6.EncapsulationType & 2;
  }
  else
  {
    if ( (EncapsulationType & 0x10) == 0 )
      return v4;
    v7 = a2->IPv6.EncapsulationType & 0x10;
  }
  return v7 == 0 ? 0xC00000BB : 0;
}
