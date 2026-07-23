/*
 * XREFs of KeQueryActiveProcessorCountEx @ 0x140348830
 * Callers:
 *     KeInitializeQueue @ 0x14023E540 (KeInitializeQueue.c)
 *     sub_140259B30 @ 0x140259B30 (sub_140259B30.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140263790 (KeQueryLogicalProcessorRelationship.c)
 *     sub_140299FBC @ 0x140299FBC (sub_140299FBC.c)
 *     sub_1402D66F0 @ 0x1402D66F0 (sub_1402D66F0.c)
 *     sub_1402D9F70 @ 0x1402D9F70 (sub_1402D9F70.c)
 *     sub_1402DAB78 @ 0x1402DAB78 (sub_1402DAB78.c)
 *     sub_140302930 @ 0x140302930 (sub_140302930.c)
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     sub_140304A20 @ 0x140304A20 (sub_140304A20.c)
 *     sub_140397F20 @ 0x140397F20 (sub_140397F20.c)
 *     sub_140398D58 @ 0x140398D58 (sub_140398D58.c)
 *     KeIpiGenericCall @ 0x1403B4600 (KeIpiGenericCall.c)
 *     sub_1403B60E0 @ 0x1403B60E0 (sub_1403B60E0.c)
 *     sub_1403B6AC0 @ 0x1403B6AC0 (sub_1403B6AC0.c)
 *     sub_1403BC8C4 @ 0x1403BC8C4 (sub_1403BC8C4.c)
 *     sub_1403C2378 @ 0x1403C2378 (sub_1403C2378.c)
 *     sub_1403C81D0 @ 0x1403C81D0 (sub_1403C81D0.c)
 *     sub_1403D0FE0 @ 0x1403D0FE0 (sub_1403D0FE0.c)
 *     sub_1403D4EC8 @ 0x1403D4EC8 (sub_1403D4EC8.c)
 *     sub_1403DD730 @ 0x1403DD730 (sub_1403DD730.c)
 *     KeQueryActiveProcessorCount @ 0x1403DF670 (KeQueryActiveProcessorCount.c)
 *     sub_1405079C8 @ 0x1405079C8 (sub_1405079C8.c)
 *     sub_14050DC38 @ 0x14050DC38 (sub_14050DC38.c)
 *     sub_14050F964 @ 0x14050F964 (sub_14050F964.c)
 *     sub_14050F9E0 @ 0x14050F9E0 (sub_14050F9E0.c)
 *     sub_1405213F0 @ 0x1405213F0 (sub_1405213F0.c)
 *     sub_140521670 @ 0x140521670 (sub_140521670.c)
 *     sub_14052BFC0 @ 0x14052BFC0 (sub_14052BFC0.c)
 *     sub_14052C660 @ 0x14052C660 (sub_14052C660.c)
 *     sub_14053C908 @ 0x14053C908 (sub_14053C908.c)
 *     sub_1405402EC @ 0x1405402EC (sub_1405402EC.c)
 *     sub_14054A188 @ 0x14054A188 (sub_14054A188.c)
 *     sub_14054C880 @ 0x14054C880 (sub_14054C880.c)
 *     sub_140551F78 @ 0x140551F78 (sub_140551F78.c)
 *     KeCapturePersistentThreadState @ 0x1405558E0 (KeCapturePersistentThreadState.c)
 *     sub_14056918C @ 0x14056918C (sub_14056918C.c)
 *     sub_14056DBFC @ 0x14056DBFC (sub_14056DBFC.c)
 *     KeSetTargetProcessorDpc @ 0x14056F980 (KeSetTargetProcessorDpc.c)
 *     sub_140573670 @ 0x140573670 (sub_140573670.c)
 *     sub_140590CF0 @ 0x140590CF0 (sub_140590CF0.c)
 *     sub_1405A216C @ 0x1405A216C (sub_1405A216C.c)
 *     sub_1405C8B90 @ 0x1405C8B90 (sub_1405C8B90.c)
 *     sub_1406D0CB0 @ 0x1406D0CB0 (sub_1406D0CB0.c)
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 *     sub_140849B04 @ 0x140849B04 (sub_140849B04.c)
 *     sub_14084A618 @ 0x14084A618 (sub_14084A618.c)
 *     sub_140865194 @ 0x140865194 (sub_140865194.c)
 *     HalAllocateHardwareCounters @ 0x1409084C0 (HalAllocateHardwareCounters.c)
 *     sub_140908680 @ 0x140908680 (sub_140908680.c)
 *     sub_14090A1A0 @ 0x14090A1A0 (sub_14090A1A0.c)
 *     sub_14090A314 @ 0x14090A314 (sub_14090A314.c)
 *     sub_14090B0BC @ 0x14090B0BC (sub_14090B0BC.c)
 *     sub_14092EB58 @ 0x14092EB58 (sub_14092EB58.c)
 *     sub_1409339DC @ 0x1409339DC (sub_1409339DC.c)
 *     sub_140950E30 @ 0x140950E30 (sub_140950E30.c)
 *     sub_140960D50 @ 0x140960D50 (sub_140960D50.c)
 *     sub_1409EB100 @ 0x1409EB100 (sub_1409EB100.c)
 *     sub_140A06B80 @ 0x140A06B80 (sub_140A06B80.c)
 *     sub_140A522B8 @ 0x140A522B8 (sub_140A522B8.c)
 *     sub_140A5A248 @ 0x140A5A248 (sub_140A5A248.c)
 *     sub_140A5A6CC @ 0x140A5A6CC (sub_140A5A6CC.c)
 *     sub_140A5A7C8 @ 0x140A5A7C8 (sub_140A5A7C8.c)
 *     sub_140A5AAF0 @ 0x140A5AAF0 (sub_140A5AAF0.c)
 *     sub_140A5B7B4 @ 0x140A5B7B4 (sub_140A5B7B4.c)
 *     sub_140A61424 @ 0x140A61424 (sub_140A61424.c)
 *     sub_140A70AE0 @ 0x140A70AE0 (sub_140A70AE0.c)
 *     sub_140A70C44 @ 0x140A70C44 (sub_140A70C44.c)
 *     sub_140A70CEC @ 0x140A70CEC (sub_140A70CEC.c)
 *     sub_140A746D0 @ 0x140A746D0 (sub_140A746D0.c)
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 *     sub_140B01F80 @ 0x140B01F80 (sub_140B01F80.c)
 *     sub_140B02040 @ 0x140B02040 (sub_140B02040.c)
 *     sub_140B03800 @ 0x140B03800 (sub_140B03800.c)
 *     sub_140B03C68 @ 0x140B03C68 (sub_140B03C68.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeQueryActiveProcessorCountEx(USHORT GroupNumber)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rcx

  if ( GroupNumber == 0xFFFF )
  {
    LODWORD(v1) = dword_140D06884;
  }
  else if ( GroupNumber >= (unsigned __int16)word_140D05014 )
  {
    LODWORD(v1) = 0;
  }
  else
  {
    v2 = qword_140D06E48[GroupNumber] - (((unsigned __int64)qword_140D06E48[GroupNumber] >> 1) & 0x5555555555555555LL);
    return (0x101010101010101LL
          * (((v2 & 0x3333333333333333LL)
            + ((v2 >> 2) & 0x3333333333333333LL)
            + (((v2 & 0x3333333333333333LL) + ((v2 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  }
  return v1;
}
