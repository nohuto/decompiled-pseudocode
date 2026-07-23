/*
 * XREFs of sub_140508364 @ 0x140508364
 * Callers:
 *     sub_140251DC0 @ 0x140251DC0 (sub_140251DC0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140251FD8 @ 0x140251FD8 (sub_140251FD8.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     sub_140252380 @ 0x140252380 (sub_140252380.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405080D4 @ 0x1405080D4 (sub_1405080D4.c)
 *     sub_14050EEBC @ 0x14050EEBC (sub_14050EEBC.c)
 *     sub_14050EF38 @ 0x14050EF38 (sub_14050EF38.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 */

__int64 __fastcall sub_140508364(unsigned int *a1, int *a2, __int64 a3)
{
  int v3; // ebx
  int v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // edx
  ULONG_PTR *v10; // rsi
  int v11; // eax
  int v12; // eax
  unsigned __int64 v13; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  int v17; // eax
  bool v18; // zf
  __int64 v20; // [rsp+30h] [rbp-10h] BYREF
  __int64 v21; // [rsp+38h] [rbp-8h] BYREF
  char v22; // [rsp+68h] [rbp+28h] BYREF
  ULONG_PTR *v23; // [rsp+78h] [rbp+38h] BYREF

  v23 = 0LL;
  v3 = a3;
  v21 = 0LL;
  v20 = 0LL;
  v5 = *a2;
  v22 = 0;
  if ( v5 )
  {
    if ( v5 == 3 )
    {
      v6 = sub_14050EEBC(a2, a3);
      v7 = v6;
      if ( v6 < 0 )
        sub_14051E038(0, 37, v6, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 734);
      return v7;
    }
    return (unsigned int)-1073741811;
  }
  if ( !a1 )
    return (unsigned int)-1073741811;
  v8 = sub_1405080D4(*a1, &v23, &v20);
  if ( v8 < 0 )
  {
    sub_14051E038((_DWORD)v23, 18, v8, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 752);
    return (unsigned int)-1073741811;
  }
  v10 = v23;
  v11 = sub_14050EF38(*((_DWORD *)v23 + 60), v9, v20, v3, (__int64)&v22);
  v7 = v11;
  if ( v11 < 0 )
  {
    sub_14051E038((_DWORD)v10, 37, v11, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 767);
    return v7;
  }
  if ( v22 )
  {
    v12 = sub_140252380(*a1, &v21);
    if ( v12 < 0 )
    {
      sub_14051E038((_DWORD)v10, 18, v12, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 781);
      return (unsigned int)-1073741811;
    }
    v13 = sub_140252344(&qword_140C4BEE8);
    v7 = sub_140251FD8((__int64)v10, (__int64)&v21, v20);
    KeReleaseSpinLockFromDpcLevel(&qword_140C4BEE8);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v16 = *((_QWORD *)CurrentPrcb + 4375);
          v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
          *(_DWORD *)(v16 + 20) &= v17;
          if ( v18 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v13);
  }
  return v7;
}
