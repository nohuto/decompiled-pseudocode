/*
 * XREFs of ??_EContextRuntimeClass@WRL2@Microsoft@@MEAAPEAXI@Z @ 0x180108970
 * Callers:
 *     <none>
 * Callees:
 *     ??1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ @ 0x180052E40 (--1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

Microsoft::WRL2::ContextRuntimeClass *__fastcall Microsoft::WRL2::ContextRuntimeClass::`vector deleting destructor'(
        Microsoft::WRL2::ContextRuntimeClass *this,
        __int64 a2)
{
  char v2; // bl

  v2 = a2;
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
