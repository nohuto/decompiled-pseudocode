/*
 * XREFs of sub_1407AC6B0 @ 0x1407AC6B0
 * Callers:
 *     sub_1402BA130 @ 0x1402BA130 (sub_1402BA130.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14035AA74 @ 0x14035AA74 (sub_14035AA74.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406DA0CC @ 0x1406DA0CC (sub_1406DA0CC.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407A9ED0 @ 0x1407A9ED0 (sub_1407A9ED0.c)
 *     sub_1407AC930 @ 0x1407AC930 (sub_1407AC930.c)
 *     sub_1407AD040 @ 0x1407AD040 (sub_1407AD040.c)
 */

__int64 __fastcall sub_1407AC6B0(
        HANDLE Handle,
        int a2,
        __m256i *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        volatile void *Address,
        __int64 a8)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v13; // edi
  KPROCESSOR_MODE v14; // r14
  int v15; // esi
  PVOID v16; // rbx
  struct _KTHREAD *v18; // rax
  bool v19; // zf
  int v21; // [rsp+40h] [rbp-78h]
  PVOID Object; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v23[8]; // [rsp+60h] [rbp-58h] BYREF

  memset(v23, 0, sizeof(v23));
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v13 = a2 & 0xFFFF0000;
  Object = 0LL;
  v14 = *((_BYTE *)KeGetCurrentThread() + 562);
  v15 = ObReferenceObjectByHandle(Handle, 1u, qword_140D069D8, v14, &Object, 0LL);
  if ( v15 >= 0 )
  {
    v16 = Object;
    if ( (v13 & 0x40000) != 0 )
      sub_1406DA0CC((__int64)Object);
    if ( (v13 & 0x20000) != 0 )
    {
      if ( a3 )
      {
        if ( (v13 & 0x10000) != 0 )
        {
          v15 = -1073741584;
        }
        else if ( (v13 & 0x1000000) != 0 )
        {
          v15 = -1073741584;
        }
        else if ( a5 )
        {
          LOBYTE(v21) = v14;
          v15 = sub_1407AD040((int)v16, v13, (int)a3, a4, a5, a6, Address, a8, v21);
        }
        else
        {
          v15 = -1073740027;
        }
      }
      else
      {
        v15 = -1073741584;
      }
    }
    else
    {
      v23[0] = v16;
      LODWORD(v23[6]) = v13;
      if ( !a3 )
      {
LABEL_6:
        if ( a5 )
          v15 = sub_1407AC930(v23, a5, a6, Address, a8);
        if ( _bittestandreset((signed __int32 *)&v23[6], 2u) )
        {
          sub_14035AA74((__int64)v23, 0LL, 0LL);
          if ( v23[4] )
            ObfDereferenceObject((PVOID)v23[4]);
        }
        goto LABEL_9;
      }
      if ( (v13 & 0x1000000) != 0 )
      {
        v15 = -1073741584;
      }
      else
      {
        LODWORD(v23[6]) = v13 | 4;
        memset(&v23[3], 0, 24);
        v15 = sub_1407A9ED0((__int64)v23, a3, a4, v14);
        if ( v15 >= 0 )
          goto LABEL_6;
      }
    }
LABEL_9:
    ObfDereferenceObject(v16);
  }
  v18 = KeGetCurrentThread();
  v19 = (*((_WORD *)v18 + 242))++ == 0xFFFF;
  if ( v19 && *((struct _KTHREAD **)v18 + 19) != (struct _KTHREAD *)((char *)v18 + 152) && !*((_WORD *)v18 + 243) )
    KiCheckForKernelApcDelivery();
  return (unsigned int)v15;
}
