/*
 * XREFs of sub_140A8AE08 @ 0x140A8AE08
 * Callers:
 *     sub_140AA0ED0 @ 0x140AA0ED0 (sub_140AA0ED0.c)
 * Callees:
 *     sub_1402D81DC @ 0x1402D81DC (sub_1402D81DC.c)
 *     sub_1402D8518 @ 0x1402D8518 (sub_1402D8518.c)
 *     sub_14045F6C8 @ 0x14045F6C8 (sub_14045F6C8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

void __fastcall sub_140A8AE08(__int64 a1)
{
  int v2; // edi
  void *v3; // rbx
  unsigned __int64 v4; // r8
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rdx
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  v10 = 0LL;
  if ( !dword_140C1ACBC )
  {
    v2 = 0;
    v3 = 0LL;
    sub_14045F6C8((__int64)&v10, 0);
    v5 = sub_1402D8518((__int64 *)&unk_140C1B220, (__int64)&v10, v4, 1LL);
    if ( v5 )
    {
      v6 = v5[7];
      if ( v6 )
      {
        v7 = *(_QWORD **)(v6 + 16);
        if ( v7 == (_QWORD *)(v6 + 16) )
        {
LABEL_7:
          if ( !dword_140C2A040 && (*(_DWORD *)(v6 + 32) & 1) == 0 && (dword_140C29FC0 & 0x800) != 0 )
            sub_140A8C924(0xC4u, 0xDCuLL, 0LL, 0LL, 0LL);
        }
        else
        {
          while ( 1 )
          {
            v3 = v7;
            v8 = (_QWORD *)*v7;
            if ( v7[2] == a1 )
              break;
            v7 = (_QWORD *)*v7;
            if ( v8 == (_QWORD *)(v6 + 16) )
              goto LABEL_7;
          }
          v2 = 1;
          if ( (_QWORD *)v8[1] != v7 || (v9 = (_QWORD *)v7[1], (_QWORD *)*v9 != v7) )
            __fastfail(3u);
          *v9 = v8;
          v8[1] = v9;
        }
      }
    }
    sub_1402D81DC((__int64)&v10);
    if ( v2 )
      ExFreePoolWithTag(v3, 0);
  }
}
