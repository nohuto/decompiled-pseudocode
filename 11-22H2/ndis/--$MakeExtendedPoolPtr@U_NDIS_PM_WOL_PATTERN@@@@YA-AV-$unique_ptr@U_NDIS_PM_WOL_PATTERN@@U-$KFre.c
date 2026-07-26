/*
 * XREFs of ??$MakeExtendedPoolPtr@U_NDIS_PM_WOL_PATTERN@@@@YA?AV?$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@KKPEAK@Z @ 0x1C0137134
 * Callers:
 *     ?ndisXlateAddPacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C009A8B8 (-ndisXlateAddPacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 * Callees:
 *     ??$MakeSizedPoolPtr@U_NDIS_PM_WOL_PATTERN@@@@YA?AV?$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@K_K@Z @ 0x1C013720C (--$MakeSizedPoolPtr@U_NDIS_PM_WOL_PATTERN@@@@YA-AV-$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U-$KFreePo.c)
 */

_QWORD *__fastcall MakeExtendedPoolPtr<_NDIS_PM_WOL_PATTERN>(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v6; // esi
  PVOID v7; // rax
  PVOID P; // [rsp+48h] [rbp+20h] BYREF

  if ( a4 )
    *a4 = 0;
  v6 = a3 + 196;
  if ( a3 >= 0xFFFFFF3C )
  {
    *a1 = 0LL;
  }
  else
  {
    MakeSizedPoolPtr<_NDIS_PM_WOL_PATTERN>(&P, a2, v6);
    v7 = P;
    if ( P )
    {
      if ( a4 )
        *a4 = v6;
      *a1 = v7;
    }
    else
    {
      *a1 = 0LL;
    }
  }
  return a1;
}
