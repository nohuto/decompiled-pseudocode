/*
 * XREFs of ??_G?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAAPEAXI@Z @ 0x180032550
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAA@XZ @ 0x180031998 (--1-$basic_stringbuf@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAA@XZ.c)
 */

_QWORD *__fastcall std::wstringbuf::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  std::wstringbuf::~wstringbuf(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
