/*
 * XREFs of sub_1403B6AC0 @ 0x1403B6AC0
 * Callers:
 *     sub_1403DD730 @ 0x1403DD730 (sub_1403DD730.c)
 *     sub_140A500C0 @ 0x140A500C0 (sub_140A500C0.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 */

ULONG __fastcall sub_1403B6AC0(__int64 a1, char a2, int *a3, ULONG *a4)
{
  int v4; // edi
  ULONG result; // eax

  v4 = 0;
  *(_BYTE *)(a1 + 33) = a2;
  if ( a4 )
  {
    *(_DWORD *)a1 = *a4;
    result = *a4;
    *(_DWORD *)(a1 + 40) = *a4;
  }
  else
  {
    result = KeQueryActiveProcessorCountEx(0xFFFFu);
    *(_DWORD *)(a1 + 40) = result;
    *(_DWORD *)a1 = result;
  }
  if ( a3 )
  {
    *(_BYTE *)(a1 + 34) = 1;
    v4 = *a3;
  }
  else
  {
    *(_BYTE *)(a1 + 34) = 0;
  }
  *(_DWORD *)(a1 + 36) = v4;
  return result;
}
