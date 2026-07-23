/*
 * XREFs of sub_140779C10 @ 0x140779C10
 * Callers:
 *     sub_140654720 @ 0x140654720 (sub_140654720.c)
 *     sub_14065F5D4 @ 0x14065F5D4 (sub_14065F5D4.c)
 *     sub_14065FA0C @ 0x14065FA0C (sub_14065FA0C.c)
 *     sub_1406619F8 @ 0x1406619F8 (sub_1406619F8.c)
 *     sub_1406CF970 @ 0x1406CF970 (sub_1406CF970.c)
 *     sub_1406E32E4 @ 0x1406E32E4 (sub_1406E32E4.c)
 *     sub_1406E397C @ 0x1406E397C (sub_1406E397C.c)
 *     sub_140748FA4 @ 0x140748FA4 (sub_140748FA4.c)
 *     sub_140765DC0 @ 0x140765DC0 (sub_140765DC0.c)
 *     sub_140769170 @ 0x140769170 (sub_140769170.c)
 *     sub_14076B030 @ 0x14076B030 (sub_14076B030.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 *     sub_140773B10 @ 0x140773B10 (sub_140773B10.c)
 *     sub_140775140 @ 0x140775140 (sub_140775140.c)
 *     sub_1407754E4 @ 0x1407754E4 (sub_1407754E4.c)
 *     sub_140777578 @ 0x140777578 (sub_140777578.c)
 *     sub_1407793D0 @ 0x1407793D0 (sub_1407793D0.c)
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     sub_140862BA0 @ 0x140862BA0 (sub_140862BA0.c)
 *     sub_140949470 @ 0x140949470 (sub_140949470.c)
 *     sub_14095341C @ 0x14095341C (sub_14095341C.c)
 *     sub_140953700 @ 0x140953700 (sub_140953700.c)
 *     sub_140954434 @ 0x140954434 (sub_140954434.c)
 *     sub_140959490 @ 0x140959490 (sub_140959490.c)
 *     sub_14095975C @ 0x14095975C (sub_14095975C.c)
 *     sub_140B277F4 @ 0x140B277F4 (sub_140B277F4.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     RtlLookupElementGenericTableAvl @ 0x1402DF3F0 (RtlLookupElementGenericTableAvl.c)
 */

_QWORD *__fastcall sub_140779C10(__int64 a1, ULONG a2)
{
  _QWORD *v2; // rbx
  _QWORD **v4; // rax
  __int64 v5; // rcx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[1] = a1;
  v2 = 0LL;
  Buffer[0] = 0LL;
  ExAcquireFastMutex(&stru_140C467E0);
  v4 = (_QWORD **)RtlLookupElementGenericTableAvl(&stru_140C46820, Buffer);
  if ( v4 )
  {
    v2 = *v4;
    if ( *v4 )
    {
      if ( *(_WORD *)v2 == 3 && (v5 = *(_QWORD *)(v2[39] + 40LL)) != 0 && *(_QWORD **)(v5 + 32) == v2 )
        ObfReferenceObjectWithTag(v2, a2);
      else
        v2 = 0LL;
    }
  }
  KeReleaseGuardedMutex(&stru_140C467E0);
  return v2;
}
