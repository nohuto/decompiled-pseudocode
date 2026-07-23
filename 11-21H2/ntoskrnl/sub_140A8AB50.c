/*
 * XREFs of sub_140A8AB50 @ 0x140A8AB50
 * Callers:
 *     sub_140A9A468 @ 0x140A9A468 (sub_140A9A468.c)
 * Callees:
 *     sub_1402D81DC @ 0x1402D81DC (sub_1402D81DC.c)
 *     sub_1402D8518 @ 0x1402D8518 (sub_1402D8518.c)
 *     sub_14045F6C8 @ 0x14045F6C8 (sub_14045F6C8.c)
 *     sub_1405FF00C @ 0x1405FF00C (sub_1405FF00C.c)
 *     sub_140A8B104 @ 0x140A8B104 (sub_140A8B104.c)
 */

__int64 __fastcall sub_140A8AB50(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  void *v4; // rdi
  _QWORD *v5; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v7 = 0LL;
  if ( !dword_140C1ACBC )
  {
    if ( dword_140C1B200 )
    {
      v4 = (void *)sub_140A8B104(a2);
      if ( v4 )
      {
        sub_14045F6C8((__int64)&v7, 0);
        v5 = sub_1402D8518((__int64 *)&unk_140C1B220, (__int64)&v7, a1, 1LL);
        if ( v5 )
        {
          v5[7] = v4;
          v2 = 1;
          ++dword_140C1B248;
        }
        sub_1402D81DC((__int64)&v7);
        if ( !v2 )
          sub_1405FF00C(v4);
      }
    }
  }
  return v2;
}
