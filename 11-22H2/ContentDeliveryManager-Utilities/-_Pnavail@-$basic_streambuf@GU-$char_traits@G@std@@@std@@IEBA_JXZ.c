/*
 * XREFs of ?_Pnavail@?$basic_streambuf@GU?$char_traits@G@std@@@std@@IEBA_JXZ @ 0x1800623D0
 * Callers:
 *     ?xsputn@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@MEAA_JPEB_W_J@Z @ 0x180065630 (-xsputn@-$basic_streambuf@_WU-$char_traits@_W@std@@@std@@MEAA_JPEB_W_J@Z.c)
 *     ?sputc@?$basic_streambuf@GU?$char_traits@G@std@@@std@@QEAAGG@Z @ 0x18006C0E4 (-sputc@-$basic_streambuf@GU-$char_traits@G@std@@@std@@QEAAGG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::basic_streambuf<unsigned short>::_Pnavail(__int64 a1)
{
  int v1; // edx

  v1 = 0;
  if ( **(_QWORD **)(a1 + 64) )
    return **(int **)(a1 + 88);
  return v1;
}
