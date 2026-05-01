/*
 * XREFs of ??_ECScreenClippingExperienceManager@@EEAAPEAXI@Z @ 0x18012D270
 * Callers:
 *     <none>
 * Callees:
 *     ??1CScreenClippingExperienceManager@@EEAA@XZ @ 0x18012D2AC (--1CScreenClippingExperienceManager@@EEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

CScreenClippingExperienceManager *__fastcall CScreenClippingExperienceManager::`vector deleting destructor'(
        CScreenClippingExperienceManager *this,
        char a2)
{
  CScreenClippingExperienceManager::~CScreenClippingExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x158uLL);
  return this;
}
