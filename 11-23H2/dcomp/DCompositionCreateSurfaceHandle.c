/*
 * XREFs of DCompositionCreateSurfaceHandle @ 0x180088D60
 * Callers:
 *     ?CreateCompositionTexture@CDeviceTextureManager@DirectComposition@@QEAAJPEAUID3D11Texture2D@@PEAPEAVCCompositionTexture@2@@Z @ 0x1800987B0 (-CreateCompositionTexture@CDeviceTextureManager@DirectComposition@@QEAAJPEAUID3D11Texture2D@@PEA.c)
 * Callees:
 *     ?HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z @ 0x1800244CC (-HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z.c)
 */

__int64 __fastcall DCompositionCreateSurfaceHandle(unsigned int a1, __int64 a2, _QWORD *a3)
{
  int *v5; // rcx
  int CompositionSurfaceHandle; // eax
  __int64 result; // rax
  bool v8; // cf
  int v9; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+28h] [rbp-30h]
  __int64 v11; // [rsp+30h] [rbp-28h]
  int v12; // [rsp+38h] [rbp-20h]
  __int64 v13; // [rsp+40h] [rbp-18h]
  __int64 v14; // [rsp+48h] [rbp-10h]

  v5 = 0LL;
  if ( a2 )
  {
    v10 = 0LL;
    v8 = *(_DWORD *)(a2 + 16) != 0;
    v9 = 48;
    v13 = *(_QWORD *)(a2 + 8);
    v11 = 0LL;
    v14 = 0LL;
    v5 = &v9;
    v12 = v8 ? 2 : 0;
  }
  CompositionSurfaceHandle = NtCreateCompositionSurfaceHandle(v5, a1);
  result = DirectComposition::CDevice::HRESULTFromNTSTATUS(CompositionSurfaceHandle);
  if ( (int)result < 0 )
  {
    if ( a3 )
      *a3 = 0LL;
  }
  return result;
}
