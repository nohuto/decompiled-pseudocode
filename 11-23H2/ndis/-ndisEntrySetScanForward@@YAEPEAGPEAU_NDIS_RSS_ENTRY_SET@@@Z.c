/*
 * XREFs of ?ndisEntrySetScanForward@@YAEPEAGPEAU_NDIS_RSS_ENTRY_SET@@@Z @ 0x1C00864AC
 * Callers:
 *     ?ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU_PROCESSOR_NUMBER@@U3@G22@Z @ 0x1C0086994 (-ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisEntrySetScanForward(unsigned __int16 *a1, struct _NDIS_RSS_ENTRY_SET *a2)
{
  unsigned __int8 v2; // r8
  unsigned __int16 v5; // dx
  __int64 v6; // r9
  unsigned __int64 v7; // rcx
  __int64 v9; // rax
  unsigned __int16 v10; // dx
  unsigned __int8 result; // al
  unsigned __int16 v12; // ax

  v2 = 0;
  if ( *a1 != 0xFFFF )
  {
    v12 = *a1 + 1;
    v5 = v12 >> 6;
    v6 = ~((1LL << (v12 & 0x3F)) - 1);
    goto LABEL_5;
  }
  v5 = 0;
  v6 = -1LL;
  while ( 1 )
  {
    v7 = v6 & *((_QWORD *)a2 + v5);
    v6 = -1LL;
    if ( _BitScanForward64((unsigned __int64 *)&v9, v7) )
      break;
    ++v5;
LABEL_5:
    if ( v5 >= 2u )
    {
      v10 = -1;
      goto LABEL_7;
    }
  }
  v2 = 1;
  v10 = v9 + (v5 << 6);
LABEL_7:
  result = v2;
  *a1 = v10;
  return result;
}
