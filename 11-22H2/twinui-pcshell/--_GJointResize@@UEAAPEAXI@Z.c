/*
 * XREFs of ??_GJointResize@@UEAAPEAXI@Z @ 0x1801BE424
 * Callers:
 *     ??_EJointResize@@WBI@EAAPEAXI@Z @ 0x1802A7F90 (--_EJointResize@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1JointResize@@UEAA@XZ @ 0x1801428C0 (--1JointResize@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

JointResize *__fastcall JointResize::`scalar deleting destructor'(JointResize *this, char a2)
{
  JointResize::~JointResize(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x318uLL);
  return this;
}
