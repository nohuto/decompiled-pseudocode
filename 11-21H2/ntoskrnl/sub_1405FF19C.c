/*
 * XREFs of sub_1405FF19C @ 0x1405FF19C
 * Callers:
 *     sub_140A8C1BC @ 0x140A8C1BC (sub_140A8C1BC.c)
 * Callees:
 *     MmMdlPageContentsState @ 0x1402344C0 (MmMdlPageContentsState.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_140384A00 @ 0x140384A00 (sub_140384A00.c)
 *     sub_1405FF02C @ 0x1405FF02C (sub_1405FF02C.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

char __fastcall sub_1405FF19C(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  char v9; // dl
  __int64 v10; // rcx
  __int64 v11; // r11
  _UNKNOWN **v12; // rbp
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  __int64 v17; // rbx
  ULONG_PTR v18; // rdx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v3 = &retaddr;
  v5 = 0LL;
  v6 = *(_QWORD *)(a2 + 8);
  if ( !*(_QWORD *)v6 )
  {
    LOBYTE(v3) = KeGetCurrentIrql();
    if ( (unsigned __int8)v3 >= 2u || *(_DWORD *)(v6 + 40) != -1 )
    {
      LOBYTE(v3) = dword_140C29FC0;
      v9 = *(_BYTE *)(a2 + 67);
      if ( (dword_140C29FC0 & 0x2000) == 0 || (dword_140C29FC0 & 0x4000) != 0 || v9 == *(_BYTE *)(a2 + 66) )
      {
        LODWORD(v3) = MmMdlPageContentsState(v6, 2u);
        if ( (_DWORD)v3 == 1 )
        {
          v10 = *(_QWORD *)(a1 + 224);
          if ( v10 )
            *(_QWORD *)(v10 + 16) = *(_QWORD *)(a2 + 8);
          v3 = (_UNKNOWN **)sub_1405FF02C(a1, *(_QWORD *)(a2 + 8));
          v12 = v3;
          if ( v3 || *(_BYTE *)a3 != 4 )
          {
            if ( (*(_BYTE *)(v11 + 10) & 5) != 0 )
            {
              v13 = *(_QWORD *)(v11 + 24);
            }
            else
            {
              v3 = (_UNKNOWN **)MmMapLockedPagesSpecifyCache((PMDL)v11, 0, MmCached, 0LL, 0, 0x40000020u);
              v13 = (unsigned __int64)v3;
            }
            if ( v13 )
            {
              if ( !v12
                || (v14 = *((unsigned int *)v12 + 6),
                    v15 = *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL),
                    (_DWORD)v14 == (_DWORD)v15) )
              {
                LOBYTE(v3) = *(_BYTE *)a3;
                if ( *(_BYTE *)a3 == 4 )
                {
                  v3 = (_UNKNOWN **)sub_140384A00(
                                      v13,
                                      *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL),
                                      0LL,
                                      (__int64)&off_1400016D0);
                  if ( v3 == (_UNKNOWN **)v12[1] )
                    return (char)v3;
                  v18 = 4112LL;
                  goto LABEL_25;
                }
              }
              else
              {
                v16 = (unsigned __int64)v12[2];
                if ( v13 < v16 || v13 + v15 > v16 + v14 )
                {
                  LOBYTE(v5) = *(_BYTE *)a3 != 4;
                  v18 = v5 + 4112;
                  goto LABEL_25;
                }
                LOBYTE(v3) = *(_BYTE *)a3;
              }
              if ( (_BYTE)v3 == 3 )
              {
                LOBYTE(v3) = KeGetCurrentIrql();
                if ( (unsigned __int8)v3 < 2u )
                {
                  v17 = sub_140384A00(v13, *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL), 0LL, (__int64)&off_1400016D0);
                  KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&stru_140041CE8);
                  v3 = (_UNKNOWN **)sub_140384A00(
                                      v13,
                                      *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL),
                                      0LL,
                                      (__int64)&off_1400016D0);
                  if ( (_UNKNOWN **)v17 != v3 )
                  {
                    v18 = 4113LL;
LABEL_25:
                    LOBYTE(v3) = sub_140A8C924(0xC4u, v18, *(_QWORD *)(a3 + 40), a2, v13);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (char)v3;
}
