/*
 * XREFs of ??_E?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAAPEAXI@Z @ 0x180417A90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x180416C60 (--1-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAA@XZ.c)
 */

_QWORD *__fastcall std::stringbuf::`vector deleting destructor'(_QWORD *a1, char a2)
{
  std::stringbuf::~stringbuf(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
