/*
 * XREFs of sub_1402B9FC0 @ 0x1402B9FC0
 * Callers:
 *     sub_14028FFD0 @ 0x14028FFD0 (sub_14028FFD0.c)
 *     ntoskrnl_6 @ 0x14029B310 (ntoskrnl_6.c)
 *     sub_1402B3140 @ 0x1402B3140 (sub_1402B3140.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 * Callees:
 *     sub_140291010 @ 0x140291010 (sub_140291010.c)
 *     sub_1402EC3E4 @ 0x1402EC3E4 (sub_1402EC3E4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140573A80 @ 0x140573A80 (sub_140573A80.c)
 *     sub_140577654 @ 0x140577654 (sub_140577654.c)
 *     sub_14062E8B8 @ 0x14062E8B8 (sub_14062E8B8.c)
 */

char __fastcall sub_1402B9FC0(ULONG_PTR BugCheckParameter1, __int64 a2, char a3)
{
  bool v4; // zf
  int v8; // eax
  int v9; // edx
  int v10; // r15d
  ULONG_PTR v11; // rcx
  char v12; // al
  ULONG_PTR v13; // rcx
  char v14; // al
  char v15; // al
  int v16; // r14d
  unsigned int v17; // ebp
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v4 = (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) == 0;
  v18 = 0LL;
  if ( v4 )
    return 0;
  _InterlockedOr(*(volatile signed __int32 **)(BugCheckParameter1 + 968), 0x100000u);
  v8 = sub_140577654(BugCheckParameter1, &v18);
  v9 = *(_DWORD *)(BugCheckParameter1 + 1024);
  v10 = v8;
  if ( v8 != v9 )
  {
    v11 = (char)v8 + BugCheckParameter1;
    v12 = *(_BYTE *)(v11 + 824);
    if ( v12 == -1 )
      KeBugCheckEx(0x157u, BugCheckParameter1, (char)v10, 1uLL, 0LL);
    *(_BYTE *)(v11 + 824) = v12 + 1;
    *(_DWORD *)(BugCheckParameter1 + 856) |= 1 << v10;
    if ( v9 != 32 )
    {
      v13 = (char)v9 + BugCheckParameter1;
      v14 = *(_BYTE *)(v13 + 824);
      if ( !v14 )
        KeBugCheckEx(0x157u, BugCheckParameter1, (char)v9, 2uLL, 0LL);
      v15 = v14 - 1;
      *(_BYTE *)(v13 + 824) = v15;
      if ( !v15 )
        *(_DWORD *)(BugCheckParameter1 + 856) ^= 1 << v9;
    }
    *(_DWORD *)(BugCheckParameter1 + 1024) = v10;
  }
  v16 = *(char *)(BugCheckParameter1 + 195);
  v17 = (char)sub_140573A80(BugCheckParameter1, (unsigned __int8)v10);
  if ( a3 && (*(_BYTE *)(BugCheckParameter1 + 564) & 0xF0) != 0 )
  {
    if ( (int)v17 <= v16 )
      goto LABEL_18;
    goto LABEL_17;
  }
  if ( v17 != v16 )
  {
LABEL_17:
    sub_1402EC3E4(BugCheckParameter1, 0LL, 0LL);
    sub_140291010(a2, BugCheckParameter1, (PVOID *)v17, a2 != 0);
  }
LABEL_18:
  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
    _InterlockedAnd(*(volatile signed __int32 **)(BugCheckParameter1 + 968), 0xFFEFFFFF);
  if ( v16 != v17 && (BYTE4(xmmword_140D06910) & 0x20) != 0 )
    sub_14062E8B8(BugCheckParameter1, v16, v10, v17, (__int64)&v18);
  return 1;
}
