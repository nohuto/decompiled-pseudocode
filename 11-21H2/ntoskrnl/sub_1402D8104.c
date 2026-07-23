/*
 * XREFs of sub_1402D8104 @ 0x1402D8104
 * Callers:
 *     sub_140A7C1B8 @ 0x140A7C1B8 (sub_140A7C1B8.c)
 *     sub_140A9A8F8 @ 0x140A9A8F8 (sub_140A9A8F8.c)
 * Callees:
 *     sub_1402D81DC @ 0x1402D81DC (sub_1402D81DC.c)
 *     sub_1402D8234 @ 0x1402D8234 (sub_1402D8234.c)
 *     sub_1402D83B4 @ 0x1402D83B4 (sub_1402D83B4.c)
 *     sub_140604308 @ 0x140604308 (sub_140604308.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140A7C024 @ 0x140A7C024 (sub_140A7C024.c)
 *     sub_140A8B104 @ 0x140A8B104 (sub_140A8B104.c)
 */

__int64 __fastcall sub_1402D8104(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbp
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // eax
  _OWORD v15[2]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0LL;
  v5 = a2;
  v8 = 1;
  if ( dword_140C1ACBC || !dword_140C1B200 )
    return 0;
  if ( a4 )
  {
    v12 = sub_140A8B104(a4);
    v4 = v12;
    if ( !v12 )
      return 0;
    v13 = *(_DWORD *)(v12 + 32);
    v14 = (_DWORD)dword_140C4E560 ? v13 & 0xFFFFFFFD : v13 | 2;
    *(_DWORD *)(v4 + 32) = v14;
    if ( (int)sub_140604308(v4 + 96) < 0 )
    {
LABEL_9:
      ExFreePoolWithTag((PVOID)v4, 0x44566656u);
      return 0;
    }
  }
  v9 = sub_1402D83B4(&unk_140C1B220, a1, v5);
  v10 = v9;
  if ( !v9 )
  {
    _InterlockedExchange(&dword_140C1B260, 1);
    v8 = 0;
    if ( !v4 )
      return v8;
    goto LABEL_9;
  }
  *(_QWORD *)(v9 + 56) = v4;
  *(_OWORD *)(v9 + 24) = 0LL;
  *(_QWORD *)(v9 + 40) = 0LL;
  sub_140A7C024(v9);
  v15[0] = 0LL;
  BYTE9(v15[0]) = 4;
  sub_1402D8234(&unk_140C1B220, v15, v10);
  if ( v4 )
  {
    ++dword_140C1B248;
    *(_BYTE *)(v4 + 48) = a3;
  }
  sub_1402D81DC(v15);
  return v8;
}
