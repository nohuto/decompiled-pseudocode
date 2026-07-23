/*
 * XREFs of sub_1405AAEC8 @ 0x1405AAEC8
 * Callers:
 *     sub_1405AA6C4 @ 0x1405AA6C4 (sub_1405AA6C4.c)
 *     sub_1405AAFD8 @ 0x1405AAFD8 (sub_1405AAFD8.c)
 *     sub_14097BBE0 @ 0x14097BBE0 (sub_14097BBE0.c)
 *     sub_14097BD88 @ 0x14097BD88 (sub_14097BD88.c)
 *     sub_14097CAE8 @ 0x14097CAE8 (sub_14097CAE8.c)
 *     sub_14097CD04 @ 0x14097CD04 (sub_14097CD04.c)
 *     sub_14097D034 @ 0x14097D034 (sub_14097D034.c)
 *     sub_14097D9E0 @ 0x14097D9E0 (sub_14097D9E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405AAEC8(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 )
    return *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(v1 + 60) & 0x3FF));
  else
    return *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1838LL));
}
