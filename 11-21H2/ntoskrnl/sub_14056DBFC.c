/*
 * XREFs of sub_14056DBFC @ 0x14056DBFC
 * Callers:
 *     sub_140216974 @ 0x140216974 (sub_140216974.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_140AA4120 @ 0x140AA4120 (sub_140AA4120.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

int __fastcall sub_14056DBFC(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 *v2; // rax
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // r13d
  unsigned int v8; // ebp
  __int64 v9; // rdx
  __int64 *v10; // r15
  volatile signed __int32 *v11; // r14
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  ULONG_PTR v18; // r10
  ULONG_PTR v19; // rdx
  ULONG_PTR v20; // r8
  ULONG_PTR v21; // r8
  struct _KPRCB *v22; // rcx
  int v23; // eax
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  int v26; // eax
  bool v27; // zf
  unsigned int v29; // [rsp+30h] [rbp-58h]
  __int64 *v30; // [rsp+38h] [rbp-50h]
  __int64 v31; // [rsp+40h] [rbp-48h]
  int v32; // [rsp+A0h] [rbp+18h]
  int v33; // [rsp+A8h] [rbp+20h] BYREF

  LODWORD(v2) = dword_140C0C6D0;
  if ( (dword_140C0C6D0 & 1) != 0 )
  {
    BugCheckParameter4 = BugCheckParameter3 + a2;
    LODWORD(v2) = KeQueryActiveProcessorCountEx(0xFFFFu);
    v7 = 0;
    v29 = (unsigned int)v2;
    if ( (_DWORD)v2 )
    {
      v2 = qword_140D088C0;
      v30 = qword_140D088C0;
      do
      {
        v8 = 0;
        v9 = 0LL;
        v31 = 0LL;
        do
        {
          v32 = 0;
          v10 = (__int64 *)(((unsigned __int64)v8 << 13) + *v2 + 15880);
          v11 = (volatile signed __int32 *)(v9 + *v2 + 15872);
          do
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
            {
              v6 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
              v9 = (-1LL << (CurrentIrql + 1)) & 4;
              v5 = (unsigned int)v9 | *(_DWORD *)(v6 + 20);
              *(_DWORD *)(v6 + 20) = v5;
            }
            CurrentPrcb = KeGetCurrentPrcb();
            v33 = 0;
            while ( 1 )
            {
              v14 = *((_QWORD *)CurrentPrcb + 4375);
              if ( v14 )
              {
                if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
                {
                  v15 = *(_DWORD *)(v14 + 24);
                  *(_DWORD *)(v14 + 24) = v15 + 1;
                  if ( v15 == -1 )
                    sub_140418E4C((__int64)CurrentPrcb);
                }
              }
              if ( !_interlockedbittestandset64(v11, 0LL) )
                break;
              v16 = *((_QWORD *)CurrentPrcb + 4375);
              if ( v16 )
              {
                if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
                {
                  v17 = *(_DWORD *)(v16 + 24) - 1;
                  *(_DWORD *)(v16 + 24) = v17;
                  if ( !v17 )
                    sub_140418E4C((__int64)CurrentPrcb);
                }
              }
              do
                sub_1402F32E0(&v33, v9, v5, v6);
              while ( *(_QWORD *)v11 );
            }
            v6 = *v10;
            if ( (__int64 *)*v10 != v10 )
            {
              v18 = BugCheckParameter3 - 64;
              do
              {
                v19 = v6 - 32;
                v6 = *(_QWORD *)v6;
                if ( v19 > v18 && v19 < BugCheckParameter4 )
                  KeBugCheckEx(0xC7u, 0LL, v19, BugCheckParameter3, BugCheckParameter4);
                v20 = qword_140D06E28 ^ _byteswap_uint64(v19 ^ __ROL8__(
                                                                 *(_QWORD *)(v19 + 48) ^ qword_140D06CC8,
                                                                 qword_140D06CC8));
                if ( v20 )
                {
                  if ( v20 > v18 && v20 < BugCheckParameter4 )
                    KeBugCheckEx(0xC7u, 1uLL, v20, BugCheckParameter3, BugCheckParameter4);
                  v21 = *(_QWORD *)(v20 + 24);
                  if ( v21 >= BugCheckParameter3 && v21 < BugCheckParameter4 )
                    KeBugCheckEx(0xC7u, 2uLL, v21, BugCheckParameter3, BugCheckParameter4);
                }
              }
              while ( (__int64 *)v6 != v10 );
            }
            _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
            v22 = KeGetCurrentPrcb();
            v9 = *((_QWORD *)v22 + 4375);
            if ( v9 )
            {
              if ( *((_BYTE *)v22 + 32) <= 1u )
              {
                v23 = *(_DWORD *)(v9 + 24) - 1;
                *(_DWORD *)(v9 + 24) = v23;
                if ( !v23 )
                  sub_140418E4C((__int64)v22);
              }
            }
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                v24 = KeGetCurrentIrql();
                if ( v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
                {
                  v25 = KeGetCurrentPrcb();
                  v9 = -1LL << (CurrentIrql + 1);
                  v6 = *((_QWORD *)v25 + 4375);
                  v26 = ~(unsigned __int16)v9;
                  v27 = (v26 & *(_DWORD *)(v6 + 20)) == 0;
                  *(_DWORD *)(v6 + 20) &= v26;
                  if ( v27 )
                    sub_140418E4C((__int64)v25);
                }
              }
            }
            __writecr8(CurrentIrql);
            v10 += 4;
            v5 = (unsigned int)(v32 + 1);
            v11 += 8;
            v32 = v5;
          }
          while ( (unsigned int)v5 < 0x100 );
          ++v8;
          v2 = v30;
          v9 = v31 + 0x2000;
          v31 += 0x2000LL;
        }
        while ( v8 < 2 );
        v2 = v30 + 1;
        ++v7;
        ++v30;
      }
      while ( v7 < v29 );
    }
  }
  return (int)v2;
}
