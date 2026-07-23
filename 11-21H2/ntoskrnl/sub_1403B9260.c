/*
 * XREFs of sub_1403B9260 @ 0x1403B9260
 * Callers:
 *     sub_14082310C @ 0x14082310C (sub_14082310C.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405DE2E4 @ 0x1405DE2E4 (sub_1405DE2E4.c)
 *     sub_1405DE728 @ 0x1405DE728 (sub_1405DE728.c)
 *     sub_1405DEED8 @ 0x1405DEED8 (sub_1405DEED8.c)
 */

void __fastcall sub_1403B9260(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // r14
  int v4; // ebx
  int v5; // eax
  unsigned int v6; // r15d
  int v7; // edx
  int v8; // ecx
  __int64 v9; // rax
  int v10; // ecx
  unsigned __int64 i; // rbx
  unsigned __int64 v12; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf
  __int16 v18; // [rsp+30h] [rbp-89h] BYREF
  int v19; // [rsp+34h] [rbp-85h] BYREF
  int v20; // [rsp+38h] [rbp-81h] BYREF
  unsigned int v21; // [rsp+3Ch] [rbp-7Dh] BYREF
  int v22; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v23; // [rsp+44h] [rbp-75h] BYREF
  int v24; // [rsp+48h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+50h] [rbp-69h] BYREF
  __int16 *v26; // [rsp+70h] [rbp-49h]
  int v27; // [rsp+78h] [rbp-41h]
  int v28; // [rsp+7Ch] [rbp-3Dh]
  _DWORD *v29; // [rsp+80h] [rbp-39h]
  int v30; // [rsp+88h] [rbp-31h]
  int v31; // [rsp+8Ch] [rbp-2Dh]
  __int64 v32; // [rsp+90h] [rbp-29h]
  _DWORD v33[2]; // [rsp+98h] [rbp-21h] BYREF
  int *v34; // [rsp+A0h] [rbp-19h]
  int v35; // [rsp+A8h] [rbp-11h]
  int v36; // [rsp+ACh] [rbp-Dh]
  int *v37; // [rsp+B0h] [rbp-9h]
  int v38; // [rsp+B8h] [rbp-1h]
  int v39; // [rsp+BCh] [rbp+3h]
  int *v40; // [rsp+C0h] [rbp+7h]
  int v41; // [rsp+C8h] [rbp+Fh]
  int v42; // [rsp+CCh] [rbp+13h]
  int *v43; // [rsp+D0h] [rbp+17h]
  int v44; // [rsp+D8h] [rbp+1Fh]
  int v45; // [rsp+DCh] [rbp+23h]

  v1 = *(_QWORD *)(a1 + 1184);
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 16);
    v19 = 0;
    *(_BYTE *)(v3 + 24) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 16));
    v4 = *(_DWORD *)(v1 + 32);
    v20 = 1;
    v5 = sub_1405DE2E4(a1, &v20, &v19, 0LL);
    *(_DWORD *)(v1 + 32) = v5;
    v6 = v5 - v4;
    v7 = v5;
    if ( (unsigned int)dword_140C03A00 > 5 )
    {
      v8 = *(unsigned __int16 *)(a1 + 216);
      v28 = 0;
      v31 = 0;
      v33[1] = 0;
      v36 = 0;
      v39 = 0;
      v42 = 0;
      v18 = 1;
      v26 = &v18;
      v32 = *(_QWORD *)(a1 + 224);
      v34 = (int *)&v21;
      v37 = &v22;
      v40 = (int *)&v23;
      v9 = *(_QWORD *)(v1 + 16);
      v29 = v33;
      v33[0] = v8;
      v27 = 2;
      v30 = 2;
      v35 = 4;
      v22 = v7;
      v38 = 4;
      v41 = 4;
      v21 = v6;
      v23 = v6;
      v10 = *(_DWORD *)(v9 + 28);
      v45 = 0;
      v43 = &v24;
      v24 = v6 + v10;
      v44 = 4;
      sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)&word_140032186, 0LL, 0LL, 9u, &v25);
    }
    sub_1405DE728(v3, v6);
    for ( i = 0LL; i < *(unsigned int *)(a1 + 828); sub_1405DEED8(*(_QWORD *)(*(_QWORD *)(a1 + 832) + 8 * i++)) )
      ;
    *(_QWORD *)(v1 + 24) = 0LL;
    *(_QWORD *)(a1 + 1184) = 0LL;
    v12 = *(unsigned __int8 *)(v3 + 24);
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v3 + 16));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v15 = *((_QWORD *)CurrentPrcb + 4375);
          v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
          v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
          *(_DWORD *)(v15 + 20) &= v16;
          if ( v17 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v12);
  }
}
