/*
 * XREFs of HalDisableInterrupt @ 0x140396C30
 * Callers:
 *     sub_1403AF4FC @ 0x1403AF4FC (sub_1403AF4FC.c)
 *     sub_14056EE94 @ 0x14056EE94 (sub_14056EE94.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140251FD8 @ 0x140251FD8 (sub_140251FD8.c)
 *     sub_140252134 @ 0x140252134 (sub_140252134.c)
 *     sub_140252258 @ 0x140252258 (sub_140252258.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     sub_1402523CC @ 0x1402523CC (sub_1402523CC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14051D1A0 @ 0x14051D1A0 (sub_14051D1A0.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 */

__int64 __fastcall HalDisableInterrupt(_DWORD *a1)
{
  int v2; // edi
  unsigned int v3; // ebx
  unsigned int v5; // esi
  _DWORD *v6; // rax
  _DWORD *v7; // rbp
  ULONG_PTR *v8; // rbx
  unsigned __int64 v9; // rdi
  __int64 v10; // r8
  int v11; // edx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // eax
  bool v16; // zf
  int v17; // [rsp+20h] [rbp-18h]
  int v18; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+44h] [rbp+Ch]

  if ( *a1 != 1 )
  {
    v17 = 371;
LABEL_13:
    v11 = 19;
LABEL_15:
    sub_14051E038(0, v11, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", v17);
    return (unsigned int)-1073741811;
  }
  v2 = a1[2];
  if ( v2 )
  {
    if ( v2 == 3 )
      return 0;
    v17 = 432;
    goto LABEL_13;
  }
  v5 = a1[16];
  v6 = sub_1402523CC(v5, v5 + 1);
  v7 = v6;
  if ( !v6 )
  {
    if ( (unsigned __int8)sub_14042A5E0(0LL, v5) )
      return (unsigned int)sub_14051D1A0(a1);
    v17 = 417;
    v11 = 18;
    goto LABEL_15;
  }
  v18 = v6[4];
  v19 = v5 + v6[5] - v6[7];
  sub_140252258(&v18, 0LL, 0LL);
  v8 = sub_140252134(v18);
  if ( !v8 )
    sub_14051E038(0, 17, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 456);
  v9 = sub_140252344(&qword_140C4BEE8);
  v10 = *((_QWORD *)v7 + 5) + 56LL * (int)(v19 - v7[5]);
  *(_DWORD *)(v10 + 12) &= ~0x10u;
  v3 = sub_140251FD8((__int64)v8, (__int64)&v18, v10);
  KeReleaseSpinLockFromDpcLevel(&qword_140C4BEE8);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= v15;
        if ( v16 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return v3;
}
