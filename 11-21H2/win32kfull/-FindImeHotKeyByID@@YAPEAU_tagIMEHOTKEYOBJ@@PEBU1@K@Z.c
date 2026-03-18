/*
 * XREFs of ?FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEBU1@K@Z @ 0x1C010371C
 * Callers:
 *     ?SetImeHotKey@@YAHKIIPEAUHKL__@@K@Z @ 0x1C01035E4 (-SetImeHotKey@@YAHKIIPEAUHKL__@@K@Z.c)
 *     NtUserGetImeHotKey @ 0x1C01F48A0 (NtUserGetImeHotKey.c)
 * Callees:
 *     <none>
 */

struct _tagIMEHOTKEYOBJ *__fastcall FindImeHotKeyByID(const struct _tagIMEHOTKEYOBJ *a1, int a2)
{
  struct _tagIMEHOTKEYOBJ *result; // rax

  for ( result = gpImeHotKeyListHeader;
        result && *((_DWORD *)result + 2) != a2;
        result = *(struct _tagIMEHOTKEYOBJ **)result )
  {
    ;
  }
  return result;
}
