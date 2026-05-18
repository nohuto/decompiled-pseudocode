/*
 * XREFs of sub_18001D984 @ 0x18001D984
 * Callers:
 *     sub_18001FC4C @ 0x18001FC4C (sub_18001FC4C.c)
 *     sub_180079BE8 @ 0x180079BE8 (sub_180079BE8.c)
 * Callees:
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001D984(__int64 a1, int a2, const char *a3, char a4)
{
  const char *v5; // rbx
  const char *v8; // rax
  __int64 v9; // rdx

  v5 = a3;
  v8 = a3;
  if ( *((_QWORD *)a3 + 3) >= 0x10uLL )
    v8 = *(const char **)a3;
  *(_QWORD *)(a1 + 8) = v8;
  *(_QWORD *)a1 = &Spectre::Utils::SpectreException::`vftable';
  sub_18001875C((__int64 *)(a1 + 16), (__int64)a3);
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = a2;
  if ( a4 )
  {
    if ( *((_QWORD *)v5 + 3) >= 0x10uLL )
      v5 = *(const char **)v5;
    v9 = 4LL;
  }
  else
  {
    if ( *((_QWORD *)v5 + 3) >= 0x10uLL )
      v5 = *(const char **)v5;
    v9 = 3LL;
  }
  sub_18001F2B4(&unk_1801EA000, v9, "Throwing SpectreException with message '%s' and HRESULT error 0x%.8x", v5, a2);
  return a1;
}
