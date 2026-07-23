/*
 * XREFs of sub_140A083CC @ 0x140A083CC
 * Callers:
 *     sub_140A08260 @ 0x140A08260 (sub_140A08260.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1406E1C68 @ 0x1406E1C68 (sub_1406E1C68.c)
 */

__int64 __fastcall sub_140A083CC(__int64 a1, unsigned int a2)
{
  unsigned __int64 *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rsi
  struct _EX_RUNDOWN_REF *v8; // rax
  ULONG_PTR Count; // rcx

  v4 = (unsigned __int64 *)(a1 + 32 + 24LL * a2);
  v5 = a1 + 40 + 24LL * a2;
  v6 = sub_140347C10((__int64)v4, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    sub_14029F120(v4, v6, (__int64)v4);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  while ( 1 )
  {
    v8 = *(struct _EX_RUNDOWN_REF **)v5;
    if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5
      || (Count = v8->Count, *(struct _EX_RUNDOWN_REF **)(v8->Count + 8) != v8) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v5 = Count;
    *(_QWORD *)(Count + 8) = v5;
    if ( v8 == (struct _EX_RUNDOWN_REF *)v5 )
      break;
    v8->Count = 0LL;
    if ( !a2 )
      *(_QWORD *)(a1 + 8) = 0LL;
    sub_1406E1C68(v8 - 4, 1);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4);
  return sub_1402AFC00((ULONG_PTR)v4);
}
