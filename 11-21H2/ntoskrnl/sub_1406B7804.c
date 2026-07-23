/*
 * XREFs of sub_1406B7804 @ 0x1406B7804
 * Callers:
 *     sub_1407A0818 @ 0x1407A0818 (sub_1407A0818.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406B79AC @ 0x1406B79AC (sub_1406B79AC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406B7804(__int64 a1, _DWORD *a2, char a3)
{
  unsigned int v5; // ebp
  unsigned int v6; // edi
  int v7; // ecx
  __int64 v8; // r8
  _QWORD *v9; // rsi
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  int v12; // edx
  __int64 v13; // r8
  signed __int64 *v14; // rbx
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rcx

  if ( (a3 & 1) != 0 )
  {
    v5 = dword_140CF5EA0;
    if ( dword_140CF5EA0 )
    {
      v6 = 17;
      do
      {
        _BitScanReverse((unsigned int *)&v7, v6);
        v8 = *(_QWORD *)&a2[2 * (v7 - 4)];
        if ( v8 )
        {
          v9 = (_QWORD *)(v8
                        + 8
                        * ((v6 ^ (unsigned __int64)(unsigned int)(1 << v7))
                         + 2 * (v6 ^ (unsigned __int64)(unsigned int)(1 << v7))
                         + 1));
          if ( v9 )
          {
            if ( *v9 )
            {
              _BitScanReverse((unsigned int *)&v12, v6);
              v13 = *(&xmmword_140CF5E78 + (unsigned int)(v12 - 4) + 1);
              if ( v13 )
                v14 = (signed __int64 *)(v13
                                       + 8
                                       * ((v6 ^ (unsigned __int64)(unsigned int)(1 << v12))
                                        + 4 * (v6 ^ (unsigned __int64)(unsigned int)(1 << v12))
                                        + 1));
              else
                v14 = 0LL;
              ExAcquirePushLockSharedEx((ULONG_PTR)v14, 0LL);
              if ( (unsigned __int64)(v14[1] - 1) <= 0xFFFFFFFFFFFFFFFDuLL && *v9 )
              {
                sub_14042A5E0(*v9, v15);
                *v9 = 0LL;
                a2[8] &= ~1u;
              }
              if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
                ExfReleasePushLockShared(v14);
              sub_1402AFC00((ULONG_PTR)v14);
              ExAcquirePushLockExclusiveEx((ULONG_PTR)v14, 0LL);
              v16 = v9 + 1;
              *v9 = 0LL;
              v17 = v9[1];
              if ( *(_QWORD **)(v17 + 8) != v9 + 1 || (v18 = (_QWORD *)v9[2], (_QWORD *)*v18 != v16) )
                __fastfail(3u);
              *v18 = v17;
              *(_QWORD *)(v17 + 8) = v18;
              v9[2] = v9 + 1;
              *v16 = v16;
              if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v14);
              sub_1402AFC00((ULONG_PTR)v14);
            }
          }
        }
        ++v6;
      }
      while ( v6 - 16 <= v5 );
    }
  }
  if ( (a3 & 2) != 0 )
  {
    v10 = a2;
    v11 = 4LL;
    do
    {
      if ( *v10 )
        sub_1406B79AC();
      ++v10;
      --v11;
    }
    while ( v11 );
    ExFreePoolWithTag(a2, 0x6B534C46u);
  }
}
