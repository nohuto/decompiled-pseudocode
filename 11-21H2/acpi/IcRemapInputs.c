/*
 * XREFs of IcRemapInputs @ 0x1C009BB28
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C009A2E0 (IrqArbCommitAllocation.c)
 *     IrqArbBootAllocation @ 0x1C009B2C0 (IrqArbBootAllocation.c)
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C009D86C (AcpiIrqLibSetupSciInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 IcRemapInputs()
{
  unsigned __int8 i; // si
  __int64 j; // rdi
  int v2; // r14d
  unsigned int v3; // r12d
  _BYTE *v4; // rbx
  unsigned int v5; // r15d
  bool v6; // r13
  int v7; // ebp
  int v8; // r14d
  __int64 result; // rax

  for ( i = 0; i < 2u; ++i )
  {
    for ( j = IcListHead; &IcListHead != (__int64 *)j; j = *(_QWORD *)j )
    {
      if ( (*(_DWORD *)(j + 28) & 0x80000004) == 0 )
      {
        v3 = 0;
        v5 = *(_DWORD *)(j + 20) - *(_DWORD *)(j + 16) + 1;
        if ( *(_DWORD *)(j + 20) - *(_DWORD *)(j + 16) != -1 )
        {
          v4 = (_BYTE *)(j + 225);
          do
          {
            v2 = *(_DWORD *)(v4 - 189);
            if ( !v2 && !*(_DWORD *)(v4 - 193) || *v4 )
              goto LABEL_5;
            v6 = *(_DWORD *)(v4 - 173) != *(_DWORD *)(v4 - 85)
              || *(_DWORD *)(v4 - 165) != *(_DWORD *)(v4 - 77)
              || *(_DWORD *)(v4 - 161) != *(_DWORD *)(v4 - 73)
              || *(_WORD *)(v4 - 145) != *(_WORD *)(v4 - 57)
              || *(_QWORD *)(v4 - 153) != *(_QWORD *)(v4 - 65);
            v7 = *(_DWORD *)(v4 - 193) - *(_DWORD *)(v4 - 185);
            v8 = v2 - *(_DWORD *)(v4 - 181);
            if ( !i )
            {
              if ( v8 )
              {
                if ( !v7 || !v6 )
                  goto LABEL_5;
              }
              else if ( !v7 )
              {
                goto LABEL_5;
              }
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, int))HalPrivateDispatchTable[65])(
                0LL,
                0LL,
                0LL,
                0LL,
                200LL * v3 + j + 48,
                1);
            }
            if ( i == 1 && v8 && (!v7 || v6) )
            {
              result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, int))HalPrivateDispatchTable[64])(
                         0LL,
                         0LL,
                         0LL,
                         0LL,
                         200LL * v3 + j + 136,
                         1);
              if ( (int)result < 0 )
                return result;
            }
LABEL_5:
            ++v3;
            v4 += 200;
          }
          while ( v3 < v5 );
        }
      }
    }
  }
  return 0LL;
}
