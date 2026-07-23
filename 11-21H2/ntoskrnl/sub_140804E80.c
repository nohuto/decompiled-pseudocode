/*
 * XREFs of sub_140804E80 @ 0x140804E80
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402D199C @ 0x1402D199C (sub_1402D199C.c)
 *     sub_1403965A0 @ 0x1403965A0 (sub_1403965A0.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     sub_14069A1F8 @ 0x14069A1F8 (sub_14069A1F8.c)
 *     sub_140805024 @ 0x140805024 (sub_140805024.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140804E80(__int64 a1, void *a2, __int64 a3)
{
  __int64 v3; // r13
  int v6; // ebx
  NTSTATUS v7; // eax
  unsigned int *v8; // rsi
  const WCHAR *v9; // rdi
  NTSTATUS v10; // eax
  NTSTATUS v11; // eax
  _DWORD *v12; // rdi
  unsigned int v13; // r15d
  int v14; // r12d
  void *Pool2; // rax
  void *v16; // r14
  int v18; // eax
  unsigned int v19; // ecx
  HANDLE Handle; // [rsp+20h] [rbp-10h] BYREF
  PVOID P; // [rsp+28h] [rbp-8h] BYREF
  _DWORD *v23; // [rsp+88h] [rbp+58h] BYREF

  P = 0LL;
  v3 = a3;
  v23 = 0LL;
  Handle = 0LL;
  v6 = sub_140805024(a1, a2, &Handle);
  if ( v6 < 0 )
    goto LABEL_19;
  v7 = sub_14067B838(a2, L"ValueName", 0, &P);
  v8 = (unsigned int *)P;
  v6 = v7;
  if ( v7 >= 0 )
  {
    if ( sub_1402D199C(P) )
    {
      v9 = (const WCHAR *)((char *)v8 + v8[2]);
      if ( *v9 != 36 )
        goto LABEL_5;
      P = 0LL;
      v18 = sub_14069A1F8(a1, v9 + 1, (__int64 *)&P);
      v6 = v18;
      if ( v18 >= 0 )
      {
        v19 = *((_DWORD *)P + 8);
        if ( v19 && (v19 <= 2 || v19 == 7) )
          v9 = (const WCHAR *)*((_QWORD *)P + 5);
LABEL_5:
        v10 = sub_14067B838(Handle, v9, 0, &v23);
        v6 = v10;
        if ( v10 < 0 )
        {
          if ( v10 != -1073741772 )
            goto LABEL_32;
          v11 = sub_14067B838(a2, L"DefaultValue", 0, &v23);
          v6 = v11;
          if ( v11 < 0 )
          {
            if ( v11 == -1073741772 )
            {
              v6 = 0;
              v12 = 0LL;
LABEL_10:
              if ( !v12 )
              {
                v14 = 0;
                v13 = 0;
                v16 = 0LL;
                goto LABEL_14;
              }
              if ( sub_1403965A0(v12) )
              {
                v13 = v12[3];
                v14 = v12[1];
                Pool2 = (void *)ExAllocatePool2(256LL, v13, 1667526736LL);
                v16 = Pool2;
                if ( Pool2 )
                {
                  memmove(Pool2, (char *)v12 + (unsigned int)v12[2], v13);
                  v3 = a3;
LABEL_14:
                  *(_DWORD *)(v3 + 32) = v14;
                  *(_DWORD *)(v3 + 36) = v13;
                  *(_QWORD *)(v3 + 40) = v16;
                  goto LABEL_15;
                }
                v6 = -1073741670;
              }
              else
              {
                v6 = -1073741823;
              }
LABEL_15:
              if ( v12 )
                ExFreePoolWithTag(v12, 0);
              goto LABEL_17;
            }
LABEL_32:
            v12 = v23;
            goto LABEL_15;
          }
        }
        v12 = v23;
        goto LABEL_10;
      }
      if ( v18 == -1073741772 )
        goto LABEL_5;
    }
    else
    {
      v6 = -1073741823;
    }
  }
LABEL_17:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_19:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
