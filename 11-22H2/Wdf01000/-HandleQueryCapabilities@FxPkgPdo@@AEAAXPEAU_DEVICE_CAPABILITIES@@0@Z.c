/*
 * XREFs of ?HandleQueryCapabilities@FxPkgPdo@@AEAAXPEAU_DEVICE_CAPABILITIES@@0@Z @ 0x1C0068B40
 * Callers:
 *     ?PnpQueryCapabilities@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C00694A0 (-PnpQueryCapabilities@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_QueryCapsWorkItem@FxPkgPdo@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0069DD0 (-_QueryCapsWorkItem@FxPkgPdo@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPkgPdo::HandleQueryCapabilities(
        FxPkgPdo *this,
        _DEVICE_CAPABILITIES *ReportedCaps,
        _DEVICE_CAPABILITIES *ParentCaps)
{
  _DEVICE_POWER_STATE *v3; // r10
  unsigned int i; // ecx
  unsigned int v6; // eax
  FxPnpCaps v7; // ecx
  int v8; // ecx
  __int16 v9; // ax
  __int16 v10; // bx
  __int16 v11; // r11
  __int16 v12; // r10
  __int16 v13; // ax
  __int16 v14; // ax
  _SYSTEM_POWER_STATE SystemWake; // eax
  _DEVICE_POWER_STATE DeviceWake; // ecx
  unsigned int D1Latency; // eax
  unsigned int D2Latency; // eax
  unsigned int D3Latency; // eax

  v3 = &ReportedCaps->DeviceState[1];
  for ( i = 4; i < 0x1C; i += 4 )
  {
    v6 = (this->m_PowerCaps.States & (15 << i)) >> i;
    if ( v6 == 5 )
      v6 = *(_DEVICE_POWER_STATE *)((char *)v3 + (char *)ParentCaps - (char *)ReportedCaps);
    *v3++ = v6;
  }
  v7.ByEnum = (FxPnpCaps::<unnamed_type_ByEnum>)this->m_PnpCaps;
  if ( (*(_BYTE *)&v7.ByEnum & 3) != 0 )
  {
    if ( (this->m_PnpCaps.Value & 3) == 1 )
      *((_DWORD *)ReportedCaps + 1) |= 4u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~4u;
  }
  if ( (*(_BYTE *)&v7.ByEnum & 0xC) != 0 )
  {
    if ( (*(_BYTE *)&v7.ByEnum & 0xC) == 4 )
      *((_DWORD *)ReportedCaps + 1) |= 8u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~8u;
  }
  if ( (*(_BYTE *)&v7.ByEnum & 0x30) != 0 )
  {
    if ( (*(_BYTE *)&v7.ByEnum & 0x30) == 0x10 )
      *((_DWORD *)ReportedCaps + 1) |= 0x10u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x10u;
  }
  if ( (*(_BYTE *)&v7.ByEnum & 0xC0) != 0 )
  {
    if ( (*(_BYTE *)&v7.ByEnum & 0xC0) == 0x40 )
      *((_DWORD *)ReportedCaps + 1) |= 0x20u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x20u;
  }
  if ( (*(_WORD *)&v7.ByEnum & 0x300) != 0 )
  {
    if ( (*(_WORD *)&v7.ByEnum & 0x300) == 0x100 )
      *((_DWORD *)ReportedCaps + 1) |= 0x40u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x40u;
  }
  switch ( *(_WORD *)&v7.ByEnum & 0xC00 )
  {
    case 2048:
      if ( !this->m_RawOK )
        break;
      goto LABEL_31;
    case 0:
      *((_DWORD *)ReportedCaps + 1) &= ~0x80u;
      break;
    case 1024:
LABEL_31:
      *((_DWORD *)ReportedCaps + 1) |= 0x80u;
      break;
  }
  if ( (*(_WORD *)&v7.ByEnum & 0x3000) != 0 )
  {
    if ( (*(_WORD *)&v7.ByEnum & 0x3000) == 0x1000 )
      *((_DWORD *)ReportedCaps + 1) |= 0x200u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x200u;
  }
  if ( (*(_WORD *)&v7.ByEnum & 0xC000) != 0 )
  {
    if ( (*(_WORD *)&v7.ByEnum & 0xC000) == 0x4000 )
      *((_DWORD *)ReportedCaps + 1) |= 0x4000u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x4000u;
  }
  v8 = v7.Value & 0x30000;
  if ( v8 )
  {
    if ( v8 == 0x10000 )
      *((_DWORD *)ReportedCaps + 1) |= 0x20000u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x20000u;
  }
  v9 = this->m_PowerCaps.Caps & 0x30;
  if ( v9 )
  {
    if ( v9 == 16 )
      *((_DWORD *)ReportedCaps + 1) |= 0x400u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x400u;
  }
  v10 = this->m_PowerCaps.Caps & 0xC0;
  if ( v10 )
  {
    if ( v10 == 64 )
      *((_DWORD *)ReportedCaps + 1) |= 0x800u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x800u;
  }
  v11 = this->m_PowerCaps.Caps & 0x300;
  if ( v11 )
  {
    if ( v11 == 256 )
      *((_DWORD *)ReportedCaps + 1) |= 0x1000u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x1000u;
  }
  v12 = this->m_PowerCaps.Caps & 0xC00;
  if ( v12 )
  {
    if ( v12 == 1024 )
      *((_DWORD *)ReportedCaps + 1) |= 0x2000u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x2000u;
  }
  v13 = this->m_PowerCaps.Caps & 3;
  if ( v13 )
  {
    if ( v13 == 1 )
      *((_DWORD *)ReportedCaps + 1) |= 1u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~1u;
  }
  v14 = this->m_PowerCaps.Caps & 0xC;
  if ( v14 )
  {
    if ( v14 == 4 )
      *((_DWORD *)ReportedCaps + 1) |= 2u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~2u;
  }
  if ( this->m_RawOK )
    *((_DWORD *)ReportedCaps + 1) |= 0x100u;
  ReportedCaps->UINumber = this->m_PnpCapsUINumber;
  ReportedCaps->Address = this->m_PnpCapsAddress;
  SystemWake = this->m_PowerCaps.SystemWake;
  if ( (_BYTE)SystemWake == PowerSystemMaximum )
    SystemWake = ParentCaps->SystemWake;
  ReportedCaps->SystemWake = SystemWake;
  DeviceWake = this->m_PowerCaps.DeviceWake;
  if ( this->m_PowerCaps.DeviceWake == 5 )
    DeviceWake = ParentCaps->DeviceWake;
  ReportedCaps->DeviceWake = DeviceWake;
  D1Latency = this->m_PowerCaps.D1Latency;
  if ( D1Latency == -1 )
    D1Latency = 0;
  ReportedCaps->D1Latency = D1Latency;
  D2Latency = this->m_PowerCaps.D2Latency;
  if ( D2Latency == -1 )
    D2Latency = 0;
  ReportedCaps->D2Latency = D2Latency;
  D3Latency = this->m_PowerCaps.D3Latency;
  if ( D3Latency != -1 )
    ReportedCaps->D3Latency = D3Latency;
}
