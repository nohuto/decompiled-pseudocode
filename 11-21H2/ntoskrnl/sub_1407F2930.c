/*
 * XREFs of sub_1407F2930 @ 0x1407F2930
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 * Callees:
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     sub_1407F2028 @ 0x1407F2028 (sub_1407F2028.c)
 *     sub_140808B40 @ 0x140808B40 (sub_140808B40.c)
 *     sub_140993EFC @ 0x140993EFC (sub_140993EFC.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_1407F2930(__int64 a1)
{
  signed int v1; // ebx
  unsigned int v2; // edi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx

  v1 = *(_DWORD *)(a1 + 4);
  v2 = 0;
  if ( !byte_140C5AC3C )
    sub_1402D6B0C((__int64)&unk_140CE2050, 0x16F54A4u, 0, 0, (__int64)&qword_14000EFB0, 1);
  if ( *(_BYTE *)a1 )
  {
    sub_140A48330(a1);
    if ( v1 >= 31
      && (v1 <= 39 || v1 == 54)
      && byte_140D048AD
      && !byte_140D048DC
      && !byte_140C0C644
      && dword_140C232CC == 1
      && !byte_140C4EF1C
      && !dword_140C548DC
      && (const int *)qword_140C22050 != &xmmword_140010DE8 )
    {
      LOBYTE(v4) = dword_140C232CC == 1;
      LOBYTE(v5) = byte_140C0C644 == 0;
      sub_140993EFC((unsigned int)v1, v4, v5);
    }
    v2 = sub_1407F2028(1, v1);
    sub_140A47CF8(v7, v6);
    if ( (!v2 || v2 == 259) && qword_140C4EF10 != qword_140C22048 && !dword_140C548DC )
    {
      sub_140808B40((unsigned int)v1);
      qword_140C4EF10 = qword_140C22048;
      ZwUpdateWnfStateData(&stru_14000E630, &qword_140C22048, 8u, 0LL, 0LL, 0, 0);
    }
  }
  return v2;
}
