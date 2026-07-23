/*
 * XREFs of sub_14024B47C @ 0x14024B47C
 * Callers:
 *     sub_1406CCD8C @ 0x1406CCD8C (sub_1406CCD8C.c)
 *     sub_140A580F0 @ 0x140A580F0 (sub_140A580F0.c)
 * Callees:
 *     sub_14024B4DC @ 0x14024B4DC (sub_14024B4DC.c)
 */

__int64 __fastcall sub_14024B47C(ULONG_PTR a1, unsigned __int8 *a2, unsigned int a3, __int64 a4, int a5)
{
  _DWORD *v6; // r11
  __int64 v7; // rdi
  unsigned int v8; // eax

  v6 = (_DWORD *)a1;
  if ( a3 )
  {
    v7 = a3;
    do
    {
      v8 = *a2++;
      *v6 = (v8 >> 2) | (16 * (a5 + *v6 - a1));
      ++v6;
      --v7;
    }
    while ( v7 );
  }
  return sub_14024B4DC(a1);
}
