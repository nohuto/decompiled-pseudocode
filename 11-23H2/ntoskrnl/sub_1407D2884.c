/*
 * XREFs of sub_1407D2884 @ 0x1407D2884
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x1407D2408 (WbAddWarbirdEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1407D26E0 (WbGetWarbirdEncryptionSegment.c)
 * Callees:
 *     sub_140763AB0 @ 0x140763AB0 (sub_140763AB0.c)
 *     sub_1407D2A78 @ 0x1407D2A78 (sub_1407D2A78.c)
 */

__int64 __fastcall sub_1407D2884(__int64 a1, __int64 a2, _QWORD *a3, int *a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  result = sub_140763AB0(a1 + 136, a2, 0x10u, &v7, a4);
  if ( (int)result >= 0 && a3 )
  {
    result = sub_1407D2A78(v7);
    if ( (int)result >= 0 )
      *a3 = v6;
  }
  return result;
}
