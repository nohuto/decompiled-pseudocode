/*
 * XREFs of ?GetResourceConsumptionInfoInGroup@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_ResourceInfo@@KPEAKPEAPEAU3@@Z @ 0x18010B690
 * Callers:
 *     ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KPEA_K@Z @ 0x180065D10 (-AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAVCEndpointCharacteristics@@U_G.c)
 *     ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x18010AD60 (-DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleI.c)
 *     ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x18010CAD0 (-QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAVCEndpointCharacteri.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180008710 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CConstraintModelResourceManager::GetResourceConsumptionInfoInGroup(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        _QWORD *a6)
{
  unsigned int v6; // ebx
  unsigned int v8; // esi
  _DWORD *v9; // rdi
  __int64 v10; // rbp
  _DWORD *v11; // rax
  __int64 v12; // rcx
  char *v13; // r8
  int v14; // r9d
  _DWORD *v15; // rcx
  __int64 v16; // rax
  char *v17; // rdx
  __int128 v18; // xmm1

  v6 = 0;
  v8 = 0;
  *a6 = 0LL;
  *a5 = 0;
  if ( a4 )
  {
    v9 = (_DWORD *)(a3 + 528);
    v10 = a4;
    v11 = (_DWORD *)(a3 + 528);
    v12 = a4;
    do
    {
      if ( !*(v11 - 1) && !*v11 || *v11 && v11[1] == a2 )
        ++v8;
      v11 += 135;
      --v12;
    }
    while ( v12 );
    if ( v8 )
    {
      v13 = (char *)operator new(saturated_mul(v8, 0x21CuLL));
      if ( v13 )
      {
        v14 = 0;
        do
        {
          if ( !*(v9 - 1) && !*v9 || *v9 && v9[1] == a2 )
          {
            v15 = v9 - 132;
            v16 = 4LL;
            v17 = &v13[540 * v14];
            do
            {
              *(_OWORD *)v17 = *(_OWORD *)v15;
              *((_OWORD *)v17 + 1) = *((_OWORD *)v15 + 1);
              *((_OWORD *)v17 + 2) = *((_OWORD *)v15 + 2);
              *((_OWORD *)v17 + 3) = *((_OWORD *)v15 + 3);
              *((_OWORD *)v17 + 4) = *((_OWORD *)v15 + 4);
              *((_OWORD *)v17 + 5) = *((_OWORD *)v15 + 5);
              *((_OWORD *)v17 + 6) = *((_OWORD *)v15 + 6);
              v17 += 128;
              v18 = *((_OWORD *)v15 + 7);
              v15 += 32;
              *((_OWORD *)v17 - 1) = v18;
              --v16;
            }
            while ( v16 );
            ++v14;
            *(_OWORD *)v17 = *(_OWORD *)v15;
            *((_QWORD *)v17 + 2) = *((_QWORD *)v15 + 2);
            *((_DWORD *)v17 + 6) = v15[6];
          }
          v9 += 135;
          --v10;
        }
        while ( v10 );
        *a5 = v8;
        *a6 = v13;
      }
      else
      {
        return (unsigned int)-2147024882;
      }
    }
  }
  return v6;
}
