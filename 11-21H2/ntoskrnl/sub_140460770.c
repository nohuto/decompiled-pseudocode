/*
 * XREFs of sub_140460770 @ 0x140460770
 * Callers:
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     sub_1403AB658 @ 0x1403AB658 (sub_1403AB658.c)
 *     sub_1403ABB10 @ 0x1403ABB10 (sub_1403ABB10.c)
 * Callees:
 *     sub_140460684 @ 0x140460684 (sub_140460684.c)
 *     sub_1406314E0 @ 0x1406314E0 (sub_1406314E0.c)
 *     sub_140631A8C @ 0x140631A8C (sub_140631A8C.c)
 */

void __fastcall sub_140460770(__int64 a1, __int64 a2, struct _KTHREAD *a3, unsigned int a4)
{
  unsigned int v5; // ebx
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int8 CurrentIrql; // r14
  int v10; // edx
  char v11; // al
  _BYTE v12[40]; // [rsp+30h] [rbp-28h] BYREF
  char v13; // [rsp+78h] [rbp+20h] BYREF

  v5 = a4;
  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  if ( (a4 & 0x4000) == 0 || *((struct _KTHREAD **)KeGetCurrentPrcb() + 3) != CurrentThread )
  {
    if ( !a3 )
      a3 = CurrentThread;
    if ( (a4 & 0x1000) != 0 )
    {
      v12[0] = 0;
      v13 = 0;
      if ( (a4 & 0x2000) == 0 )
      {
        sub_140460684(a3, (a4 & 0x4000000) != 0, (a4 & 0x8000) != 0, v12, &v13);
        v11 = v13;
        if ( (v5 & 0x1000000) != 0 )
          v11 = 1;
        if ( v12[0] )
        {
          if ( v11 )
          {
            v5 &= ~0x1000u;
            LOBYTE(v10) = CurrentIrql;
            sub_1406314E0((_DWORD)a3, v10, a1, 0, a2);
          }
        }
        else
        {
          v5 &= ~0x1000u;
        }
      }
    }
    if ( (v5 & 0x1800) != 0 )
      sub_140631A8C(a1, v5, a3, a2);
  }
}
