/*
 * XREFs of sub_14099F920 @ 0x14099F920
 * Callers:
 *     sub_14099F3A0 @ 0x14099F3A0 (sub_14099F3A0.c)
 * Callees:
 *     sub_14099F898 @ 0x14099F898 (sub_14099F898.c)
 *     sub_14099FA50 @ 0x14099FA50 (sub_14099FA50.c)
 */

unsigned __int64 __fastcall sub_14099F920(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 result; // rax
  __int64 v9; // r8
  bool v10; // bp
  __int16 v11; // cx
  _QWORD *i; // rdi
  _QWORD **v13; // rsi
  _QWORD *j; // rdi
  __int64 v15; // rbx

  *(_DWORD *)(a3 + 32) |= 0x10000u;
  sub_14099FA50(a2, a3, a4, 1LL);
  result = *(unsigned int *)(a3 + 32);
  v9 = *(_QWORD *)(a3 - 648);
  v10 = 0;
  if ( (result & 4) == 0 )
  {
    if ( !v9
      || (v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 824), 0, 0),
          result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v9 + 824), 0, 0),
          v10 = (result & 0x400) != 0,
          (v11 & 0x200) == 0) )
    {
      for ( i = *(_QWORD **)(a3 - 720); i; i = (_QWORD *)*i )
      {
        sub_14099FA50(a2, i + 91, a4, 2LL);
        result = (unsigned __int64)sub_14099F898(a1, i + 91);
      }
    }
    if ( !v10 )
    {
      v13 = (_QWORD **)(a3 - 552);
      for ( j = *v13; j != v13; j = (_QWORD *)*j )
      {
        v15 = *(j - 1);
        sub_14099FA50(a2, v15 + 568, a4, 3LL);
        result = (unsigned __int64)sub_14099F898(a1, (_QWORD *)(v15 + 568));
      }
    }
  }
  return result;
}
