/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VAppViewDataSourceAdapterBase@@UIAppViewDataSourceAdapter@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18078E3B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VAppViewDataSourceAdapterBase@@UIAppViewDataSourceAdapter@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180081F14 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VAppViewDataSourceAdapte.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,AppViewDataSourceAdapterBase,IAppViewDataSourceAdapter,Microsoft::WRL::FtmBase>::`scalar deleting destructor'(
        __int64 *a1,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,AppViewDataSourceAdapterBase,IAppViewDataSourceAdapter,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,AppViewDataSourceAdapterBase,IAppViewDataSourceAdapter,Microsoft::WRL::FtmBase>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
