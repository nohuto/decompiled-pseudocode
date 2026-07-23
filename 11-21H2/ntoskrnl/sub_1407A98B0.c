/*
 * XREFs of sub_1407A98B0 @ 0x1407A98B0
 * Callers:
 *     sub_1407A711C @ 0x1407A711C (sub_1407A711C.c)
 *     sub_1407A9220 @ 0x1407A9220 (sub_1407A9220.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_14066B204 @ 0x14066B204 (sub_14066B204.c)
 *     sub_14069B58C @ 0x14069B58C (sub_14069B58C.c)
 *     sub_1407A5A54 @ 0x1407A5A54 (sub_1407A5A54.c)
 */

__int64 __fastcall sub_1407A98B0(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  ULONG_PTR v7; // rdi
  char v9; // r13
  int v10; // r15d
  void *v11; // r12
  int v12; // eax
  int v13; // r13d
  __int64 v14; // rax
  ULONG_PTR v15; // rdx
  __int128 v16; // [rsp+50h] [rbp-48h] BYREF
  __int64 v17; // [rsp+60h] [rbp-38h] BYREF

  v7 = *(_QWORD *)(a2 + 152);
  if ( !v7 )
    return 0LL;
  v9 = *((_BYTE *)KeGetCurrentThread() + 562);
  v10 = 0;
  v11 = 0LL;
  if ( (*(_DWORD *)(a1 + 416) & 6) == 2 )
  {
    v14 = sub_14069B58C(*(_QWORD *)(a2 + 24));
    v11 = (void *)v14;
    if ( !v14 )
    {
      v13 = -1073741769;
      goto LABEL_8;
    }
    a1 = v14;
  }
  v12 = *(_DWORD *)(a1 + 256);
  if ( (v12 & 0x80000) == 0 )
    goto LABEL_22;
  v16 = 0LL;
  v17 = 0LL;
  if ( (v12 & 0x2000000) == 0 )
  {
    if ( *(_DWORD *)(v7 + 4) <= 1u )
    {
      if ( (*(_DWORD *)v7 & *(_DWORD *)(a1 + 320)) == 0 )
      {
        v13 = -1073741788;
        goto LABEL_8;
      }
      v15 = *(_QWORD *)(a1 + 24);
      if ( (v15 & 1) != 0 )
        v15 = 0LL;
      if ( v15 )
      {
        LODWORD(v17) = *(_DWORD *)v7 & *(_DWORD *)(a1 + 320);
        v13 = sub_14066B204((__int64 *)(v7 + 8), v15, v9, (__int64 *)&v16 + 1, (_DWORD *)&v17 + 1);
        if ( v13 < 0 )
          goto LABEL_8;
        goto LABEL_7;
      }
    }
LABEL_22:
    v13 = -1073741790;
    goto LABEL_8;
  }
  LODWORD(v16) = 0x40000;
  LODWORD(v17) = *(_DWORD *)(v7 + 4);
  v10 = 1;
LABEL_7:
  v13 = 0;
  *(_OWORD *)a3 = v16;
  *(_QWORD *)(a3 + 16) = v17;
  *a4 |= 0x10000000u;
LABEL_8:
  if ( v11 )
    ObfDereferenceObject(v11);
  if ( !v10 )
  {
    sub_1407A5A54(v7, 1);
    *(_QWORD *)(a2 + 152) = 0LL;
  }
  return (unsigned int)v13;
}
