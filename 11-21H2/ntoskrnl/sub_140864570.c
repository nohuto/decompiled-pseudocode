/*
 * XREFs of sub_140864570 @ 0x140864570
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1407EEF9C @ 0x1407EEF9C (sub_1407EEF9C.c)
 */

__int64 __fastcall sub_140864570(__int64 a1, int *a2, int a3)
{
  unsigned int v4; // ebx

  v4 = -1073741811;
  if ( a2 && a3 == 4 )
  {
    v4 = 0;
    sub_1402D66A8((ULONG_PTR)&qword_140C1F5C0);
    dword_140C23310 = *a2;
    if ( (unsigned int)dword_140C23310 > 0x64 )
      dword_140C23310 = 100;
    sub_1402935D0((ULONG_PTR)&qword_140C1F5C0);
    sub_1407EEF9C(2);
  }
  return v4;
}
