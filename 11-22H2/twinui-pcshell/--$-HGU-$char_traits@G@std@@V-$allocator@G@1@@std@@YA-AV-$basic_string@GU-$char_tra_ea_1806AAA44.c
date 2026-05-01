/*
 * XREFs of ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@$$QEAV10@G@Z @ 0x1806AAA44
 * Callers:
 *     _anonymous_namespace_::TruncateDisplayName @ 0x1806AE364 (_anonymous_namespace_--TruncateDisplayName.c)
 * Callees:
 *     ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x180090DA0 (-push_back@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXG@Z.c)
 */

_QWORD *__fastcall std::operator+<unsigned short>(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax

  std::wstring::push_back((_QWORD *)a2, 8230);
  *a1 = 0LL;
  result = a1;
  a1[2] = 0LL;
  a1[3] = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *((_OWORD *)a1 + 1) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_WORD *)a2 = 0;
  *(_QWORD *)(a2 + 24) = 7LL;
  return result;
}
