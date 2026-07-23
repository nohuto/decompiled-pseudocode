/*
 * XREFs of sub_140636520 @ 0x140636520
 * Callers:
 *     sub_140636860 @ 0x140636860 (sub_140636860.c)
 *     sub_140636DE4 @ 0x140636DE4 (sub_140636DE4.c)
 *     sub_140636FAC @ 0x140636FAC (sub_140636FAC.c)
 *     sub_1406371D4 @ 0x1406371D4 (sub_1406371D4.c)
 * Callees:
 *     sub_140460BA4 @ 0x140460BA4 (sub_140460BA4.c)
 *     sub_140460BDC @ 0x140460BDC (sub_140460BDC.c)
 *     sub_140460DBA @ 0x140460DBA (sub_140460DBA.c)
 *     sub_140460F1A @ 0x140460F1A (sub_140460F1A.c)
 *     sub_140635B80 @ 0x140635B80 (sub_140635B80.c)
 *     sub_140636208 @ 0x140636208 (sub_140636208.c)
 *     sub_1406362D0 @ 0x1406362D0 (sub_1406362D0.c)
 *     sub_140883A50 @ 0x140883A50 (sub_140883A50.c)
 */

char __fastcall sub_140636520(unsigned __int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbp
  unsigned int v7; // eax
  unsigned int v8; // ecx
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rcx
  BOOL v13; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v14; // [rsp+58h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = qword_140C15D88;
  v13 = 0;
  v7 = ((unsigned int)*(_QWORD *)(qword_140C15D88 + 8) >> 13) & 0x3FFFF;
  _BitScanReverse(&v8, v7);
  v9 = ((unsigned int)*(_QWORD *)(qword_140C15D88 + 8) >> 4) & 0x1FF;
  v14 = v8;
  v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb() + 4310) + 8LL * (v8 - 2)) + 8LL * (v7 ^ (1 << v8)) + 8);
  if ( *(_DWORD *)(v10 + 8 * v9 + 60) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8 * v9 + 304));
  }
  else
  {
    LOBYTE(v10) = a1 - 1;
    if ( a1 - 1 > 0xFFFF7FFFFFFFFFFEuLL )
    {
      v10 = sub_140460BDC(qword_140C15D88);
      v4 = v10;
      if ( v10 )
      {
        sub_140460BA4(v10, a1);
        if ( !*(_DWORD *)(v5 + 1036) )
          sub_140636208(v11, a2);
        LOBYTE(v10) = sub_140635B80(v5, v4);
        v4 = 0LL;
      }
      a1 = 0LL;
    }
    if ( (*((_DWORD *)CurrentThread + 29) & 0x400) == 0 )
    {
      LODWORD(v10) = *((_DWORD *)CurrentThread + 344);
      if ( (v10 & 1) == 0 && (*((_DWORD *)CurrentThread + 29) & 0x4000) != 0 )
      {
        if ( *((_QWORD *)CurrentThread + 30) )
        {
          LODWORD(v10) = *(_DWORD *)(*((_QWORD *)CurrentThread + 68) + 888LL)
                       + ((*(_DWORD *)(*((_QWORD *)CurrentThread + 68) + 632LL) >> 3) & 1);
          if ( !(_DWORD)v10 && !*((_BYTE *)CurrentThread + 644) )
          {
            LODWORD(v10) = sub_140460F1A(0, &v13);
            if ( (int)v10 >= 0 )
            {
              if ( !_interlockedbittestandset((volatile signed __int32 *)CurrentThread + 344, 0x17u) )
              {
                LOBYTE(v10) = sub_140883A50(v5, a1);
                _InterlockedAnd((volatile signed __int32 *)CurrentThread + 344, 0xFF7FFFFF);
              }
            }
            else if ( !v13 )
            {
              LOBYTE(v10) = sub_1406362D0(a1);
            }
          }
        }
      }
    }
    if ( v4 )
      LOBYTE(v10) = sub_140460DBA(v5, *(_QWORD *)(v4 + 48), (_SLIST_ENTRY *)v4);
  }
  return v10;
}
