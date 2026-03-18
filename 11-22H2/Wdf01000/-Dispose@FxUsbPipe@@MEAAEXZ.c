/*
 * XREFs of ?Dispose@FxUsbPipe@@MEAAEXZ @ 0x1C0059C80
 * Callers:
 *     <none>
 * Callees:
 *     ?Dispose@FxIoTarget@@MEAAEXZ @ 0x1C00529F0 (-Dispose@FxIoTarget@@MEAAEXZ.c)
 *     ??_GFxUsbPipeContinuousReader@@QEAAPEAXI@Z @ 0x1C0059AE0 (--_GFxUsbPipeContinuousReader@@QEAAPEAXI@Z.c)
 */

unsigned __int8 __fastcall FxUsbPipe::Dispose(FxUsbPipe *this)
{
  unsigned __int8 v2; // al
  FxUsbPipeContinuousReader *m_Reader; // rcx
  unsigned __int8 v4; // di

  v2 = FxIoTarget::Dispose(this);
  m_Reader = this->m_Reader;
  v4 = v2;
  if ( m_Reader )
  {
    FxUsbPipeContinuousReader::`scalar deleting destructor'(m_Reader);
    this->m_Reader = 0LL;
  }
  return v4;
}
