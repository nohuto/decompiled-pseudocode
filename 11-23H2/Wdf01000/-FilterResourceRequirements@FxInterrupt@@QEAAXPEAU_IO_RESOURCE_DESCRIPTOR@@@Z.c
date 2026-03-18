/*
 * XREFs of ?FilterResourceRequirements@FxInterrupt@@QEAAXPEAU_IO_RESOURCE_DESCRIPTOR@@@Z @ 0x1C0080088
 * Callers:
 *     ?FilterResourceRequirements@FxPkgPnp@@IEAAJPEAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@@Z @ 0x1C0078D68 (-FilterResourceRequirements@FxPkgPnp@@IEAAJPEAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxInterrupt::FilterResourceRequirements(
        FxInterrupt *this,
        _IO_RESOURCE_DESCRIPTOR *IoResourceDescriptor)
{
  _WDF_TRI_STATE m_ShareVector; // r8d
  unsigned __int16 Flags; // ax

  m_ShareVector = this->m_ShareVector;
  if ( m_ShareVector )
  {
    if ( m_ShareVector == WdfTrue )
      IoResourceDescriptor->ShareDisposition = 3;
  }
  else
  {
    IoResourceDescriptor->ShareDisposition = 1;
  }
  if ( WPP_GLOBAL_WDF_Control.Queue.ListEntry.Flink && this->m_SetPolicy )
  {
    Flags = IoResourceDescriptor->Flags;
    if ( (Flags & 4) == 0 )
    {
      IoResourceDescriptor->Flags = Flags | 4;
      LOWORD(IoResourceDescriptor->u.BusNumber.MaxBusNumber) = this->m_Policy;
      IoResourceDescriptor->u.Port.MinimumAddress.HighPart = this->m_Priority;
      IoResourceDescriptor->u.Port.MaximumAddress.QuadPart = this->m_Processors.Mask;
      HIWORD(IoResourceDescriptor->u.Memory40.MinimumAddress.u.LowPart) = this->m_Processors.Group;
    }
  }
}
