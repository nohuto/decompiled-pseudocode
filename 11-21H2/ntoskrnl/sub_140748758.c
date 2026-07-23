/*
 * XREFs of sub_140748758 @ 0x140748758
 * Callers:
 *     sub_1407483B4 @ 0x1407483B4 (sub_1407483B4.c)
 *     sub_14074856C @ 0x14074856C (sub_14074856C.c)
 *     sub_140766A5C @ 0x140766A5C (sub_140766A5C.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140748B18 @ 0x140748B18 (sub_140748B18.c)
 *     sub_140748D08 @ 0x140748D08 (sub_140748D08.c)
 *     sub_140748D6C @ 0x140748D6C (sub_140748D6C.c)
 *     sub_14074B21C @ 0x14074B21C (sub_14074B21C.c)
 *     sub_14074CA9C @ 0x14074CA9C (sub_14074CA9C.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 *     sub_140821D18 @ 0x140821D18 (sub_140821D18.c)
 *     sub_14083C0F4 @ 0x14083C0F4 (sub_14083C0F4.c)
 *     sub_1408608EC @ 0x1408608EC (sub_1408608EC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140748758(__int64 a1, int a2, PVOID *a3, ULONG *a4)
{
  _DWORD *v8; // rdi
  __int64 v9; // r12
  int v10; // eax
  unsigned int v11; // ebx
  __int64 result; // rax
  __int64 v13; // rcx
  unsigned int *v14; // rax
  _DWORD *v15; // rax
  PVOID v16; // rbx
  int v17; // r12d
  void *v18; // rbx
  __int64 v19; // rdx
  void *Pool2; // rax
  PVOID Data; // [rsp+20h] [rbp-79h]
  ULONG DataSize; // [rsp+28h] [rbp-71h]
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-59h] BYREF
  PVOID P; // [rsp+50h] [rbp-49h] BYREF
  _DWORD *v25; // [rsp+58h] [rbp-41h]
  void *Src; // [rsp+60h] [rbp-39h] BYREF
  _WORD v27[36]; // [rsp+68h] [rbp-31h] BYREF
  char v28; // [rsp+108h] [rbp+6Fh] BYREF
  HANDLE KeyHandle; // [rsp+110h] [rbp+77h] BYREF
  PVOID v30; // [rsp+118h] [rbp+7Fh]

  *a3 = 0LL;
  KeyHandle = 0LL;
  Src = 0LL;
  P = 0LL;
  v30 = 0LL;
  v25 = 0LL;
  v8 = 0LL;
  *a4 = 0;
  memset(v27, 0, sizeof(v27));
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  *(_QWORD *)&ValueName.Length = v9;
  if ( a2 )
  {
    if ( (unsigned int)sub_140748B18(a1, 0, 2, (_DWORD)a3, (__int64)&v28) != -1073741772 )
    {
      if ( *a3 )
      {
        v8 = (_DWORD *)sub_140821D18(v13, *a3, 0LL);
        ExFreePoolWithTag(*a3, 0);
        if ( !v8 )
        {
          *a3 = 0LL;
          *a4 = 0;
          return 3221225626LL;
        }
        *a3 = v8;
        *a4 = *v8;
      }
LABEL_18:
      if ( (int)sub_140748D6C(a1, v8, &Src) < 0 )
      {
        *a3 = v8;
        if ( v8 )
          *a4 = *v8;
        else
          *a4 = 0;
        return 0LL;
      }
      v18 = Src;
      *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
      KeyHandle = 0LL;
      if ( !Src )
      {
        *a4 = 0;
        *a3 = 0LL;
LABEL_38:
        if ( (int)sub_14077F2EC(qword_140D00AC0, *(_QWORD *)(v9 + 48), 19, 0, 131097, 1, (__int64)&KeyHandle, 0LL) >= 0 )
        {
          ValueName.Buffer = L"FilteredConfigVector";
          DataSize = *a4;
          Data = *a3;
          *(_DWORD *)&ValueName.Length = 2752552;
          ZwSetValueKey(KeyHandle, &ValueName, 0, 0xAu, Data, DataSize);
          ZwClose(KeyHandle);
        }
        return 0LL;
      }
      v19 = *(unsigned int *)Src;
      *a4 = *(_DWORD *)Src;
      Pool2 = (void *)ExAllocatePool2(256LL, v19, 538996816LL);
      *a3 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, v18, *a4);
        ExFreePoolWithTag(v18, 0);
        goto LABEL_38;
      }
      ExFreePoolWithTag(v18, 0);
      return 3221225626LL;
    }
    if ( (unsigned int)sub_140748B18(a1, 1, 1, (unsigned int)&KeyHandle, (__int64)&v28) != -1073741772 )
    {
      v8 = KeyHandle;
      goto LABEL_17;
    }
    if ( (*(_DWORD *)(v9 + 396) & 1) != 0 )
    {
      result = sub_140748B18(a1, 1, 2, (unsigned int)&KeyHandle, (__int64)&v28);
      if ( (_DWORD)result == -1073741772 )
      {
        result = 0LL;
        goto LABEL_16;
      }
    }
    else
    {
      v14 = *(unsigned int **)(v9 + 440);
      if ( v14 )
      {
        v15 = (_DWORD *)ExAllocatePool2(256LL, *v14, 538996816LL);
        v8 = v15;
        if ( !v15 )
          return 3221225495LL;
        memmove(v15, *(const void **)(v9 + 440), **(unsigned int **)(v9 + 440));
        goto LABEL_17;
      }
      result = sub_14074B21C(a1, &KeyHandle);
      if ( (_DWORD)result == -1073741637 )
      {
        v8 = 0LL;
        goto LABEL_17;
      }
    }
    v8 = KeyHandle;
LABEL_16:
    if ( (int)result < 0 )
      return result;
LABEL_17:
    if ( (int)sub_140748B18(a1, 0, 4, (unsigned int)&P, (__int64)&v28) >= 0 )
    {
      v16 = P;
      if ( !P || !*(_DWORD *)P || *((_DWORD *)P + 1) != 5 )
      {
        v17 = sub_14083C0F4(v8);
        if ( v16 )
          ExFreePoolWithTag(v16, 0);
        if ( v17 < 0 )
        {
          if ( v8 )
            ExFreePoolWithTag(v8, 0);
          return (unsigned int)v17;
        }
        v9 = *(_QWORD *)&ValueName.Length;
        if ( (*(_DWORD *)(*(_QWORD *)&ValueName.Length + 396LL) & 1) != 0 )
        {
          if ( v8 )
            ExFreePoolWithTag(v8, 0);
          v8 = v30;
        }
        else
        {
          v11 = sub_1408608EC(v30);
          if ( v8 )
            ExFreePoolWithTag(v8, 0);
          if ( v30 )
            ExFreePoolWithTag(v30, 0);
          if ( (v11 & 0x80000000) != 0 )
            return v11;
          v8 = v25;
        }
      }
    }
    goto LABEL_18;
  }
  if ( (*(_DWORD *)(v9 + 396) & 1) == 0 )
  {
    v27[0] = 2587;
    v10 = sub_14074CA9C(a1, (unsigned int)v27, -1073741637, 0, (__int64)a3);
    v11 = v10;
    if ( v10 == -1073741637 )
    {
      *a3 = 0LL;
      v11 = 0;
    }
    else if ( v10 < 0 )
    {
      return v11;
    }
    *a4 = sub_140748D08(*a3);
    return v11;
  }
  result = sub_140748B18(a1, 0, 7, (_DWORD)a3, (__int64)a4);
  if ( (_DWORD)result == -1073741772 )
    return 0LL;
  return result;
}
