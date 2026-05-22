/*
 * XREFs of ??1?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@QEAA@XZ @ 0x18005A900
 * Callers:
 *     _InputSystemServerConnection::Create_::_1_::dtor$0 @ 0x180080280 (_InputSystemServerConnection--Create_--_1_--dtor$0.c)
 *     _DWMCursor::DWMCursor_::_1_::dtor$6 @ 0x1800836F1 (_DWMCursor--DWMCursor_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall Microsoft::WRL::ComPtr<InputSystemServerConnection>::~ComPtr<InputSystemServerConnection>(
        Microsoft::Bamo::BaseBamoConnection **a1)
{
  return Microsoft::WRL::ComPtr<InputSystemServerConnection>::InternalRelease(a1);
}
