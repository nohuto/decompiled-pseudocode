/*
 * XREFs of ?ndisFindMinimumVersionDrivers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x1C0109CC4
 * Callers:
 *     ?ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x1C0109C6C (-ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisFindMinimumVersionDrivers(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2, unsigned int a3)
{
  unsigned __int8 v4; // al
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rcx
  _NDIS_FILTER_BLOCK *LowestFilter; // r10
  unsigned __int8 MajorNdisVersion; // r11
  unsigned __int8 MinorNdisVersion; // cl
  unsigned __int8 MinimumNdisMajorVersion; // cl
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rax
  bool v11; // zf
  unsigned __int8 v12; // dl
  _NDIS_OPEN_BLOCK *OpenQueue; // rdx
  unsigned __int8 v14; // al
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rcx
  bool v16; // zf
  unsigned __int8 v17; // r8
  __int64 i; // rdx
  __int64 j; // r8

  v4 = 6;
  DriverHandle = a1->DriverHandle;
  LowestFilter = a1->LowestFilter;
  MajorNdisVersion = DriverHandle->MajorNdisVersion;
  if ( MajorNdisVersion < 6u )
  {
    a1->MinimumNdisMajorVersion = 6;
    MinorNdisVersion = 0;
  }
  else
  {
    a1->MinimumNdisMajorVersion = MajorNdisVersion;
    v4 = MajorNdisVersion;
    MinorNdisVersion = DriverHandle->MinorNdisVersion;
  }
  a1->MinimumNdisMinorVersion = MinorNdisVersion;
  MinimumNdisMajorVersion = v4;
  if ( a2 && (a2 < v4 || a2 == v4 && a3 < a1->MinimumNdisMinorVersion) )
  {
    MinimumNdisMajorVersion = a2;
    a1->MinimumNdisMajorVersion = a2;
    a1->MinimumNdisMinorVersion = a3;
  }
  while ( LowestFilter )
  {
    FilterDriver = LowestFilter->FilterDriver;
    v11 = FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion == MinimumNdisMajorVersion;
    if ( FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion < MinimumNdisMajorVersion )
    {
      for ( i = 0LL; i < 2; ++i )
        *(&a1->MinimumNdisMajorVersion + i) = *(&LowestFilter->FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion
                                              + i);
      FilterDriver = LowestFilter->FilterDriver;
      MinimumNdisMajorVersion = a1->MinimumNdisMajorVersion;
      v11 = FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion == MinimumNdisMajorVersion;
    }
    if ( v11 )
    {
      v12 = FilterDriver->DefaultFilterCharacteristics.MinorNdisVersion;
      if ( v12 < a1->MinimumNdisMinorVersion )
        a1->MinimumNdisMinorVersion = v12;
    }
    LowestFilter = LowestFilter->HigherFilter;
  }
  OpenQueue = a1->OpenQueue;
  if ( OpenQueue )
  {
    v14 = a1->MinimumNdisMajorVersion;
    do
    {
      ProtocolHandle = OpenQueue->ProtocolHandle;
      v16 = ProtocolHandle->MajorNdisVersion == v14;
      if ( ProtocolHandle->MajorNdisVersion < v14 )
      {
        for ( j = 0LL; j < 2; ++j )
          *(&a1->MinimumNdisMajorVersion + j) = *(&OpenQueue->ProtocolHandle->MajorNdisVersion + j);
        ProtocolHandle = OpenQueue->ProtocolHandle;
        v14 = a1->MinimumNdisMajorVersion;
        v16 = ProtocolHandle->MajorNdisVersion == v14;
      }
      if ( v16 )
      {
        v17 = ProtocolHandle->MinorNdisVersion;
        if ( v17 < a1->MinimumNdisMinorVersion )
          a1->MinimumNdisMinorVersion = v17;
      }
      OpenQueue = OpenQueue->MiniportNextOpen;
    }
    while ( OpenQueue );
  }
}
