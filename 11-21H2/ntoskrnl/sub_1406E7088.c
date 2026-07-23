/*
 * XREFs of sub_1406E7088 @ 0x1406E7088
 * Callers:
 *     sub_1407C3850 @ 0x1407C3850 (sub_1407C3850.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_140914D00 @ 0x140914D00 (sub_140914D00.c)
 * Callees:
 *     sub_140346D64 @ 0x140346D64 (sub_140346D64.c)
 *     sub_1406E713C @ 0x1406E713C (sub_1406E713C.c)
 *     sub_1406E717C @ 0x1406E717C (sub_1406E717C.c)
 */

__int64 __fastcall sub_1406E7088(unsigned int *a1)
{
  _DWORD *v1; // rsi
  unsigned int v3; // ebx
  unsigned int v4; // eax
  __int64 *v6; // rcx
  __int64 v7; // rax

  v1 = a1 + 2;
  v3 = a1[2];
  sub_1406E713C(v3);
  v4 = *a1 & 1 | (2 * (*a1 >> 1) - 2);
  *a1 = v4;
  if ( v4 < 2 )
  {
    v6 = (__int64 *)((char *)qword_140C493B8
                   + 16
                   * (((unsigned __int16)(-30045 * (v3 ^ (v3 >> 9))) ^ (unsigned __int16)((unsigned __int64)(101027 * (v3 ^ (v3 >> 9))) >> 9)) & 0x7FF)
                   + 8);
    if ( v6 )
    {
      do
      {
        v7 = *v6;
        if ( !*v6 )
          break;
        if ( (_DWORD *)v7 == v1 )
        {
          *v6 = *(_QWORD *)(v7 + 8);
          break;
        }
        v6 = (__int64 *)(v7 + 8);
      }
      while ( v7 != -8 );
    }
    sub_140346D64(a1, 0x624E4D43u);
  }
  return sub_1406E717C(v3);
}
