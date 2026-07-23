/*
 * XREFs of sub_1403D2700 @ 0x1403D2700
 * Callers:
 *     sub_140A5A7C8 @ 0x140A5A7C8 (sub_140A5A7C8.c)
 * Callees:
 *     KeSetTargetProcessorDpcEx @ 0x14025ACA0 (KeSetTargetProcessorDpcEx.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402631C0 (KeQueryMaximumProcessorCountEx.c)
 *     KeGetCurrentProcessorNumberEx @ 0x140355110 (KeGetCurrentProcessorNumberEx.c)
 *     sub_1403AAB1C @ 0x1403AAB1C (sub_1403AAB1C.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void sub_1403D2700()
{
  KPCR *Pcr; // rdi
  ULONG CurrentProcessorNumber; // r15d
  size_t v2; // rbx
  void *v3; // rax
  _DWORD *Pool2; // r14
  int v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // ebx
  unsigned int v8; // esi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rbp
  unsigned int i; // edi
  __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // esi
  int v17; // r15d
  __int64 v18; // rax
  __int64 j; // rbx
  unsigned int v20; // [rsp+70h] [rbp+8h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+78h] [rbp+10h] BYREF
  __int64 v22; // [rsp+80h] [rbp+18h]

  v20 = 0;
  Pcr = KeGetPcr();
  v22 = 0LL;
  ProcNumber = 0;
  if ( byte_140C4C450 )
  {
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(&ProcNumber);
    if ( !CurrentProcessorNumber && !qword_140D010E8 )
    {
      v2 = 192 * KeQueryMaximumProcessorCountEx(0xFFFFu);
      v3 = (void *)sub_1403B1F04(v2, v2);
      qword_140D010E8 = (__int64)v3;
      if ( !v3 )
        KeBugCheckEx(0xACu, (unsigned int)v2, 0LL, (ULONG_PTR)"minkernel\\hals\\lib\\hv\\hvintel.c", 0x4CAuLL);
      memset(v3, 0, v2);
    }
    if ( !*(_QWORD *)&Pcr->HalReserved[6] )
    {
      Pool2 = 0LL;
      if ( !qword_140C4C4D0 )
        goto LABEL_21;
      v5 = sub_14042A5E0(4294967294LL, &v20);
      if ( v5 == -1073741789 )
      {
        v7 = 8 * v20;
        Pool2 = (_DWORD *)ExAllocatePool2(64LL, 8 * v20, 1215062344LL);
        if ( !Pool2 )
          KeBugCheckEx(0xACu, v7, 0LL, (ULONG_PTR)"minkernel\\hals\\lib\\hv\\hvintel.c", 0x4E5uLL);
        if ( qword_140C4C4D0 )
          v5 = sub_14042A5E0(4294967294LL, &v20);
        else
          v5 = -1073741823;
      }
      if ( v5 < 0 || !v20 )
LABEL_21:
        KeBugCheckEx(0x5Cu, 0x8200uLL, 0LL, (ULONG_PTR)"minkernel\\hals\\lib\\hv\\hvintel.c", 0x4F1uLL);
      v8 = 0;
      v22 = *Pool2 & 0x7FFFFFFF;
      v9 = v22;
      v11 = sub_1403AAB1C(v22, v6);
      *(_QWORD *)(v11 + 172) = v9;
      *(_QWORD *)(v11 + 184) = 0LL;
      *(_QWORD *)&Pcr->HalReserved[6] = v11;
      for ( i = 1; i < v20; v11 = v15 )
      {
        v8 &= ~1u;
        v13 = (unsigned int)Pool2[i];
        LODWORD(v13) = v13 & 0x7FFFFFFF;
        v22 = __PAIR64__(v8, v13);
        v14 = __PAIR64__(v8, v13);
        v15 = sub_1403AAB1C(__SPAIR64__(v8, v13), v13);
        ++i;
        *(_QWORD *)(v15 + 184) = 0LL;
        *(_QWORD *)(v15 + 172) = v14;
        *(_QWORD *)(v11 + 184) = v15;
      }
      v16 = v8 | 1;
      v17 = CurrentProcessorNumber & 0x7FFFFFFF;
      v22 = __PAIR64__(v16, v17);
      v18 = sub_1403AAB1C(__SPAIR64__(v16, v17), v10);
      *(_QWORD *)(v18 + 184) = 0LL;
      *(_QWORD *)(v18 + 172) = __PAIR64__(v16, v17);
      *(_QWORD *)(v11 + 184) = v18;
      ExFreePoolWithTag(Pool2, 0x486C6148u);
    }
    for ( j = *(_QWORD *)&KeGetPcr()->HalReserved[6]; j; j = *(_QWORD *)(j + 184) )
    {
      if ( !*(_BYTE *)(j + 160) )
      {
        *(_DWORD *)(j + 48) = 275;
        *(_QWORD *)(j + 72) = sub_1403990C0;
        *(_QWORD *)(j + 80) = j;
        *(_QWORD *)(j + 104) = 0LL;
        *(_QWORD *)(j + 64) = 0LL;
        KeSetTargetProcessorDpcEx((PKDPC)(j + 48), &ProcNumber);
        *(_BYTE *)(j + 160) = 1;
      }
    }
  }
}
