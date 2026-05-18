/*
 * XREFs of ?CompareByPriority@ImageProcessingEffect@Engine@Spectre@@SA_NAEBV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@0@Z @ 0x180097E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall Spectre::Engine::ImageProcessingEffect::CompareByPriority(__int64 a1, __int64 a2)
{
  return *(_DWORD *)(*(_QWORD *)a1 + 140LL) < *(_DWORD *)(*(_QWORD *)a2 + 140LL);
}
