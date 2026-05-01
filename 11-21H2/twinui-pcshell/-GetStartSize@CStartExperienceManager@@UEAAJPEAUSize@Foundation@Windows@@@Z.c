/*
 * XREFs of ?GetStartSize@CStartExperienceManager@@UEAAJPEAUSize@Foundation@Windows@@@Z @ 0x180182ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStartExperienceManager::GetStartSize(
        CStartExperienceManager *this,
        struct Windows::Foundation::Size *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)a2 = *((_QWORD *)this + 78);
  return result;
}
