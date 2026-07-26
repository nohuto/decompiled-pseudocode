/*
 * XREFs of ??$MakeExtendedPoolPtr@U_NDIS_PM_PACKET_PATTERN@@@@YA?AV?$unique_ptr@U_NDIS_PM_PACKET_PATTERN@@U?$KFreePool@U_NDIS_PM_PACKET_PATTERN@@@@@wistd@@KKPEAK@Z @ 0x1C012B274
 * Callers:
 *     ?ndisXlateAddWolPatternToPacketPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0094AD0 (-ndisXlateAddWolPatternToPacketPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MakeExtendedPoolPtr<_NDIS_PM_PACKET_PATTERN>(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4)
{
  unsigned int v6; // esi
  __int64 Pool2; // rax

  if ( a4 )
    *a4 = 0;
  v6 = a3 + 24;
  if ( a3 >= 0xFFFFFFE8 )
  {
    *a1 = 0LL;
  }
  else
  {
    Pool2 = ExAllocatePool2(64LL, v6, 2021082190);
    if ( Pool2 )
    {
      *(_OWORD *)Pool2 = 0LL;
      *(_QWORD *)(Pool2 + 16) = 0LL;
      if ( a4 )
        *a4 = v6;
      *a1 = Pool2;
    }
    else
    {
      *a1 = 0LL;
    }
  }
  return a1;
}
