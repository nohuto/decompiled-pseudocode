/*
 * XREFs of LdrpUndoPatchImage @ 0x1800E1580
 * Callers:
 *     LdrpLoadDllInternal @ 0x180028CA4 (LdrpLoadDllInternal.c)
 * Callees:
 *     ZwManageHotPatch @ 0x1800A31A0 (ZwManageHotPatch.c)
 */

__int64 __fastcall LdrpUndoPatchImage(__int64 a1)
{
  __int64 result; // rax

  result = ZwManageHotPatch();
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(a1 + 304) = 0;
    *(_QWORD *)(a1 + 296) = 0LL;
  }
  return result;
}
