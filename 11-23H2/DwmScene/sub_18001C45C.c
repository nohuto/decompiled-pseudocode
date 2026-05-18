/*
 * XREFs of sub_18001C45C @ 0x18001C45C
 * Callers:
 *     sub_18001E424 @ 0x18001E424 (sub_18001E424.c)
 *     sub_18006EDE8 @ 0x18006EDE8 (sub_18006EDE8.c)
 * Callees:
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001C45C(__int64 a1, int a2, const char *a3, char a4)
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
  sub_180017648((_QWORD *)(a1 + 16), (__int64)a3);
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
  sub_18001DB68(&unk_1801C8000, v9, "Throwing SpectreException with message '%s' and HRESULT error 0x%.8x", v5, a2);
  return a1;
}
