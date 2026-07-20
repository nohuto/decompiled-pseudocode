/*
 * XREFs of SmpUpdatePagingFileSizes @ 0x140007C20
 * Callers:
 *     SmpProcessPagefileDescriptor @ 0x14000A108 (SmpProcessPagefileDescriptor.c)
 *     SmpCreateWorkingSetSwapPagingFile @ 0x14000A930 (SmpCreateWorkingSetSwapPagingFile.c)
 * Callees:
 *     <none>
 */

bool __fastcall SmpUpdatePagingFileSizes(__int64 *a1, unsigned __int64 *a2)
{
  __int64 v2; // r9
  unsigned __int64 v3; // r8
  bool result; // al

  v2 = *a1;
  v3 = *a2;
  if ( (unsigned __int64)*a1 > 0xFFFFFFFF000LL )
    v2 = 0xFFFFFFFF000LL;
  result = (unsigned __int64)*a1 > 0xFFFFFFFF000LL;
  if ( v3 > 0xFFFFFFFF000LL )
  {
    result = 1;
    v3 = 0xFFFFFFFF000LL;
  }
  else if ( (unsigned __int64)*a1 <= 0xFFFFFFFF000LL )
  {
    return result;
  }
  *a1 = v2;
  *a2 = v3;
  return result;
}
