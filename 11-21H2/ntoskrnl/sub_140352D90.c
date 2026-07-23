/*
 * XREFs of sub_140352D90 @ 0x140352D90
 * Callers:
 *     sub_1403525F0 @ 0x1403525F0 (sub_1403525F0.c)
 *     sub_140366DA8 @ 0x140366DA8 (sub_140366DA8.c)
 *     sub_14059A9B4 @ 0x14059A9B4 (sub_14059A9B4.c)
 * Callees:
 *     sub_1402878F0 @ 0x1402878F0 (sub_1402878F0.c)
 */

unsigned __int64 __fastcall sub_140352D90(int a1, unsigned __int64 a2, int a3)
{
  volatile signed __int64 *v5; // r9
  unsigned __int64 v6; // rdx
  unsigned __int64 result; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx

  switch ( a1 )
  {
    case 5:
      v5 = &qword_140C4F048;
      break;
    case 6:
      v5 = &qword_140C534A8;
      break;
    case 1:
      result = -(__int64)a2;
      v8 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL);
      v9 = a2;
      if ( !a3 )
        v9 = -(__int64)a2;
      v5 = (volatile signed __int64 *)(v8 + 176);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 40), v9);
      break;
    default:
      v5 = (volatile signed __int64 *)&unk_140C4F050;
      if ( a1 != 15 )
        v5 = 0LL;
      break;
  }
  if ( a3 )
  {
    v6 = a2 + _InterlockedExchangeAdd64(v5, a2);
    if ( a1 == 5 )
    {
      result = (qword_140C4F040[0] - v6) & -(__int64)(v6 < qword_140C4F040[0]);
      if ( result < 0x300 )
        return sub_1402878F0();
    }
  }
  else
  {
    _InterlockedExchangeAdd64(v5, -(__int64)a2);
  }
  return result;
}
