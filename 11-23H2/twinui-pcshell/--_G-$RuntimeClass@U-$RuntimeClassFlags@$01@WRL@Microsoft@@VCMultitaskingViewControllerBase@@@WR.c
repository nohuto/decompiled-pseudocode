/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewControllerBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18056A100
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CMultitaskingViewControllerBase@@QEAA@XZ @ 0x18056A014 (--1CMultitaskingViewControllerBase@@QEAA@XZ.c)
 */

CMultitaskingViewControllerBase *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewControllerBase>::`scalar deleting destructor'(
        CMultitaskingViewControllerBase *a1,
        char a2)
{
  *((_DWORD *)a1 + 31) = -1073741823;
  CMultitaskingViewControllerBase::~CMultitaskingViewControllerBase(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
