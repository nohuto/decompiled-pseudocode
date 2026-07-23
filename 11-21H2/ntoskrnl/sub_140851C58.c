/*
 * XREFs of sub_140851C58 @ 0x140851C58
 * Callers:
 *     sub_14085BD34 @ 0x14085BD34 (sub_14085BD34.c)
 *     sub_140B240EC @ 0x140B240EC (sub_140B240EC.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x140263730 (KeQueryNodeActiveAffinity.c)
 *     sub_140851D00 @ 0x140851D00 (sub_140851D00.c)
 */

__int64 __fastcall sub_140851C58(__int64 a1)
{
  unsigned __int16 v2; // bx
  USHORT *v3; // rcx
  __int64 result; // rax
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  if ( !word_140D05000 )
    return 0LL;
  while ( 1 )
  {
    Affinity = 0LL;
    v3 = 0LL;
    if ( (_UNKNOWN *)qword_140D31700[v2] != (_UNKNOWN *)((char *)&unk_140D3DDC0 + 280 * v2) )
      v3 = (USHORT *)qword_140D31700[v2];
    KeQueryNodeActiveAffinity(*v3, &Affinity, 0LL);
    if ( Affinity.Mask )
    {
      result = sub_140851D00(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * v2));
      if ( (int)result < 0 )
        break;
    }
    if ( ++v2 >= (unsigned __int16)word_140D05000 )
      return 0LL;
  }
  return result;
}
