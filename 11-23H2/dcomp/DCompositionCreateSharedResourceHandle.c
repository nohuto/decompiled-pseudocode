/*
 * XREFs of DCompositionCreateSharedResourceHandle @ 0x18002B960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DCompositionCreateSharedResourceHandle(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int SharedResourceHandle; // eax
  __int64 v6; // rax
  __int64 v7; // rax

  v2 = *a1 - *(_QWORD *)&GUID_4d93059d_097b_4651_9a60_f0f25116e2f3.Data1;
  if ( *a1 == *(_QWORD *)&GUID_4d93059d_097b_4651_9a60_f0f25116e2f3.Data1 )
    v2 = a1[1] - *(_QWORD *)GUID_4d93059d_097b_4651_9a60_f0f25116e2f3.Data4;
  if ( !v2 )
  {
    v3 = 196LL;
LABEL_5:
    SharedResourceHandle = NtDCompositionCreateSharedResourceHandle(v3, a2);
    return DirectComposition::CDevice::HRESULTFromNTSTATUS(SharedResourceHandle);
  }
  v6 = *a1 - *(_QWORD *)&GUID_77c09d0b_b2b7_42c9_8916_b9316776949c.Data1;
  if ( *a1 == *(_QWORD *)&GUID_77c09d0b_b2b7_42c9_8916_b9316776949c.Data1 )
    v6 = a1[1] - *(_QWORD *)GUID_77c09d0b_b2b7_42c9_8916_b9316776949c.Data4;
  if ( !v6 )
  {
    v3 = 142LL;
    goto LABEL_5;
  }
  v7 = *a1 - *(_QWORD *)&GUID_2889a24c_9ed2_4363_bf49_07972d56fa10.Data1;
  if ( *a1 == *(_QWORD *)&GUID_2889a24c_9ed2_4363_bf49_07972d56fa10.Data1 )
    v7 = a1[1] - *(_QWORD *)GUID_2889a24c_9ed2_4363_bf49_07972d56fa10.Data4;
  if ( !v7 )
  {
    v3 = 19LL;
    goto LABEL_5;
  }
  return 2147942487LL;
}
