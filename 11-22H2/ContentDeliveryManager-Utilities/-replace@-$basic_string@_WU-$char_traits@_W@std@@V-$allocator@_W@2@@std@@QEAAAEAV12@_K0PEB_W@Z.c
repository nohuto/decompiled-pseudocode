/*
 * XREFs of ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W@Z @ 0x1800C1140
 * Callers:
 *     ?NormalizedString@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W00@Z @ 0x180098724 (-NormalizedString@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_trait.c)
 *     ?ReplaceAll@Details@NotificationManager@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W00@Z @ 0x1800C0DD4 (-ReplaceAll@Details@NotificationManager@CreativeFramework@@YA-AV-$basic_string@_WU-$char_traits@.c)
 * Callees:
 *     ?length@?$char_traits@_W@std@@SA_KPEB_W@Z @ 0x18006497C (-length@-$char_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z @ 0x1800A0940 (-replace@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z.c)
 */

_QWORD *__fastcall std::wstring::replace(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3, _WORD *a4)
{
  unsigned __int64 v8; // rax

  v8 = std::char_traits<wchar_t>::length(a4);
  return std::wstring::replace(a1, a2, a3, a4, v8);
}
