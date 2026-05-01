/*
 * XREFs of ??_GCRealmActivationHistory@@EEAAPEAXI@Z @ 0x1803BAAE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CRealmActivationHistory@@EEAA@XZ @ 0x1803BA914 (--1CRealmActivationHistory@@EEAA@XZ.c)
 */

CRealmActivationHistory *__fastcall CRealmActivationHistory::`scalar deleting destructor'(
        CRealmActivationHistory *this,
        char a2)
{
  CRealmActivationHistory::~CRealmActivationHistory(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
