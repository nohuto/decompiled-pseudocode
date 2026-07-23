/*
 * XREFs of sub_140268520 @ 0x140268520
 * Callers:
 *     sub_14025C1B4 @ 0x14025C1B4 (sub_14025C1B4.c)
 *     sub_1402CA5E0 @ 0x1402CA5E0 (sub_1402CA5E0.c)
 * Callees:
 *     sub_140268620 @ 0x140268620 (sub_140268620.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall sub_140268520(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  struct _KTHREAD *CurrentThread; // rdi
  bool v6; // zf
  volatile LONG *v7; // rsi
  __int64 v8; // r8
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  __int64 *v11; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rax

  *(_BYTE *)(a1 + 72) = 0;
  if ( !(_DWORD)a3 )
  {
    if ( (*(_BYTE *)(a2 + 34) & 8) == 0 )
    {
      *(_QWORD *)(a1 + 24) = a2;
      *(_BYTE *)(a2 + 34) |= 8u;
      if ( (unsigned int)sub_140268620(a2, a2, a3, a2) )
        *(_BYTE *)(a1 + 72) = 1;
      *(_QWORD *)(v4 + 16) = a1;
      goto LABEL_6;
    }
    return 0LL;
  }
  if ( (*(_QWORD *)a2 & 0x800000000000LL) != 0 )
    return 0LL;
  v13 = *(_QWORD *)a2 | 0x800000000000LL;
  *(_BYTE *)(a1 + 68) = 1;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)a2 = v13;
LABEL_6:
  CurrentThread = KeGetCurrentThread();
  v6 = *(_BYTE *)(a1 + 73) == 0;
  *(_QWORD *)(a1 + 56) = CurrentThread;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_WORD *)(a1 + 70) = 0;
  if ( v6 )
    v7 = &dword_140C51DF0;
  else
    v7 = &dword_140C51DE0;
  ExAcquireSpinLockExclusiveAtDpcLevel(v7);
  LOBYTE(v8) = 0;
  if ( *(_BYTE *)(a1 + 73) )
  {
    v9 = (_QWORD *)qword_140C51DE8;
    if ( qword_140C51DE8 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)CurrentThread >= v9[7] )
        {
          v14 = (_QWORD *)v9[1];
          if ( !v14 )
          {
            LOBYTE(v8) = 1;
            break;
          }
        }
        else
        {
          v14 = (_QWORD *)*v9;
          if ( !*v9 )
            break;
        }
        v9 = v14;
      }
    }
    v11 = &qword_140C51DE8;
    goto LABEL_17;
  }
  v9 = (_QWORD *)qword_140C51DF8;
  if ( !qword_140C51DF8 )
    goto LABEL_16;
  while ( a1 < (unsigned __int64)v9 )
  {
    v10 = (_QWORD *)*v9;
    if ( !*v9 )
      goto LABEL_16;
LABEL_12:
    v9 = v10;
  }
  v10 = (_QWORD *)v9[1];
  if ( v10 )
    goto LABEL_12;
  LOBYTE(v8) = 1;
LABEL_16:
  v11 = &qword_140C51DF8;
LABEL_17:
  RtlAvlInsertNodeEx(v11, v9, v8, a1);
  *(_BYTE *)(a1 + 69) = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  return 1LL;
}
