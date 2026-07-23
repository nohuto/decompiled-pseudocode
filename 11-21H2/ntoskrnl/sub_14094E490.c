/*
 * XREFs of sub_14094E490 @ 0x14094E490
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403965A0 @ 0x1403965A0 (sub_1403965A0.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     sub_140805024 @ 0x140805024 (sub_140805024.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14094E490(_QWORD *a1, void *a2, __int64 a3)
{
  int v5; // edi
  int v6; // ebx
  NTSTATUS v7; // eax
  unsigned int *v8; // r9
  HANDLE v9; // rax
  PVOID P[3]; // [rsp+20h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+20h] BYREF

  Handle = 0LL;
  P[0] = 0LL;
  v5 = 0;
  v6 = sub_140805024(a1, a2, &Handle);
  if ( v6 < 0 )
    goto LABEL_12;
  v7 = sub_14067B838(a2, L"Delete", 0, P);
  v8 = (unsigned int *)P[0];
  v6 = v7;
  if ( v7 >= 0 )
  {
    if ( !sub_1403965A0((_DWORD *)P[0]) )
    {
      v6 = -1073741823;
      goto LABEL_10;
    }
    if ( *(unsigned int *)((char *)v8 + v8[2]) )
      v5 = 0x100000;
  }
  else
  {
    if ( v7 != -1073741772 )
      goto LABEL_10;
    v6 = 0;
  }
  v9 = Handle;
  *(_DWORD *)(a3 + 36) = 0;
  Handle = 0LL;
  *(_DWORD *)(a3 + 32) = v5 | 0x8000;
  *(_QWORD *)(a3 + 40) = v9;
LABEL_10:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_12:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
