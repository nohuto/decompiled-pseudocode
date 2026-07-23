/*
 * XREFs of PopFxProcessWorkPool @ 0x140311284
 * Callers:
 *     PopFxStaticWorkPoolThread @ 0x1403B2FA0 (PopFxStaticWorkPoolThread.c)
 *     PopFxPluginWork @ 0x140773710 (PopFxPluginWork.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KeWaitForMultipleObjects @ 0x140311430 (KeWaitForMultipleObjects.c)
 *     PopFxDispatchPluginWorkOnce @ 0x140311E14 (PopFxDispatchPluginWorkOnce.c)
 *     ExInterlockedRemoveHeadList @ 0x14032F580 (ExInterlockedRemoveHeadList.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

NTSTATUS __fastcall PopFxProcessWorkPool(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  int v4; // ebp
  LARGE_INTEGER *p_Timeout; // rax
  NTSTATUS result; // eax
  int v7; // ecx
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  PLIST_ENTRY v10; // rax
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+8h] BYREF

  v2 = a2;
  v4 = a2 != 0;
  if ( a2 )
    *(_QWORD *)(a1 + 8LL * a2 + 264) = KeGetCurrentThread();
  *(__m128i *)Object = _mm_add_epi64(
                         _mm_slli_epi64(_mm_unpacklo_epi32(_mm_load_si128((const __m128i *)&_xmm), (__m128i)0LL), 5u),
                         _mm_unpacklo_epi64((__m128i)(unsigned __int64)(a1 + 32), (__m128i)(unsigned __int64)(a1 + 32)));
  while ( 1 )
  {
    Timeout.QuadPart = 0LL;
    if ( KeWaitForSingleObject((PVOID)(a1 + 32 * (v4 + 1LL)), Executive, 0, 0, &Timeout) != 258 )
    {
      v7 = v4;
      goto LABEL_10;
    }
    if ( (_DWORD)v2 )
    {
      Timeout.QuadPart = -50000LL;
      p_Timeout = &Timeout;
    }
    else
    {
      p_Timeout = 0LL;
    }
    result = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, p_Timeout, 0LL);
    v7 = result;
    if ( result == 258 )
      break;
LABEL_10:
    if ( v7 )
    {
      if ( v7 == 1 )
        PopFxDispatchPluginWorkOnce(*(_QWORD *)a1);
    }
    else
    {
      v10 = ExInterlockedRemoveHeadList((PLIST_ENTRY)(a1 + 16), (PKSPIN_LOCK)(a1 + 8));
      *v10 = 0LL;
      ((void (__fastcall *)(struct _LIST_ENTRY *))v10[1].Flink)(v10[1].Blink);
    }
    if ( !(_DWORD)v2 )
    {
      _m_prefetchw((const void *)(a1 + 96));
      v8 = *(_DWORD *)(a1 + 96);
      do
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 96), v8, v8);
      }
      while ( v9 != v8 );
      if ( v8 )
        v4 = 0;
      else
        v4 = (v4 + 1) % 2;
    }
  }
  *(_QWORD *)(a1 + 8 * v2 + 264) = 0LL;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 96), ~(1 << (v2 - 1)));
  return result;
}
