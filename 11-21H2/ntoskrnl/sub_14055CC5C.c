/*
 * XREFs of sub_14055CC5C @ 0x14055CC5C
 * Callers:
 *     sub_140553244 @ 0x140553244 (sub_140553244.c)
 * Callees:
 *     sub_14028FBF0 @ 0x14028FBF0 (sub_14028FBF0.c)
 *     sub_140552B40 @ 0x140552B40 (sub_140552B40.c)
 *     sub_1405544E0 @ 0x1405544E0 (sub_1405544E0.c)
 *     sub_14055CF88 @ 0x14055CF88 (sub_14055CF88.c)
 *     sub_14055D2EC @ 0x14055D2EC (sub_14055D2EC.c)
 *     sub_14055D5EC @ 0x14055D5EC (sub_14055D5EC.c)
 *     sub_140642660 @ 0x140642660 (sub_140642660.c)
 */

__int64 __fastcall sub_14055CC5C(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned int v11; // ebx
  __int64 *v12; // rdi
  unsigned int v13; // esi
  int v14; // eax
  int v15; // r9d
  unsigned int v16; // ecx
  unsigned __int64 v17; // rdx

  qword_140D018E8 = *(_QWORD *)(qword_140D00A80 + 1424);
  sub_1405544E0(a1);
  sub_140552B40(34);
  if ( sub_14028FBF0((__int64)sub_14055DFD0) )
  {
    v11 = 0;
    if ( dword_140C5EA20 )
    {
LABEL_3:
      v12 = &qword_140C5EA40[1048 * v11];
      v13 = 0;
      while ( (int)sub_140642660(*v12) >= 0 )
      {
        ++v13;
        ++v12;
        if ( v13 > 1 )
        {
          if ( ++v11 < dword_140C5EA20 )
            goto LABEL_3;
          break;
        }
      }
    }
  }
  sub_14055D5EC();
  v14 = sub_14055D2EC(a1, a2, a3, a4, a5, a6, a7);
  v16 = v14;
  if ( v14 >= 0 )
  {
    v14 = sub_14055CF88(a1, a2, a3, v15, a5);
    v16 = v14;
  }
  if ( v14 == -1073741789 )
  {
    *(_DWORD *)(qword_140D00A80 + 1368) |= 0x10u;
    v16 = 0;
  }
  v17 = *(_QWORD *)(qword_140D00A80 + 1424);
  if ( v17 > qword_140D018E8 )
    *(_QWORD *)(*(_QWORD *)(qword_140D00A80 + 8) + 40LL) = v17 - qword_140D018E8;
  return v16;
}
