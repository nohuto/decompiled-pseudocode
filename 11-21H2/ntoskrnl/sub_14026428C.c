/*
 * XREFs of sub_14026428C @ 0x14026428C
 * Callers:
 *     sub_140263260 @ 0x140263260 (sub_140263260.c)
 *     KeQueryNodeActiveAffinity @ 0x140263730 (KeQueryNodeActiveAffinity.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140263790 (KeQueryLogicalProcessorRelationship.c)
 *     KeQueryNodeActiveProcessorCount @ 0x1403DDCA0 (KeQueryNodeActiveProcessorCount.c)
 *     KeQueryNodeActiveAffinity2 @ 0x14056D7F0 (KeQueryNodeActiveAffinity2.c)
 *     sub_140960E60 @ 0x140960E60 (sub_140960E60.c)
 *     sub_140A59154 @ 0x140A59154 (sub_140A59154.c)
 *     sub_140B31500 @ 0x140B31500 (sub_140B31500.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14026428C(__int64 a1, __int64 a2, _WORD *a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rcx

  if ( a2 )
  {
    *(_OWORD *)a2 = 0LL;
    *(_QWORD *)a2 = *(_QWORD *)(a1 + 128);
    result = *(unsigned __int16 *)(a1 + 136);
    *(_WORD *)(a2 + 8) = result;
  }
  if ( a3 )
  {
    v4 = *(_QWORD *)(a1 + 128) - ((*(_QWORD *)(a1 + 128) >> 1) & 0x5555555555555555LL);
    result = (0x101010101010101LL
            * (((v4 & 0x3333333333333333LL)
              + ((v4 >> 2) & 0x3333333333333333LL)
              + (((v4 & 0x3333333333333333LL) + ((v4 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    *a3 = result;
  }
  return result;
}
