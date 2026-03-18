/*
 * XREFs of ProcessCompletionQueues @ 0x1C0001AD0
 * Callers:
 *     NVMeHwMSIInterrupt @ 0x1C00019C0 (NVMeHwMSIInterrupt.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     NVMeHwInterrupt @ 0x1C0017C00 (NVMeHwInterrupt.c)
 * Callees:
 *     NVMeCompletionDpcRoutine @ 0x1C0002000 (NVMeCompletionDpcRoutine.c)
 */

__int64 __fastcall ProcessCompletionQueues(__int64 a1, unsigned __int16 a2, char a3)
{
  __int64 result; // rax
  char v5; // r14
  _BOOL8 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r8
  __int16 v9; // cx
  __int64 v10; // rcx
  unsigned int i; // esi
  __int64 v12; // r8
  signed __int32 v13[8]; // [rsp+0h] [rbp-68h] BYREF
  _DWORD v14[4]; // [rsp+30h] [rbp-38h] BYREF
  int v15; // [rsp+70h] [rbp+8h] BYREF
  int v16; // [rsp+88h] [rbp+20h] BYREF

  result = *(unsigned int *)(a1 + 32);
  if ( (result & 0x10) == 0 )
  {
    if ( *(_BYTE *)(a1 + 20) || a3 || (*(_DWORD *)(a1 + 116) & 1) != 0 )
    {
      v5 = 1;
      v6 = 0LL;
    }
    else
    {
      v5 = 0;
      v6 = (*(_DWORD *)(a1 + 64) & 0x2000) != 0;
    }
    if ( a2 == 0xFFFF || *(_WORD *)(a1 + 272) <= 1u )
    {
      v8 = a1 + 448;
      result = *(_QWORD *)(a1 + 448);
      if ( (*(_WORD *)(result + 16LL * *(unsigned __int16 *)(a1 + 618) + 14) & 1) != *(_WORD *)(a1 + 620) )
      {
        v9 = *(_WORD *)(a1 + 616);
        if ( !*(_BYTE *)(a1 + 25) && (unsigned int)(*(_DWORD *)(a1 + 16) - 1) <= 1 )
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 176) + 12LL) = 1 << v9;
          _InterlockedOr(v13, 0);
          *(_BYTE *)(a1 + 25) = 1;
        }
        if ( v5 )
        {
          result = NVMeCompletionDpcRoutine(v8 + 24, a1, v8, 0LL);
        }
        else
        {
          v16 = 0;
          result = StorPortNotification(4098LL, a1, v8 + 24, v8, v6, &v16);
        }
      }
      v10 = *(_QWORD *)(a1 + 800);
      for ( i = 0; v10; ++i )
      {
        result = *(unsigned __int16 *)(a1 + 306);
        if ( i >= (unsigned int)result )
          break;
        v12 = v10 + 344LL * i;
        result = *(_QWORD *)v12;
        if ( (*(_WORD *)(*(_QWORD *)v12 + 16LL * *(unsigned __int16 *)(v12 + 170) + 14) & 1) != *(_WORD *)(v12 + 172) )
        {
          if ( !*(_BYTE *)(a1 + 25) && (unsigned int)(*(_DWORD *)(a1 + 16) - 1) <= 1 )
          {
            *(_DWORD *)(*(_QWORD *)(a1 + 176) + 12LL) = 1 << *(_WORD *)(v12 + 168);
            _InterlockedOr(v13, 0);
            *(_BYTE *)(a1 + 25) = 1;
          }
          if ( v5 )
          {
            result = NVMeCompletionDpcRoutine(v12 + 24, a1, v12, 0LL);
          }
          else
          {
            v14[0] = 0;
            result = StorPortNotification(4098LL, a1, v12 + 24, v12, v6, v14);
          }
        }
        v10 = *(_QWORD *)(a1 + 800);
      }
    }
    else
    {
      if ( a2 )
        v7 = 344LL * a2 + *(_QWORD *)(a1 + 800) - 344LL;
      else
        v7 = a1 + 448;
      if ( !*(_BYTE *)(a1 + 25) && (unsigned int)(*(_DWORD *)(a1 + 16) - 1) <= 1 )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 176) + 12LL) = 1 << *(_WORD *)(v7 + 168);
        _InterlockedOr(v13, 0);
        *(_BYTE *)(a1 + 25) = 1;
      }
      if ( v5 )
      {
        return NVMeCompletionDpcRoutine(v7 + 24, a1, v7, 0LL);
      }
      else
      {
        v15 = 0;
        return StorPortNotification(4098LL, a1, v7 + 24, v7, v6, &v15);
      }
    }
  }
  return result;
}
