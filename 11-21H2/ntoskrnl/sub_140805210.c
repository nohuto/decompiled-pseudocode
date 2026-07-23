/*
 * XREFs of sub_140805210 @ 0x140805210
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403965A0 @ 0x1403965A0 (sub_1403965A0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140805210(__int64 a1, void *a2, __int64 a3)
{
  NTSTATUS v4; // eax
  _DWORD *v5; // rbx
  unsigned int v6; // edi
  unsigned int v7; // ebp
  int v8; // r15d
  void *Pool2; // rax
  void *v10; // rsi
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  P = 0LL;
  v4 = sub_14067B838(a2, L"Value", 0, &P);
  v5 = P;
  v6 = v4;
  if ( v4 >= 0 )
  {
    if ( sub_1403965A0(P) )
    {
      v7 = v5[3];
      v8 = v5[1];
      if ( !v7 )
      {
        v10 = 0LL;
        goto LABEL_6;
      }
      Pool2 = (void *)ExAllocatePool2(256LL, v7, 1667526736LL);
      v10 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, (char *)v5 + (unsigned int)v5[2], v7);
LABEL_6:
        *(_DWORD *)(a3 + 32) = v8;
        *(_DWORD *)(a3 + 36) = v7;
        *(_QWORD *)(a3 + 40) = v10;
        goto LABEL_7;
      }
      v6 = -1073741670;
    }
    else
    {
      v6 = -1073741823;
    }
  }
LABEL_7:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v6;
}
