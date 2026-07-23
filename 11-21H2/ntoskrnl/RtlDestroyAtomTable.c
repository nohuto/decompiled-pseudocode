/*
 * XREFs of RtlDestroyAtomTable @ 0x1406AB410
 * Callers:
 *     sub_140232ED8 @ 0x140232ED8 (sub_140232ED8.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1406AB544 @ 0x1406AB544 (sub_1406AB544.c)
 *     sub_1406AC130 @ 0x1406AC130 (sub_1406AC130.c)
 *     sub_1406AC404 @ 0x1406AC404 (sub_1406AC404.c)
 *     sub_1407A0EA0 @ 0x1407A0EA0 (sub_1407A0EA0.c)
 */

NTSTATUS __cdecl RtlDestroyAtomTable(PVOID AtomTableHandle)
{
  unsigned int v2; // ebp
  _QWORD **i; // r14
  _QWORD *v4; // rsi
  _QWORD *v5; // r15
  void *v6; // rbx
  _QWORD **v8; // r12
  _QWORD *v9; // rcx
  _QWORD *v10; // rax

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)AtomTableHandle + 1, 0xFFFFFFFF) != 1 )
    return 0;
  if ( (unsigned __int8)sub_1407A0EA0() )
  {
    v2 = 0;
    for ( i = (_QWORD **)((char *)AtomTableHandle + 32); v2 < *((_DWORD *)AtomTableHandle + 7); ++v2 )
    {
      v4 = *i;
      *i++ = 0LL;
      while ( 1 )
      {
        v5 = v4;
        if ( !v4 )
          break;
        v4 = (_QWORD *)*v4;
        v8 = (_QWORD **)(v5 + 2);
        *v5 = 0LL;
        while ( 1 )
        {
          v9 = *v8;
          if ( *v8 == v8 )
            break;
          if ( (_QWORD **)v9[1] != v8 || (v10 = (_QWORD *)*v9, *(_QWORD **)(*v9 + 8LL) != v9) )
            __fastfail(3u);
          *v8 = v10;
          v10[1] = v8;
          sub_1406AB544(v9);
        }
        sub_1406AB544(v5);
      }
    }
    *(_DWORD *)AtomTableHandle = 0;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)AtomTableHandle + 1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((char *)AtomTableHandle + 8);
    sub_1402AFC00((ULONG_PTR)AtomTableHandle + 8);
    KeLeaveCriticalRegion();
    v6 = (void *)*((_QWORD *)AtomTableHandle + 2);
    sub_1406AC404(v6);
    sub_1406AC130(v6);
    *(_OWORD *)AtomTableHandle = 0LL;
    *((_OWORD *)AtomTableHandle + 1) = 0LL;
    *((_QWORD *)AtomTableHandle + 4) = 0LL;
    sub_1406AB544(AtomTableHandle);
    return 0;
  }
  return -1073741811;
}
