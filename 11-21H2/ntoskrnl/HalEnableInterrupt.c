/*
 * XREFs of HalEnableInterrupt @ 0x1403B02C0
 * Callers:
 *     sub_1403AF5E4 @ 0x1403AF5E4 (sub_1403AF5E4.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     sub_140252380 @ 0x140252380 (sub_140252380.c)
 *     sub_1403B07C8 @ 0x1403B07C8 (sub_1403B07C8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 *     sub_140909678 @ 0x140909678 (sub_140909678.c)
 */

__int64 __fastcall HalEnableInterrupt(__int64 a1)
{
  int v2; // edi
  unsigned int v3; // esi
  unsigned __int8 v4; // al
  __int64 v5; // r8
  unsigned __int64 v6; // rdi
  unsigned int v7; // ebx
  int v9; // edx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // eax
  bool v14; // zf
  int v15; // [rsp+20h] [rbp-40h]
  _DWORD v16[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h]
  __int64 v18; // [rsp+50h] [rbp-10h]
  int v19; // [rsp+80h] [rbp+20h] BYREF
  int v20; // [rsp+84h] [rbp+24h]
  __int64 v21; // [rsp+88h] [rbp+28h] BYREF

  v21 = 0LL;
  v16[1] = 0;
  if ( *(_DWORD *)a1 != 1 )
  {
    v15 = 204;
LABEL_11:
    v9 = 19;
LABEL_13:
    sub_14051E038(0, v9, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", v15);
    return (unsigned int)-1073741811;
  }
  v19 = -1;
  v2 = *(_DWORD *)(a1 + 8);
  v17 = a1 + 32;
  v18 = a1 + 48;
  v16[0] = 1;
  v20 = 1;
  if ( v2 )
  {
    if ( v2 == 3 )
      return 0;
    v15 = 313;
    goto LABEL_11;
  }
  v3 = *(_DWORD *)(a1 + 64);
  if ( (int)sub_140252380(v3, &v21) < 0 )
  {
    if ( (unsigned __int8)sub_14042A5E0(0LL, v3) )
      return (unsigned int)sub_140909678(a1);
    v15 = 272;
    v9 = 18;
    goto LABEL_13;
  }
  v4 = sub_140252344(&qword_140C4BEE8);
  LOBYTE(v5) = *(_BYTE *)(a1 + 16);
  v6 = v4;
  v7 = sub_1403B07C8(&v21, *(unsigned int *)(a1 + 12), v5, *(unsigned int *)(a1 + 24), *(_DWORD *)(a1 + 20), v16, &v19);
  KeReleaseSpinLockFromDpcLevel(&qword_140C4BEE8);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = *((_QWORD *)CurrentPrcb + 4375);
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
        *(_DWORD *)(v12 + 20) &= v13;
        if ( v14 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return v7;
}
