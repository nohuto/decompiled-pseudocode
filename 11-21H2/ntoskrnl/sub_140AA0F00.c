/*
 * XREFs of sub_140AA0F00 @ 0x140AA0F00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402D81DC @ 0x1402D81DC (sub_1402D81DC.c)
 *     sub_1402D8518 @ 0x1402D8518 (sub_1402D8518.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14045F6C8 @ 0x14045F6C8 (sub_14045F6C8.c)
 *     sub_140A8B588 @ 0x140A8B588 (sub_140A8B588.c)
 *     sub_140A8B654 @ 0x140A8B654 (sub_140A8B654.c)
 */

__int64 __fastcall sub_140AA0F00(unsigned __int64 a1, int a2)
{
  volatile signed __int32 *v4; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  if ( !dword_140C1ACBC && a2 < 0 )
  {
    switch ( a2 & 0x7FFFFFFF )
    {
      case 1:
LABEL_7:
        sub_140A8B654(a1);
        break;
      case 2:
        sub_140A8B588(a1);
        break;
      case 3:
        sub_140A8B588(a1);
        goto LABEL_7;
    }
  }
  v6 = 0LL;
  if ( (dword_140C29FC0 & 0x10) != 0 && a2 >= 0 )
  {
    sub_14045F6C8((__int64)&v6, 1);
    v4 = (volatile signed __int32 *)sub_1402D8518(qword_140D58A38, (__int64)&v6, a1, 0LL);
    if ( v4 )
    {
      switch ( a2 )
      {
        case 1:
          goto LABEL_14;
        case 2:
          _InterlockedAnd(v4 + 4, 0xFFFFFFFE);
          break;
        case 3:
LABEL_14:
          _InterlockedOr(v4 + 4, 1u);
          break;
      }
    }
    sub_1402D81DC((__int64)&v6);
  }
  return sub_14042A5E0(a1, (unsigned int)a2);
}
