/*
 * XREFs of ??_EServiceModule@Internal@Windows@@UEAAPEAXI@Z @ 0x1800EF4A4
 * Callers:
 *     ??_EServiceModule@Internal@Windows@@WCI@EAAPEAXI@Z @ 0x180076630 (--_EServiceModule@Internal@Windows@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??1?$OutOfProcModuleBase@VServiceModule@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800EECF4 (--1-$OutOfProcModuleBase@VServiceModule@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ.c)
 *     ??1ServiceModuleBase@Internal@Windows@@QEAA@XZ @ 0x1800EF0B8 (--1ServiceModuleBase@Internal@Windows@@QEAA@XZ.c)
 */

Windows::Internal::ServiceModule *__fastcall Windows::Internal::ServiceModule::`vector deleting destructor'(
        Windows::Internal::ServiceModule *this,
        __int64 a2,
        const unsigned __int16 *a3,
        bool a4)
{
  char v5; // bl

  v5 = a2;
  Microsoft::WRL::Details::OutOfProcModuleBase<Windows::Internal::ServiceModule>::~OutOfProcModuleBase<Windows::Internal::ServiceModule>(
    (Windows::Internal::ServiceModule *)((char *)this + 40),
    a2,
    a3,
    a4);
  Windows::Internal::ServiceModuleBase::~ServiceModuleBase(this);
  if ( (v5 & 1) != 0 )
    operator delete(this);
  return this;
}
