/*
 * XREFs of sub_140739F40 @ 0x140739F40
 * Callers:
 *     sub_1406AD6BC @ 0x1406AD6BC (sub_1406AD6BC.c)
 *     sub_14072ACC0 @ 0x14072ACC0 (sub_14072ACC0.c)
 * Callees:
 *     sub_14022B0E0 @ 0x14022B0E0 (sub_14022B0E0.c)
 *     sub_14023502C @ 0x14023502C (sub_14023502C.c)
 *     sub_1402B1D10 @ 0x1402B1D10 (sub_1402B1D10.c)
 *     sub_1402B2E00 @ 0x1402B2E00 (sub_1402B2E00.c)
 *     sub_140360AC0 @ 0x140360AC0 (sub_140360AC0.c)
 *     sub_1403C4E98 @ 0x1403C4E98 (sub_1403C4E98.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14068FCB0 @ 0x14068FCB0 (sub_14068FCB0.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_140978C9C @ 0x140978C9C (sub_140978C9C.c)
 *     ExRaiseAccessViolation @ 0x140A021F0 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140739F40(__int64 a1, char a2, unsigned int *a3)
{
  unsigned int v5; // edi
  _DWORD *v6; // rbx
  int v7; // r8d
  unsigned int v8; // edx
  int v9; // r15d
  char *v10; // rbx
  char *v11; // rsi
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v13; // rdi
  __int64 v14; // r9
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  unsigned int v19; // edx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  _DWORD *v23; // [rsp+38h] [rbp-40h]
  __int64 v24; // [rsp+80h] [rbp+8h] BYREF
  unsigned int *v25; // [rsp+90h] [rbp+18h]
  void *Src; // [rsp+98h] [rbp+20h] BYREF

  v25 = a3;
  v5 = 0;
  LODWORD(v24) = 0;
  v6 = 0LL;
  Src = 0LL;
  v7 = *(_DWORD *)(a1 + 8);
  if ( v7 == 6 )
  {
    v8 = *(_DWORD *)(a1 + 24);
    if ( v8 < 0xD8 )
    {
      v9 = -1073741306;
      goto LABEL_22;
    }
    v9 = sub_14068FCB0(*(_QWORD *)(a1 + 16), v8, 6, &Src, a2, 1);
    if ( v9 >= 0 )
    {
      v23 = Src;
      v10 = (char *)Src + 192;
      v9 = 0;
      v11 = (char *)Src + 24 * *((_QWORD *)Src + 1) + 192;
      CurrentThread = KeGetCurrentThread();
      sub_14023502C((__int64)&StartContext, (__int64)CurrentThread);
      if ( v10 < v11 )
      {
        while ( 1 )
        {
          v13 = *((_QWORD *)v10 + 1);
          if ( !(unsigned int)sub_1402B2E00(v13) )
            break;
          sub_1402B1D10(48 * v13 - 0x220000000000LL, (__int64)v10);
          v10 += 24;
          if ( v10 >= v11 )
            goto LABEL_7;
        }
        *((_QWORD *)v10 + 2) |= 2uLL;
        v9 = -1073741584;
      }
LABEL_7:
      sub_14022B0E0((__int64)&StartContext, (__int64)CurrentThread);
      v6 = Src;
      if ( v9 >= 0 && (*((_DWORD *)Src + 1) & 1) != 0 )
        sub_140360AC0((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, (_OWORD *)Src + 1, 0xB0u, v14, &v24);
      if ( a2 )
      {
        v15 = *(_QWORD *)(a1 + 16);
        if ( *(_DWORD *)(a1 + 24) )
        {
          if ( (v15 & 7) != 0 )
            ExRaiseDatatypeMisalignment();
          v16 = v15 + *(unsigned int *)(a1 + 24) - 1LL;
          if ( v15 > v16 || v16 >= 0x7FFFFFFF0000LL )
            ExRaiseAccessViolation();
          v17 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          do
          {
            *(_BYTE *)v15 = *(_BYTE *)v15;
            v15 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          }
          while ( v15 != v17 );
          v6 = Src;
        }
      }
      v5 = 24 * (v23[2] + 8);
      memmove(*(void **)(a1 + 16), v6, v5);
      goto LABEL_21;
    }
    goto LABEL_45;
  }
  if ( v7 != 7 && v7 != 22 && v7 != 29 )
  {
    v9 = -1073741821;
    goto LABEL_22;
  }
  v19 = *(_DWORD *)(a1 + 24);
  if ( v19 < 0xD8 )
  {
    v9 = -1073741306;
    goto LABEL_22;
  }
  v9 = sub_14068FCB0(*(_QWORD *)(a1 + 16), v19, v7, &Src, a2, 0);
  if ( v9 >= 0 )
  {
    v20 = *(_DWORD *)(a1 + 8);
    if ( v20 == 7 )
    {
      v21 = 0;
    }
    else
    {
      if ( v20 != 29 )
      {
        v6 = Src;
        v22 = sub_140978C9C(
                *((_QWORD *)Src + 1),
                (char *)Src + 192,
                *((unsigned __int16 *)Src + 2),
                *((unsigned __int16 *)Src + 3));
        goto LABEL_31;
      }
      v21 = 1;
    }
    v6 = Src;
    v22 = sub_1403C4E98(*((_QWORD *)Src + 1), (unsigned __int64)Src + 192, v21);
LABEL_31:
    v9 = v22;
    if ( *(_DWORD *)(a1 + 8) == 22 || v22 < 0 )
    {
      if ( a2 )
        ProbeForWrite(*(volatile void **)(a1 + 16), *(unsigned int *)(a1 + 24), 8u);
      v5 = 24 * (v6[2] + 8);
      memmove(*(void **)(a1 + 16), v6, v5);
    }
LABEL_21:
    *v25 = v5;
    goto LABEL_22;
  }
LABEL_45:
  v6 = Src;
LABEL_22:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v9;
}
