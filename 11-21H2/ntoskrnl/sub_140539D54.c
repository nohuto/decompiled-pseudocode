/*
 * XREFs of sub_140539D54 @ 0x140539D54
 * Callers:
 *     sub_140283030 @ 0x140283030 (sub_140283030.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140539D54(__int64 a1, _QWORD *a2, _QWORD *a3, int a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx

  v5 = *a3 - *a2;
  v6 = (unsigned int)(1000000 * a4);
  v7 = 1000000 * v5 / stru_140C49888.QuadPart;
  if ( v7 )
    v6 = (unsigned int)v6 / v7;
  v8 = 0LL;
  v9 = (_QWORD *)(a1 + 1280);
  v10 = 32LL;
  do
  {
    v8 += *v9++;
    --v10;
  }
  while ( v10 );
  v11 = v8 >> 5;
  if ( !v6 )
    v6 = 512LL;
  *(_QWORD *)(a1 + 8LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1264), 1u) & 0x1F) + 1280) = v6;
  return _InterlockedExchange64((volatile __int64 *)(a1 + 1272), (v6 + 31 * v11) >> 5);
}
