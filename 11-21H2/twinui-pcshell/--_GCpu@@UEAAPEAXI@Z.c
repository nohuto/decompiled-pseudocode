/*
 * XREFs of ??_GCpu@@UEAAPEAXI@Z @ 0x18032D330
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1Cpu@@UEAA@XZ @ 0x1803453B4 (--1Cpu@@UEAA@XZ.c)
 */

Cpu *__fastcall Cpu::`scalar deleting destructor'(Cpu *this, char a2)
{
  Cpu::~Cpu(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
