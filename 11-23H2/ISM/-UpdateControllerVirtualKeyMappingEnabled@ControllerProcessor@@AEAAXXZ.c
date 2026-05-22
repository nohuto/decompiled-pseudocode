/*
 * XREFs of ?UpdateControllerVirtualKeyMappingEnabled@ControllerProcessor@@AEAAXXZ @ 0x180199254
 * Callers:
 *     _lambda_e82e8f5a3f31cf71ee9f5897f2a02386_::_lambda_invoker_cdecl_ @ 0x180194780 (_lambda_e82e8f5a3f31cf71ee9f5897f2a02386_--_lambda_invoker_cdecl_.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180196490 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ControllerProcessor::UpdateControllerVirtualKeyMappingEnabled(ControllerProcessor *this)
{
  LSTATUS ValueW; // eax
  int v3; // ecx
  int v4; // [rsp+50h] [rbp+8h] BYREF
  DWORD v5; // [rsp+58h] [rbp+10h] BYREF

  v5 = 4;
  v4 = 1;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\ControllerToVKMapping",
             L"Enabled",
             0x10u,
             0LL,
             &v4,
             &v5);
  v3 = v4;
  if ( ValueW )
    v3 = 1;
  *((_BYTE *)this + 7808) = v3 != 0;
}
