/*
 * XREFs of ??_GCPPIAllUpViewService@@UEAAPEAXI@Z @ 0x18017CD90
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPPIAllUpViewService@@UEAA@XZ @ 0x18017CDCC (--1CPPIAllUpViewService@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
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
