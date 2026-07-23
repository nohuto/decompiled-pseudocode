/*
 * XREFs of sub_140378DD0 @ 0x140378DD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14024B6F8 @ 0x14024B6F8 (sub_14024B6F8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140378DD0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // r10
  unsigned __int8 CurrentIrql; // bl
  _BYTE *v8; // rdx
  unsigned int v9; // r15d
  __int64 v10; // r8
  __int64 v11; // r10
  unsigned __int64 v12; // r10
  __int64 v13; // r12
  _QWORD *v14; // r11
  char *v15; // rcx
  char v16; // al
  unsigned int v17; // edi
  unsigned int v18; // r14d
  char v19; // r8
  char v20; // r9
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 result; // rax
  __int64 v25; // r9
  unsigned __int8 v26; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v28; // r8
  int v29; // eax
  bool v30; // zf
  _DWORD v31[4]; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 retaddr; // [rsp+68h] [rbp+28h] BYREF

  sub_14024B6F8();
  v6 = *a4;
  *(_QWORD *)(a1 + 72) = a1 ^ *a4 ^ retaddr;
  *(_QWORD *)(a1 + 56) = v6 ^ (unsigned __int64)&retaddr;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v25 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v25 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  retaddr = 0LL;
  v8 = v31;
  v9 = 16;
  v10 = 16LL;
  v11 = *(_QWORD *)(v6 + 32) ^ *(_QWORD *)(v6 + 64);
  v31[0] = 51251211;
  v31[1] = 201785869;
  v12 = v11 | 0xFFFF800000000000uLL;
  v31[2] = 251986182;
  v31[3] = 150995978;
  v13 = __ROR8__(v12, v12 & 0x3F);
  v14 = (_QWORD *)v12;
  v15 = (char *)v31;
  do
  {
    v16 = *v15++;
    *v8++ = v16 ^ 0xB;
    --v10;
  }
  while ( v10 );
  v17 = 0;
  v18 = 25;
  do
  {
    v19 = (*v14 ^ 9) & 0x3F;
    v20 = ~(unsigned __int8)*v14 & 0x3F;
    *v14 = v12 + (qword_140D06E28 ^ _byteswap_uint64(v13 ^ __ROL8__(qword_140D06CC8 ^ *v14, qword_140D06CC8))) + v17;
    v13 = (v12 + __ROL8__(__ROR8__(v17 ^ (unsigned __int64)(200 - v17), v20) ^ v13, v19)) ^ 0x8D806955;
    v21 = v9;
    do
    {
      v22 = __ROL8__(*v14, 4);
      *v14 = *((unsigned __int8 *)v31 + (v22 & 0xF)) | v22 & 0xFFFFFFFFFFFFFFF0uLL;
      --v21;
    }
    while ( v21 );
    ++v14;
    if ( ++v17 == 25 )
    {
      if ( *(_QWORD *)v12 != 0x85131481131482ELL )
      {
        *(v14 - 1) ^= *(_QWORD *)v12 ^ 0x85131481131482ELL;
        v18 += *((_DWORD *)v14 - 1);
        *(v14 - 1) ^= *(_QWORD *)v12 ^ 0x85131481131482ELL;
      }
      v9 = 1;
    }
  }
  while ( v17 < v18 );
  v23 = *(_QWORD *)v12 ^ 0x85131481131482ELL;
  *(_DWORD *)v12 = -1390710795;
  *(_DWORD *)v12 ^= 0xBC2A27DB;
  sub_14042A5E0(v12, v23);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v26 = KeGetCurrentIrql();
      if ( v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v28 = *((_QWORD *)CurrentPrcb + 4375);
        v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v30 = (v29 & *(_DWORD *)(v28 + 20)) == 0;
        *(_DWORD *)(v28 + 20) &= v29;
        if ( v30 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
