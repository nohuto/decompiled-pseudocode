/*
 * XREFs of sub_1403B4940 @ 0x1403B4940
 * Callers:
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 *     sub_140423360 @ 0x140423360 (sub_140423360.c)
 *     sub_1404257E0 @ 0x1404257E0 (sub_1404257E0.c)
 *     sub_140425B20 @ 0x140425B20 (sub_140425B20.c)
 *     sub_140425E60 @ 0x140425E60 (sub_140425E60.c)
 *     sub_1404261A0 @ 0x1404261A0 (sub_1404261A0.c)
 *     sub_1404264E0 @ 0x1404264E0 (sub_1404264E0.c)
 *     sub_140427360 @ 0x140427360 (sub_140427360.c)
 *     sub_140428220 @ 0x140428220 (sub_140428220.c)
 *     sub_14042CF40 @ 0x14042CF40 (sub_14042CF40.c)
 *     sub_140430F00 @ 0x140430F00 (sub_140430F00.c)
 * Callees:
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403B49A0 (KeInterlockedClearProcessorAffinityEx.c)
 */

unsigned __int64 __fastcall sub_1403B4940(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = *((unsigned int *)CurrentPrcb + 9);
  *((_BYTE *)CurrentPrcb + 33114) = 0;
  KeInterlockedClearProcessorAffinityEx(byte_140C2AF60, v4, a3);
  v5 = __readcr4();
  if ( (v5 & 0x20080) != 0 )
  {
    result = v5 ^ 0x80;
    __writecr4(v5 ^ 0x80);
    __writecr4(v5);
  }
  else
  {
    result = __readcr3();
    __writecr3(result);
  }
  return result;
}
