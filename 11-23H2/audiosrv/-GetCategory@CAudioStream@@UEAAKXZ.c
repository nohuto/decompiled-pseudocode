/*
 * XREFs of ?GetCategory@CAudioStream@@UEAAKXZ @ 0x18004D270
 * Callers:
 *     ?GetCategory@CAudioStream@@W7EAAKXZ @ 0x180077170 (-GetCategory@CAudioStream@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::GetCategory(CAudioStream *this)
{
  return *((unsigned int *)this + 104);
}
