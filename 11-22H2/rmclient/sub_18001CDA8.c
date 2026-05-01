/*
 * XREFs of sub_18001CDA8 @ 0x18001CDA8
 * Callers:
 *     sub_18001E9C0 @ 0x18001E9C0 (sub_18001E9C0.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000AD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall sub_18001CDA8(_QWORD *a1, __int64 a2)
{
  char *v4; // rax

  v4 = (char *)operator new(0x68uLL, (const struct std::nothrow_t *)&unk_180026378);
  if ( v4 )
  {
    *(_QWORD *)v4 = &off_180020ED8;
    *(_OWORD *)(v4 + 8) = 0LL;
    *((_QWORD *)v4 + 4) = -1LL;
    *((_QWORD *)v4 + 10) = -1LL;
    *((_QWORD *)v4 + 3) = a2;
    *((_DWORD *)v4 + 10) = 0;
    *(_QWORD *)(v4 + 44) = 4LL;
    *((_QWORD *)v4 + 7) = 0LL;
    *((_QWORD *)v4 + 8) = 0LL;
    *((_DWORD *)v4 + 18) = 0;
    *((_DWORD *)v4 + 19) = 6912;
    *((_QWORD *)v4 + 11) = 0LL;
    *((_DWORD *)v4 + 24) = 1;
  }
  else
  {
    v4 = 0LL;
  }
  *a1 = v4;
  return v4 == 0LL ? 0xC0000017 : 0;
}
