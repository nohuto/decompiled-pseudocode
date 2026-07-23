/*
 * XREFs of sub_1407A0818 @ 0x1407A0818
 * Callers:
 *     sub_1407A0088 @ 0x1407A0088 (sub_1407A0088.c)
 * Callees:
 *     sub_140248A78 @ 0x140248A78 (sub_140248A78.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1406B7804 @ 0x1406B7804 (sub_1406B7804.c)
 */

void __fastcall sub_1407A0818(__int64 a1, int a2)
{
  _DWORD *v2; // rdx
  struct _KTHREAD *v3; // rax
  struct _KTHREAD *v4; // rax
  bool v5; // zf
  int v6; // eax
  __int64 v7; // rdi
  _DWORD *v8; // rdi
  __int64 v9; // rcx
  struct _KTHREAD *CurrentThread; // rax

  if ( a2 )
  {
    if ( a2 != 1 )
      __int2c();
    v6 = *(_DWORD *)(a1 + 2280);
    if ( (v6 & 1) == 0 )
      __int2c();
    v7 = *(_QWORD *)(a1 + 2280);
    *(_DWORD *)(a1 + 2280) = v6 | 2;
    v8 = (_DWORD *)(v7 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( v8 )
    {
      if ( !sub_140248A78(a1, (__int64)v8) )
        __fastfail(0x46u);
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 243);
      sub_1406B7804(v9, v8, 2);
      v4 = KeGetCurrentThread();
      v5 = (*((_WORD *)v4 + 243))++ == 0xFFFF;
      if ( v5 )
        goto LABEL_4;
    }
  }
  else
  {
    v2 = *(_DWORD **)(a1 + 2280);
    *(_DWORD *)(a1 + 2280) |= 1u;
    if ( v2 )
    {
      v3 = KeGetCurrentThread();
      --*((_WORD *)v3 + 243);
      sub_1406B7804(a1, v2, 1);
      v4 = KeGetCurrentThread();
      v5 = (*((_WORD *)v4 + 243))++ == 0xFFFF;
      if ( v5 )
      {
LABEL_4:
        if ( *((struct _KTHREAD **)v4 + 19) != (struct _KTHREAD *)((char *)v4 + 152) )
          KiCheckForKernelApcDelivery();
      }
    }
  }
}
