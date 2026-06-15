/*
 * XREFs of ?Delete@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z @ 0x18003B5A4
 * Callers:
 *     ?ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x18003C8A4 (-ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdevice.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180003432 (_invalid_parameter_noinfo.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000958C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180034488 (-Fork@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     memmove_0 @ 0x18004444F (memmove_0.c)
 */

__int64 __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Delete(
        const void **a1,
        __int64 a2,
        int a3)
{
  _DWORD *v4; // rcx
  signed int v5; // r9d
  signed int v6; // edx
  int v7; // esi
  int v8; // ebx
  int v9; // ebp
  char *v10; // rdx

  v4 = *a1;
  v5 = 0;
  if ( a3 >= 0 )
    v5 = a3;
  v6 = *(v4 - 4);
  if ( 0x7FFFFFFF - v5 < 0 )
    goto LABEL_18;
  v7 = *(v4 - 4);
  if ( v5 <= v6 )
    v7 = v5;
  if ( v7 > 0 )
  {
    v8 = v6 - v7;
    v9 = v6 - v7 + 1;
    if ( (int)*(v4 - 2) > 1 )
    {
      ATL::CSimpleStringT<unsigned short,0>::Fork(a1, v6);
      v4 = *a1;
    }
    v10 = (char *)v4 + 2 * v7;
    if ( 2LL * v9 )
    {
      if ( !v4 || !v10 )
      {
        *(_DWORD *)_o__errno(v4) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memmove_0(v4, v10, 2LL * v9);
    }
    if ( v8 >= 0 && v8 <= *((_DWORD *)*a1 - 3) )
    {
      *((_DWORD *)*a1 - 4) = v8;
      *((_WORD *)*a1 + v8) = 0;
      v4 = *a1;
      return (unsigned int)*(v4 - 4);
    }
LABEL_18:
    ATL::AtlThrowImpl(-2147024809);
  }
  return (unsigned int)*(v4 - 4);
}
