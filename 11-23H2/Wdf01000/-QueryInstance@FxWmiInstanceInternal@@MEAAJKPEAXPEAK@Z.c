/*
 * XREFs of ?QueryInstance@FxWmiInstanceInternal@@MEAAJKPEAXPEAK@Z @ 0x1C0029140
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
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
