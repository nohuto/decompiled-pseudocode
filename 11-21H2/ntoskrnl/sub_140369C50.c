/*
 * XREFs of sub_140369C50 @ 0x140369C50
 * Callers:
 *     sub_140369B48 @ 0x140369B48 (sub_140369B48.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     vDbgPrintEx @ 0x140369C20 (vDbgPrintEx.c)
 *     vDbgPrintExWithPrefix @ 0x14045EDB0 (vDbgPrintExWithPrefix.c)
 *     sub_140560D94 @ 0x140560D94 (sub_140560D94.c)
 *     sub_14057D738 @ 0x14057D738 (sub_14057D738.c)
 *     DbgPrintReturnControlC @ 0x1405E4120 (DbgPrintReturnControlC.c)
 *     sub_1405FDF9C @ 0x1405FDF9C (sub_1405FDF9C.c)
 *     DifUtilDbgPrint @ 0x140604500 (DifUtilDbgPrint.c)
 *     sub_140605160 @ 0x140605160 (sub_140605160.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_140368DAC @ 0x140368DAC (sub_140368DAC.c)
 *     sub_140369DB0 @ 0x140369DB0 (sub_140369DB0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     DbgBreakPointWithStatus @ 0x140429800 (DbgBreakPointWithStatus.c)
 *     sub_140429810 @ 0x140429810 (sub_140429810.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_140369C50(_BYTE *Src, unsigned int a2, unsigned int a3, const char *a4, va_list a5, char a6)
{
  __int64 result; // rax
  char *v10; // rdi
  int v11; // eax
  unsigned int v12; // esi
  unsigned __int64 v13; // rcx
  size_t v14; // rbx
  __int64 v15; // rcx
  struct _EX_RUNDOWN_REF *v16; // rdi
  unsigned __int8 CurrentIrql; // si
  unsigned __int8 v18; // cl
  __int64 v19; // r9
  struct _EX_RUNDOWN_REF *Count; // rbx
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v22; // r8
  int v23; // eax
  bool v24; // zf
  char v25[96]; // [rsp+0h] [rbp-80h] BYREF
  int v26; // [rsp+80h] [rbp+0h]
  __int128 v27; // [rsp+88h] [rbp+8h] BYREF
  const char *v28; // [rsp+98h] [rbp+18h]
  unsigned __int64 v29; // [rsp+A0h] [rbp+20h]

  v28 = a4;
  v27 = 0LL;
  if ( !(unsigned int)sub_140369DB0(a2, a3) )
    return 0LL;
  v10 = 0LL;
  v11 = 0;
  v26 = 0;
  v12 = 0;
  do
  {
    if ( v12 >= 0x200 )
      break;
    v10 = v25;
    v12 += 128;
    v13 = -1LL;
    do
      ++v13;
    while ( Src[v13] );
    v29 = v13;
    v14 = v12 - 1;
    if ( v13 <= v14 )
      v14 = v13;
    memmove(v25, Src, v14);
    v11 = sub_140368DAC(&v25[v14], v12 - v14, v28, a5);
    v26 = v11;
    if ( v11 >= 0 )
      break;
  }
  while ( v11 == -2147483643 );
  if ( v11 == -2147483643 )
  {
    v10[v12 - 2] = 10;
    LOWORD(v15) = v12 - 1;
    v10[v12 - 1] = 0;
  }
  else
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v10[v15] );
  }
  *((_QWORD *)&v27 + 1) = v10;
  LOWORD(v27) = v15;
  if ( (dword_140C31E20 & 3) == 0 && byte_140C548B0 == 1 )
  {
    v16 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql < 0xCu )
    {
      v18 = KeGetCurrentIrql();
      __writecr8(0xCuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && v18 <= 0xFu )
        {
          v19 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v19 + 20) |= (-1 << (v18 + 1)) & 0x1FFC;
        }
      }
    }
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140CF6640);
    Count = (struct _EX_RUNDOWN_REF *)off_140C04340;
    if ( off_140C04340 != (_UNKNOWN *)&off_140C04340 )
    {
      do
      {
        if ( sub_140347810(Count - 2) )
        {
          ExReleaseSpinLockSharedFromDpcLevel(&dword_140CF6640);
          if ( v16 )
            sub_1402AD030(v16 + 1);
          v16 = Count - 3;
          sub_14042A5E0(&v27, a2);
          ExAcquireSpinLockSharedAtDpcLevel(&dword_140CF6640);
          Count = (struct _EX_RUNDOWN_REF *)Count->Count;
        }
        else
        {
          Count = (struct _EX_RUNDOWN_REF *)Count->Count;
        }
      }
      while ( Count != (struct _EX_RUNDOWN_REF *)&off_140C04340 );
    }
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140CF6640);
    if ( v16 )
      sub_1402AD030(v16 + 1);
    if ( CurrentIrql < 0xCu )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v22 = *((_QWORD *)CurrentPrcb + 4375);
          v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v24 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
          *(_DWORD *)(v22 + 20) &= v23;
          if ( v24 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
    }
  }
  result = sub_140429810(&v27, a2, a3);
  if ( (_DWORD)result == -2147483645 && a6 == 1 )
  {
    DbgBreakPointWithStatus(1u);
    return 0LL;
  }
  return result;
}
