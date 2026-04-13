/*
 * XREFs of ??_E?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAAPEAXI@Z @ 0x1800547F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x180053208 (--1-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 */

void *__fastcall std::basic_stringbuf<unsigned short>::`vector deleting destructor'(void *a1, char a2)
{
  std::basic_stringbuf<unsigned short>::~basic_stringbuf<unsigned short>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
