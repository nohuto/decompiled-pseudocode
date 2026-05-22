/*
 * XREFs of ?lock@_Mutex_base@std@@QEAAXXZ @ 0x1800B952C
 * Callers:
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x18005B2A8 (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Mutex_base::lock(std::_Mutex_base *this)
{
  int v1; // eax

  v1 = _Mtx_lock(this);
  if ( v1 )
  {
    std::_Throw_C_error(v1);
    __debugbreak();
  }
}
