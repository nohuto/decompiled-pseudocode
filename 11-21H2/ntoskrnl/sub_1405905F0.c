/*
 * XREFs of sub_1405905F0 @ 0x1405905F0
 * Callers:
 *     sub_140590A00 @ 0x140590A00 (sub_140590A00.c)
 *     sub_1405A3DC0 @ 0x1405A3DC0 (sub_1405A3DC0.c)
 *     sub_14096A1D0 @ 0x14096A1D0 (sub_14096A1D0.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_14027B520 @ 0x14027B520 (sub_14027B520.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402CC7C0 @ 0x1402CC7C0 (sub_1402CC7C0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402FDA80 @ 0x1402FDA80 (sub_1402FDA80.c)
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_14033C2A0 @ 0x14033C2A0 (sub_14033C2A0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405BCAF8 @ 0x1405BCAF8 (sub_1405BCAF8.c)
 */

__int64 __fastcall sub_1405905F0(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  _QWORD *v4; // rax
  ULONG_PTR v5; // rdi
  PVOID v6; // rax
  __int64 result; // rax
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // r9
  unsigned __int8 v13; // r13
  char v14; // r12
  unsigned __int64 v15; // rax
  __int64 v16; // rbp
  int v17; // ebp
  __int64 v18; // r9
  __int64 v19; // r9
  _QWORD *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26[9]; // [rsp+30h] [rbp-48h] BYREF
  ULONG Size; // [rsp+90h] [rbp+18h] BYREF
  int v29; // [rsp+98h] [rbp+20h] BYREF

  Size = 0;
  if ( PsLoadedModuleList )
  {
    v4 = sub_1402FDA80(BugCheckParameter2, 1);
    v5 = (ULONG_PTR)v4;
    if ( !v4 )
      KeBugCheckEx(0x1Au, 0x1014uLL, 0LL, BugCheckParameter2, BugCheckParameter4);
    v6 = RtlImageDirectoryEntryToData((PVOID)v4[6], 1u, 0xCu, &Size);
    if ( !v6 || !Size || BugCheckParameter2 < (unsigned __int64)v6 || BugCheckParameter2 >= (unsigned __int64)v6 + Size )
      KeBugCheckEx(0x1Au, 0x1014uLL, v5, BugCheckParameter2, BugCheckParameter4);
  }
  result = sub_1402FDD20(BugCheckParameter2);
  if ( (_DWORD)result )
  {
    *(_QWORD *)BugCheckParameter2 = BugCheckParameter4;
    return result;
  }
  v8 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (unsigned int)sub_14027B080(BugCheckParameter2) == 1 )
    v9 = sub_14027B520();
  else
    v9 = (__int64)sub_14026DFC0(1);
  v10 = 0LL;
  v11 = v9;
  v13 = sub_1402CF4F0(v9);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v10 )
      {
        if ( ((BugCheckParameter2 >> 9) & 0xFF8) != 0 )
          goto LABEL_19;
        sub_14020D8D0(v11, v10);
      }
      v10 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      sub_14031DE00(v11, v10, 0LL, v12);
LABEL_19:
      v26[0] = sub_140317A10(v8);
      v14 = v26[0];
      if ( (v26[0] & 1) != 0 )
        break;
      sub_14020D8D0(v11, v10);
      sub_1402B0CE0(v11, v13);
      sub_1402CF4F0(v11);
      sub_14031DE00(v11, v10, 0LL, v19);
    }
    v15 = ((unsigned __int64)sub_140317A10((unsigned __int64)v26) >> 12) & 0xFFFFFFFFFFLL;
    v16 = 48 * v15 - 0x220000000000LL;
    if ( *(__int64 *)(v16 + 40) >= 0 )
      break;
    v17 = sub_140316400(BugCheckParameter2, v8, 0xFFFFFFFFFFFFFFFFuLL, 0);
    if ( v17 < 0 )
    {
      sub_14020D8D0(v11, v10);
      sub_1402B0CE0(v11, v13);
      sub_1405BCAF8(v11, (unsigned int)v17);
      sub_1402CF4F0(v11);
      sub_14031DE00(v11, v10, 0LL, v18);
    }
  }
  if ( (v14 & 0x42) != 0 )
  {
    *(_QWORD *)BugCheckParameter2 = BugCheckParameter4;
  }
  else
  {
    v20 = (_QWORD *)((BugCheckParameter2 & 0xFFF) + sub_1402CC7C0(v15, 0LL, 0x80000000));
    *v20 = BugCheckParameter4;
    sub_1402BEDD0((unsigned __int64)v20, 0x11u);
    v29 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v29, v21, v22, v23);
      while ( *(__int64 *)(v16 + 24) < 0 );
    }
    v24 = sub_14033C2A0(v16);
    v25 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v16 + 40) >> 43) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v24 )
      sub_1402E20D0(v25, v24, 1);
  }
  sub_14020D8D0(v11, v10);
  return sub_1402B0CE0(v11, v13);
}
