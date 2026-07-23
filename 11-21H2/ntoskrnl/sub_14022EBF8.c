/*
 * XREFs of sub_14022EBF8 @ 0x14022EBF8
 * Callers:
 *     sub_1406A6E90 @ 0x1406A6E90 (sub_1406A6E90.c)
 *     sub_140864F80 @ 0x140864F80 (sub_140864F80.c)
 * Callees:
 *     ExInterlockedRemoveHeadList @ 0x140220FB0 (ExInterlockedRemoveHeadList.c)
 *     sub_14022ED94 @ 0x14022ED94 (sub_14022ED94.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

NTSTATUS __fastcall sub_14022EBF8(__int64 a1, unsigned int a2)
{
  __int64 v2; // r15
  int v4; // ebp
  char v5; // r14
  struct _KTHREAD *CurrentThread; // rcx
  LARGE_INTEGER *p_Timeout; // rax
  NTSTATUS result; // eax
  int v9; // ecx
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  PLIST_ENTRY v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+8h] BYREF

  v2 = a2;
  if ( a2 == -1 )
  {
    v4 = 0;
    v5 = 1;
  }
  else
  {
    v4 = 1;
    v5 = 0;
  }
  CurrentThread = KeGetCurrentThread();
  if ( v5 )
    *(_QWORD *)(a1 + 264) = CurrentThread;
  else
    *(_QWORD *)(a1 + 8LL * a2 + 272) = CurrentThread;
  *(__m128i *)Object = _mm_add_epi64(
                         _mm_slli_epi64(
                           _mm_unpacklo_epi32(_mm_load_si128((const __m128i *)&xmmword_140015CD0), (__m128i)0LL),
                           5u),
                         _mm_unpacklo_epi64((__m128i)(unsigned __int64)(a1 + 32), (__m128i)(unsigned __int64)(a1 + 32)));
  while ( 1 )
  {
    Timeout.QuadPart = 0LL;
    if ( KeWaitForSingleObject((PVOID)(a1 + 32 * (v4 + 1LL)), Executive, 0, 0, &Timeout) != 258 )
    {
      v9 = v4;
      goto LABEL_12;
    }
    if ( v5 )
    {
      p_Timeout = 0LL;
    }
    else
    {
      Timeout.QuadPart = -50000LL;
      p_Timeout = &Timeout;
    }
    result = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, p_Timeout, 0LL);
    v9 = result;
    if ( result == 258 )
      break;
LABEL_12:
    if ( v9 )
    {
      if ( v9 == 1 )
        sub_14022ED94(*(_QWORD *)a1);
    }
    else
    {
      v12 = ExInterlockedRemoveHeadList((PLIST_ENTRY)(a1 + 16), (PKSPIN_LOCK)(a1 + 8));
      *v12 = 0LL;
      sub_14042A5E0(v12[1].Blink, v13, v14);
    }
    if ( v5 )
    {
      _m_prefetchw((const void *)(a1 + 96));
      v10 = *(_DWORD *)(a1 + 96);
      do
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 96), v10, v10);
      }
      while ( v11 != v10 );
      if ( v10 )
        v4 = 0;
      else
        v4 = (v4 + 1) % 2;
    }
  }
  *(_QWORD *)(a1 + 8 * v2 + 272) = 0LL;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 96), ~(1 << v2));
  return result;
}
