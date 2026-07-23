/*
 * XREFs of sub_14045C0E8 @ 0x14045C0E8
 * Callers:
 *     sub_14059B62C @ 0x14059B62C (sub_14059B62C.c)
 * Callees:
 *     sub_14028C14C @ 0x14028C14C (sub_14028C14C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045BFE4 @ 0x14045BFE4 (sub_14045BFE4.c)
 */

unsigned __int64 sub_14045C0E8(__int64 a1, ULONG_PTR a2, unsigned __int64 a3, ...)
{
  __int64 v3; // r9
  _DWORD *v4; // r14
  int *v5; // r15
  int v6; // esi
  unsigned __int64 v7; // rbx
  ULONG_PTR v9; // rax
  __int64 v10; // rdi
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v13; // bl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf
  __int64 v18; // [rsp+20h] [rbp-28h]
  __int64 v19; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  __int64 v21; // [rsp+70h] [rbp+28h]
  int *v22; // [rsp+78h] [rbp+30h]
  _DWORD *v23; // [rsp+80h] [rbp+38h]
  va_list va1; // [rsp+88h] [rbp+40h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v19 = va_arg(va1, _QWORD);
  v3 = v19;
  v21 = va_arg(va1, _QWORD);
  v22 = va_arg(va1, int *);
  v23 = va_arg(va1, _DWORD *);
  v4 = v23;
  v5 = v22;
  v6 = 0;
  LOBYTE(v19) = 0;
  v7 = a3;
  *v23 = 1;
  v9 = sub_14045BFE4(a1, a2, a3, v3, v18, (__int64 *)va);
  v10 = v9;
  if ( v9 )
  {
    *v4 = sub_14028C14C(v9, 0);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v13 = v19;
      if ( (unsigned __int8)v19 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        v13 = v19;
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
        v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= v16;
        if ( v17 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    else
    {
      v13 = v19;
    }
    __writecr8(v13);
    if ( *v4 )
      goto LABEL_8;
  }
  else if ( (unsigned int)*v5 <= 0x1F )
  {
    if ( qword_140C50780 )
    {
      if ( (v7 & 0x10) == 0 )
        v7 &= ~qword_140C50780;
    }
    if ( !_bittest64(*(const signed __int64 **)(a1 + 8), HIDWORD(v7)) )
    {
      v10 = qword_140C53270;
      v6 = *v5 + 1;
LABEL_8:
      *v5 = v6;
      return 0xAAAAAAAAAAAAAAABuLL * ((v10 + 0x220000000000LL) >> 4);
    }
  }
  return -1LL;
}
