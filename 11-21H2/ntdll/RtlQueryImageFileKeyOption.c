/*
 * XREFs of RtlQueryImageFileKeyOption @ 0x180081F20
 * Callers:
 *     LdrpMinimalMapModule @ 0x18004CAA8 (LdrpMinimalMapModule.c)
 *     RtlQueryApplicationKeyOption @ 0x180081D9C (RtlQueryApplicationKeyOption.c)
 *     RtlQueryImageFileExecutionOptions @ 0x180081E80 (RtlQueryImageFileExecutionOptions.c)
 *     LdrpInitializeExecutionOptions @ 0x1800DD27C (LdrpInitializeExecutionOptions.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800E0708 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlInitUnicodeStringEx @ 0x180047F30 (RtlInitUnicodeStringEx.c)
 *     RtlUnicodeStringToInteger @ 0x18007C230 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x1800A4350 (NtQueryValueKey.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 __fastcall RtlQueryImageFileKeyOption(__int64 a1, __int64 a2, int a3, _DWORD *a4, unsigned int a5, int *a6)
{
  __int64 result; // rax
  unsigned int v10; // esi
  _DWORD *v11; // rdi
  unsigned int v12; // ebx
  __int64 v13; // r12
  unsigned int v14; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  size_t v20; // r8
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v22[4]; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD *v23; // [rsp+40h] [rbp-C0h]
  int *v24; // [rsp+48h] [rbp-B8h]
  _BYTE v25[1024]; // [rsp+50h] [rbp-B0h] BYREF

  v24 = a6;
  result = RtlInitUnicodeStringEx((__int64)v22, a2);
  if ( (int)result < 0 )
    return result;
  v10 = a5;
  if ( a5 >= 0x3F4 )
  {
    v14 = a5 + 12;
    goto LABEL_9;
  }
  v11 = v25;
  result = NtQueryValueKey(a1, v22, 2LL, v25, 1024, &v21);
  v12 = result;
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -2147483643 )
    {
      while ( 1 )
      {
        v14 = v21;
LABEL_9:
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
        if ( !ProcessHeap )
          return 3221225495LL;
        Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, v14);
        v13 = Heap;
        if ( !Heap )
          return 3221225495LL;
        v11 = (_DWORD *)Heap;
        v17 = NtQueryValueKey(a1, v22, 2LL, Heap, v14, &v21);
        v12 = v17;
        if ( v17 >= 0 )
          goto LABEL_14;
        if ( v17 != -2147483643 )
          goto LABEL_23;
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v11);
      }
    }
    return result;
  }
  v13 = 0LL;
LABEL_14:
  if ( !a3 )
  {
    if ( v11[2] > a5 )
    {
      v21 = v11[2];
      goto LABEL_17;
    }
    a3 = v11[1];
    v10 = v11[2];
  }
  v18 = v11[1];
  if ( ((v18 - 3) & 0xFFFFFFFB) == 0 )
  {
    if ( a3 != v18 )
      goto LABEL_55;
    v21 = v11[2];
    if ( !a4 || v11[2] > v10 )
      goto LABEL_17;
    v20 = (unsigned int)v11[2];
LABEL_50:
    memmove(a4, v11 + 3, v20);
    goto LABEL_18;
  }
  if ( v18 == 4 )
  {
    if ( a3 == 4 )
    {
      if ( v10 == 4 && v11[2] == 4 )
      {
        v21 = 4;
        if ( a4 )
        {
          *a4 = v11[3];
          goto LABEL_18;
        }
LABEL_17:
        v12 = -2147483643;
LABEL_18:
        if ( v24 && ((int)(v12 + 0x80000000) < 0 || v12 == -2147483643) )
          *v24 = v21;
        goto LABEL_22;
      }
      goto LABEL_33;
    }
LABEL_55:
    v12 = -1073741788;
    goto LABEL_22;
  }
  if ( v18 == 11 )
  {
    if ( a3 != 11 )
      goto LABEL_55;
    if ( v10 == 8 && v11[2] == 8 )
    {
      v21 = 8;
      if ( a4 )
      {
        *(_QWORD *)a4 = *(_QWORD *)(v11 + 3);
        goto LABEL_18;
      }
      goto LABEL_17;
    }
LABEL_33:
    v12 = -1073741820;
    goto LABEL_22;
  }
  if ( v18 != 1 )
  {
    v12 = -1073741788;
    goto LABEL_18;
  }
  if ( a3 != 4 )
  {
    v19 = v11[2];
    v21 = v19;
    if ( v19 > v10 )
      goto LABEL_17;
    v20 = v19;
    goto LABEL_50;
  }
  if ( v10 != 4 )
    goto LABEL_33;
  if ( ((unsigned __int8)a4 & 3) == 0 )
  {
    v21 = 4;
    if ( a4 )
    {
      v23 = v11 + 3;
      v22[0] = *((_WORD *)v11 + 4);
      v22[1] = *((_WORD *)v11 + 4);
      v12 = RtlUnicodeStringToInteger(v22, 0, a4);
      goto LABEL_18;
    }
    goto LABEL_17;
  }
  v12 = -2147483646;
LABEL_22:
  if ( v13 )
LABEL_23:
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v13);
  return v12;
}
