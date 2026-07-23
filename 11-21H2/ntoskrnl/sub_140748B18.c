/*
 * XREFs of sub_140748B18 @ 0x140748B18
 * Callers:
 *     sub_1406CF970 @ 0x1406CF970 (sub_1406CF970.c)
 *     sub_140748758 @ 0x140748758 (sub_140748758.c)
 *     sub_140763C50 @ 0x140763C50 (sub_140763C50.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 *     sub_14084D6C0 @ 0x14084D6C0 (sub_14084D6C0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140748B18(__int64 a1, int a2, char a3, void **a4, _DWORD *a5)
{
  _DWORD *v5; // r12
  NTSTATUS v9; // ebx
  HANDLE v10; // rcx
  __int64 v11; // rdx
  __int64 result; // rax
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // eax
  const WCHAR *v17; // rdx
  __int64 v18; // rdx
  unsigned int *v19; // rdi
  unsigned int v20; // eax
  __int64 Pool2; // rax
  PVOID P[2]; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+48h] BYREF

  v5 = a5;
  *a4 = 0LL;
  Handle = 0LL;
  P[0] = 0LL;
  *v5 = 0;
  v9 = 0;
  if ( a2 )
  {
    if ( a1 )
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
    else
      v14 = 0LL;
    v9 = sub_14077F2EC(qword_140D00AC0, *(_QWORD *)(v14 + 48), 20, 0, 131097, 0, (__int64)&Handle, 0LL);
    if ( v9 < 0 )
      return (unsigned int)v9;
    if ( (a3 & 1) != 0 )
    {
      v17 = L"OverrideConfigVector";
    }
    else
    {
      if ( (a3 & 2) == 0 )
      {
LABEL_26:
        v10 = Handle;
        goto LABEL_12;
      }
      v17 = L"BasicConfigVector";
    }
    v9 = sub_14067B838(Handle, v17, 0, P);
    if ( v9 >= 0 )
    {
      v19 = (unsigned int *)P[0];
      if ( *((_DWORD *)P[0] + 1) == 10 )
      {
        v20 = *((_DWORD *)P[0] + 3);
        if ( v20 )
        {
          Pool2 = ExAllocatePool2(256LL, v20, 1970499664LL);
          *a4 = (void *)Pool2;
          if ( Pool2 )
          {
            *v5 = v19[3];
            memmove(*a4, (char *)v19 + v19[2], v19[3]);
            if ( *((_DWORD *)*a4 + 1) == -1 )
              *(_QWORD *)((char *)*a4 + 4) = 1LL;
          }
          else
          {
            v9 = -1073741584;
          }
        }
      }
      ExFreePoolWithTag(v19, 0);
    }
    goto LABEL_26;
  }
  if ( (a3 & 1) != 0 )
  {
    v18 = a1 ? *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL) : 0LL;
    v9 = sub_14077F2EC(qword_140D00AC0, *(_QWORD *)(v18 + 48), 19, 0, 131097, 0, (__int64)&Handle, 0LL);
    if ( v9 >= 0 )
    {
      v9 = sub_14084D6C0(Handle, 1LL, a4, v5);
      ZwClose(Handle);
      if ( v9 >= 0 )
        return (unsigned int)v9;
    }
  }
  v10 = 0LL;
  Handle = 0LL;
  if ( (a3 & 2) != 0 )
  {
    if ( a1 )
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
    else
      v15 = 0LL;
    result = sub_14077F2EC(qword_140D00AC0, *(_QWORD *)(v15 + 48), 20, 0, 131097, 0, (__int64)&Handle, 0LL);
    if ( (int)result < 0 )
      return result;
    v16 = sub_14084D6C0(Handle, 2LL, a4, v5);
    v10 = Handle;
    v9 = v16;
    if ( v16 >= 0 )
      goto LABEL_12;
  }
  if ( (a3 & 4) == 0 )
    goto LABEL_11;
  if ( v10 )
  {
LABEL_10:
    v13 = sub_14084D6C0(v10, 4LL, a4, v5);
    v10 = Handle;
    v9 = v13;
LABEL_11:
    if ( !v10 )
      return (unsigned int)v9;
LABEL_12:
    ZwClose(v10);
    return (unsigned int)v9;
  }
  if ( a1 )
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v11 = 0LL;
  result = sub_14077F2EC(qword_140D00AC0, *(_QWORD *)(v11 + 48), 20, 0, 131097, 0, (__int64)&Handle, 0LL);
  if ( (int)result >= 0 )
  {
    v10 = Handle;
    goto LABEL_10;
  }
  return result;
}
