/*
 * XREFs of sub_1408530AC @ 0x1408530AC
 * Callers:
 *     sub_140852FB4 @ 0x140852FB4 (sub_140852FB4.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403D69E8 @ 0x1403D69E8 (sub_1403D69E8.c)
 *     sub_1405F1A70 @ 0x1405F1A70 (sub_1405F1A70.c)
 */

__int64 __fastcall sub_1408530AC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int *a5)
{
  unsigned int v7; // edi
  __int64 v8; // r14
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // esi
  int v12; // r8d
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  int v17; // r8d
  __int64 v18; // r9
  __int64 v19; // rax

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&xmmword_140CF5E78, 0LL);
  v7 = 0;
  v8 = 8LL;
  while ( 1 )
  {
    v9 = sub_1403D69E8((_DWORD **)&xmmword_140CF5E78 + 1);
    v10 = v9;
    if ( v9 == -1 )
      break;
    v11 = v9 - 16;
    if ( v9 != 16 )
    {
      if ( v11 < 0xF0 )
      {
        _BitScanReverse((unsigned int *)&v12, v9);
        v13 = *(&xmmword_140CF5E78 + (unsigned int)(v12 - 4) + 1);
        if ( v13 )
        {
          v14 = 5 * (v9 ^ (unsigned __int64)(unsigned int)(1 << v12));
          v15 = v13 + 8 * (v14 + 3);
          v8 = v13 + 8 * (v14 + 2);
        }
        else
        {
          v15 = 16LL;
        }
        if ( !a3 )
          a3 = -1LL;
        *(_QWORD *)v8 = a3;
        *(_QWORD *)v15 = a4;
        if ( v11 > dword_140CF5EA0 )
          dword_140CF5EA0 = v10 - 16;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&xmmword_140CF5E78, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&xmmword_140CF5E78);
        sub_1402AFC00((ULONG_PTR)&xmmword_140CF5E78);
        *a5 = v11;
        return v7;
      }
      sub_1405F1A70((__int64)(&xmmword_140CF5E78 + 1), v9);
      break;
    }
    _BitScanReverse((unsigned int *)&v17, 0x10u);
    v18 = *(&xmmword_140CF5E78 + (unsigned int)(v17 - 4) + 1);
    if ( v18 )
      v19 = v18
          + 8
          * ((v9 ^ (unsigned __int64)(unsigned int)(1 << v17))
           + 4 * (v9 ^ (unsigned __int64)(unsigned int)(1 << v17))
           + 2);
    else
      v19 = 8LL;
    *(_QWORD *)v19 = -1LL;
  }
  v7 = -1073741801;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&xmmword_140CF5E78, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&xmmword_140CF5E78);
  sub_1402AFC00((ULONG_PTR)&xmmword_140CF5E78);
  return v7;
}
