/*
 * XREFs of ??_GCPPIAllUpViewService@@UEAAPEAXI@Z @ 0x1801B9BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPPIAllUpViewService@@UEAA@XZ @ 0x1801B9BDC (--1CPPIAllUpViewService@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CPPIAllUpViewService *__fastcall CPPIAllUpViewService::`scalar deleting destructor'(
        CPPIAllUpViewService *this,
        char a2)
{
  CPPIAllUpViewService::~CPPIAllUpViewService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x40uLL);
  return this;
}
