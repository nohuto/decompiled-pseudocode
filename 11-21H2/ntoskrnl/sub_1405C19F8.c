/*
 * XREFs of sub_1405C19F8 @ 0x1405C19F8
 * Callers:
 *     sub_140598DA4 @ 0x140598DA4 (sub_140598DA4.c)
 *     sub_1405C2A4C @ 0x1405C2A4C (sub_1405C2A4C.c)
 *     sub_1405C3044 @ 0x1405C3044 (sub_1405C3044.c)
 * Callees:
 *     sub_1402C38D0 @ 0x1402C38D0 (sub_1402C38D0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405C19F8(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  unsigned int j; // ebx
  __int64 result; // rax
  volatile signed __int32 **v8; // rcx
  volatile signed __int32 *v9; // rsi
  _QWORD *v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // r12
  __int64 v16; // rdx
  unsigned __int64 v17; // r11
  volatile signed __int32 *v18; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v20; // r15d
  volatile signed __int32 **v21; // rdi
  volatile signed __int32 *v22; // rax
  unsigned __int8 v23; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v25; // eax
  bool v26; // zf
  unsigned int i; // [rsp+30h] [rbp-88h]
  unsigned __int64 v28; // [rsp+38h] [rbp-80h]
  int v29; // [rsp+C0h] [rbp+8h] BYREF
  int v30; // [rsp+C8h] [rbp+10h]
  unsigned int v31; // [rsp+D0h] [rbp+18h]
  unsigned int v32; // [rsp+D8h] [rbp+20h]

  v30 = a2;
  v4 = a2 - 1;
  for ( i = a2 - 1; ; v4 = i )
  {
    for ( j = v4; ; --j )
    {
      result = 3LL * j;
      v8 = (volatile signed __int32 **)(a1 + 24LL * j);
      v9 = *v8;
      if ( *v8 != (volatile signed __int32 *)v8 )
        break;
      if ( !j )
        return result;
    }
    v10 = (_QWORD *)(a1 + 24LL * j);
    --v10[2];
    v11 = *(_QWORD *)v9;
    if ( *((_QWORD **)v9 + 1) != v10 || *(volatile signed __int32 **)(v11 + 8) != v9 )
LABEL_37:
      __fastfail(3u);
    v12 = qword_14001C780[j];
    *v10 = v11;
    *(_QWORD *)(v11 + 8) = v10;
    v13 = v12;
    if ( j == 1 )
    {
      sub_1402C38D0(
        *(_QWORD *)(qword_140C51F48 + 8 * ((*((_QWORD *)v9 + 5) >> 43) & 0x3FFLL)),
        0xAAAAAAAAAAAAAAABuLL * ((__int64)(v9 + 0x88000000000LL) >> 4),
        v12,
        0,
        1);
      v13 = qword_14001C780[1];
    }
    v14 = j + 1;
    v15 = qword_14001C780[v14];
    v16 = v13 % v15;
    v32 = j + 1;
    v28 = v13 / v15;
    v17 = v13 / v15;
    v31 = 2 - j;
    v18 = &v9[12 * v12];
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      v16 = (-1LL << (CurrentIrql + 1)) & 4;
      a3 = (unsigned int)v16 | *(_DWORD *)(a4 + 20);
      *(_DWORD *)(a4 + 20) = a3;
    }
    v20 = 0;
    if ( v17 )
    {
      v21 = (volatile signed __int32 **)(a1 + 24 * v14);
      do
      {
        v29 = 0;
        v18 -= 12 * v15;
        if ( _interlockedbittestandset64(v18 + 6, 0x3FuLL) )
        {
          do
          {
            do
              sub_1402F32E0(&v29, v16, a3, a4);
            while ( *((__int64 *)v18 + 3) < 0 );
          }
          while ( _interlockedbittestandset64(v18 + 6, 0x3FuLL) );
          v17 = v28;
        }
        if ( v15 == 1 )
          *((_QWORD *)v18 + 5) &= ~0x10000000000uLL;
        else
          *((_BYTE *)v18 + 36) ^= (v31 ^ *((_BYTE *)v18 + 36)) & 3;
        if ( v18 != v9 )
        {
          *((_BYTE *)v18 + 34) = *((_BYTE *)v18 + 34) & 0xF8 | 5;
          *((_QWORD *)v18 + 2) = *((_QWORD *)v9 + 2);
        }
        _InterlockedAnd64((volatile signed __int64 *)v18 + 3, 0x7FFFFFFFFFFFFFFFuLL);
        v22 = *v21;
        if ( *((volatile signed __int32 ***)*v21 + 1) != v21 )
          goto LABEL_37;
        *(_QWORD *)v18 = v22;
        ++v20;
        *((_QWORD *)v18 + 1) = v21;
        *((_QWORD *)v22 + 1) = v18;
        *v21 = v18;
        v21[2] = (volatile signed __int32 *)((char *)v21[2] + 1);
      }
      while ( v20 < v17 );
      LODWORD(v14) = v32;
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v23 = KeGetCurrentIrql();
        if ( v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          a4 = *((_QWORD *)CurrentPrcb + 4375);
          v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v26 = (v25 & *(_DWORD *)(a4 + 20)) == 0;
          a3 = (unsigned int)v25 & *(_DWORD *)(a4 + 20);
          *(_DWORD *)(a4 + 20) = a3;
          if ( v26 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( (_DWORD)v14 == v30 )
      break;
  }
  return result;
}
