/*
 * XREFs of sub_140A7F132 @ 0x140A7F132
 * Callers:
 *     sub_140A7C248 @ 0x140A7C248 (sub_140A7C248.c)
 *     sub_140A81748 @ 0x140A81748 (sub_140A81748.c)
 *     sub_140A9D69C @ 0x140A9D69C (sub_140A9D69C.c)
 * Callees:
 *     sub_1402D81DC @ 0x1402D81DC (sub_1402D81DC.c)
 *     sub_1402D8518 @ 0x1402D8518 (sub_1402D8518.c)
 *     sub_14045F6C8 @ 0x14045F6C8 (sub_14045F6C8.c)
 *     sub_140601948 @ 0x140601948 (sub_140601948.c)
 *     sub_140A91EDC @ 0x140A91EDC (sub_140A91EDC.c)
 */

char __fastcall sub_140A7F132(unsigned __int64 a1, __int64 a2)
{
  int v2; // eax
  PVOID v5; // rbx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  LOBYTE(v2) = dword_140D57528;
  v7 = 0LL;
  if ( dword_140D57528 )
  {
    LOBYTE(v2) = qword_140D58A18;
    if ( qword_140D58A18 )
    {
      v2 = sub_140601948();
      if ( !v2 )
      {
        sub_14045F6C8((__int64)&v7, 1);
        v5 = sub_1402D8518(&qword_140D58A10, (__int64)&v7, a1, a2);
        LOBYTE(v2) = sub_1402D81DC((__int64)&v7);
        if ( v5 )
        {
          do
            v2 = sub_140A91EDC(a1, a2);
          while ( v2 );
        }
      }
    }
  }
  return v2;
}
