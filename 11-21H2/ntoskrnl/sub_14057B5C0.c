/*
 * XREFs of sub_14057B5C0 @ 0x14057B5C0
 * Callers:
 *     sub_14057BA34 @ 0x14057BA34 (sub_14057BA34.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14057B5C0(__int64 a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // r9
  __int64 v3; // rdi
  __int64 v5; // rsi
  char v6; // bl
  KPCR *Pcr; // rdx
  __int16 v8; // r10
  struct _KTHREAD *v10; // rdx
  struct _KTHREAD *v11; // rdx

  CurrentThread = KeGetCurrentThread();
  v3 = a1;
  v5 = *a2;
  v6 = *(_BYTE *)(a1 + 81);
  _BitScanForward((unsigned int *)&a1, *(_DWORD *)(a1 + 48));
  Pcr = 0LL;
  v8 = *(_WORD *)(*((unsigned int *)qword_14003BD10 + a1) + *(_QWORD *)(v3 + 24));
  if ( 1 << a1 == 32 )
  {
    if ( !v6 )
    {
      Pcr = KeGetPcr();
LABEL_4:
      *a2 = (__int64)Pcr + v5;
      return 0LL;
    }
    Pcr = (KPCR *)*((_QWORD *)CurrentThread + 200);
    if ( Pcr )
      goto LABEL_4;
    v10 = KeGetCurrentThread();
    if ( (*((_DWORD *)v10 + 29) & 0x400) == 0 && *((_BYTE *)v10 + 586) != 1 )
    {
      Pcr = (KPCR *)*((_QWORD *)v10 + 30);
      goto LABEL_4;
    }
LABEL_9:
    Pcr = 0LL;
    goto LABEL_4;
  }
  if ( 1 << a1 == 16 )
  {
    Pcr = (KPCR *)*((_QWORD *)CurrentThread + 199);
    if ( Pcr )
      goto LABEL_4;
    v11 = KeGetCurrentThread();
    if ( (*((_DWORD *)v11 + 29) & 0x400) == 0 && *((_BYTE *)v11 + 586) != 1 )
    {
      Pcr = (KPCR *)*((_QWORD *)v11 + 30);
      if ( Pcr )
        Pcr = (KPCR *)((char *)Pcr + 0x2000);
      goto LABEL_4;
    }
    goto LABEL_9;
  }
  if ( v6 != 1 || !*(_BYTE *)(v3 + 58) || ((v8 - 35) & 0xFFE7) == 0 && v8 != 59 )
    goto LABEL_4;
  *a2 = 0x7FFFFFFF0000LL;
  return 3221225477LL;
}
