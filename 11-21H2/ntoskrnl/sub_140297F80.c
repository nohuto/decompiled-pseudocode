/*
 * XREFs of sub_140297F80 @ 0x140297F80
 * Callers:
 *     sub_140294DD8 @ 0x140294DD8 (sub_140294DD8.c)
 *     RtlInitializeExtendedContext @ 0x140295100 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140295190 (RtlGetExtendedContextLength.c)
 *     sub_1402956D0 @ 0x1402956D0 (sub_1402956D0.c)
 *     sub_140296110 @ 0x140296110 (sub_140296110.c)
 *     RtlCopyContext @ 0x140702F70 (RtlCopyContext.c)
 *     sub_140703290 @ 0x140703290 (sub_140703290.c)
 *     sub_140704980 @ 0x140704980 (sub_140704980.c)
 *     sub_140704E2C @ 0x140704E2C (sub_140704E2C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140297F80(int a1, int *a2)
{
  int v2; // r8d

  if ( (a1 & 0x27FFFF80) != 0x10000
    && (a1 & 0x7FFFF20) != 0x100000
    && (a1 & 0x7FFFFF0) != 0x200000
    && (a1 & 0x7FFFFE0) != 0x400000 )
  {
    return 3221225485LL;
  }
  v2 = 1;
  if ( (a1 & 0x100040) == 1048640 || (a1 & 0x10040) == 65600 )
  {
    if ( !MEMORY[0xFFFFF780000003D8] )
      return 3221225659LL;
    v2 = 3;
  }
  if ( (a1 & 0x100080) == 0x100080 )
  {
    if ( (_BYTE)byte_140E01841 )
    {
      v2 |= 4u;
      goto LABEL_6;
    }
    return 3221225659LL;
  }
LABEL_6:
  if ( a2 )
    *a2 = v2;
  return 0LL;
}
