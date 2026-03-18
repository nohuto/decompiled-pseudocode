/*
 * XREFs of ?QueryInstance@FxWmiInstanceInternal@@MEAAJKPEAXPEAK@Z @ 0x1C005E990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxWmiInstanceInternal::QueryInstance(
        FxWmiInstanceInternal *this,
        unsigned int OutBufferSize,
        void *OutBuffer,
        unsigned int *BufferUsed)
{
  return ((__int64 (__fastcall *)(FxDeviceBase *, FxWmiInstanceInternal *, _QWORD, void *, unsigned int *))this->m_QueryInstance)(
           this->m_Provider->m_Parent->m_DeviceBase,
           this,
           OutBufferSize,
           OutBuffer,
           BufferUsed);
}
