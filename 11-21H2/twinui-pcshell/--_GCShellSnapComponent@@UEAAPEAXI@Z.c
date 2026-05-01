/*
 * XREFs of ??_GCShellSnapComponent@@UEAAPEAXI@Z @ 0x180592308
 * Callers:
 *     ??_ECShellSnapComponent@@WDA@EAAPEAXI@Z @ 0x18020EC50 (--_ECShellSnapComponent@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1CShellSnapComponent@@UEAA@XZ @ 0x180591A04 (--1CShellSnapComponent@@UEAA@XZ.c)
 */

CShellSnapComponent *__fastcall CShellSnapComponent::`scalar deleting destructor'(CShellSnapComponent *this, char a2)
{
  CShellSnapComponent::~CShellSnapComponent(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
