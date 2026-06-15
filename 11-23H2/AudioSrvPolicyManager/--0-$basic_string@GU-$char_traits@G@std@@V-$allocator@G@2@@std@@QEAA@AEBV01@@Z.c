/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18001FEBC
 * Callers:
 *     ??0CDuckingNotification@@QEAA@AEBV0@@Z @ 0x18001FFD8 (--0CDuckingNotification@@QEAA@AEBV0@@Z.c)
 *     ?Add@?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEAAHAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBQEAI@Z @ 0x1800256FC (-Add@-$CSimpleMap@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAIV-$CSimpleMa.c)
 * Callees:
 *     ?allocate@?$allocator@G@std@@QEAAPEAG_K@Z @ 0x1800154C8 (-allocate@-$allocator@G@std@@QEAAPEAG_K@Z.c)
 *     memcpy_0 @ 0x18004768C (memcpy_0.c)
 */

_QWORD *__fastcall std::wstring::wstring(_QWORD *a1, __int64 a2)
{
  _OWORD *v2; // rdi
  unsigned __int64 v4; // rbp
  __int64 v5; // rsi
  _QWORD *v6; // rax
  _QWORD *result; // rax

  v2 = (_OWORD *)a2;
  *a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  v4 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(a2 + 24) >= 8uLL )
    v2 = *(_OWORD **)a2;
  v5 = 7LL;
  if ( v4 >= 8 )
  {
    v5 = v4 | 7;
    if ( (v4 | 7) > 0x7FFFFFFFFFFFFFFELL )
      v5 = 0x7FFFFFFFFFFFFFFELL;
    v6 = std::allocator<unsigned short>::allocate((__int64)a1, v5 + 1);
    *a1 = v6;
    memcpy_0(v6, v2, 2 * v4 + 2);
  }
  else
  {
    *(_OWORD *)a1 = *v2;
  }
  a1[2] = v4;
  result = a1;
  a1[3] = v5;
  return result;
}
