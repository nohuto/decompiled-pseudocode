/*
 * XREFs of sub_1402598CC @ 0x1402598CC
 * Callers:
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 * Callees:
 *     sub_140230680 @ 0x140230680 (sub_140230680.c)
 *     sub_140259A00 @ 0x140259A00 (sub_140259A00.c)
 *     sub_14027A794 @ 0x14027A794 (sub_14027A794.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     sub_140374BBC @ 0x140374BBC (sub_140374BBC.c)
 *     sub_1407DBC0C @ 0x1407DBC0C (sub_1407DBC0C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1402598CC(unsigned int *P, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v5; // r14
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // r15
  unsigned __int64 v11; // rbp
  signed __int32 v12; // eax
  bool v13; // zf

  CurrentThread = KeGetCurrentThread();
  v5 = *((_QWORD *)CurrentThread + 23);
  --*((_WORD *)CurrentThread + 243);
  if ( (unsigned int)sub_140259A00(CurrentThread, P) )
  {
    if ( (P[12] & 4) == 0 )
    {
      v6 = P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32);
      v7 = (a2 >> 12) - v6;
      if ( (P[16] & 0x2000000) != 0 )
      {
        v8 = **((_QWORD **)P + 9);
        v9 = sub_14027A794(v8, 1666411853LL);
        v10 = *(_QWORD *)(v9 + 24);
        sub_140230680((signed __int64 *)(v8 + 64), v9, 0x63536D4Du);
        if ( (*(_DWORD *)(v5 + 1124) & 0x4000) != 0
          && (v11 = v7 & 0xFFFFFFFFFFFFFF00uLL, (unsigned int)sub_1407DBC0C(*(unsigned int *)(v5 + 1524), v10, v11)) )
        {
          if ( (P[16] & 0x2000000) != 0 )
            sub_140374BBC((v6 << 12) + ((v11 - 256) << 12), 256LL, v5 + 1664, 18LL);
        }
        else
        {
          P[16] &= ~0x2000000u;
        }
      }
    }
    sub_14032E700(P);
  }
  else
  {
    v12 = _InterlockedDecrement((volatile signed __int32 *)P + 9);
    if ( v12 == -1 )
      __fastfail(0xEu);
    if ( !v12 && (P[12] & 4) != 0 )
      ExFreePoolWithTag(P, 0);
    v13 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v13 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
  }
}
