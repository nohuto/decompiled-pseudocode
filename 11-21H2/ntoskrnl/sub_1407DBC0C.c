/*
 * XREFs of sub_1407DBC0C @ 0x1407DBC0C
 * Callers:
 *     sub_1402598CC @ 0x1402598CC (sub_1402598CC.c)
 *     sub_1406F9060 @ 0x1406F9060 (sub_1406F9060.c)
 *     sub_1406FAEA0 @ 0x1406FAEA0 (sub_1406FAEA0.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_140360258 @ 0x140360258 (sub_140360258.c)
 *     sub_140360350 @ 0x140360350 (sub_140360350.c)
 */

__int64 __fastcall sub_1407DBC0C(int a1, __int64 a2, int a3)
{
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rdx
  unsigned __int64 i; // r8
  __int64 v11; // rcx
  __int64 v13; // r10
  __int64 v14; // r9
  __int64 v15; // [rsp+58h] [rbp+10h]

  v6 = 0;
  if ( a2 && (unsigned int)sub_140360258((ULONG_PTR)&qword_140C545C8) )
  {
    v7 = qword_140C545A8;
    if ( a2 == *(_QWORD *)(qword_140C545A8 + 8) )
    {
LABEL_4:
      v8 = *(_QWORD *)(v7 + 16);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C545C8, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_140C545C8);
      sub_1402AFC00((ULONG_PTR)&qword_140C545C8);
      KeLeaveCriticalRegion();
      if ( qword_140C545E8 == v8 )
      {
LABEL_15:
        sub_140360350(a2, a1, v6 != 0 ? a3 : 0);
        return v6;
      }
      if ( (unsigned int)sub_140360258((ULONG_PTR)&qword_140C545F0) )
      {
        if ( (_DWORD)qword_140C545DC )
        {
          v9 = 0LL;
          for ( i = (37
                   * (BYTE6(v8)
                    + 37
                    * (BYTE5(v8)
                     + 37
                     * (BYTE4(v8)
                      + 37 * (BYTE3(v8) + 37 * (BYTE2(v8) + 37 * (BYTE1(v8) + 37 * ((unsigned __int8)v8 + 11623883)))))))
                   + HIBYTE(v8)) & (unsigned int)(qword_140C545DC - 1); ; i = (unsigned int)(qword_140C545DC - 1) & (v9 + i) )
          {
            v11 = *(_QWORD *)((i << dword_140C545D8) + qword_140C545D0);
            if ( !v11 )
              break;
            if ( v11 == v8 )
            {
              qword_140C545E8 = v8;
              goto LABEL_12;
            }
            if ( !v9 )
            {
              v9 = 2654435761LL * v8 + 1;
              if ( ((-79 * (_BYTE)v8) & 1) != 0 )
                v9 = 2654435761LL * v8;
            }
          }
        }
        v6 = 1;
        qword_140C54628 = MEMORY[0xFFFFF78000000320];
LABEL_12:
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C545F0, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&qword_140C545F0);
        sub_1402AFC00((ULONG_PTR)&qword_140C545F0);
        KeLeaveCriticalRegion();
        goto LABEL_15;
      }
    }
    else
    {
      v13 = -1LL << (dword_140C5459C & 0x1F);
      v14 = a2 & v13;
      if ( (unsigned int)dword_140C5459C >= 0x20 )
      {
        v15 = a2 & v13;
        v7 = qword_140C545A0
           + 8LL
           * ((37
             * (BYTE6(v15)
              + 37
              * (BYTE5(v15)
               + 37
               * (BYTE4(v15)
                + 37 * (BYTE3(v15) + 37 * (BYTE2(v15) + 37 * (BYTE1(v15) + 37 * ((unsigned __int8)v14 + 11623883)))))))
             + HIBYTE(v15)) & (((unsigned int)dword_140C5459C >> 5) - 1));
        while ( 1 )
        {
          v7 = *(_QWORD *)v7;
          if ( (v7 & 1) != 0 )
            break;
          if ( v14 == (v13 & *(_QWORD *)(v7 + 8)) )
          {
            if ( !v7 )
              break;
            qword_140C545A8 = v7;
            goto LABEL_4;
          }
        }
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C545C8, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_140C545C8);
      sub_1402AFC00((ULONG_PTR)&qword_140C545C8);
      KeLeaveCriticalRegion();
    }
  }
  return v6;
}
