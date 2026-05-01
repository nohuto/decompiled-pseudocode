/*
 * XREFs of ??_GJointResize@@UEAAPEAXI@Z @ 0x180180C00
 * Callers:
 *     ??_EJointResize@@WBI@EAAPEAXI@Z @ 0x18020C1B0 (--_EJointResize@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1JointResize@@UEAA@XZ @ 0x1800ABB3C (--1JointResize@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

JointResize *__fastcall JointResize::`scalar deleting destructor'(JointResize *this, char a2)
{
  JointResize::~JointResize(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x330uLL);
  return this;
}
