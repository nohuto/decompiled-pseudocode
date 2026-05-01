/*
 * XREFs of sub_1800065E0 @ 0x1800065E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800083D0 @ 0x1800083D0 (sub_1800083D0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800065E0(__int64 a1, __int64 a2)
{
  DWORD CurrentThreadId; // eax
  _QWORD **v5; // rbx
  _QWORD *v6; // r14
  __int64 result; // rax
  unsigned __int64 v8; // rbx
  int v9; // r14d
  int v10; // eax
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax

  RtlAcquireSRWLockExclusive(a1 + 8);
  CurrentThreadId = GetCurrentThreadId();
  v5 = (_QWORD **)(a1 + 40);
  while ( 1 )
  {
    *(_DWORD *)(a1 + 16) = CurrentThreadId;
    v6 = *v5;
    if ( *v5 == v5 )
      break;
    v12 = *v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v13 = (_QWORD *)v6[1], (_QWORD *)*v13 != v6) )
      __fastfail(3u);
    *v13 = v12;
    *(_QWORD *)(v12 + 8) = v13;
    *(_OWORD *)v6 = 0LL;
    *(_DWORD *)(a1 + 16) = 0;
    RtlReleaseSRWLockExclusive(a1 + 8);
    (*(void (__fastcall **)(__int64, _QWORD *, _QWORD))(a1 + 56))(a1, v6 - 3, 0LL);
    RtlAcquireSRWLockExclusive(a1 + 8);
    CurrentThreadId = GetCurrentThreadId();
  }
  *(_DWORD *)(a1 + 16) = 0;
  result = RtlReleaseSRWLockExclusive(a1 + 8);
  if ( a2 )
  {
    RtlAcquireSRWLockExclusive(a1 + 8);
    *(_DWORD *)(a1 + 16) = GetCurrentThreadId();
    v8 = *(_QWORD *)(a1 + 24);
    v9 = *(_BYTE *)(a1 + 32) & 1;
    if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
    {
      if ( !v8 )
        goto LABEL_6;
      v8 ^= a1 + 24;
    }
    if ( !v8 )
      goto LABEL_6;
    while ( 1 )
    {
      v10 = sub_1800083D0(a2, v8);
      if ( v10 >= 0 )
      {
        if ( v10 <= 0 )
        {
LABEL_13:
          if ( v8 )
          {
            *(_DWORD *)(a1 + 16) = 0;
            RtlReleaseSRWLockExclusive(a1 + 8);
            return (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(a1 + 56))(a1, v8, a2);
          }
LABEL_6:
          *(_DWORD *)(a1 + 16) = 0;
          return RtlReleaseSRWLockExclusive(a1 + 8);
        }
        v11 = *(_QWORD *)(v8 + 8);
        if ( v9 && v11 )
        {
LABEL_21:
          v8 ^= v11;
          goto LABEL_12;
        }
      }
      else
      {
        v11 = *(_QWORD *)v8;
        if ( v9 && v11 )
          goto LABEL_21;
      }
      v8 = v11;
LABEL_12:
      if ( !v8 )
        goto LABEL_13;
    }
  }
  return result;
}
