/*
 * XREFs of sub_1406E2C14 @ 0x1406E2C14
 * Callers:
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 * Callees:
 *     sub_1402588EC @ 0x1402588EC (sub_1402588EC.c)
 *     sub_140281480 @ 0x140281480 (sub_140281480.c)
 *     sub_14030E7C0 @ 0x14030E7C0 (sub_14030E7C0.c)
 *     sub_14030FE40 @ 0x14030FE40 (sub_14030FE40.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1407A4C90 @ 0x1407A4C90 (sub_1407A4C90.c)
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 */

void __fastcall sub_1406E2C14(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  ULONG_PTR v6; // rbx
  __int64 v7; // r8
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rax
  unsigned __int64 v10; // r8
  __int64 v11; // r8
  _OWORD v12[3]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13; // [rsp+60h] [rbp-28h]
  int v14; // [rsp+A8h] [rbp+20h] BYREF

  v4 = *((_QWORD *)KeGetCurrentThread() + 23);
  v5 = sub_14030E7C0(BugCheckParameter2, 1, &v14);
  v6 = v5;
  if ( v5 )
  {
    v7 = *(unsigned int *)(v5 + 24);
    v8 = (v7 | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32)) << 12;
    if ( (*(_DWORD *)(v5 + 48) & 0x70) != 0x10
      || (BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) != v8
      || a2 != (*(unsigned int *)(v5 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 33) << 32))
             - (v7 | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32))
             + 1 )
    {
      goto LABEL_9;
    }
    v9 = sub_1402588EC(v5);
    if ( !v9 )
      KeBugCheckEx(0x1Au, 0x1402uLL, BugCheckParameter2, v6, 0LL);
    sub_140281480(v6, v9);
    if ( (*(_DWORD *)(v6 + 48) & 8) != 0
      && (*(_DWORD *)(v4 + 1124) & 0x20) == 0
      && (int)sub_1407A4C90(v6, v8, (*(_DWORD *)(v6 + 28) - *(_DWORD *)(v6 + 24) + 1) << 12, 85, 0) < 0 )
    {
      v10 = (unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32;
      v13 = 0LL;
      v11 = ((*(unsigned int *)(v6 + 28) | v10) << 12) | 0xFFF;
      memset(v12, 0, sizeof(v12));
      sub_14030FE40(0, v8, v11, 64, (__int64)v12);
LABEL_9:
      sub_14032E700((char *)v6);
      return;
    }
    sub_1407BC0B0((PVOID)v6);
  }
}
