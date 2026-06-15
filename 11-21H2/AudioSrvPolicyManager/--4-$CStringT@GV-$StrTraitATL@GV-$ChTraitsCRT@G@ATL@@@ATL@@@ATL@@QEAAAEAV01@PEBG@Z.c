/*
 * XREFs of ??4?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBG@Z @ 0x1800332A4
 * Callers:
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x180034568 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?DoesStringRepresentAPositiveNumber@ApplicationSpecificEndpointInfo@@CA_NPEBG@Z @ 0x18003B694 (-DoesStringRepresentAPositiveNumber@ApplicationSpecificEndpointInfo@@CA_NPEBG@Z.c)
 *     ?ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x18003C8A4 (-ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdevice.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180003432 (_invalid_parameter_noinfo.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000958C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?CopyChars@?$CSimpleStringT@G$0A@@ATL@@SAXPEAG_KPEBGH@Z @ 0x180034024 (-CopyChars@-$CSimpleStringT@G$0A@@ATL@@SAXPEAG_KPEBGH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x1800343F0 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180036FCC (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     memmove_0 @ 0x18004444F (memmove_0.c)
 */

void **__fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=(
        void **a1,
        __int64 a2)
{
  __int64 v4; // rbx
  char *v5; // r10
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r14
  char *v8; // rdx

  if ( !a2 )
    goto LABEL_17;
  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)(a2 + 2 * v4) );
  if ( (_DWORD)v4 )
  {
    v5 = (char *)*a1;
    v6 = (a2 - (__int64)*a1) >> 1;
    v7 = *((unsigned int *)*a1 - 4);
    if ( (int)((*((_DWORD *)*a1 - 3) - v4) | (1 - *((_DWORD *)*a1 - 2))) < 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, (unsigned int)v4);
      v5 = (char *)*a1;
    }
    if ( v6 > v7 )
    {
      ATL::CSimpleStringT<unsigned short,0>::CopyChars(v5, (int)v4, a2, (unsigned int)v4);
    }
    else
    {
      v8 = &v5[2 * v6];
      if ( 2LL * (int)v4 )
      {
        if ( v5 && v8 )
        {
          memmove_0(v5, v8, 2LL * (int)v4);
        }
        else
        {
          *(_DWORD *)_o__errno((int)v4) = 22;
          invalid_parameter_noinfo();
        }
      }
    }
    if ( (int)v4 < 0 || (int)v4 > *((_DWORD *)*a1 - 3) )
      ATL::AtlThrowImpl(-2147024809);
    *((_DWORD *)*a1 - 4) = v4;
    *((_WORD *)*a1 + (int)v4) = 0;
  }
  else
  {
LABEL_17:
    ATL::CSimpleStringT<unsigned short,0>::Empty();
  }
  return a1;
}
