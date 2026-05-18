/*
 * XREFs of sub_1800EC90C @ 0x1800EC90C
 * Callers:
 *     sub_1800ED178 @ 0x1800ED178 (sub_1800ED178.c)
 * Callees:
 *     _o_powf @ 0x18000C06C (_o_powf.c)
 *     sub_18000C548 @ 0x18000C548 (sub_18000C548.c)
 *     sub_18000C5B0 @ 0x18000C5B0 (sub_18000C5B0.c)
 */

__int64 __fastcall sub_1800EC90C(float a1, char a2)
{
  if ( !a2 )
    return (unsigned int)(int)a1;
  if ( dword_1801FB61C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C5B0(&dword_1801FB61C);
    if ( dword_1801FB61C == -1 )
    {
      o_powf();
      dword_1801FB620 = 0x40000000;
      sub_18000C548(&dword_1801FB61C);
    }
  }
  return (unsigned int)(int)(float)(*(float *)&dword_1801FB620 * a1);
}
