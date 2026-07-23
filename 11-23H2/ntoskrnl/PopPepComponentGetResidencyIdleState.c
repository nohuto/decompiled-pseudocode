/*
 * XREFs of PopPepComponentGetResidencyIdleState @ 0x140310BC8
 * Callers:
 *     PopPepCompleteComponentActiveActivity @ 0x140310B50 (PopPepCompleteComponentActiveActivity.c)
 *     PopPepIdleTimeoutRoutine @ 0x140355490 (PopPepIdleTimeoutRoutine.c)
 *     PopPepComponentSetResidency @ 0x1403B3F24 (PopPepComponentSetResidency.c)
 *     PopPepRegisterDevice @ 0x140837124 (PopPepRegisterDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPepComponentGetResidencyIdleState(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  bool v3; // zf

  v2 = (unsigned int)(*(_DWORD *)(a1 + 188) - 1);
  if ( !PopPepLowPowerEpoch && *(_DWORD *)(a1 + 188) != 1 )
  {
    do
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 200) + 24 * v2 + 8) <= a2 )
        break;
      v3 = (_DWORD)v2 == 1;
      v2 = (unsigned int)(v2 - 1);
    }
    while ( !v3 );
  }
  return (unsigned int)v2;
}
