/*
 * XREFs of ?GetId@MPCVoiceProcessor@@UEAAJPEAU_GUID@@@Z @ 0x18002F490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCVoiceProcessor::GetId(MPCVoiceProcessor *this, struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = (struct _GUID)PROCESSORID_MPCVoice;
  return result;
}
