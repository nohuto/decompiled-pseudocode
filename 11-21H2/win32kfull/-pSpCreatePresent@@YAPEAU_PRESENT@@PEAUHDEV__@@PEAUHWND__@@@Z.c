/*
 * XREFs of ?pSpCreatePresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C027F894
 * Callers:
 *     ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C027CAC4 (-GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

struct _PRESENT *__fastcall pSpCreatePresent(_QWORD *a1, HWND a2)
{
  struct _PRESENT *result; // rax

  result = (struct _PRESENT *)Win32AllocPoolZInit(16LL, 1701998663LL);
  if ( result )
  {
    *(_QWORD *)result = a2;
    *((_QWORD *)result + 1) = a1[20];
    a1[20] = result;
  }
  return result;
}
