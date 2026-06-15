/*
 * XREFs of ?BeginCall@TelephonyControllerCallInstance@@UEAAJPEAU_TelephonyInstanceData@@@Z @ 0x180168030
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleCallControl@TelephonyControllerCallInstance@@AEAAJU_tagKSTELEPHONY_CALLCONTROL@@@Z @ 0x180168320 (-HandleCallControl@TelephonyControllerCallInstance@@AEAAJU_tagKSTELEPHONY_CALLCONTROL@@@Z.c)
 *     ?VerifyAndSetCallType@TelephonyControllerCallInstance@@AEAAJPEAU_TelephonyInstanceData@@@Z @ 0x180168740 (-VerifyAndSetCallType@TelephonyControllerCallInstance@@AEAAJPEAU_TelephonyInstanceData@@@Z.c)
 */

__int64 __fastcall TelephonyControllerCallInstance::BeginCall(
        TelephonyControllerCallInstance *this,
        struct _TelephonyInstanceData *a2)
{
  __int64 result; // rax
  __int64 v3; // r10
  __int64 v4; // [rsp+38h] [rbp+10h]

  if ( !a2 )
    return 2147500035LL;
  result = TelephonyControllerCallInstance::VerifyAndSetCallType(this, a2);
  if ( (int)result >= 0 )
  {
    LODWORD(v4) = *(_DWORD *)(v3 + 40);
    HIDWORD(v4) = 1;
    return TelephonyControllerCallInstance::HandleCallControl(v3, v4);
  }
  return result;
}
