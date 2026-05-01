/*
 * XREFs of ??_ECSnapAssistViewController@@UEAAPEAXI@Z @ 0x1804B4080
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1CSnapAssistViewController@@UEAA@XZ @ 0x1804B3E3C (--1CSnapAssistViewController@@UEAA@XZ.c)
 */

CSnapAssistViewController *__fastcall CSnapAssistViewController::`vector deleting destructor'(
        CSnapAssistViewController *this,
        char a2)
{
  CSnapAssistViewController::~CSnapAssistViewController(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
