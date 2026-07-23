/*
 * XREFs of sub_1407BDF60 @ 0x1407BDF60
 * Callers:
 *     sub_14028F324 @ 0x14028F324 (sub_14028F324.c)
 *     CcCopyReadEx @ 0x14032A8C0 (CcCopyReadEx.c)
 *     sub_14035E3C4 @ 0x14035E3C4 (sub_14035E3C4.c)
 * Callees:
 *     sub_14023C5D4 @ 0x14023C5D4 (sub_14023C5D4.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_140328180 @ 0x140328180 (sub_140328180.c)
 *     sub_140329430 @ 0x140329430 (sub_140329430.c)
 *     sub_140329470 @ 0x140329470 (sub_140329470.c)
 *     sub_14032A7D0 @ 0x14032A7D0 (sub_14032A7D0.c)
 */

char __fastcall sub_1407BDF60(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        char *a5,
        _DWORD *a6,
        int a7,
        __int64 a8,
        LARGE_INTEGER *a9)
{
  int v9; // r13d
  char v10; // si
  unsigned int v11; // edi
  __int64 v12; // rbx
  NTSTATUS v13; // ebp
  __int64 v14; // r15
  char *v15; // r14
  int v16; // r12d
  void *v17; // rdx
  __int64 v18; // r9
  unsigned int v19; // esi
  __int64 v20; // rcx
  PVOID P; // [rsp+50h] [rbp-58h] BYREF
  void *Src; // [rsp+58h] [rbp-50h]
  size_t Size; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v26; // [rsp+C0h] [rbp+18h] BYREF
  char v27; // [rsp+C8h] [rbp+20h]

  v27 = a4;
  v25 = a2;
  v9 = a1;
  v10 = a4;
  v11 = a3;
  P = 0LL;
  v12 = a2;
  v13 = 0;
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  if ( !a3 )
    goto LABEL_17;
  v15 = a5;
  while ( 1 )
  {
    LODWORD(Size) = 0;
    v16 = 0;
    LODWORD(v26) = 0;
    v17 = (void *)sub_140328180(v14, v12, (__int64 **)&P, &Size, 0, v15 == 0LL);
    Src = v17;
    if ( (*(_DWORD *)(v14 + 152) & 8) != 0 )
      break;
    if ( !sub_140329470(v9, &v25, v11, v10, &v26, P, a7, a8, a9) )
      goto LABEL_20;
    v16 = v26;
    v17 = Src;
    *a6 |= v26;
LABEL_6:
    v19 = Size;
    v12 += (unsigned int)Size;
    v20 = (unsigned int)Size;
    if ( v15 )
    {
      *(_QWORD *)(*(_QWORD *)(v14 + 504) + 312LL) += (unsigned int)Size;
      if ( v16 )
        *(_QWORD *)(*(_QWORD *)(v14 + 504) + 320LL) += v20;
    }
    else if ( v16 )
    {
      *(_QWORD *)(*(_QWORD *)(v14 + 504) + 328LL) += (unsigned int)Size;
    }
    if ( v19 > v11 )
      v19 = v11;
    if ( v15 )
    {
      LOBYTE(v18) = (*(_DWORD *)(v14 + 152) & 0x1000) != 0;
      v13 = sub_14032A7D0(v15, (char *)v17, v19, v18);
      if ( v13 < 0 )
        goto LABEL_21;
      v15 += v19;
    }
    sub_140329430((__int64)P);
    v25 = v12;
    P = 0LL;
    v11 -= v19;
    if ( !v11 )
      goto LABEL_15;
    v10 = v27;
  }
  if ( v10 )
    goto LABEL_6;
LABEL_20:
  v13 = -1073741608;
LABEL_21:
  if ( P )
    sub_140329430((__int64)P);
LABEL_15:
  if ( v13 == -1073741608 )
    return 0;
  if ( v13 < 0 )
  {
    sub_14023C5D4(v14, 8, 1);
    RtlRaiseStatus(v13);
  }
LABEL_17:
  if ( (*(_DWORD *)(v14 + 152) & 8) != 0 )
    sub_14023C5D4(v14, 8, 0);
  return 1;
}
