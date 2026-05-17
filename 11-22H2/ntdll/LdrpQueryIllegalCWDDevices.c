/*
 * XREFs of LdrpQueryIllegalCWDDevices @ 0x1800DF14C
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800DD9FC (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001AEA0 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlUnicodeStringToInteger @ 0x180076E90 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x18009F0D0 (NtQueryValueKey.c)
 */

__int64 __fastcall LdrpQueryIllegalCWDDevices(__int64 a1)
{
  char *v1; // rdi
  int ValueKey; // eax
  int v3; // ebx
  __int64 v4; // rsi
  int v5; // ecx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  int v8; // eax
  __int64 result; // rax
  unsigned int v10; // [rsp+38h] [rbp-D0h]
  int v11[3]; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned __int16 v12[4]; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD *v13; // [rsp+50h] [rbp-B8h]
  char v14; // [rsp+58h] [rbp-B0h] BYREF

  if ( !a1 || (int)RtlInitUnicodeStringEx((__int64)v12, (__int64)L"CWDIllegalInDLLSearch") < 0 )
  {
LABEL_25:
    result = (MEMORY[0x7FFE02D5] >> 4) & 3;
    if ( (_DWORD)result == 3 )
      result = 0xFFFFFFFFLL;
    v11[0] = result;
    goto LABEL_28;
  }
  v1 = &v14;
  ValueKey = NtQueryValueKey();
  v3 = ValueKey;
  if ( ValueKey < 0 )
  {
    if ( ValueKey == -2147483643 )
    {
      while ( 1 )
      {
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
        if ( !ProcessHeap )
          break;
        Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, v10);
        v4 = Heap;
        if ( !Heap )
          break;
        v1 = (char *)Heap;
        v8 = NtQueryValueKey();
        v3 = v8;
        if ( v8 >= 0 )
          goto LABEL_5;
        if ( v8 != -2147483643 )
          goto LABEL_22;
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v1);
      }
    }
    goto LABEL_25;
  }
  v4 = 0LL;
LABEL_5:
  v5 = *((_DWORD *)v1 + 1);
  if ( ((v5 - 3) & 0xFFFFFFFB) == 0 )
    goto LABEL_20;
  if ( v5 == 4 )
  {
    if ( *((_DWORD *)v1 + 2) == 4 )
      v11[0] = *((_DWORD *)v1 + 3);
    else
      v3 = -1073741820;
    goto LABEL_21;
  }
  if ( v5 != 1 )
  {
LABEL_20:
    v3 = -1073741788;
    goto LABEL_21;
  }
  if ( ((unsigned __int8)v11 & 3) != 0 )
  {
    v3 = -2147483646;
  }
  else
  {
    v13 = v1 + 12;
    v12[0] = *((_WORD *)v1 + 4);
    v12[1] = *((_WORD *)v1 + 4);
    v3 = RtlUnicodeStringToInteger(v12, 0, v11);
  }
LABEL_21:
  if ( v4 )
LABEL_22:
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
  if ( v3 < 0 )
    goto LABEL_25;
  result = (unsigned int)(v11[0] + 1);
  if ( (unsigned int)result > 3 )
    goto LABEL_25;
LABEL_28:
  if ( v11[0] == -1 )
  {
    LdrpIllegalCWDDevices = -1;
  }
  else if ( v11[0] == 1 )
  {
    LdrpIllegalCWDDevices = 0x2000;
  }
  else
  {
    result = 16LL;
    if ( v11[0] != 2 )
      result = 0LL;
    LdrpIllegalCWDDevices = result;
  }
  return result;
}
