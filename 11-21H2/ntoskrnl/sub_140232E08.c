/*
 * XREFs of sub_140232E08 @ 0x140232E08
 * Callers:
 *     sub_140232BE4 @ 0x140232BE4 (sub_140232BE4.c)
 *     sub_14026F180 @ 0x14026F180 (sub_14026F180.c)
 *     sub_140284EB0 @ 0x140284EB0 (sub_140284EB0.c)
 *     sub_140313DE0 @ 0x140313DE0 (sub_140313DE0.c)
 *     sub_14031E200 @ 0x14031E200 (sub_14031E200.c)
 *     sub_1403219B0 @ 0x1403219B0 (sub_1403219B0.c)
 *     sub_140321F70 @ 0x140321F70 (sub_140321F70.c)
 *     sub_14033C5F0 @ 0x14033C5F0 (sub_14033C5F0.c)
 *     sub_140353230 @ 0x140353230 (sub_140353230.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 *     sub_14059DB28 @ 0x14059DB28 (sub_14059DB28.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140232E08(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // r10
  __int64 v5; // r8
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx

  v2 = a1[3];
  result = 2 * v2;
  v4 = a1[1];
  v5 = *(_QWORD *)(v4 + 16 * v2 + 8);
  v6 = *(_DWORD *)(v4 + 16 * v2) & 0xFFF;
  if ( ++a1[4] == (unsigned __int64)(v6 + v5 + 4095) >> 12 )
  {
    a1[4] = 0LL;
    v7 = v2 + 1;
    v8 = a1[2];
    a1[3] = v7;
    if ( v7 < v8 )
    {
      result = 2 * v7;
      if ( !*(_QWORD *)(v4 + 16 * v7 + 8) )
        v7 = v8;
      a1[3] = v7;
    }
  }
  return result;
}
