/*
 * XREFs of ndisValidOid @ 0x1C0010600
 * Callers:
 *     ndisQueryStatisticsOids @ 0x1C0012470 (ndisQueryStatisticsOids.c)
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x1C01033C0 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisValidOid(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  unsigned int v5; // ecx
  unsigned int v6; // edx

  v2 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(v2 + 32) < 6u && (a2 & 0xFF000000) == 0xFF000000 || (*(_DWORD *)(v2 + 120) & 0x80u) != 0 )
  {
    LOBYTE(v4) = 1;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 16);
    v5 = 0;
    if ( v4 )
    {
      v6 = *(_DWORD *)(v4 + 4);
      if ( v6 )
      {
        do
        {
          if ( *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4LL * v5) == a2 )
            break;
          ++v5;
        }
        while ( v5 < v6 );
      }
      LOBYTE(v4) = v5 < v6;
    }
  }
  return v4;
}
