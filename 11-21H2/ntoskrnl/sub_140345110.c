/*
 * XREFs of sub_140345110 @ 0x140345110
 * Callers:
 *     sub_140235F70 @ 0x140235F70 (sub_140235F70.c)
 *     sub_14023A7D0 @ 0x14023A7D0 (sub_14023A7D0.c)
 *     sub_14023A820 @ 0x14023A820 (sub_14023A820.c)
 *     sub_14023B5A0 @ 0x14023B5A0 (sub_14023B5A0.c)
 *     sub_140304A20 @ 0x140304A20 (sub_140304A20.c)
 * Callees:
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 */

__int64 __fastcall sub_140345110(__int64 a1, char a2)
{
  __int64 result; // rax

  _m_prefetchw((const void *)(a1 + 33944));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a1 + 33944), 1 << a2);
  if ( !(_DWORD)result )
    return sub_140345190(a1 + 33880, 0);
  return result;
}
