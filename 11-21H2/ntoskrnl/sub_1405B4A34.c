/*
 * XREFs of sub_1405B4A34 @ 0x1405B4A34
 * Callers:
 *     sub_1405C20CC @ 0x1405C20CC (sub_1405C20CC.c)
 * Callees:
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402CC9A0 @ 0x1402CC9A0 (sub_1402CC9A0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405B4A34(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r8
  __int64 v5; // rdi
  unsigned __int8 v6; // si
  __int64 v7; // rbx
  __int64 v8; // rbx
  unsigned int v9; // r15d
  __int64 i; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  int v14; // eax
  bool v15; // zf
  int v17; // [rsp+60h] [rbp+18h] BYREF

  v17 = 0;
  v3 = 48 * a2 - 0x220000000000LL;
  sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((48 * a2) >> 4));
  v5 = 0LL;
  v6 = 17;
  v7 = v3;
  do
  {
    if ( v7 == v3 )
    {
      v6 = sub_1402F2700(v7);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      break;
    }
    v7 += 768LL;
    v5 = (unsigned int)(v5 + 1);
  }
  while ( (unsigned int)v5 < 0x20 );
  if ( (_DWORD)v5 == 32 )
  {
    v8 = v3 + 768;
    v9 = sub_1402CC9A0(a2, 2u, v4, 1, &v17);
  }
  else
  {
    v9 = 0;
    if ( !(_DWORD)v5 )
      return v9;
    v8 = v3;
  }
  for ( i = 768 * v5 + v3 - 768; ; i -= 768LL )
  {
    _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( i == v8 )
      break;
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = *((_QWORD *)CurrentPrcb + 4375);
        v14 = ~(unsigned __int16)(-1LL << (v6 + 1));
        v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
        *(_DWORD *)(v13 + 20) &= v14;
        if ( v15 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return v9;
}
