/*
 * XREFs of sub_1405402EC @ 0x1405402EC
 * Callers:
 *     sub_14092AC5C @ 0x14092AC5C (sub_14092AC5C.c)
 * Callees:
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14056F81C @ 0x14056F81C (sub_14056F81C.c)
 */

__int64 __fastcall sub_1405402EC(_QWORD *a1)
{
  _QWORD *v2; // r14
  ULONG ActiveProcessorCount; // ebp
  __int64 result; // rax
  unsigned int v5; // ebx
  _QWORD *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx

  v2 = a1 + 2048;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  result = sub_14042A5E0(v2, qword_140D088C0);
  v5 = 0;
  if ( ActiveProcessorCount )
  {
    v6 = a1;
    do
    {
      v7 = sub_140348800(v5);
      if ( (int)sub_14042A5E0(a1 + 2048, v7) >= 0 )
      {
        MEMORY[8] = 0LL;
        *v6 = 0LL;
      }
      result = sub_14056F81C(v5++, v8, a1);
      ++v6;
    }
    while ( v5 < ActiveProcessorCount );
  }
  return result;
}
