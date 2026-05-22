/*
 * XREFs of ??1?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@QEAA@XZ @ 0x180098BAC
 * Callers:
 *     _InputSystemInternalServerConnection::Create_::_1_::dtor$2 @ 0x18006C375 (_InputSystemInternalServerConnection--Create_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180032574 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
Microsoft::Bamo::BaseBamoConnection *__fastcall Microsoft::WRL::ComPtr<InputSystemInternalServerConnection>::~ComPtr<InputSystemInternalServerConnection>(
        Microsoft::Bamo::BaseBamoConnection **a1)
{
  Microsoft::Bamo::BaseBamoConnection *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (Microsoft::Bamo::BaseBamoConnection *)Microsoft::Bamo::BaseBamoConnection::Release(result);
  }
  return result;
}
