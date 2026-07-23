/*
 * XREFs of MiInitializeTbFlush @ 0x140B5C1BC
 * Callers:
 *     MiInitializeTbFlushing @ 0x140B5C038 (MiInitializeTbFlushing.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     KeFlushTb @ 0x140279C00 (KeFlushTb.c)
 *     MiReservePtes @ 0x14027D420 (MiReservePtes.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiReleasePtes @ 0x1402CBB70 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 *__fastcall MiInitializeTbFlush(unsigned __int64 a1)
{
  unsigned __int64 v1; // r12
  __int64 *result; // rax
  __int64 *v3; // rbx
  unsigned __int64 ValidPte; // rdi
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r13
  unsigned __int64 *v8; // rsi
  unsigned __int64 v9; // rbx
  int v10; // r15d
  __int64 v11; // r8
  int v12; // edi
  __int64 v13; // rbx
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // r8
  __int64 v20; // rdx
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rsi
  __int64 v25; // rax
  bool v26; // zf
  signed __int32 v27[8]; // [rsp+0h] [rbp-158h] BYREF
  __int64 v28; // [rsp+20h] [rbp-138h]
  unsigned __int64 v29; // [rsp+28h] [rbp-130h]
  unsigned __int64 v30; // [rsp+30h] [rbp-128h]
  unsigned __int64 v31; // [rsp+38h] [rbp-120h]
  __int64 v32; // [rsp+40h] [rbp-118h]
  unsigned __int64 v33; // [rsp+48h] [rbp-110h]
  __int64 *v34; // [rsp+50h] [rbp-108h]
  _QWORD v35[24]; // [rsp+60h] [rbp-F8h] BYREF

  v1 = a1;
  v29 = a1;
  v30 = 0LL;
  v31 = 0LL;
  memset(v35, 0, 0xB8uLL);
  result = (__int64 *)MiReservePtes((__int64)&qword_140C69940, v1);
  v34 = result;
  v3 = result;
  if ( result )
  {
    LODWORD(v35[1]) = 20;
    v35[3] = 0LL;
    ValidPte = MiMakeValidPte((unsigned __int64)result, qword_140C696F8, 1LL);
    v5 = (__int64)((_QWORD)v3 << 25) >> 16;
    v6 = v5;
    if ( v1 )
    {
      v7 = v1;
      v8 = (unsigned __int64 *)v3;
      while ( 1 )
      {
        v9 = ValidPte;
        v10 = 0;
        if ( MiPteInShadowRange((unsigned __int64)v8) )
        {
          if ( MiPteHasShadow() )
          {
            v10 = 1;
            if ( !HIBYTE(word_140C66CFC) )
            {
              v26 = (ValidPte & 1) == 0;
              goto LABEL_34;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v26 = (ValidPte & 1) == 0;
LABEL_34:
            if ( !v26 )
              v9 = ValidPte | 0x8000000000000000uLL;
          }
        }
        *v8 = v9;
        if ( v10 )
          MiWritePteShadow((__int64)v8, v9, v11);
        ++v8;
        v6 += 4096LL;
        if ( !--v7 )
        {
          v1 = v29;
          v12 = 0;
          v32 = 0LL;
          v13 = 0LL;
          while ( 1 )
          {
            v28 = 4LL;
            v14 = v1 - v13;
            v15 = 0LL;
            v16 = 0LL;
            v17 = (v1 - v13) >> 1;
            do
            {
              v33 = __rdtsc();
              _InterlockedOr(v27, 0);
              if ( v13 )
              {
                MiInsertTbFlushEntry((__int64)v35, v5, v13, 0);
                MiFlushTbList((int *)v35);
              }
              else
              {
                KeFlushTb(0, 2u);
              }
              _InterlockedOr(v27, 0);
              v15 += __rdtsc() - v33;
              v18 = __rdtsc();
              _InterlockedOr(v27, 0);
              if ( v17 )
              {
                v19 = v5 + (v13 << 12);
                v20 = (v14 << 12) + v19 - 4096;
                v21 = v17;
                do
                {
                  v19 += 4096LL;
                  v20 -= 4096LL;
                  --v21;
                }
                while ( v21 );
              }
              _InterlockedOr(v27, 0);
              v22 = __rdtsc();
              v16 += (((unsigned __int64)HIDWORD(v22) << 32) | (unsigned int)v22) - v18;
              --v28;
            }
            while ( v28 );
            v1 = v29;
            v23 = v15 >> 2;
            v24 = v16 >> 2;
            if ( v13 )
            {
              if ( v24 + v23 < v30 + v31 )
              {
                v12 = 0;
              }
              else
              {
                v25 = v13 - 1;
                if ( v12 )
                  v25 = v32;
                ++v12;
                v32 = v25;
                if ( v12 == 3 )
                {
                  qword_140C65B90 = v25;
                  return (__int64 *)MiReleasePtes((__int64)&qword_140C69940, v34, v1);
                }
              }
            }
            else
            {
              v30 = v23;
              v31 = v24;
            }
            if ( ++v13 >= v29 )
              goto LABEL_28;
          }
        }
      }
    }
    v13 = 0LL;
LABEL_28:
    qword_140C65B90 = v13;
    return (__int64 *)MiReleasePtes((__int64)&qword_140C69940, v34, v1);
  }
  return result;
}
