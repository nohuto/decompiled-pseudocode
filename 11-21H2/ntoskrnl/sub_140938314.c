/*
 * XREFs of sub_140938314 @ 0x140938314
 * Callers:
 *     sub_140938A9C @ 0x140938A9C (sub_140938A9C.c)
 * Callees:
 *     sub_14025E7A8 @ 0x14025E7A8 (sub_14025E7A8.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140559E1C @ 0x140559E1C (sub_140559E1C.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_14093895C @ 0x14093895C (sub_14093895C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

LONG_PTR __fastcall sub_140938314(__int64 a1, __int64 a2)
{
  unsigned int v4; // r14d
  __int64 v5; // rcx
  __int16 v6; // ax
  char v7; // al
  char v8; // r15
  unsigned int v9; // esi
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // r14d
  unsigned int v13; // ecx
  __int64 v14; // r12
  volatile void *v15; // r15
  unsigned int v16; // r14d
  __int64 v17; // rcx
  char v19; // [rsp+30h] [rbp-88h]
  unsigned int i; // [rsp+34h] [rbp-84h]
  PVOID P; // [rsp+38h] [rbp-80h]
  void *Src; // [rsp+48h] [rbp-70h]
  __int128 v23; // [rsp+50h] [rbp-68h] BYREF
  __int64 v24; // [rsp+60h] [rbp-58h] BYREF
  volatile void *v25; // [rsp+68h] [rbp-50h]
  __int64 v26; // [rsp+70h] [rbp-48h]
  __int64 v27; // [rsp+78h] [rbp-40h]
  char v28; // [rsp+D0h] [rbp+18h]
  __int64 v29; // [rsp+D8h] [rbp+20h] BYREF

  v24 = 0LL;
  LODWORD(v29) = 0;
  v23 = 0LL;
  i = 0;
  v28 = *((_BYTE *)KeGetCurrentThread() + 562);
  v4 = *(_DWORD *)(a1 + 176);
  Src = *(void **)(a1 + 184);
  *(_DWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = 0LL;
  LODWORD(v23) = sub_14093895C(a1, a2, v28, (unsigned int)&v24, (__int64)&v29);
  if ( (int)v23 >= 0 )
  {
    v5 = *((_QWORD *)KeGetCurrentThread() + 23);
    if ( *(_QWORD *)(v5 + 1408) && ((v6 = *(_WORD *)(v5 + 2412), v6 == 332) || v6 == 452 ? (v7 = 1) : (v7 = 0), v7) )
    {
      v8 = 1;
      v19 = 1;
      v9 = (unsigned int)v29 >> 3;
      v10 = 8 * ((unsigned int)v29 >> 3);
    }
    else
    {
      v8 = 0;
      v19 = 0;
      v9 = (unsigned int)v29 >> 4;
      v10 = 16 * ((unsigned int)v29 >> 4);
    }
    LODWORD(v29) = v10;
    if ( !v9 )
    {
      LODWORD(v23) = v24 != 0 ? 0xC000000D : 0;
      goto LABEL_32;
    }
    if ( v9 == v4 )
    {
      P = Src;
      Src = 0LL;
      v13 = v9;
      v29 = v9;
    }
    else
    {
      P = (PVOID)ExAllocatePool2(259LL, v10, 1112699465LL);
      if ( !P )
      {
        LODWORD(v23) = -1073741670;
        goto LABEL_32;
      }
      v11 = v9;
      if ( v9 >= v4 )
        v11 = v4;
      v12 = v11;
      v29 = v11;
      memmove(P, Src, 16LL * v11);
      v13 = v12;
    }
    v14 = v24;
    v26 = v24;
    v27 = v24;
    for ( i = 0; i < v9; ++i )
    {
      v25 = 0LL;
      if ( v8 )
      {
        v15 = (volatile void *)*(unsigned int *)(v14 + 8LL * i);
        v25 = v15;
        v16 = *(_DWORD *)(v14 + 8LL * i + 4);
      }
      else
      {
        v15 = *(volatile void **)(v14 + 16LL * i);
        v25 = v15;
        v16 = *(_DWORD *)(v14 + 16LL * i + 8);
      }
      if ( i >= v13 || *((volatile void **)P + 2 * i) != v15 || *((_DWORD *)P + 4 * i + 2) != v16 )
      {
        if ( v28 )
          ProbeForWrite(v15, v16, 1u);
        v17 = 2LL * i;
        *((_QWORD *)P + v17) = v15;
        *((_DWORD *)P + 2 * v17 + 2) = v16;
      }
      v8 = v19;
      v13 = v29;
    }
    *(_DWORD *)(a1 + 176) = i;
    *(_QWORD *)(a1 + 184) = P;
    LODWORD(v23) = 0;
  }
LABEL_32:
  if ( Src )
    ExFreePoolWithTag(Src, 0x42527249u);
  *((_QWORD *)&v23 + 1) = i;
  return sub_140559E1C(a1, *(_QWORD *)(a2 + 48), &v23, 0);
}
