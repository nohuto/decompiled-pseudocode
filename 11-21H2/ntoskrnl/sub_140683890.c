/*
 * XREFs of sub_140683890 @ 0x140683890
 * Callers:
 *     sub_140683088 @ 0x140683088 (sub_140683088.c)
 *     sub_1406E7D70 @ 0x1406E7D70 (sub_1406E7D70.c)
 * Callees:
 *     sub_1402094C4 @ 0x1402094C4 (sub_1402094C4.c)
 *     sub_1402EBB00 @ 0x1402EBB00 (sub_1402EBB00.c)
 *     sub_1402EC4D0 @ 0x1402EC4D0 (sub_1402EC4D0.c)
 *     sub_140672BD8 @ 0x140672BD8 (sub_140672BD8.c)
 *     sub_140700158 @ 0x140700158 (sub_140700158.c)
 *     sub_1407001C8 @ 0x1407001C8 (sub_1407001C8.c)
 *     sub_1409AE810 @ 0x1409AE810 (sub_1409AE810.c)
 */

void __fastcall sub_140683890(__int64 a1, __int16 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rdi
  __int64 v6; // rax
  unsigned int v7; // esi
  bool v8; // zf

  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(a1 + 1296);
  if ( (a2 & 0x20) == 0 && (*(_DWORD *)(v5 + 1040) & 0x20) != 0 )
  {
    v8 = *(_BYTE *)(a1 + 1850) == 2;
    *(_BYTE *)(a1 + 1463) = *(_BYTE *)(v5 + 1064);
    sub_1402EBB00(a1, v8);
  }
  if ( (a2 & 0x10) == 0 && (*(_DWORD *)(v5 + 1040) & 0x10) != 0 )
    sub_1409AE810(a1, 1LL, v5 + 712);
  if ( (a2 & 0x100) == 0 )
  {
    sub_1407001C8(v5, CurrentThread);
    if ( (*(_DWORD *)(v5 + 1040) & 0x100) != 0 )
      v6 = *(_QWORD *)(v5 + 1000);
    else
      v6 = 0LL;
    *(_QWORD *)(a1 + 1600) = v6;
    sub_140700158(v5, CurrentThread);
  }
  if ( (a2 & 0x80u) == 0 && *(_BYTE *)(a1 + 1463) != 1 )
  {
    v7 = *(_DWORD *)(v5 + 1044);
    if ( v7 >= 0xA )
      v7 = *(_DWORD *)(v5 + 580);
    if ( byte_140D3CA06 )
      sub_1402EC4D0(a1, *((_BYTE *)qword_140A37F60 + v7));
    sub_1402094C4(a1, v7 == 9);
  }
}
