/*
 * XREFs of sub_14076FC68 @ 0x14076FC68
 * Callers:
 *     sub_14076C4E0 @ 0x14076C4E0 (sub_14076C4E0.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14076E894 @ 0x14076E894 (sub_14076E894.c)
 *     sub_14076FE20 @ 0x14076FE20 (sub_14076FE20.c)
 */

__int64 __fastcall sub_14076FC68(__int64 a1, _DWORD *a2, char a3)
{
  int v5; // esi
  int v6; // r14d
  int v7; // r8d
  bool v8; // cf
  unsigned int *v9; // rax
  bool v10; // cf
  unsigned int *v11; // rax
  __int64 v13; // rcx
  HANDLE Handle; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v15; // [rsp+90h] [rbp+50h] BYREF

  v15 = 0;
  Handle = 0LL;
  v5 = a3 != 0 ? 0x20000 : 0;
  v6 = sub_14076E894(*(_QWORD *)(a1 + 32), (__int64)&Handle, 983103);
  if ( v6 >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 396) & 0x40) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 720);
      if ( !v13 || (*(_BYTE *)(v13 + 16) & 4) == 0 )
        a2[1] &= ~0x200u;
    }
    v7 = (int)Handle;
    *(_DWORD *)(a1 + 560) = a2[1];
    v15 = (a2[1] & 0x3FC | (a2[1] >> 13) & 8 | ((a2[1] & 0xC000 | (a2[1] >> 4) & 0x10000u) >> 4)) >> 2;
    sub_14076FE20(qword_140D00AC0, *(_QWORD *)(a1 + 48), v7, 16, 4, (__int64)&v15, 4, v5);
    v8 = a2[3] != -1;
    v15 = a2[3];
    v9 = &v15;
    if ( v15 == -1 )
      v9 = 0LL;
    sub_14076FE20(qword_140D00AC0, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 17, 4, (__int64)v9, v8 ? 4 : 0, v5);
    v10 = a2[2] != -1;
    v15 = a2[2];
    v11 = &v15;
    if ( v15 == -1 )
      v11 = 0LL;
    sub_14076FE20(qword_140D00AC0, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 29, 4, (__int64)v11, v10 ? 4 : 0, v5);
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
