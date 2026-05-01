/*
 * XREFs of ??_ECServiceHostComponent@@UEAAPEAXI@Z @ 0x18057F8E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1CServiceHostComponent@@UEAA@XZ @ 0x18057EF74 (--1CServiceHostComponent@@UEAA@XZ.c)
 */

CServiceHostComponent *__fastcall CServiceHostComponent::`vector deleting destructor'(
        CServiceHostComponent *this,
        char a2)
{
  CServiceHostComponent::~CServiceHostComponent(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
