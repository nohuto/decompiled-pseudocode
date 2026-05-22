/*
 * XREFs of ?ValidateModuleVersion@GameInputModule@@CA_NPEAUHINSTANCE__@@AEBUGameInputVersion@@@Z @ 0x18004B900
 * Callers:
 *     ?LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z @ 0x18004B208 (-LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z.c)
 * Callees:
 *     ?IsXbox@GameInputModule@@CA_NXZ @ 0x18004B9B4 (-IsXbox@GameInputModule@@CA_NXZ.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 */

bool __fastcall GameInputModule::ValidateModuleVersion(HINSTANCE a1, const struct GameInputVersion *a2)
{
  __int64 v4; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v5[3]; // [rsp+48h] [rbp-30h] BYREF

  if ( GameInputModule::IsXbox() )
    return 1;
  v5[2] = 0LL;
  v5[0] = 16LL;
  v5[1] = 1LL;
  return (int)LdrResSearchResource(a1, v5, 3LL, 256LL, &v4, 0LL, 0LL, 0LL) >= 0
      && (*(unsigned int *)(v4 + 52) | ((unsigned __int64)*(unsigned int *)(v4 + 48) << 32)) != 0;
}
