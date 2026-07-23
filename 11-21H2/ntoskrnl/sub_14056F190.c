/*
 * XREFs of sub_14056F190 @ 0x14056F190
 * Callers:
 *     sub_1403AED64 @ 0x1403AED64 (sub_1403AED64.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14045A41A @ 0x14045A41A (sub_14045A41A.c)
 */

__int64 __fastcall sub_14056F190(int a1, unsigned int a2)
{
  unsigned int v3; // esi
  __int64 v4; // rbx
  KSPIN_LOCK *v5; // rdi
  __int64 v6; // rdx
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v8; // bl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r8
  int v11; // eax
  bool v12; // zf
  __int64 v14; // rax
  __int64 *v15; // rcx
  unsigned __int8 v16; // al
  unsigned __int8 v17; // bl
  struct _KPRCB *v18; // r10
  __int64 v19; // r8
  int v20; // eax
  unsigned __int8 v21; // [rsp+30h] [rbp+8h] BYREF

  v21 = 0;
  v3 = 0;
  v4 = (unsigned int)(a1 - 256);
  v5 = (KSPIN_LOCK *)(qword_140C2B0D8 + 48 * v4);
  sub_14045A41A(v5, &v21);
  v6 = qword_140C2B0D8 + 48 * v4;
  if ( *(_BYTE *)(v6 + 32) || (v14 = *(_QWORD *)(v6 + 40)) == 0 )
  {
    KeReleaseSpinLockFromDpcLevel(v5);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v8 = v21;
      if ( v21 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = *((_QWORD *)CurrentPrcb + 4375);
        v8 = v21;
        v11 = ~(unsigned __int16)(-1LL << (v21 + 1));
        v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= v11;
        if ( v12 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    else
    {
      v8 = v21;
    }
    __writecr8(v8);
    return 0LL;
  }
  else
  {
    v15 = (__int64 *)(v14 + 8);
    while ( (v15[12] & 1) != 0 )
    {
      v15 = (__int64 *)*v15;
      if ( v15 == (__int64 *)(v14 + 8) )
      {
        *(_BYTE *)(v6 + 32) = 1;
        goto LABEL_17;
      }
    }
    v3 = 296;
LABEL_17:
    KeReleaseSpinLockFromDpcLevel(v5);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v16 = KeGetCurrentIrql(), v16 <= 0xFu) )
    {
      v17 = v21;
      if ( v21 <= 0xFu && v16 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = *((_QWORD *)v18 + 4375);
        v17 = v21;
        v20 = ~(unsigned __int16)(-1LL << (v21 + 1));
        v12 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
        *(_DWORD *)(v19 + 20) &= v20;
        if ( v12 )
          sub_140418E4C((__int64)v18);
      }
    }
    else
    {
      v17 = v21;
    }
    __writecr8(v17);
    if ( !v3 )
      sub_14042A5E0(a2, 0LL);
    return v3;
  }
}
