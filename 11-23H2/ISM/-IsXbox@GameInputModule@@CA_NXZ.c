/*
 * XREFs of ?IsXbox@GameInputModule@@CA_NXZ @ 0x18004B9B4
 * Callers:
 *     ?ValidateModuleCertChain@GameInputModule@@CAJPEBG@Z @ 0x18004B56C (-ValidateModuleCertChain@GameInputModule@@CAJPEBG@Z.c)
 *     ?ValidateModuleVersion@GameInputModule@@CA_NPEAUHINSTANCE__@@AEBUGameInputVersion@@@Z @ 0x18004B900 (-ValidateModuleVersion@GameInputModule@@CA_NPEAUHINSTANCE__@@AEBUGameInputVersion@@@Z.c)
 * Callees:
 *     <none>
 */

bool GameInputModule::IsXbox(void)
{
  int v1; // [rsp+30h] [rbp+8h] BYREF

  RtlGetDeviceFamilyInfoEnum(0LL, &v1, 0LL);
  return v1 == 5;
}
