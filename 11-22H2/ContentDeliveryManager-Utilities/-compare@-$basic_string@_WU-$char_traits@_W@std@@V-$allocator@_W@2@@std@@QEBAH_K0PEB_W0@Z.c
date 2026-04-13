/*
 * XREFs of ?compare@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAH_K0PEB_W0@Z @ 0x1800A8BF4
 * Callers:
 *     ?compare@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAHAEBV12@@Z @ 0x1800A8BC4 (-compare@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAHAEBV12@@Z.c)
 *     ?compare@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAHPEB_W@Z @ 0x1800B0328 (-compare@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAHPEB_W@Z.c)
 * Callees:
 *     wmemcmp @ 0x1800657E0 (wmemcmp.c)
 */

int __fastcall std::wstring::compare(const wchar_t *a1, __int64 a2, size_t a3, const wchar_t *a4, size_t a5)
{
  size_t v5; // r10
  size_t v6; // r11
  size_t v7; // r8
  int result; // eax

  v5 = a3;
  v6 = a5;
  if ( *((_QWORD *)a1 + 2) < a3 )
    v5 = *((_QWORD *)a1 + 2);
  v7 = a5;
  if ( v5 < a5 )
    v7 = v5;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    a1 = *(const wchar_t **)a1;
  if ( !v7 || (result = wmemcmp(a1, a4, v7)) == 0 )
  {
    if ( v5 >= v6 )
      return v5 != v6;
    else
      return -1;
  }
  return result;
}
