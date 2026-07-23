/*
 * XREFs of sub_1402987C0 @ 0x1402987C0
 * Callers:
 *     sub_14041FB10 @ 0x14041FB10 (sub_14041FB10.c)
 * Callees:
 *     sub_140298420 @ 0x140298420 (sub_140298420.c)
 *     KeTestAlertThread @ 0x140299000 (KeTestAlertThread.c)
 *     sub_1402F1DC0 @ 0x1402F1DC0 (sub_1402F1DC0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14041F500 @ 0x14041F500 (sub_14041F500.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1402987C0(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // di
  struct _KTHREAD *CurrentThread; // r15
  char v10; // cl
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  bool v17; // [rsp+31h] [rbp-27h]
  int v18; // [rsp+34h] [rbp-24h]

  v6 = a2;
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
  {
    KeGetCurrentIrql();
    __writecr8(1uLL);
  }
  v18 = 1;
  CurrentThread = KeGetCurrentThread();
  if ( *((_BYTE *)CurrentThread + 562) )
  {
    v17 = 0;
    if ( a2 <= 0xFF )
    {
      v10 = a2;
    }
    else
    {
      if ( (a2 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a2 + 24 > 0x7FFFFFFF0000LL || a2 + 24 < a2 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v10 = *(_DWORD *)(a2 + 4) & 1;
      v17 = (*(_DWORD *)(a2 + 4) & 2) != 0;
    }
    v11 = v10 == 0;
    v12 = a1;
    if ( v11 )
    {
      if ( (a1 & 0xF) == 0 )
      {
LABEL_11:
        v18 = sub_140298420(a1, a3, a4, v6);
        if ( v18 >= 0 )
          v18 = 1;
        goto LABEL_23;
      }
    }
    else if ( (a1 & 0xF) == 0 )
    {
      if ( a1 >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v12 = *(_BYTE *)v12;
      *(_BYTE *)(v12 + 1231) = *(_BYTE *)(v12 + 1231);
      LOBYTE(v12) = 1;
      KeTestAlertThread(v12);
      if ( v17 && (*((_BYTE *)CurrentThread + 194) & 2) != 0 )
      {
        *(_QWORD *)(a4 + 208) = a1;
        *(_QWORD *)(a4 + 352) = a3;
        LOBYTE(v13) = 1;
        sub_1402F1DC0(v13, 0LL, a4);
        v18 = 0;
        goto LABEL_23;
      }
      goto LABEL_11;
    }
    ExRaiseDatatypeMisalignment();
  }
  if ( a2 > 0xFF )
    LOBYTE(v6) = *(_BYTE *)(a2 + 4) & 1;
  sub_14041F500(a4, a3, a1, *(_DWORD *)(a1 + 48), 0LL);
  if ( (_BYTE)v6 )
    KeTestAlertThread(0LL);
LABEL_23:
  if ( !CurrentIrql )
  {
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = *((_QWORD *)CurrentPrcb + 4375);
        v11 = (*(_DWORD *)(v16 + 20) & 0xFFFF0001) == 0;
        *(_DWORD *)(v16 + 20) &= 0xFFFF0001;
        if ( v11 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    __writecr8(0LL);
  }
  return (unsigned int)v18;
}
