/*
 * XREFs of ??$AllocateIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C0025F50
 * Callers:
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C0025980 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C0025E10 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C008EF30 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Allocate@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C00260C0 (-Allocate@-$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C008D414 (-Create@-$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C00BB54C (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 AllocateIsolatedType<NSInstrumentation::CTypeIsolation<28672,112>>()
{
  __int64 v0; // rsi
  __int64 v1; // rbx
  __int64 v2; // r14
  _QWORD *v3; // rdi
  PSLIST_ENTRY v4; // rbp
  __int64 v5; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v10; // rbx

  v0 = *((_QWORD *)gpTypeIsolation + 7);
  if ( !v0 )
    return 0LL;
  if ( *(_BYTE *)(v0 + 36) )
  {
    v10 = *(_QWORD *)(v0 + 24);
    ++*(_DWORD *)(v10 + 20);
    v4 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v10);
    if ( !v4 )
    {
      ++*(_DWORD *)(v10 + 24);
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v10 + 48))(
               *(unsigned int *)(v10 + 36),
               *(unsigned int *)(v10 + 44),
               *(unsigned int *)(v10 + 40));
    }
  }
  else
  {
    v1 = *(_QWORD *)(v0 + 16);
    v2 = 0LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v1, 0LL);
    v3 = *(_QWORD **)v0;
    if ( *(_QWORD *)v0 == v0 )
    {
LABEL_6:
      ExReleasePushLockSharedEx(v1, 0LL);
      KeLeaveCriticalRegion();
      v5 = NSInstrumentation::CSectionEntry<28672,112>::Create();
      v6 = (_QWORD *)v5;
      if ( v5 )
      {
        v2 = NSInstrumentation::CSectionBitmapAllocator<28672,112>::Allocate(*(_QWORD *)(v5 + 32));
        if ( v2 )
        {
          v7 = *(_QWORD *)(v0 + 16);
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v7, 0LL);
          v8 = *(_QWORD **)(v0 + 8);
          if ( *v8 != v0 )
            __fastfail(3u);
          *v6 = v0;
          v6[1] = v8;
          *v8 = v6;
          *(_DWORD *)(v0 + 32) += 252;
          *(_QWORD *)(v0 + 8) = v6;
          ExReleasePushLockExclusiveEx(v7, 0LL);
          KeLeaveCriticalRegion();
        }
        else
        {
          NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v6);
          ExFreePoolWithTag(v6, 0);
        }
      }
      return v2;
    }
    else
    {
      while ( 1 )
      {
        v4 = (PSLIST_ENTRY)NSInstrumentation::CSectionBitmapAllocator<28672,112>::Allocate(v3[4]);
        if ( v4 )
          break;
        v3 = (_QWORD *)*v3;
        if ( v3 == (_QWORD *)v0 )
          goto LABEL_6;
      }
      ExReleasePushLockSharedEx(v1, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  return (__int64)v4;
}
