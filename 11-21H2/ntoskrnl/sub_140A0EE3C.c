/*
 * XREFs of sub_140A0EE3C @ 0x140A0EE3C
 * Callers:
 *     sub_1407E3C20 @ 0x1407E3C20 (sub_1407E3C20.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140704EF8 @ 0x140704EF8 (sub_140704EF8.c)
 *     sub_140705578 @ 0x140705578 (sub_140705578.c)
 */

__int64 __fastcall sub_140A0EE3C(ULONG *a1, ULONG *a2)
{
  __int64 v4; // rcx
  __int16 v5; // di
  int v6; // ebp
  struct _KTHREAD *CurrentThread; // rax
  int v8; // eax
  int v9; // ebx
  struct _KTHREAD *v10; // rax
  bool v11; // zf

  v4 = *((_QWORD *)KeGetCurrentThread() + 23);
  if ( !*(_QWORD *)(v4 + 1408) )
    return (unsigned int)-1073741637;
  v5 = *(_WORD *)(v4 + 2412);
  if ( !v5 )
    return (unsigned int)-1073741637;
  if ( v5 != 332 )
  {
    if ( v5 == 452 )
    {
      v6 = 416;
      goto LABEL_7;
    }
    return (unsigned int)-1073741637;
  }
  v6 = 716;
LABEL_7:
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  if ( v5 == 332 )
    v8 = 65537;
  else
    v8 = 2097153;
  a1[12] = v8;
  v9 = sub_140704EF8((__int64)KeGetCurrentThread(), a1 + 12, v6, 0);
  if ( v9 >= 0 )
  {
    if ( v5 == 332 )
    {
      a1[58] = a2[2];
      a1[61] = *a2;
      a1[60] = a2[4];
    }
    else
    {
      a1[28] = a2[2];
      a1[26] = *a2;
      a1[29] = a2[4];
    }
    v9 = sub_140705578(KeGetCurrentThread(), a1 + 12, v6, 0);
  }
  v10 = KeGetCurrentThread();
  v11 = (*((_WORD *)v10 + 243))++ == 0xFFFF;
  if ( v11 && *((struct _KTHREAD **)v10 + 19) != (struct _KTHREAD *)((char *)v10 + 152) )
    KiCheckForKernelApcDelivery();
  return (unsigned int)v9;
}
