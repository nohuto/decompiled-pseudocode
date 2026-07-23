/*
 * XREFs of KiAcquireThreadStateLockForWrite @ 0x1402B19C0
 * Callers:
 *     KiQuantumEnd @ 0x1402487C0 (KiQuantumEnd.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140246840 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140307B50 (KiReleasePrcbLocksForIsolationUnit.c)
 */

char __fastcall KiAcquireThreadStateLockForWrite(__int64 a1, __int64 *a2, __int64 *a3, volatile signed __int32 **a4)
{
  __int64 v8; // rax
  volatile signed __int32 *v9; // rsi
  char result; // al
  char v11; // al
  char v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdi
  bool v15; // zf
  __int64 v16; // rbp
  __int64 v17; // rbp
  int v18; // [rsp+50h] [rbp+8h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      v12 = *(_BYTE *)(a1 + 388);
      v14 = 0LL;
      v9 = 0LL;
      if ( v12 == 1 )
        break;
      switch ( *(_BYTE *)(a1 + 388) )
      {
        case 2:
LABEL_13:
          v13 = *(unsigned int *)(a1 + 536);
          if ( (int)v13 >= 0 )
          {
            v14 = KiProcessorBlock[v13];
            KiAcquirePrcbLocksForIsolationUnit(v14, 0, a3);
            v15 = a1 == *(_QWORD *)(v14 + 8);
LABEL_15:
            if ( v15 )
              goto LABEL_9;
            goto LABEL_16;
          }
          break;
        case 3:
          v16 = *(unsigned int *)(a1 + 536);
          if ( (int)v16 >= 0 )
          {
            v14 = KiProcessorBlock[v16];
            KiAcquirePrcbLocksForIsolationUnit(v14, 0, a3);
            if ( a1 == *(_QWORD *)(v14 + 16) )
              goto LABEL_9;
            if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v16 )
              __fastfail(0x1Eu);
LABEL_16:
            KiReleasePrcbLocksForIsolationUnit(a3);
          }
          break;
        case 5:
          v11 = *(_BYTE *)(a1 + 112) & 7;
          if ( v11 == 1 || (unsigned __int8)(v11 - 3) <= 3u )
            goto LABEL_9;
          v12 = 2;
          goto LABEL_13;
        default:
          goto LABEL_9;
      }
    }
    v17 = *(unsigned int *)(a1 + 536);
    if ( (int)v17 >= 0 )
    {
      v14 = KiProcessorBlock[v17];
      KiAcquirePrcbLocksForIsolationUnit(v14, 0, a3);
      if ( *(_BYTE *)(a1 + 388) != 1 )
        goto LABEL_16;
      v15 = *(_DWORD *)(a1 + 536) == (_DWORD)v17;
      goto LABEL_15;
    }
    v8 = (unsigned int)v17;
    LODWORD(v8) = v17 & 0x7FFFFFFF;
    v18 = 0;
    v9 = *(volatile signed __int32 **)(KiProcessorBlock[v8] + 34888);
    while ( _interlockedbittestandset64(v9, 0LL) )
    {
      do
        KeYieldProcessorEx(&v18);
      while ( *(_QWORD *)v9 );
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v17 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
  }
LABEL_9:
  result = v12;
  *a4 = v9;
  *a2 = v14;
  return result;
}
