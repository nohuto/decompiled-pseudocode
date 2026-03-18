/*
 * XREFs of NVMeGetNVMSetAttributeList @ 0x1C00071B8
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C0007384 (NVMeControllerInitPart1.c)
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     memmove @ 0x1C0010700 (memmove.c)
 *     memset @ 0x1C00109C0 (memset.c)
 */

__int64 __fastcall NVMeGetNVMSetAttributeList(__int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  _QWORD *v4; // rbp
  unsigned __int16 i; // r14
  void *v6; // rcx
  int v7; // edx
  __int64 v8; // rcx
  unsigned __int8 *v9; // rbx

  v1 = *(_QWORD *)(a1 + 1640);
  result = *(unsigned int *)(v1 + 96);
  if ( (result & 4) != 0 && (result = *(unsigned __int16 *)(v1 + 338), (_WORD)result) )
  {
    v4 = (_QWORD *)(a1 + 4064);
    result = StorPortExtendedFunction(0LL, a1, (unsigned int)((_DWORD)result << 7), 1701672526LL);
    if ( !(_DWORD)result )
    {
      if ( *v4 )
      {
        for ( i = 0; i < *(_WORD *)(v1 + 338); i += result )
        {
          v6 = *(void **)(a1 + 952);
          *(_BYTE *)(a1 + 867) = 0;
          memset(v6, 0, 0x10A0uLL);
          v7 = 0;
          *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = 0LL;
          *(_QWORD *)(a1 + 920) = *(_QWORD *)(a1 + 952);
          *(_DWORD *)(a1 + 856) = 1;
          do
            *(_BYTE *)(*(_QWORD *)(a1 + 952) + 4253LL) |= ++v7;
          while ( v7 < 2 );
          *(_WORD *)(*(_QWORD *)(a1 + 952) + 4244LL) = 0;
          v8 = *(_QWORD *)(a1 + 952);
          *(_QWORD *)(v8 + 4120) = *(_QWORD *)(a1 + 1744);
          *(_WORD *)(v8 + 4140) = i + 1;
          *(_BYTE *)(v8 + 4096) = 6;
          *(_DWORD *)(v8 + 4100) = 0;
          *(_BYTE *)(v8 + 4136) = 4;
          ProcessCommand(a1, a1 + 864);
          result = WaitForCommandCompleteWithCustomTimeout(a1);
          if ( *(_BYTE *)(a1 + 867) != 1 )
            break;
          v9 = *(unsigned __int8 **)(a1 + 1736);
          memmove((void *)(*v4 + ((unsigned __int64)i << 14)), v9 + 128, (unsigned __int64)*v9 << 7);
          result = *v9;
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 4064) = 0LL;
  }
  return result;
}
