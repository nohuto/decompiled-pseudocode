/*
 * XREFs of ?GetIids@NestableRuntimeClass@WRL2@Microsoft@@MEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180108B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL2::NestableRuntimeClass::GetIids(
        Microsoft::WRL2::NestableRuntimeClass *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(this, a2, a3);
}
