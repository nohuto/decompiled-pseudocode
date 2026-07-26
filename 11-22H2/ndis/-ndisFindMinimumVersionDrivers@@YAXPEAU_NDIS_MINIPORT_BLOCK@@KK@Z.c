/*
 * XREFs of ?ndisFindMinimumVersionDrivers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x1C01160C8
 * Callers:
 *     ?ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x1C011606C (-ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisFindMinimumVersionDrivers(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2, unsigned int a3)
{
  _NDIS_FILTER_BLOCK *LowestFilter; // r10
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // r8
  unsigned __int8 v7; // al
  unsigned __int8 MajorNdisVersion; // cl
  unsigned __int8 MinorNdisVersion; // r11
  unsigned __int8 MinimumNdisMajorVersion; // cl
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rax
  unsigned __int8 v12; // al
  _NDIS_OPEN_BLOCK *j; // rdx
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rax
  unsigned __int8 v15; // al
  __int64 k; // r8
  __int64 i; // rdx

  LowestFilter = a1->LowestFilter;
  DriverHandle = a1->DriverHandle;
  v7 = 6;
  MajorNdisVersion = DriverHandle->MajorNdisVersion;
  if ( MajorNdisVersion < 6u )
  {
    a1->MinimumNdisMajorVersion = 6;
    MinorNdisVersion = 0;
  }
  else
  {
    a1->MinimumNdisMajorVersion = MajorNdisVersion;
    v7 = MajorNdisVersion;
    MinorNdisVersion = DriverHandle->MinorNdisVersion;
  }
  a1->MinimumNdisMinorVersion = MinorNdisVersion;
  MinimumNdisMajorVersion = v7;
  if ( a2 && (a2 < v7 || a2 == v7 && a3 < MinorNdisVersion) )
  {
    MinimumNdisMajorVersion = a2;
    a1->MinimumNdisMajorVersion = a2;
    a1->MinimumNdisMinorVersion = a3;
  }
  while ( LowestFilter )
  {
    if ( LowestFilter->FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion < MinimumNdisMajorVersion )
    {
      for ( i = 0LL; i < 2; ++i )
        *(&a1->MinimumNdisMajorVersion + i) = *(&LowestFilter->FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion
                                              + i);
    }
    FilterDriver = LowestFilter->FilterDriver;
    MinimumNdisMajorVersion = a1->MinimumNdisMajorVersion;
    if ( FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion == MinimumNdisMajorVersion )
    {
      v12 = FilterDriver->DefaultFilterCharacteristics.MinorNdisVersion;
      if ( v12 < a1->MinimumNdisMinorVersion )
        a1->MinimumNdisMinorVersion = v12;
    }
    LowestFilter = LowestFilter->HigherFilter;
  }
  for ( j = a1->OpenQueue; j; j = j->MiniportNextOpen )
  {
    if ( j->ProtocolHandle->MajorNdisVersion < MinimumNdisMajorVersion )
    {
      for ( k = 0LL; k < 2; ++k )
        *(&a1->MinimumNdisMajorVersion + k) = *(&j->ProtocolHandle->MajorNdisVersion + k);
    }
    ProtocolHandle = j->ProtocolHandle;
    MinimumNdisMajorVersion = a1->MinimumNdisMajorVersion;
    if ( ProtocolHandle->MajorNdisVersion == MinimumNdisMajorVersion )
    {
      v15 = ProtocolHandle->MinorNdisVersion;
      if ( v15 < a1->MinimumNdisMinorVersion )
        a1->MinimumNdisMinorVersion = v15;
    }
  }
}
