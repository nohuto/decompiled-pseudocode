/*
 * XREFs of RaidGetSrbIoctlFromIrp @ 0x1C00115B4
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000FB70 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C0011720 (RaUnitScsiMiniportIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidGetSrbIoctlFromIrp(__int64 a1, _QWORD *a2, _DWORD *a3, unsigned int *a4, int a5)
{
  __int64 v5; // rax
  __int64 v7; // r10
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // rdx
  unsigned int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // eax

  v5 = *(_QWORD *)(a1 + 184);
  v7 = *(_QWORD *)(a1 + 24);
  v9 = *(unsigned int *)(v5 + 16);
  if ( (unsigned int)v9 < 0x1C )
    return 3221225485LL;
  if ( *(_DWORD *)v7 != 28 )
    return 3221225561LL;
  v10 = *(unsigned int *)(v7 + 24) + 28LL;
  if ( v10 > 0xFFFFFFFF )
    return 3221225485LL;
  v11 = *(_DWORD *)(v5 + 8);
  if ( v11 < (unsigned int)v10 && (unsigned int)v9 < (unsigned int)v10 )
    return 3221225507LL;
  if ( a2 )
    *a2 = v7;
  if ( a3 )
    *a3 = v10;
  if ( a4 )
    *a4 = v11;
  if ( a5 != 1 )
  {
LABEL_21:
    v14 = *(_DWORD *)(v7 + 16);
    if ( v14 == 1771008 )
    {
      if ( (unsigned int)v9 >= 0x22 )
      {
        if ( *(_WORD *)(v7 + 32) != 224 || !*(_BYTE *)(a1 + 64) )
          return 0LL;
        return 3221225506LL;
      }
    }
    else
    {
      if ( v14 != 1771040 )
        return 0LL;
      if ( (unsigned int)v9 >= 0x28 )
      {
        if ( *(_DWORD *)(v7 + 36) != 1 && *(_BYTE *)(a1 + 64) )
          return 3221225506LL;
        if ( (unsigned int)v9 >= (unsigned int)v10
          && *(unsigned int *)(v7 + 44) + (unsigned __int64)*(unsigned int *)(v7 + 48) <= v9 )
        {
          return 0LL;
        }
      }
    }
    return 3221225485LL;
  }
  v12 = *(_QWORD *)(v7 + 4);
  if ( v12 == 0x4B53494452425948LL
    || v12 == 0x4B53494449534353LL
    || v12 == 0x455241574D524946LL
    || v12 == 0x464E494555455551LL
    || v12 == 0x5551455441455243LL
    || v12 == 0x55514554454C4544LL
    || v12 == 0x464E495255444E45LL
    || v12 == 0x524F545350534155LL )
  {
    v13 = *(_QWORD *)(v7 + 4);
    if ( v13 != 0x4B53494452425948LL
      && v13 != 0x455241574D524946LL
      && v13 != 0x464E494555455551LL
      && v13 != 0x5551455441455243LL
      && v13 != 0x55514554454C4544LL
      && v13 != 0x464E495255444E45LL
      && *(_BYTE *)(a1 + 64) )
    {
      return 3221225506LL;
    }
    goto LABEL_21;
  }
  return 3221225488LL;
}
