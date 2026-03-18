/*
 * XREFs of EditionResetIMELayout @ 0x1C011AD60
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxImmLoadLayout@@YAPEAUtagIMEINFOEX@@PEAUHKL__@@@Z @ 0x1C011ADCC (-xxxImmLoadLayout@@YAPEAUtagIMEINFOEX@@PEAUHKL__@@@Z.c)
 */

_BOOL8 __fastcall EditionResetIMELayout(int a1, int a2, struct tagIMEINFOEX **a3)
{
  struct tagIMEINFOEX *Layout; // rax

  if ( (HIWORD(a1) & 0xF000) != 0xE000 && (*gpsi & 4) == 0 )
  {
    *a3 = 0LL;
    return 1LL;
  }
  Layout = xxxImmLoadLayout((HKL)a1);
  *a3 = Layout;
  return Layout || (a2 & 0xC0000000) != 0;
}
