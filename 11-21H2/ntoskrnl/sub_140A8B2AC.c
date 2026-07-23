/*
 * XREFs of sub_140A8B2AC @ 0x140A8B2AC
 * Callers:
 *     sub_140A7F1D0 @ 0x140A7F1D0 (sub_140A7F1D0.c)
 *     sub_140A82B0C @ 0x140A82B0C (sub_140A82B0C.c)
 *     sub_140A82E08 @ 0x140A82E08 (sub_140A82E08.c)
 *     sub_140A82EB0 @ 0x140A82EB0 (sub_140A82EB0.c)
 *     sub_140A82F58 @ 0x140A82F58 (sub_140A82F58.c)
 *     sub_140A8ECA0 @ 0x140A8ECA0 (sub_140A8ECA0.c)
 *     sub_140A90660 @ 0x140A90660 (sub_140A90660.c)
 *     sub_140A95B00 @ 0x140A95B00 (sub_140A95B00.c)
 *     sub_140A95B80 @ 0x140A95B80 (sub_140A95B80.c)
 *     sub_140A95C00 @ 0x140A95C00 (sub_140A95C00.c)
 *     sub_140A95CB0 @ 0x140A95CB0 (sub_140A95CB0.c)
 *     sub_140A95D30 @ 0x140A95D30 (sub_140A95D30.c)
 *     sub_140A95F50 @ 0x140A95F50 (sub_140A95F50.c)
 *     sub_140A96220 @ 0x140A96220 (sub_140A96220.c)
 *     sub_140A962A0 @ 0x140A962A0 (sub_140A962A0.c)
 *     sub_140A96330 @ 0x140A96330 (sub_140A96330.c)
 *     sub_140A963C0 @ 0x140A963C0 (sub_140A963C0.c)
 *     sub_140A96540 @ 0x140A96540 (sub_140A96540.c)
 *     sub_140A965D0 @ 0x140A965D0 (sub_140A965D0.c)
 *     sub_140A96660 @ 0x140A96660 (sub_140A96660.c)
 *     sub_140A974B4 @ 0x140A974B4 (sub_140A974B4.c)
 * Callees:
 *     sub_1402D81DC @ 0x1402D81DC (sub_1402D81DC.c)
 *     sub_1402D8518 @ 0x1402D8518 (sub_1402D8518.c)
 *     sub_14045F6C8 @ 0x14045F6C8 (sub_14045F6C8.c)
 *     sub_140A89D2C @ 0x140A89D2C (sub_140A89D2C.c)
 *     sub_140A8B564 @ 0x140A8B564 (sub_140A8B564.c)
 */

char __fastcall sub_140A8B2AC(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  unsigned __int64 v4; // r8
  unsigned int v5; // edx
  unsigned __int64 v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v2 = (unsigned int)a2;
  v10 = 0LL;
  v3 = sub_140A8B564(a1, a2, a1);
  if ( v3 )
  {
    v3 = sub_140A89D2C(v4);
    if ( !v3 )
    {
      sub_14045F6C8((__int64)&v10, 1);
      v7 = sub_1402D8518((__int64 *)&unk_140C1B220, (__int64)&v10, v6, v5);
      if ( v7 )
      {
        v8 = v7[7];
        if ( v8 )
          _InterlockedIncrement((volatile signed __int32 *)(v2 + v8));
      }
      LOBYTE(v3) = sub_1402D81DC((__int64)&v10);
    }
  }
  return v3;
}
