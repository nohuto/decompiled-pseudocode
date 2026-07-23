/*
 * XREFs of sub_1403B9214 @ 0x1403B9214
 * Callers:
 *     sub_1403B91D4 @ 0x1403B91D4 (sub_1403B91D4.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140251FD8 @ 0x140251FD8 (sub_140251FD8.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140510F68 @ 0x140510F68 (sub_140510F68.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 *     sub_140909B14 @ 0x140909B14 (sub_140909B14.c)
 *     sub_140A61798 @ 0x140A61798 (sub_140A61798.c)
 */

__int64 sub_1403B9214()
{
  unsigned int v0; // ebx
  ULONG_PTR *v2; // rsi
  __int64 v3; // rdi
  _QWORD *v4; // r15
  _QWORD *v5; // r14
  __int64 v6; // rdx
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r13
  int v11; // eax
  int v12; // eax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v14; // r13
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  int v17; // eax
  bool v18; // zf
  bool v19; // cc
  __int64 v20; // [rsp+40h] [rbp-28h]
  __int64 v21; // [rsp+48h] [rbp-20h]
  int v22; // [rsp+50h] [rbp-18h]
  unsigned __int8 v23; // [rsp+B0h] [rbp+48h]
  int v24; // [rsp+B8h] [rbp+50h] BYREF
  int v25; // [rsp+C0h] [rbp+58h]
  __int64 v26; // [rsp+C8h] [rbp+60h] BYREF

  v0 = 0;
  v24 = 0;
  v26 = 0LL;
  if ( dword_140D014C0 && ((*(_DWORD *)(qword_140C54A88 + 228) & 0x100) != 0 || qword_140C4C4A8) )
  {
    v2 = (ULONG_PTR *)qword_140C4DE70;
    v22 = 0;
    while ( v2 != &qword_140C4DE70 )
    {
      v3 = (__int64)v2;
      v2 = (ULONG_PTR *)*v2;
      if ( *(_DWORD *)(v3 + 224) == 2 )
      {
        v4 = *(_QWORD **)(v3 + 248);
        while ( v4 != (_QWORD *)(v3 + 248) )
        {
          v5 = v4;
          v4 = (_QWORD *)*v4;
          if ( *((_DWORD *)v5 + 8) == 2 )
          {
            v6 = 0LL;
            v7 = *((_DWORD *)v5 + 6) - *((_DWORD *)v5 + 5);
            v25 = 0;
            if ( v7 > 0 )
            {
              v8 = 0LL;
              v21 = 0LL;
              v20 = 0LL;
              v9 = 0LL;
              do
              {
                if ( *(_BYTE *)(v8 + v5[6]) )
                {
                  LODWORD(v26) = *(_DWORD *)(v3 + 240);
                  HIDWORD(v26) = v6 + *((_DWORD *)v5 + 5);
                  v10 = v9 + v5[5];
                  if ( (*(_DWORD *)(qword_140C54A88 + 228) & 0x100) != 0 )
                  {
                    v11 = sub_140909B14(&v24, 1LL, 0LL);
                    v0 = v11;
                    if ( v11 < 0 )
                    {
                      sub_14051E038(
                        v3,
                        31,
                        v11,
                        (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c",
                        1790);
                      return v0;
                    }
                    v22 ^= (v24 ^ v22) & 0x3FFFFFFF;
                    sub_140510F68(0LL, v22 & 0x3FFFFFFF, v10);
                    *(_DWORD *)(v10 + 24) = 7;
                    *(_DWORD *)(v10 + 32) = v22 & 0x3FFFFFFF;
                  }
                  if ( qword_140C4C4A8 )
                  {
                    v12 = sub_140A61798(*(unsigned int *)(v3 + 240), v6, v10, 0LL);
                    v0 = v12;
                    if ( v12 < 0 )
                    {
                      sub_14051E038(
                        v3,
                        31,
                        v12,
                        (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c",
                        1819);
                      return v0;
                    }
                  }
                  v23 = sub_140252344(&qword_140C4BEE8);
                  v0 = sub_140251FD8(v3, (__int64)&v26, v10);
                  KeReleaseSpinLockFromDpcLevel(&qword_140C4BEE8);
                  if ( dword_140D06B08
                    && (dword_140D06B08 & 1) != 0
                    && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
                  {
                    v14 = v23;
                    if ( v23 <= 0xFu && CurrentIrql >= 2u )
                    {
                      CurrentPrcb = KeGetCurrentPrcb();
                      v16 = *((_QWORD *)CurrentPrcb + 4375);
                      v17 = ~(unsigned __int16)(-1LL << (v23 + 1));
                      v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
                      *(_DWORD *)(v16 + 20) &= v17;
                      if ( v18 )
                        sub_140418E4C(CurrentPrcb);
                    }
                  }
                  else
                  {
                    v14 = v23;
                  }
                  __writecr8(v14);
                  if ( (v0 & 0x80000000) != 0 )
                    return v0;
                  LODWORD(v6) = v25;
                  v8 = v20;
                  v9 = v21;
                }
                v6 = (unsigned int)(v6 + 1);
                v20 = v8 + 16;
                v9 += 56LL;
                v19 = (int)v6 < *((_DWORD *)v5 + 6) - *((_DWORD *)v5 + 5);
                v25 = v6;
                v8 += 16LL;
                v21 = v9;
              }
              while ( v19 );
            }
          }
        }
      }
    }
  }
  return v0;
}
