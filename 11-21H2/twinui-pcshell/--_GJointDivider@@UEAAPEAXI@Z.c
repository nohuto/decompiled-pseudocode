/*
 * XREFs of ??_GJointDivider@@UEAAPEAXI@Z @ 0x180179450
 * Callers:
 *     <none>
 * Callees:
 *     ??1JointDivider@@UEAA@XZ @ 0x18017948C (--1JointDivider@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

JointDivider *__fastcall JointDivider::`scalar deleting destructor'(JointDivider *this, char a2)
{
  JointDivider::~JointDivider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x68uLL);
  return this;
}
