/*
 * XREFs of ?GetCategory@CAudioStream@@UEAAKXZ @ 0x18003AFB0
 * Callers:
 *     ?GetCategory@CAudioStream@@W7EAAKXZ @ 0x18006AFA0 (-GetCategory@CAudioStream@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::GetCategory(CAudioStream *this)
{
  return *((unsigned int *)this + 98);
}
