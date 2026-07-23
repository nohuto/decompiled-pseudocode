/*
 * XREFs of sub_140AA6D90 @ 0x140AA6D90
 * Callers:
 *     <none>
 * Callees:
 *     sub_140642384 @ 0x140642384 (sub_140642384.c)
 */

__int64 __fastcall sub_140AA6D90(__int64 a1)
{
  __int64 result; // rax

  result = sub_140642384(*(_QWORD *)(a1 + 64));
  if ( (_DWORD)result )
    _InterlockedIncrement64(&qword_140C18EB0);
  byte_140C1A8C0 = 0;
  return result;
}
