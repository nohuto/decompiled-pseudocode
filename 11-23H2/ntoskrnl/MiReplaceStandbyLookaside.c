/*
 * XREFs of MiReplaceStandbyLookaside @ 0x140330E98
 * Callers:
 *     MiReplaceTransitionPage @ 0x140330900 (MiReplaceTransitionPage.c)
 *     MiLockStandbyLookasidePage @ 0x14046D270 (MiLockStandbyLookasidePage.c)
 *     MiLockStandbyOldestPage @ 0x14065126C (MiLockStandbyOldestPage.c)
 *     MiSwapNumaStandbyPage @ 0x140652320 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiGetStandbyLookaside @ 0x14026EE00 (MiGetStandbyLookaside.c)
 *     MiPfnToStandbyLookaside @ 0x1402DE180 (MiPfnToStandbyLookaside.c)
 *     MiWriteStandbyLookasideEntry @ 0x14033135C (MiWriteStandbyLookasideEntry.c)
 *     MiFindSuitableLookasideReplacement @ 0x1403313C0 (MiFindSuitableLookasideReplacement.c)
 *     MiPageStandbyLookasideStatus @ 0x1403316E0 (MiPageStandbyLookasideStatus.c)
 */

__int64 __fastcall MiReplaceStandbyLookaside(__int64 a1, __int64 a2, int a3)
{
  int v6; // ebp
  __int64 result; // rax
  __int64 v8; // rcx
  int i; // edi
  __int64 v10; // r14
  __int64 v11; // rbx
  _QWORD *v12; // rcx
  _OWORD v13[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+50h] [rbp-28h]

  memset(v13, 0, sizeof(v13));
  v14 = 0LL;
  v6 = 48 * a1;
  result = MiPageStandbyLookasideStatus(a1);
  if ( (_DWORD)result != 1 )
  {
    MiPfnToStandbyLookaside(v8, 0LL, (__int64 *)v13);
    for ( i = 0; i < 3; ++i )
    {
      result = MiGetStandbyLookaside((__int64 *)v13, i);
      v10 = result;
      v11 = 0LL;
      v12 = (_QWORD *)result;
      while ( *v12 != a1 )
      {
        v11 = (unsigned int)(v11 + 1);
        ++v12;
        if ( (unsigned int)v11 >= 0x40 )
        {
          if ( (_DWORD)v11 == 64 )
            goto LABEL_9;
          break;
        }
      }
      if ( a2 != -1 || (result = MiFindSuitableLookasideReplacement(i, result, v11, v6, a3), !(_DWORD)result) )
        result = MiWriteStandbyLookasideEntry(v10 + 8 * v11, 3LL, a2);
LABEL_9:
      ;
    }
  }
  return result;
}
