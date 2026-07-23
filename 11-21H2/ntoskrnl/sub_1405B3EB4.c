/*
 * XREFs of sub_1405B3EB4 @ 0x1405B3EB4
 * Callers:
 *     sub_14038E608 @ 0x14038E608 (sub_14038E608.c)
 * Callees:
 *     sub_140239060 @ 0x140239060 (sub_140239060.c)
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     sub_1402E7704 @ 0x1402E7704 (sub_1402E7704.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_140338D00 @ 0x140338D00 (sub_140338D00.c)
 *     sub_14033FAA4 @ 0x14033FAA4 (sub_14033FAA4.c)
 */

__int64 __fastcall sub_1405B3EB4(ULONG_PTR BugCheckParameter2, __int16 a2, __int64 a3, _BYTE *a4, __int64 a5)
{
  unsigned int v6; // esi
  char v10; // r14
  __int64 v11; // rbx

  v6 = 1;
  v10 = sub_140326870(BugCheckParameter2, (*a4 != 0) + 1);
  sub_140338D00(a3, (__int64)a4);
  if ( (v10 & 3) != 0 )
  {
    sub_14033FAA4(BugCheckParameter2, 0);
    return (v10 & 2) == 0 || (a2 & 0x2004) != 0;
  }
  else
  {
    v11 = 48LL * *(_QWORD *)(a5 + 8) - 0x220000000000LL;
    sub_140239060(v11);
    sub_1402E7704(BugCheckParameter2, v11, 6, 0LL);
    sub_1402BF9C0(v11, 4u);
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *(_QWORD *)(a5 + 8) = -1LL;
  }
  return v6;
}
