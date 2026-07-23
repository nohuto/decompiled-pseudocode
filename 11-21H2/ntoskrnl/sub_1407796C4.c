/*
 * XREFs of sub_1407796C4 @ 0x1407796C4
 * Callers:
 *     sub_140775D50 @ 0x140775D50 (sub_140775D50.c)
 *     sub_1407792B4 @ 0x1407792B4 (sub_1407792B4.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1407795E4 @ 0x1407795E4 (sub_1407795E4.c)
 *     sub_140779620 @ 0x140779620 (sub_140779620.c)
 *     sub_140779A50 @ 0x140779A50 (sub_140779A50.c)
 *     sub_140779DC4 @ 0x140779DC4 (sub_140779DC4.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407796C4(__int64 a1, __int64 a2, bool *a3)
{
  __int64 v3; // rax
  PVOID v5; // rbx
  __int64 v8; // rdx
  char *Pool2; // rsi
  int v10; // edi
  HANDLE Handle[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v13; // [rsp+40h] [rbp-20h]
  __int128 v14; // [rsp+50h] [rbp-10h]
  int v15; // [rsp+90h] [rbp+30h] BYREF
  PVOID P; // [rsp+A0h] [rbp+40h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v15 = 0;
  *(_OWORD *)Handle = 0LL;
  v5 = 0LL;
  v13 = 0LL;
  *a3 = 0;
  v14 = 0LL;
  v8 = *(unsigned int *)(v3 + 80);
  P = 0LL;
  Pool2 = (char *)ExAllocatePool2(256LL, 48 * v8, 1483763280LL);
  if ( Pool2 )
  {
    LODWORD(Handle[1]) = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 80LL);
    *(_QWORD *)&v13 = Pool2;
    *(_QWORD *)&v14 = a2;
    *((_QWORD *)&v14 + 1) = a1;
    sub_140779DC4(&P);
    v10 = sub_1407795E4(
            (__int64)sub_1407770E0,
            (__int64)Handle,
            *(_DWORD *)(*(_QWORD *)(a1 + 24) + 80LL),
            *(_DWORD **)(*(_QWORD *)(a1 + 24) + 88LL),
            &v15);
    if ( v10 >= 0 )
      *a3 = v15 != 0;
    sub_140779620(DWORD2(v13), Pool2, 0x58706E50u);
    v5 = P;
  }
  else
  {
    v10 = -1073741670;
  }
  if ( (unsigned __int64)Handle[0] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    ZwClose(Handle[0]);
  if ( v5 )
    sub_140779A50(v5);
  return (unsigned int)v10;
}
