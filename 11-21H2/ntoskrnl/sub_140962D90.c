/*
 * XREFs of sub_140962D90 @ 0x140962D90
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140962F40 @ 0x140962F40 (sub_140962F40.c)
 */

__int64 __fastcall sub_140962D90(_BYTE *a1, char a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v9; // r8
  unsigned int v10; // ecx
  __int64 v11; // rax
  _DWORD *i; // rdx
  __int64 v13; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v15; // rcx
  char v16; // r14
  char v17; // dl
  signed __int32 v19[14]; // [rsp+0h] [rbp-38h] BYREF

  v4 = 0;
  if ( !a3 || a3 == *(__int64 *)((char *)&qword_140D070A0[3] + (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFF8uLL)) )
  {
    v9 = sub_140962F40();
    if ( v9 )
    {
      v10 = 0;
      while ( *a1 )
      {
        v10 = ((1025 * (v10 + (char)*a1)) >> 6) ^ (1025 * (v10 + (char)*a1));
        ++a1;
      }
      v11 = 0LL;
      for ( i = (_DWORD *)(v9 + 52); v10 != *i; i += 16 )
      {
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= 0x1E2 )
          return (unsigned int)-1073741275;
      }
      v13 = (v11 << 6) + v9 + 16;
      if ( !v13 )
        return (unsigned int)-1073741275;
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D3CF30, 0LL);
      v15 = -(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFF8uLL;
      v16 = -a2;
      v17 = *(_BYTE *)(v13 - (v16 != 0) + 41);
      if ( a3 )
      {
        if ( v17 )
        {
          v4 = -1073740008;
        }
        else
        {
          *(_QWORD *)(v15 + v13 + 56) = a4;
          _InterlockedOr(v19, 0);
          *(_BYTE *)(v13 - (v16 != 0) + 41) = 1;
          if ( ++dword_140D3CB40 == 1 )
            _InterlockedOr(&dword_140D06B80, 1u);
        }
      }
      else if ( v17 )
      {
        if ( !--dword_140D3CB40 )
          _InterlockedAnd(&dword_140D06B80, 0xFFFFFFFE);
        *(_BYTE *)(v13 - (v16 != 0) + 41) = 0;
        _InterlockedOr(v19, 0);
        while ( dword_140D3CAD4 )
          _mm_pause();
        *(_QWORD *)(v15 + v13 + 56) = 0LL;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D3CF30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140D3CF30);
      sub_1402AFC00((ULONG_PTR)&qword_140D3CF30);
      sub_1402F9540((__int64)KeGetCurrentThread());
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v4;
}
