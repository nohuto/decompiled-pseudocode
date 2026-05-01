/*
 * XREFs of ??_ECPPIAllUpViewHost@@UEAAPEAXI@Z @ 0x180562F40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CPPIAllUpViewHost@@UEAA@XZ @ 0x180562E94 (--1CPPIAllUpViewHost@@UEAA@XZ.c)
 */

CPPIAllUpViewHost *__fastcall CPPIAllUpViewHost::`vector deleting destructor'(CPPIAllUpViewHost *this, char a2)
{
  CPPIAllUpViewHost::~CPPIAllUpViewHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
