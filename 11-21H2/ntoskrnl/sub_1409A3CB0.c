/*
 * XREFs of sub_1409A3CB0 @ 0x1409A3CB0
 * Callers:
 *     <none>
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 */

__int64 sub_1409A3CB0()
{
  __int64 result; // rax

  do
  {
    ZwUpdateWnfStateData(&stru_140037820, 0LL, 0, 0LL, 0LL, 0, 0);
    result = (unsigned int)_InterlockedExchangeAdd(&dword_140C1C110, 0xFFFFFFFF);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
