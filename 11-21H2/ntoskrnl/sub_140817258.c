/*
 * XREFs of sub_140817258 @ 0x140817258
 * Callers:
 *     sub_140816798 @ 0x140816798 (sub_140816798.c)
 *     sub_140816C88 @ 0x140816C88 (sub_140816C88.c)
 *     IoConnectInterruptEx @ 0x140816FD0 (IoConnectInterruptEx.c)
 *     sub_1408590B0 @ 0x1408590B0 (sub_1408590B0.c)
 * Callees:
 *     sub_1402585E8 @ 0x1402585E8 (sub_1402585E8.c)
 *     KeGetProcessorIndexFromNumber @ 0x140293580 (KeGetProcessorIndexFromNumber.c)
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_1403AEB30 @ 0x1403AEB30 (sub_1403AEB30.c)
 *     sub_1403AF0E8 @ 0x1403AF0E8 (sub_1403AF0E8.c)
 *     sub_1403AF228 @ 0x1403AF228 (sub_1403AF228.c)
 *     sub_1403AF5E4 @ 0x1403AF5E4 (sub_1403AF5E4.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1408176BC @ 0x1408176BC (sub_1408176BC.c)
 *     sub_1408177B8 @ 0x1408177B8 (sub_1408177B8.c)
 *     sub_14081788C @ 0x14081788C (sub_14081788C.c)
 *     sub_1408178F8 @ 0x1408178F8 (sub_1408178F8.c)
 *     sub_1409466AC @ 0x1409466AC (sub_1409466AC.c)
 *     sub_1409467F8 @ 0x1409467F8 (sub_1409467F8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140817258(
        __int64 *a1,
        ULONG_PTR a2,
        __int64 (__fastcall *a3)(__int64 a1, __int64 a2),
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        char a8,
        char a9,
        __int64 a10,
        __int64 a11)
{
  __m128i v14; // xmm0
  int v15; // esi
  unsigned __int64 v16; // r15
  char v17; // al
  unsigned __int64 v19; // rsi
  __int64 Pool2; // rax
  __int64 v21; // r14
  _DWORD *v22; // rdx
  int v23; // eax
  __int64 v24; // rcx
  __m128i v25; // xmm0
  WORD v26; // ax
  char v27; // cl
  BYTE v28; // bl
  PSLIST_ENTRY v29; // rax
  int v30; // ebx
  __int64 v31; // rcx
  __int64 v32; // rbx
  _OWORD *v33; // rax
  _OWORD *v34; // rdx
  __int64 v35; // rbx
  __int64 v36; // rcx
  __int128 v37; // xmm1
  PSLIST_ENTRY *v39; // rdi
  __int64 v40; // rcx
  _WORD *v41; // rcx
  __int64 v42; // rcx
  unsigned __int16 *v43; // rsi
  __int64 v44; // rdx
  _WORD *v45; // rcx
  __int64 v46; // rcx
  _WORD *v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // [rsp+70h] [rbp-98h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+88h] [rbp-80h] BYREF
  int v51; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v52; // [rsp+90h] [rbp-78h]
  ULONG ProcessorIndexFromNumber; // [rsp+94h] [rbp-74h]
  __m128i v54; // [rsp+98h] [rbp-70h] BYREF
  __int64 v55; // [rsp+A8h] [rbp-60h]
  _DWORD *v56; // [rsp+B0h] [rbp-58h]
  __int64 v57; // [rsp+B8h] [rbp-50h]
  _QWORD v58[16]; // [rsp+C8h] [rbp-40h] BYREF
  bool v62; // [rsp+190h] [rbp+88h]
  char v63; // [rsp+190h] [rbp+88h]
  char v64; // [rsp+1A0h] [rbp+98h]
  char v65; // [rsp+1A8h] [rbp+A0h]

  memset(v58, 0, 0x50uLL);
  *a1 = 0LL;
  ProcNumber = 0;
  v64 = 0;
  v55 = 0LL;
  sub_1408177B8(a11, v58);
  v14 = *(__m128i *)(a11 + 32);
  v15 = *(_DWORD *)(a11 + 24);
  v52 = *(_DWORD *)(a11 + 12);
  v54 = v14;
  v51 = v15;
  v16 = v14.m128i_i64[0] & qword_140D06E48[(unsigned __int16)_mm_extract_epi16(v14, 4)];
  v17 = *(_BYTE *)(a11 + 16);
  v54.m128i_i64[0] = v16;
  v65 = v17;
  if ( !*(_DWORD *)(a11 + 8)
    && !(unsigned __int8)sub_14042A5E0(0LL, *(unsigned int *)(a11 + 64))
    && (unsigned int)(*(_DWORD *)(a11 + 20) - 3) <= 1 )
  {
    v64 = 1;
    v51 = 0;
  }
  v62 = a8 == 0;
  if ( !sub_1402585E8((__int64)&v54, 0)
    || (v19 = (0x101010101010101LL
             * ((((v16 - ((v16 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v16 - ((v16 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
               + ((((v16 - ((v16 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v16 - ((v16 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56,
        !(_BYTE)v19) )
  {
    v30 = -1073741811;
    goto LABEL_32;
  }
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(8 * (char)v19 + 496), 1852403529LL);
  v21 = Pool2;
  if ( !Pool2 )
  {
    v30 = -1073741670;
    goto LABEL_32;
  }
  KeInitializeDpc((PRKDPC)(Pool2 + 432), 0LL, 0LL);
  v23 = v51;
  v24 = v21;
  *(_OWORD *)(v21 + 16) = *(_OWORD *)a11;
  *(_OWORD *)(v21 + 32) = *(_OWORD *)(a11 + 16);
  *(_OWORD *)(v21 + 48) = *(_OWORD *)(a11 + 32);
  *(_OWORD *)(v21 + 64) = *(_OWORD *)(a11 + 48);
  *(_OWORD *)(v21 + 80) = *(_OWORD *)(a11 + 64);
  v25 = v54;
  *(_OWORD *)(v21 + 96) = *(_OWORD *)(a11 + 80);
  *(_DWORD *)(v21 + 40) = v23;
  *(__m128i *)(v21 + 48) = v25;
  if ( a7 )
    v24 = a7;
  *(_BYTE *)(v21 + 400) = v62;
  v57 = v24;
  if ( !a8 )
    v55 = v21 + 408;
  v26 = v54.m128i_u16[4];
  v27 = 0;
  v28 = 0;
  *(_QWORD *)(v21 + 8) = v16;
  ProcNumber.Group = v26;
  ProcNumber.Reserved = 0;
  v63 = 0;
  if ( (char)v19 <= 0 )
  {
LABEL_17:
    if ( a8 || (v30 = sub_1409466AC(v21 + 16, &v54), v30 >= 0) )
    {
      if ( v58[3] )
      {
        LOBYTE(v22) = 1;
        sub_14081788C(v58, v22, 0LL);
      }
      v30 = sub_1403AF5E4((__int64 *)(v21 + 496), v19, v21 + 16);
      if ( v58[3] )
        sub_14081788C(v58, 0LL, 0LL);
      if ( v30 >= 0 )
      {
        if ( a2 )
        {
          v31 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
          if ( !v31 || (*(_DWORD *)(v31 + 396) & 0x20000) != 0 )
          {
            sub_1403D99B4(a2, (PVOID)*(unsigned __int16 *)(a2 + 2));
            v40 = *(_QWORD *)(a2 + 8);
            if ( v40 )
            {
              sub_1403D99B4(v40, (PVOID)(unsigned int)*(__int16 *)(v40 + 2));
              v41 = (_WORD *)(*(_QWORD *)(a2 + 8) + 56LL);
              if ( *v41 )
              {
                sub_1403D99B4((ULONG)v41, (PVOID)2);
                sub_1403D99B4(
                  *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
                  (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
              }
            }
            v42 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
            if ( v42 )
            {
              v43 = (unsigned __int16 *)(v42 + 40);
              sub_1403D99B4(v42, (PVOID)0x310);
              if ( *v43 )
              {
                sub_1403D99B4((ULONG)v43, (PVOID)2);
                sub_1403D99B4(*((_QWORD *)v43 + 1), (PVOID)*v43);
              }
              v44 = *(_QWORD *)(a2 + 312);
              v45 = (_WORD *)(*(_QWORD *)(v44 + 40) + 56LL);
              if ( *v45 )
              {
                sub_1403D99B4((ULONG)v45, (PVOID)2);
                sub_1403D99B4(
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 64LL),
                  (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL));
                v44 = *(_QWORD *)(a2 + 312);
              }
              v46 = *(_QWORD *)(*(_QWORD *)(v44 + 40) + 16LL);
              if ( v46 )
              {
                v47 = (_WORD *)(v46 + 56);
                if ( *v47 )
                {
                  sub_1403D99B4((ULONG)v47, (PVOID)2);
                  v48 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
                  sub_1403D99B4(*(_QWORD *)(v48 + 64), (PVOID)*(unsigned __int16 *)(v48 + 56));
                }
              }
            }
            KeBugCheckEx(0xCAu, 2uLL, a2, 0LL, 0LL);
          }
          if ( (char)v19 > 0 )
          {
            v32 = v21 + 496;
            do
            {
              ObfReferenceObjectWithTag((PVOID)a2, 0x54706E50u);
              *(_QWORD *)(*(_QWORD *)v32 + 280LL) = a2;
              _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a2 + 312) + 96LL));
              v32 += 8LL;
              --v19;
            }
            while ( v19 );
          }
        }
        v33 = *(_OWORD **)(v21 + 496);
        v34 = (_OWORD *)(v21 + 112);
        v35 = 2LL;
        v36 = 128LL;
        do
        {
          *v34 = *v33;
          v34[1] = v33[1];
          v34[2] = v33[2];
          v34[3] = v33[3];
          v34[4] = v33[4];
          v34[5] = v33[5];
          v34[6] = v33[6];
          v34 += 8;
          v37 = v33[7];
          v33 += 8;
          *(v34 - 1) = v37;
          --v35;
        }
        while ( v35 );
        LOBYTE(v36) = 1;
        v30 = 0;
        *v34 = *v33;
        v34[1] = v33[1];
        *a1 = v21;
        sub_1408178F8(v36);
        goto LABEL_32;
      }
      if ( !a8 )
        sub_1409467F8(v52);
    }
    if ( (char)v19 > 0 )
      goto LABEL_41;
    goto LABEL_45;
  }
  while ( !_bittest64((const __int64 *)&v16, v28) )
  {
LABEL_16:
    ++v28;
    if ( v27 >= (char)v19 )
      goto LABEL_17;
  }
  ProcNumber.Number = v28;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
  v29 = sub_1403AF228((_SLIST_HEADER *)qword_140D088C0[ProcessorIndexFromNumber]);
  v56 = v29;
  if ( v29 )
  {
    memset(v29, 0, 0x120uLL);
    sub_1403AF0E8(v56, a3, a4, a5, a6, v57, v55, v52, v65, a8, v51, a9, ProcessorIndexFromNumber, v49, v64, v21 + 16);
    v22 = v56;
    *(_QWORD *)(v21 + 8LL * v63 + 496) = v56;
    v27 = ++v63;
    goto LABEL_16;
  }
  v30 = -1073741670;
LABEL_41:
  v39 = (PSLIST_ENTRY *)(v21 + 496);
  do
  {
    if ( *v39 )
      sub_1403AEB30(*v39);
    ++v39;
    --v19;
  }
  while ( v19 );
LABEL_45:
  ExFreePoolWithTag((PVOID)v21, 0x6E696F49u);
LABEL_32:
  sub_1408176BC(v58);
  return (unsigned int)v30;
}
