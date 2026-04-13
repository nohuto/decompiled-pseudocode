/*
 * XREFs of ??1?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x180053258
 * Callers:
 *     ??1?$basic_istringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAA@XZ @ 0x180053194 (--1-$basic_istringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAA@XZ.c)
 *     ??_E?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAAPEAXI@Z @ 0x180054840 (--_E-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAAPEAXI@Z.c)
 *     ??1?$basic_stringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAA@XZ @ 0x180067354 (--1-$basic_stringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAA@XZ.c)
 *     ??1?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAA@XZ @ 0x18009B1F0 (--1-$basic_ostringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void **__fastcall std::basic_stringbuf<unsigned short>::~basic_stringbuf<unsigned short>(__int64 a1)
{
  bool v1; // zf

  v1 = (*(_BYTE *)(a1 + 112) & 1) == 0;
  *(_QWORD *)a1 = &std::basic_stringbuf<unsigned short>::`vftable';
  if ( !v1 )
    operator delete(**(void ***)(a1 + 24));
  **(_QWORD **)(a1 + 24) = 0LL;
  **(_QWORD **)(a1 + 56) = 0LL;
  **(_DWORD **)(a1 + 80) = 0;
  **(_QWORD **)(a1 + 32) = 0LL;
  **(_QWORD **)(a1 + 64) = 0LL;
  **(_DWORD **)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 112) &= ~1u;
  *(_QWORD *)(a1 + 104) = 0LL;
  return std::basic_streambuf<unsigned short>::~basic_streambuf<unsigned short,std::char_traits<unsigned short>>((_QWORD *)a1);
}
