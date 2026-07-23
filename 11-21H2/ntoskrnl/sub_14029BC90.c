/*
 * XREFs of sub_14029BC90 @ 0x14029BC90
 * Callers:
 *     sub_140707E70 @ 0x140707E70 (sub_140707E70.c)
 * Callees:
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402CC7C0 @ 0x1402CC7C0 (sub_1402CC7C0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14029BC90(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned __int8 v6; // bl
  __int64 result; // rax
  __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf
  unsigned __int8 v14; // [rsp+38h] [rbp+10h] BYREF
  int v15; // [rsp+40h] [rbp+18h] BYREF

  v14 = 0;
  v4 = sub_1402CC7C0(a1, &v14, 0x80000000LL);
  memset((void *)(v4 + a2), 0, 4096 - a2);
  LOBYTE(v5) = 2;
  sub_1402BEDD0(v4, v5, 0x80000000LL);
  if ( (a2 & 0x1FF) != 0 )
  {
    v8 = 48 * a1 - 0x220000000000LL;
    v15 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v15);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    *(_BYTE *)(v8 + 34) |= 0x10u;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v6 = v14;
    if ( v14 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v11 = *((_QWORD *)CurrentPrcb + 4375);
      v6 = v14;
      v12 = ~(unsigned __int16)(-1LL << (v14 + 1));
      v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
      *(_DWORD *)(v11 + 20) &= v12;
      if ( v13 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  else
  {
    v6 = v14;
  }
  result = v6;
  __writecr8(v6);
  return result;
}
