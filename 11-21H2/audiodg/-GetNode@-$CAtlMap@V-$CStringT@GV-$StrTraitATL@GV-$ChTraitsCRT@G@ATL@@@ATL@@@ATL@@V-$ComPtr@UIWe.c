/*
 * XREFs of ?GetNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@UIWeakReference@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@UIWeakReference@@@WRL@Microsoft@@@2@@ATL@@AEBAPEAVCNode@12@PEBGAEAI1AEAPEAV312@@Z @ 0x140006DCC
 * Callers:
 *     ?SetAt@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@UIWeakReference@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@UIWeakReference@@@WRL@Microsoft@@@2@@ATL@@QEAAPEAU__POSITION@@PEBGAEBV?$ComPtr@UIWeakReference@@@WRL@Microsoft@@@Z @ 0x140006CF0 (-SetAt@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@UIWeak.c)
 *     ?GetObjectCacheForEndpoint_UnderLock@CDeviceGraphObjectCacheManager@@AEAAPEAUIDeviceGraphObjectCache@@PEBG@Z @ 0x140007248 (-GetObjectCacheForEndpoint_UnderLock@CDeviceGraphObjectCacheManager@@AEAAPEAUIDeviceGraphObjectC.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

unsigned __int16 *__fastcall ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<IWeakReference>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<IWeakReference>>>::GetNode(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned __int16 **a5)
{
  unsigned int v6; // eax
  unsigned __int16 *v7; // rbx
  unsigned __int16 i; // dx
  unsigned __int16 *v9; // rbx
  unsigned __int16 *result; // rax
  unsigned int v11; // r11d
  unsigned __int16 *v12; // rcx
  int v13; // r9d
  int v14; // edx

  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v6 = 0;
  v7 = a2;
  for ( i = *a2; i; i = *v7 )
  {
    v6 = i + 33 * v6;
    ++v7;
  }
  *a4 = v6;
  *a3 = v6 % *(_DWORD *)(a1 + 16);
  if ( !*(_QWORD *)a1 )
    return 0LL;
  v9 = 0LL;
  *a5 = 0LL;
  result = *(unsigned __int16 **)(*(_QWORD *)a1 + 8LL * *a3);
  if ( !result )
    return 0LL;
  v11 = *a4;
  while ( 1 )
  {
    if ( *((_DWORD *)result + 6) == v11 )
    {
      v12 = *(unsigned __int16 **)result;
      do
      {
        v13 = *(unsigned __int16 *)((char *)a2 + (_QWORD)v12 - *(_QWORD *)result);
        v14 = *v12 - v13;
        if ( v14 )
          break;
        ++v12;
      }
      while ( v13 );
      if ( !v14 )
        break;
    }
    v9 = result;
    result = (unsigned __int16 *)*((_QWORD *)result + 2);
    if ( !result )
      return 0LL;
  }
  *a5 = v9;
  return result;
}
