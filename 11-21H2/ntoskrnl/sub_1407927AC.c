/*
 * XREFs of sub_1407927AC @ 0x1407927AC
 * Callers:
 *     sub_14079982C @ 0x14079982C (sub_14079982C.c)
 * Callees:
 *     sub_14029F350 @ 0x14029F350 (sub_14029F350.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1406D7CC4 @ 0x1406D7CC4 (sub_1406D7CC4.c)
 *     sub_140793A34 @ 0x140793A34 (sub_140793A34.c)
 */

void __fastcall sub_1407927AC(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  signed __int64 *v4; // rbx
  __int64 v8; // rdi
  __int64 v9; // rbp
  struct _KEVENT *v10; // rcx

  v4 = (signed __int64 *)(a1 + 112);
  v8 = 0LL;
  v9 = sub_140347C10(a1 + 112, 0LL);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    sub_14029F350(v4, 0, v9, (__int64)v4);
  if ( v9 )
    *(_BYTE *)(v9 + 18) = 1;
  if ( *(_QWORD *)(a2 + 48) && (unsigned int)sub_140793A34(a2, a3) )
    v8 = *(_QWORD *)(a2 + 40);
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  sub_1402AFC00((ULONG_PTR)v4);
  if ( v8 )
  {
    if ( PsInitialSystemProcess == (PEPROCESS)v8 )
    {
      sub_1406D7CC4(a4);
    }
    else
    {
      v10 = *(struct _KEVENT **)(*(_QWORD *)(v8 + 2152) + 128LL);
      if ( v10 )
        KeSetEvent(v10, 1, 0);
    }
  }
}
