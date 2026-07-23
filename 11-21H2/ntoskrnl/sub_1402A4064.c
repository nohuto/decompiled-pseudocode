/*
 * XREFs of sub_1402A4064 @ 0x1402A4064
 * Callers:
 *     sub_14024FC04 @ 0x14024FC04 (sub_14024FC04.c)
 *     sub_1402A4000 @ 0x1402A4000 (sub_1402A4000.c)
 *     sub_1402D5CA8 @ 0x1402D5CA8 (sub_1402D5CA8.c)
 *     sub_14036B86C @ 0x14036B86C (sub_14036B86C.c)
 *     sub_14055727C @ 0x14055727C (sub_14055727C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402A4064(__int64 a1)
{
  __int64 v1; // rdx
  __int64 i; // rcx

  v1 = a1;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 48LL); i; i = *(_QWORD *)(*(_QWORD *)(i + 312) + 48LL) )
    v1 = i;
  return v1;
}
