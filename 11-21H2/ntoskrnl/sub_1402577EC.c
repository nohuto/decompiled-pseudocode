/*
 * XREFs of sub_1402577EC @ 0x1402577EC
 * Callers:
 *     IoStartNextPacket @ 0x1402577B0 (IoStartNextPacket.c)
 *     IoStartNextPacketByKey @ 0x140557DA0 (IoStartNextPacketByKey.c)
 * Callees:
 *     sub_140257964 @ 0x140257964 (sub_140257964.c)
 *     sub_14055838C @ 0x14055838C (sub_14055838C.c)
 */

__int64 __fastcall sub_1402577EC(__int64 a1, unsigned int a2, int a3)
{
  __int64 v5; // rcx
  signed __int32 v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 result; // rax

  v5 = *(_QWORD *)(a1 + 312);
  do
  {
    v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 56), 1u);
    v7 = *(_QWORD *)(a1 + 312);
    if ( v6 + 1 > 1 )
    {
      *(_DWORD *)(v7 + 64) |= a3;
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 60LL) = a2;
    }
    else
    {
      *(_DWORD *)(v7 + 64) &= 0xFFFFFF1F;
      v8 = (unsigned __int8)a3 & 0x80;
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 60LL) = 0;
      if ( (a3 & 0x40) != 0 )
      {
        sub_14055838C(a1, v8, a2);
      }
      else if ( (a3 & 0x20) != 0 )
      {
        sub_140257964(a1, v8);
      }
    }
    result = (unsigned int)_InterlockedExchangeAdd(
                             (volatile signed __int32 *)(*(_QWORD *)(a1 + 312) + 56LL),
                             0xFFFFFFFF);
    if ( (_DWORD)result != 1 )
      break;
    v5 = *(_QWORD *)(a1 + 312);
    a2 = *(_DWORD *)(v5 + 60);
    a3 = *(_DWORD *)(v5 + 64) & 0xE0;
  }
  while ( (*(_BYTE *)(v5 + 64) & 0x60) != 0 );
  return result;
}
