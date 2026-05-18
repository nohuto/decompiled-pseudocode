/*
 * XREFs of sub_1800D4D2C @ 0x1800D4D2C
 * Callers:
 *     sub_1800D5464 @ 0x1800D5464 (sub_1800D5464.c)
 * Callees:
 *     _o_powf @ 0x18000C05C (_o_powf.c)
 *     sub_18000C538 @ 0x18000C538 (sub_18000C538.c)
 *     sub_18000C5A0 @ 0x18000C5A0 (sub_18000C5A0.c)
 */

__int64 __fastcall sub_1800D4D2C(float a1, char a2)
{
  if ( !a2 )
    return (unsigned int)(int)a1;
  if ( dword_1801D9688 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C5A0(&dword_1801D9688);
    if ( dword_1801D9688 == -1 )
    {
      o_powf();
      dword_1801D968C = 0x40000000;
      sub_18000C538(&dword_1801D9688);
    }
  }
  return (unsigned int)(int)(float)(*(float *)&dword_1801D968C * a1);
}
