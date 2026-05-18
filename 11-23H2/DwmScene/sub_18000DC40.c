/*
 * XREFs of sub_18000DC40 @ 0x18000DC40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000DB64 @ 0x18000DB64 (sub_18000DB64.c)
 *     sub_18000E310 @ 0x18000E310 (sub_18000E310.c)
 *     sub_18000F4C4 @ 0x18000F4C4 (sub_18000F4C4.c)
 */

int __fastcall sub_18000DC40(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 v4; // rax

  sub_18000DB64(a1, a2, a3);
  LODWORD(v4) = GetCurrentThreadId();
  if ( dword_1801D32F4 != (_DWORD)v4 )
  {
    if ( _InterlockedIncrement(&dword_1801D32F8) < 4 )
    {
      dword_1801D32F4 = v4;
      v4 = sub_18000E310();
      if ( v4 )
        LODWORD(v4) = sub_18000F4C4(v4, a1);
      dword_1801D32F4 = 0;
    }
    _InterlockedDecrement(&dword_1801D32F8);
  }
  return v4;
}
