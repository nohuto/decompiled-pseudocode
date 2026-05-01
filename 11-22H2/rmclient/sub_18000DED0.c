/*
 * XREFs of sub_18000DED0 @ 0x18000DED0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000DDEC @ 0x18000DDEC (sub_18000DDEC.c)
 *     sub_18000E64C @ 0x18000E64C (sub_18000E64C.c)
 *     sub_1800107D4 @ 0x1800107D4 (sub_1800107D4.c)
 */

int __fastcall sub_18000DED0(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 v4; // rax

  sub_18000DDEC(a1, a2, a3);
  LODWORD(v4) = GetCurrentThreadId();
  if ( dword_180032974 != (_DWORD)v4 )
  {
    if ( _InterlockedIncrement(&dword_180032BD8) < 4 )
    {
      dword_180032974 = v4;
      v4 = sub_18000E64C();
      if ( v4 )
        LODWORD(v4) = sub_1800107D4(v4, a1);
      dword_180032974 = 0;
    }
    _InterlockedDecrement(&dword_180032BD8);
  }
  return v4;
}
