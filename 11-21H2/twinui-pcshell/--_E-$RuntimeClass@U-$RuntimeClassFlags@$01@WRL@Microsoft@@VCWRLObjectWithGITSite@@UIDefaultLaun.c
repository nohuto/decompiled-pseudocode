/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithGITSite@@UIDefaultLaunchPositionOverride@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800EFE20
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x1800EF978 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

CWRLObjectWithGITSite *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithGITSite,IDefaultLaunchPositionOverride>::`vector deleting destructor'(
        CWRLObjectWithGITSite *a1,
        char a2)
{
  *((_DWORD *)a1 + 13) = -1073741823;
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x38uLL);
  return a1;
}
