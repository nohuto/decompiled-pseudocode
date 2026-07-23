/*
 * XREFs of sub_140616320 @ 0x140616320
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

unsigned __int8 __fastcall sub_140616320(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbp
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // rax
  __int64 *i; // rdi
  unsigned __int8 CurrentIrql; // r11
  struct _KPRCB *CurrentPrcb; // rax
  __int64 *v12; // rdi
  __int64 *v13; // rbx
  __int128 v15; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = a1;
  v15 = 0LL;
  v4 = sub_140604844(311);
  if ( !v4 )
    goto LABEL_18;
  if ( dword_140C1B2A0
    && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (v3 = HIDWORD(qword_140D01450), (qword_140D01450 & 0x200000000LL) != 0))
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v4 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v7 = *((_DWORD *)v4 + 3);
  if ( (v7 & 0x18) == 0 )
  {
    if ( (v7 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v8 = sub_140628C98(v3, v2, v5, v6);
    goto LABEL_12;
  }
  v8 = retaddr;
LABEL_12:
  *(_QWORD *)&v15 = v8;
LABEL_13:
  BYTE8(v15) = v1;
  for ( i = (__int64 *)v4[4]; i != v4 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(&v15, v2);
  }
LABEL_18:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(v1);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v1 - 2) <= 0xDu )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v2 = (unsigned int)(1LL << ((unsigned __int8)v1 + 1)) - 1;
    *(_DWORD *)(*((_QWORD *)CurrentPrcb + 4375) + 20LL) |= v2 & ~((1LL << (CurrentIrql + 1)) - 1) & 0xFFFFFFFC;
  }
  BYTE9(v15) = CurrentIrql;
  if ( v4 )
  {
    v12 = v4 + 6;
    v13 = (__int64 *)v4[6];
    if ( v13 != v12 )
    {
      do
      {
        if ( v13 != (__int64 *)16 )
          sub_14042A5E0(&v15, v2);
        v13 = (__int64 *)*v13;
      }
      while ( v13 != v12 );
      return BYTE9(v15);
    }
  }
  return CurrentIrql;
}
