/*
 * XREFs of sub_140A91A50 @ 0x140A91A50
 * Callers:
 *     sub_140A915C0 @ 0x140A915C0 (sub_140A915C0.c)
 * Callees:
 *     sub_1402D81DC @ 0x1402D81DC (sub_1402D81DC.c)
 *     sub_1402D8234 @ 0x1402D8234 (sub_1402D8234.c)
 *     sub_1402D83B4 @ 0x1402D83B4 (sub_1402D83B4.c)
 *     sub_14045F6C8 @ 0x14045F6C8 (sub_14045F6C8.c)
 */

char __fastcall sub_140A91A50(__int64 a1)
{
  char v1; // bl
  __int64 v2; // rax
  _QWORD *v3; // rax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v1 = 1;
  v5 = 0LL;
  if ( dword_140D575C0 )
  {
    v2 = sub_1402D83B4(qword_140D58A38, a1, 336LL);
    if ( v2 )
    {
      *(_DWORD *)(v2 + 16) = 0;
      sub_14045F6C8((__int64)&v5, 0);
      sub_1402D8234((__int64)qword_140D58A38, (__int64)&v5, v3);
      sub_1402D81DC((__int64)&v5);
      return v1;
    }
    _InterlockedExchange(&dword_140D576A4, 1);
  }
  return 0;
}
