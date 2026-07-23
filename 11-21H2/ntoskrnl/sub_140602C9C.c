/*
 * XREFs of sub_140602C9C @ 0x140602C9C
 * Callers:
 *     sub_140603A00 @ 0x140603A00 (sub_140603A00.c)
 * Callees:
 *     sub_140602C4C @ 0x140602C4C (sub_140602C4C.c)
 *     sub_1406050F8 @ 0x1406050F8 (sub_1406050F8.c)
 */

void __fastcall sub_140602C9C(__int64 a1, __int64 a2)
{
  wchar_t *v3; // r10
  __int64 v4; // rax

  if ( a1 && a2 )
  {
    sub_1406050F8(a2 + 4, a1, 32LL);
    v4 = sub_140602C4C(v3);
    if ( v4 )
    {
      *(_QWORD *)(a2 + 72) = *(_QWORD *)(v4 + 72);
      *(_DWORD *)(a2 + 80) = *(_DWORD *)(v4 + 80);
      *(_DWORD *)(a2 + 68) = *(_DWORD *)(v4 + 88);
    }
  }
}
