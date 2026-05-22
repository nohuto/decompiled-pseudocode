/*
 * XREFs of ??_GNestableRuntimeClass@WRL2@Microsoft@@UEAAPEAXI@Z @ 0x1801089F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1NestableRuntimeClass@WRL2@Microsoft@@UEAA@XZ @ 0x180055764 (--1NestableRuntimeClass@WRL2@Microsoft@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

Microsoft::WRL2::NestableRuntimeClass *__fastcall Microsoft::WRL2::NestableRuntimeClass::`scalar deleting destructor'(
        Microsoft::WRL2::NestableRuntimeClass *this,
        char a2)
{
  Microsoft::WRL2::NestableRuntimeClass::~NestableRuntimeClass(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
