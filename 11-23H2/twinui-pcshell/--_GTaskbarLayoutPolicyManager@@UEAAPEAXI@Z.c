/*
 * XREFs of ??_GTaskbarLayoutPolicyManager@@UEAAPEAXI@Z @ 0x180182020
 * Callers:
 *     <none>
 * Callees:
 *     ??1TaskbarLayoutPolicyManager@@UEAA@XZ @ 0x1801821A4 (--1TaskbarLayoutPolicyManager@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

TaskbarLayoutPolicyManager *__fastcall TaskbarLayoutPolicyManager::`scalar deleting destructor'(
        TaskbarLayoutPolicyManager *this,
        char a2)
{
  TaskbarLayoutPolicyManager::~TaskbarLayoutPolicyManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xA0uLL);
  return this;
}
