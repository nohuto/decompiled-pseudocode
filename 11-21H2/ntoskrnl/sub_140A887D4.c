/*
 * XREFs of sub_140A887D4 @ 0x140A887D4
 * Callers:
 *     sub_140A863B8 @ 0x140A863B8 (sub_140A863B8.c)
 *     sub_140A9AFDC @ 0x140A9AFDC (sub_140A9AFDC.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *sub_140A887D4())(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  __int64 (__fastcall *result)(__int64, __int64, unsigned int, __int64 *); // rax
  int v1; // ecx

  result = (__int64 (__fastcall *)(__int64, __int64, unsigned int, __int64 *))(unsigned int)dword_140C29FC0;
  if ( (dword_140C29FC0 & 0x80u) != 0 )
  {
    if ( !dword_140D57690 )
    {
      dword_140C1AE0C = 1;
      if ( (unsigned int)HalPrivateDispatchTable >= 0x36 )
      {
        qword_140D57758 = (__int64)off_140C01C40[0];
        result = sub_140A862F0;
        off_140C01C40[0] = (__int64 (__fastcall *)())sub_140A862F0;
      }
      dword_140D4E004 = 1;
      dword_140D57690 = 1;
    }
    v1 = 0;
  }
  else
  {
    v1 = 1;
  }
  dword_140D575F4 = v1;
  return result;
}
