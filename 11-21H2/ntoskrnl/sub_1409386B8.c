/*
 * XREFs of sub_1409386B8 @ 0x1409386B8
 * Callers:
 *     sub_140938A9C @ 0x140938A9C (sub_140938A9C.c)
 * Callees:
 *     sub_14025E7A8 @ 0x14025E7A8 (sub_14025E7A8.c)
 *     sub_140559E1C @ 0x140559E1C (sub_140559E1C.c)
 *     sub_14093895C @ 0x14093895C (sub_14093895C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

LONG_PTR __fastcall sub_1409386B8(__int64 a1, __int64 a2)
{
  char v4; // r8
  int v5; // r15d
  __int64 v6; // rcx
  __int16 v7; // ax
  char v8; // al
  char v9; // r14
  unsigned int v10; // edi
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned int i; // [rsp+34h] [rbp-64h]
  _QWORD *P; // [rsp+38h] [rbp-60h]
  _QWORD *v16; // [rsp+40h] [rbp-58h]
  __int128 v17; // [rsp+60h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+20h] BYREF

  v19 = 0LL;
  v18 = 0;
  v17 = 0LL;
  i = 0;
  v4 = *((_BYTE *)KeGetCurrentThread() + 562);
  v5 = *(_DWORD *)(a1 + 192);
  v16 = *(_QWORD **)(a1 + 200);
  *(_DWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0LL;
  LODWORD(v17) = sub_14093895C(a1, a2, v4, (unsigned int)&v19, (__int64)&v18);
  if ( (int)v17 >= 0 )
  {
    v6 = *((_QWORD *)KeGetCurrentThread() + 23);
    if ( *(_QWORD *)(v6 + 1408) && ((v7 = *(_WORD *)(v6 + 2412), v7 == 332) || v7 == 452 ? (v8 = 1) : (v8 = 0), v8) )
    {
      v9 = 1;
      v10 = v18 >> 2;
    }
    else
    {
      v9 = 0;
      v10 = v18 >> 3;
    }
    if ( !v10 )
    {
      LODWORD(v17) = v19 != 0 ? 0xC000000D : 0;
      goto LABEL_23;
    }
    if ( v10 == v5 )
    {
      P = v16;
      v16 = 0LL;
      goto LABEL_14;
    }
    P = (_QWORD *)ExAllocatePool2(259LL, 8LL * v10, 1179808329LL);
    if ( P )
    {
LABEL_14:
      v11 = v19;
      for ( i = 0; i < v10; ++i )
      {
        if ( v9 )
          v12 = *(int *)(v11 + 4LL * i);
        else
          v12 = *(_QWORD *)(v11 + 8LL * i);
        P[i] = v12;
      }
      *(_DWORD *)(a1 + 192) = i;
      *(_QWORD *)(a1 + 200) = P;
      LODWORD(v17) = 0;
      goto LABEL_23;
    }
    LODWORD(v17) = -1073741670;
  }
LABEL_23:
  if ( v16 )
    ExFreePoolWithTag(v16, 0x46527249u);
  *((_QWORD *)&v17 + 1) = i;
  return sub_140559E1C(a1, *(_QWORD *)(a2 + 48), &v17, 0);
}
