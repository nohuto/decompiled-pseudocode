/*
 * XREFs of ??_GJointResizeAcc@@UEAAPEAXI@Z @ 0x1801BBE30
 * Callers:
 *     <none>
 * Callees:
 *     ??1JointResizeAcc@@UEAA@XZ @ 0x1801BBE6C (--1JointResizeAcc@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

JointResizeAcc *__fastcall JointResizeAcc::`scalar deleting destructor'(JointResizeAcc *this, char a2)
{
  JointResizeAcc::~JointResizeAcc(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x78uLL);
  return this;
}
