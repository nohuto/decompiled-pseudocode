/*
 * XREFs of sub_1406324DC @ 0x1406324DC
 * Callers:
 *     sub_1406325F8 @ 0x1406325F8 (sub_1406325F8.c)
 *     sub_1406327B8 @ 0x1406327B8 (sub_1406327B8.c)
 *     sub_1406329AC @ 0x1406329AC (sub_1406329AC.c)
 *     sub_140632AC8 @ 0x140632AC8 (sub_140632AC8.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

signed __int64 __fastcall sub_1406324DC(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  signed __int64 v5; // rbx
  int v6; // esi
  signed __int64 result; // rax
  signed __int64 v8; // rax
  int v9; // ecx
  int v10; // edx

  CurrentThread = KeGetCurrentThread();
  if ( (*((_DWORD *)CurrentThread + 344) & 1) != 0 )
    return 0LL;
  v5 = *((_QWORD *)CurrentThread + 188);
  v6 = dword_140D04C10;
  if ( !v5 )
  {
    result = ExAllocatePool2(72LL, 512LL, 1918133586LL);
    if ( result )
    {
      *(_QWORD *)(result + 16) = a1;
      *(_DWORD *)(result + 28) = a2;
      *(_DWORD *)(result + 32) = 0;
      *(_DWORD *)(result + 40) = v6;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)CurrentThread + 188, result, 0LL);
      if ( !v5 )
        return result;
      ExFreePoolWithTag((PVOID)result, 0);
      goto LABEL_6;
    }
    return 0LL;
  }
LABEL_6:
  v8 = 0LL;
  v9 = 0;
  while ( 1 )
  {
    v10 = *(_DWORD *)(v5 + 28);
    if ( v10 == a2 && *(_QWORD *)(v5 + 16) == a1 && *(_DWORD *)(v5 + 40) == v6 )
      return v5;
    if ( !v8 )
    {
      if ( v10 )
      {
        if ( *(_DWORD *)(v5 + 40) < v6 )
        {
          v8 = v5;
LABEL_17:
          v5 = v8;
          if ( v8 )
          {
            *(_QWORD *)(v8 + 16) = a1;
            *(_DWORD *)(v8 + 28) = a2;
            *(_QWORD *)(v8 + 32) = 0LL;
            *(_QWORD *)v8 = 0LL;
            *(_QWORD *)(v8 + 8) = 0LL;
            *(_DWORD *)(v8 + 24) = 0;
            *(_DWORD *)(v8 + 40) = v6;
            *(_DWORD *)(v8 + 44) = 0;
          }
          return v5;
        }
      }
      else
      {
        v8 = v5;
      }
    }
    v5 += 64LL;
    if ( (unsigned int)++v9 >= 8 )
      goto LABEL_17;
  }
}
