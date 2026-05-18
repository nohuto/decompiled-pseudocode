/*
 * XREFs of ?CompareByOrder@Component@Engine@Spectre@@CA_NAEBV?$shared_ptr@VComponent@Engine@Spectre@@@std@@0@Z @ 0x180081320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall Spectre::Engine::Component::CompareByOrder(__int64 a1, __int64 a2)
{
  return *(_DWORD *)(*(_QWORD *)a1 + 76LL) < *(_DWORD *)(*(_QWORD *)a2 + 76LL);
}
