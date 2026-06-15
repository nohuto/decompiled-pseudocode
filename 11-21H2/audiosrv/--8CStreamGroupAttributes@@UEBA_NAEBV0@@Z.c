/*
 * XREFs of ??8CStreamGroupAttributes@@UEBA_NAEBV0@@Z @ 0x1801052C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CStreamGroupAttributes::operator==(__int64 a1, __int64 a2)
{
  return *(_DWORD *)(a1 + 8) == *(_DWORD *)(a2 + 8);
}
