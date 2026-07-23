/*
 * XREFs of sub_1405779D0 @ 0x1405779D0
 * Callers:
 *     sub_140576AA4 @ 0x140576AA4 (sub_140576AA4.c)
 *     sub_1405777C0 @ 0x1405777C0 (sub_1405777C0.c)
 *     sub_140577B4C @ 0x140577B4C (sub_140577B4C.c)
 * Callees:
 *     sub_1402EC3E4 @ 0x1402EC3E4 (sub_1402EC3E4.c)
 *     sub_140344A30 @ 0x140344A30 (sub_140344A30.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140573A80 @ 0x140573A80 (sub_140573A80.c)
 *     sub_140577654 @ 0x140577654 (sub_140577654.c)
 *     sub_14062E8B8 @ 0x14062E8B8 (sub_14062E8B8.c)
 */

char __fastcall sub_1405779D0(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  bool v3; // zf
  int v5; // eax
  int v6; // edx
  int v7; // edi
  char v8; // cl
  char v9; // cl
  char v10; // cl
  int v11; // ebp
  volatile signed __int32 *v12; // rax
  int v13; // esi
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v3 = (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) == 0;
  v15 = 0LL;
  if ( !v3 )
    _InterlockedOr(*(volatile signed __int32 **)(BugCheckParameter1 + 968), 0x100000u);
  v5 = sub_140577654(BugCheckParameter1, &v15);
  v6 = *(_DWORD *)(BugCheckParameter1 + 1024);
  v7 = v5;
  if ( v5 != v6 )
  {
    v8 = *(_BYTE *)((char)v5 + BugCheckParameter1 + 824);
    if ( v8 == -1 )
      KeBugCheckEx(0x157u, BugCheckParameter1, (char)v5, 1uLL, 0LL);
    *(_BYTE *)((char)v5 + BugCheckParameter1 + 824) = v8 + 1;
    *(_DWORD *)(BugCheckParameter1 + 856) |= 1 << v5;
    if ( v6 != 32 )
    {
      v9 = *(_BYTE *)((char)v6 + BugCheckParameter1 + 824);
      if ( !v9 )
        KeBugCheckEx(0x157u, BugCheckParameter1, (char)v6, 2uLL, 0LL);
      v10 = v9 - 1;
      *(_BYTE *)((char)v6 + BugCheckParameter1 + 824) = v10;
      if ( !v10 )
        *(_DWORD *)(BugCheckParameter1 + 856) ^= 1 << v6;
    }
    *(_DWORD *)(BugCheckParameter1 + 1024) = v5;
  }
  v11 = *(char *)(BugCheckParameter1 + 195);
  LOBYTE(v12) = sub_140573A80(BugCheckParameter1, v5);
  v13 = (char)v12;
  if ( (char)v12 != v11 )
  {
    sub_1402EC3E4(BugCheckParameter1, 0LL, 0);
    LOBYTE(v12) = sub_140344A30(BugCheckParameter1, a2, v13);
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
  {
    v12 = *(volatile signed __int32 **)(BugCheckParameter1 + 968);
    _InterlockedAnd(v12, 0xFFEFFFFF);
  }
  if ( v11 != v13 )
  {
    LOBYTE(v12) = BYTE4(xmmword_140D06910);
    if ( (BYTE4(xmmword_140D06910) & 0x20) != 0 )
      LOBYTE(v12) = sub_14062E8B8(BugCheckParameter1, v11, v7, v13, (__int64)&v15);
  }
  return (char)v12;
}
