/*
 * XREFs of ??_GCRTThreadManager@@UEAAPEAXI@Z @ 0x140074A50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1CRTThreadManager@@UEAA@XZ @ 0x140074834 (--1CRTThreadManager@@UEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CRTThreadManager::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  CRTThreadManager::~CRTThreadManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
