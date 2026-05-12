/*
 * XREFs of sub_1C006672C @ 0x1C006672C
 * Callers:
 *     DoScreenSave @ 0x1C0034BE8 (DoScreenSave.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 */

bool __fastcall sub_1C006672C(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax

  *(_QWORD *)(a1 + 6024) = 0LL;
  v2 = *(unsigned int *)(a1 + 904);
  if ( (unsigned int)v2 <= 1 )
    return 0;
  v3 = sub_1C0007CF4(64LL, 24 * v2, 1095197010LL, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 6024) = v3;
  return v3 != 0;
}
