/*
 * XREFs of ??1?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@QEAA@XZ @ 0x18004C854
 * Callers:
 *     _DWMCursor::DWMCursor_::_1_::dtor$6 @ 0x18005520D (_DWMCursor--DWMCursor_--_1_--dtor$6.c)
 *     _InputSystemServerConnection::Create_::_1_::dtor$0 @ 0x180055280 (_InputSystemServerConnection--Create_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall Microsoft::WRL::ComPtr<InputSystemServerConnection>::~ComPtr<InputSystemServerConnection>(
        Microsoft::Bamo::BaseBamoConnection **a1)
{
  return Microsoft::WRL::ComPtr<InputSystemServerConnection>::InternalRelease(a1);
}
