/*
 * XREFs of ??1?$CCoSimpleArray@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@@@QEAA@XZ @ 0x1803CB7D4
 * Callers:
 *     _ApplicationViewFilteredCollection::ApplicationViewFilteredCollection_::_1_::dtor$2 @ 0x180688E2C (_ApplicationViewFilteredCollection--ApplicationViewFilteredCollection_--_1_--dtor$2.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CCoSimpleArray<Microsoft::WRL::ComPtr<IApplicationView>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IApplicationView>>>::~CCoSimpleArray<Microsoft::WRL::ComPtr<IApplicationView>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IApplicationView>>>(
        __int64 a1)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 i; // rsi

  v1 = (unsigned __int64 *)(a1 + 8);
  if ( *(_QWORD *)a1 )
  {
    for ( i = 0LL; i < *v1; ++i )
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)(*(_QWORD *)a1 + 8 * i));
    CoTaskMemFree(*(LPVOID *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *v1 = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
