/*
 * XREFs of sub_1407E3C20 @ 0x1407E3C20
 * Callers:
 *     sub_1407E3070 @ 0x1407E3070 (sub_1407E3070.c)
 *     sub_1407E3F30 @ 0x1407E3F30 (sub_1407E3F30.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1407043D0 @ 0x1407043D0 (sub_1407043D0.c)
 *     sub_1407045D0 @ 0x1407045D0 (sub_1407045D0.c)
 *     sub_140A0EE3C @ 0x140A0EE3C (sub_140A0EE3C.c)
 */

__int64 __fastcall sub_1407E3C20(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v6; // edi
  struct _KTHREAD *v7; // rax
  __int16 v10; // ax

  v4 = *((_QWORD *)KeGetCurrentThread() + 23);
  if ( *(_QWORD *)(v4 + 1408) )
  {
    v10 = *(_WORD *)(v4 + 2412);
    if ( v10 == 332 || v10 == 452 )
      return sub_140A0EE3C(a1);
  }
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  *(_DWORD *)(a1 + 96) = 1048577;
  v6 = sub_1407045D0((__int64)KeGetCurrentThread(), a1 + 48, 0, 1, 1);
  if ( v6 >= 0 )
  {
    *(_QWORD *)(a1 + 296) = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a1 + 200) = *(_QWORD *)a2;
    *(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 16);
    v6 = sub_1407043D0(KeGetCurrentThread(), a1 + 48, 0, 1, 3);
  }
  v7 = KeGetCurrentThread();
  if ( (*((_WORD *)v7 + 243))++ == 0xFFFF && *((struct _KTHREAD **)v7 + 19) != (struct _KTHREAD *)((char *)v7 + 152) )
    KiCheckForKernelApcDelivery();
  return (unsigned int)v6;
}
