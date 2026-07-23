/*
 * XREFs of sub_14066A57C @ 0x14066A57C
 * Callers:
 *     sub_14066A68C @ 0x14066A68C (sub_14066A68C.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402F89B0 @ 0x1402F89B0 (sub_1402F89B0.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     sub_14066A374 @ 0x14066A374 (sub_14066A374.c)
 *     sub_1407B3B60 @ 0x1407B3B60 (sub_1407B3B60.c)
 */

__int64 __fastcall sub_14066A57C(__int64 a1, __int64 a2, void *a3, ULONG *a4, _DWORD *a5)
{
  int v5; // ebx
  void *v9; // rdi
  int v10; // r14d
  int v11; // ebp
  void *v13; // rax
  int v14; // [rsp+30h] [rbp-28h] BYREF
  int v15[9]; // [rsp+34h] [rbp-24h] BYREF
  char v16; // [rsp+68h] [rbp+10h] BYREF

  v5 = 0;
  v14 = 0;
  v16 = 0;
  v15[0] = 0;
  if ( !a2 )
  {
    v9 = (void *)sub_140347920(a1, 0x74726853u);
    v10 = 1;
LABEL_3:
    v11 = sub_14066A374((__int64)v9, a3, *a4, a4);
    if ( v10 == 1 )
    {
      sub_1402F89B0((signed __int64 *)(a1 + 1208), (unsigned __int64)v9, 0x74726853u);
    }
    else if ( v9 )
    {
      ObfDereferenceObjectWithTag(v9, 0x74726853u);
    }
    if ( v11 >= 0 )
    {
      LOBYTE(v5) = v10 == 1;
      *a5 = v5;
    }
    return (unsigned int)v11;
  }
  v13 = (void *)sub_1407B3B60(a2, 1953654867LL, &v14, &v16, v15, 0LL);
  v9 = v13;
  v10 = v14;
  if ( v15[0] >= 2 || v14 != 2 )
    goto LABEL_3;
  if ( v13 )
    ObfDereferenceObjectWithTag(v13, 0x74726853u);
  return 3221225637LL;
}
