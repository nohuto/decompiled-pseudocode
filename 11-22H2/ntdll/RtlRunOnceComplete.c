/*
 * XREFs of RtlRunOnceComplete @ 0x18005BA40
 * Callers:
 *     RtlRunOnceExecuteOnce @ 0x180032A30 (RtlRunOnceExecuteOnce.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x180041DF0 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpFcEnsureSubscriptionManagerStarted @ 0x18005B660 (RtlpFcEnsureSubscriptionManagerStarted.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x18009FBE0 (ZwAlertThreadByThreadId.c)
 */

__int64 __fastcall RtlRunOnceComplete(signed __int64 *a1, unsigned int a2, __int64 a3)
{
  char v4; // al
  signed __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int64 v11; // rbx
  __int64 v12; // rcx
  char v13; // [rsp+38h] [rbp+10h]

  if ( ((a2 - 1) & a2) != 0 || (a2 & 0xFFFFFFF9) != 0 )
    return 3221225712LL;
  v4 = (v13 ^ ~(unsigned __int8)(a2 >> 1)) & 3 ^ v13;
  if ( a3 && ((a3 & 3) != 0 || (v4 & 2) == 0) )
    return 3221225713LL;
  _m_prefetchw(a1);
  v5 = *a1;
  v6 = a3 & 0xFFFFFFFFFFFFFFFCuLL | v4 & 2;
  v7 = *a1 & 3;
  if ( v7 != 1 )
  {
    if ( v7 != 3 )
      return 3221225473LL;
    if ( (v4 & 1) == 0 )
      return v5 != _InterlockedCompareExchange64(a1, v6, v5) ? 0xC0000035 : 0;
    return 3221225712LL;
  }
  if ( (v4 & 1) == 0 )
    return 3221225712LL;
  v8 = _InterlockedExchange64(a1, v6);
  if ( (v8 & 3) != 1 )
    return 3221225562LL;
  v9 = v8 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v9 )
  {
    do
    {
      v11 = *(_QWORD *)v9;
      v12 = *(_QWORD *)(v9 + 24);
      _interlockedbittestandset((volatile signed __int32 *)(v9 + 36), 2u);
      ZwAlertThreadByThreadId(v12);
      v9 = v11;
    }
    while ( v11 );
  }
  return 0LL;
}
