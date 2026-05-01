/*
 * XREFs of ??_EPWSLayoutPolicyManager@@UEAAPEAXI@Z @ 0x180494870
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1PWSLayoutPolicyManager@@UEAA@XZ @ 0x1804947D8 (--1PWSLayoutPolicyManager@@UEAA@XZ.c)
 */

PWSLayoutPolicyManager *__fastcall PWSLayoutPolicyManager::`vector deleting destructor'(
        PWSLayoutPolicyManager *this,
        char a2)
{
  PWSLayoutPolicyManager::~PWSLayoutPolicyManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
