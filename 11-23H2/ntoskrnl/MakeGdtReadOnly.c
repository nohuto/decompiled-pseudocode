/*
 * XREFs of MakeGdtReadOnly @ 0x1403AE4AC
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140305E00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140306C50 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     KeWriteProtectProcessorState @ 0x140A918B0 (KeWriteProtectProcessorState.c)
 */

void MakeGdtReadOnly()
{
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdi
  __int64 v1; // rbx
  char v2; // cl
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  p_PreviousAffinity = &PreviousAffinity;
  v1 = 0LL;
  PreviousAffinity = 0LL;
  for ( Affinity = 0LL; (unsigned int)v1 < (unsigned int)KeNumberProcessors_0; v1 = (unsigned int)(v1 + 1) )
  {
    v2 = KiProcessorIndexToNumberMappingTable[v1] & 0x3F;
    Affinity.Group = (unsigned int)KiProcessorIndexToNumberMappingTable[v1] >> 6;
    *(_DWORD *)Affinity.Reserved = 0;
    Affinity.Reserved[2] = 0;
    Affinity.Mask = 1LL << v2;
    KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
    p_PreviousAffinity = 0LL;
    KeWriteProtectProcessorState(&KeGetCurrentPrcb()[-1].PrcbPad141[472]);
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
