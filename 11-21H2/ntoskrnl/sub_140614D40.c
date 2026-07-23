/*
 * XREFs of sub_140614D40 @ 0x140614D40
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

__int64 __fastcall sub_140614D40(PKSPIN_LOCK SpinLock, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rax
  __int64 *i; // rbx
  __int64 v12; // rdx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  bool v16; // zf
  _QWORD **v17; // rdi
  _QWORD *j; // rbx
  __int128 v19; // [rsp+20h] [rbp-28h] BYREF
  PKSPIN_LOCK v20; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = a2;
  v19 = 0LL;
  v20 = 0LL;
  v6 = sub_140604844(286);
  if ( !v6 )
    goto LABEL_18;
  if ( dword_140C1B2A0
    && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (v5 = HIDWORD(qword_140D01450), (qword_140D01450 & 0x200000000LL) != 0))
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v6 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v9 = *((_DWORD *)v6 + 3);
  if ( (v9 & 0x18) == 0 )
  {
    if ( (v9 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v10 = sub_140628C98(v5, v4, v7, v8);
    goto LABEL_12;
  }
  v10 = retaddr;
LABEL_12:
  *(_QWORD *)&v19 = v10;
LABEL_13:
  v20 = SpinLock;
  BYTE8(v19) = v2;
  for ( i = (__int64 *)v6[4]; i != v6 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(&v19, v4);
  }
LABEL_18:
  KeReleaseSpinLockFromDpcLevel(SpinLock);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = -1LL << ((unsigned __int8)v2 + 1);
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)v12;
        v16 = ((unsigned int)result & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= result;
        if ( v16 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  if ( v6 )
  {
    v17 = (_QWORD **)(v6 + 6);
    for ( j = *v17; j != v17; j = (_QWORD *)*j )
    {
      result = (__int64)(j - 2);
      if ( j != (_QWORD *)16 )
        result = sub_14042A5E0(&v19, v12);
    }
  }
  return result;
}
