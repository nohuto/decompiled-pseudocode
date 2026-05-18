/*
 * XREFs of sub_18001278C @ 0x18001278C
 * Callers:
 *     sub_1800163F0 @ 0x1800163F0 (sub_1800163F0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011E04 @ 0x180011E04 (sub_180011E04.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_18003C040 @ 0x18003C040 (sub_18003C040.c)
 *     sub_18004340C @ 0x18004340C (sub_18004340C.c)
 *     sub_180043418 @ 0x180043418 (sub_180043418.c)
 *     sub_180043428 @ 0x180043428 (sub_180043428.c)
 *     sub_180043434 @ 0x180043434 (sub_180043434.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001278C(__int64 a1, int a2, _QWORD *a3)
{
  char v6; // di
  int v7; // ebx
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v15; // [rsp+20h] [rbp-18h] BYREF
  __int64 v16; // [rsp+28h] [rbp-10h]

  *(_DWORD *)(a1 + 48) = a2;
  sub_1800124F8((__int64 *)(a1 + 16), a3);
  if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFFB) != 0 )
  {
    v6 = 0;
    v7 = a2 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 != 1 )
        v8 = 0;
    }
    else
    {
      v8 = 2;
    }
    v9 = sub_18003C040(*a3);
    v10 = sub_180034094(v9, 1LL);
    v11 = sub_180011E04(*(_QWORD *)(a1 + 16), &v15);
    sub_180011020((_QWORD *)(a1 + 32), v11);
    if ( v16 )
      sub_180010530(v16);
    sub_180043434(*(_QWORD *)(a1 + 32), v8);
    sub_180043418(*(_QWORD *)(a1 + 32), 1000LL);
    *(_BYTE *)(*(_QWORD *)(a1 + 32) + 72LL) = 1;
    sub_18004340C(*(_QWORD *)(a1 + 32), 3LL);
    v12 = *(_QWORD *)(a1 + 32);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_1801D4C88, 0LL)
      || (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_1801D5048, 0LL)
      || (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_1801D5408, 0LL) )
    {
      v6 = 1;
    }
    LOBYTE(v13) = v6;
    sub_180043428(v12, v13);
  }
  return 0LL;
}
