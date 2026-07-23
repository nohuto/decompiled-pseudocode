/*
 * XREFs of sub_14076B1A8 @ 0x14076B1A8
 * Callers:
 *     sub_14076B030 @ 0x14076B030 (sub_14076B030.c)
 *     sub_140954434 @ 0x140954434 (sub_140954434.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     sub_140779CA0 @ 0x140779CA0 (sub_140779CA0.c)
 *     sub_14077BAB8 @ 0x14077BAB8 (sub_14077BAB8.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14076B1A8(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  NTSTATUS v6; // ebx
  PVOID v7; // rcx
  PVOID P[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+20h] BYREF

  *a3 = 0;
  Handle = 0LL;
  P[0] = 0LL;
  v9 = 0LL;
  result = sub_140779CA0(&v9, 0LL, a1);
  if ( (int)result >= 0 )
  {
    v6 = sub_14077F2EC(qword_140D00AC0, v9, 528, 0, 131097, 0, (__int64)&Handle, 0LL);
    sub_14077BAB8(v9, a1);
    if ( v6 >= 0 )
    {
      v6 = sub_14067B838(Handle, L"CSConfigFlags", 0, P);
      ZwClose(Handle);
      if ( v6 >= 0 )
      {
        v7 = P[0];
        if ( *((_DWORD *)P[0] + 1) == 4 && *((_DWORD *)P[0] + 3) >= 4u )
          *a3 = *(_DWORD *)((char *)P[0] + *((unsigned int *)P[0] + 2));
        ExFreePoolWithTag(v7, 0);
      }
    }
    return (unsigned int)v6;
  }
  return result;
}
