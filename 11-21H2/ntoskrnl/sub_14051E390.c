/*
 * XREFs of sub_14051E390 @ 0x14051E390
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_1403DEA70 @ 0x1403DEA70 (sub_1403DEA70.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14051E1B8 @ 0x14051E1B8 (sub_14051E1B8.c)
 */

__int64 __fastcall sub_14051E390(unsigned __int64 a1, __int64 a2, int a3)
{
  int v5; // ebx
  _QWORD *v6; // rcx
  unsigned __int64 v7; // rsi
  unsigned int v8; // eax
  int v9; // eax
  void *v10; // rax
  void *v11; // rdi
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r9
  __int64 v14; // r8
  int v15; // eax
  bool v16; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rcx
  int v23; // r9d
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rdx
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  int v29; // eax
  __int64 v30; // r8
  int v31; // [rsp+30h] [rbp-59h] BYREF
  __int64 v32; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int64 v33; // [rsp+40h] [rbp-49h] BYREF
  __int64 v34; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35[2]; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v36; // [rsp+70h] [rbp-19h]
  __int64 v37; // [rsp+78h] [rbp-11h]
  unsigned __int64 *v38; // [rsp+80h] [rbp-9h]
  __int64 v39; // [rsp+88h] [rbp-1h]
  __int64 *v40; // [rsp+90h] [rbp+7h]
  __int64 v41; // [rsp+98h] [rbp+Fh]
  __int64 *v42; // [rsp+A0h] [rbp+17h]
  __int64 v43; // [rsp+A8h] [rbp+1Fh]

  LOWORD(v31) = 0;
  if ( (unsigned int)dword_140C04538 > 5 && sub_1402A2000((__int64)&dword_140C04538, 0x400000000000LL) )
  {
    v32 = 0x1000000LL;
    v36 = &v32;
    v37 = 8LL;
    sub_14020A9C4((__int64)&dword_140C04538, (unsigned __int8 *)word_14002843A, 0LL, 0LL, 3u, v35);
  }
  sub_14051E1B8(a1);
  if ( a3 == -1 )
    return 0;
  v5 = sub_1403DEA70(a3, (unsigned __int16 *)&v31);
  if ( v5 < 0 )
    goto LABEL_21;
  v7 = ExAcquireSpinLockExclusive(&dword_140C4ACC0);
  v8 = 0;
  if ( dword_140C4ACE0 )
  {
    v6 = Base;
    while ( *v6 != a1 )
    {
      ++v8;
      v6 += 2;
      if ( v8 >= dword_140C4ACE0 )
        goto LABEL_11;
    }
    LOWORD(v31) = *((_WORD *)Base + 8 * v8 + 4);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4ACC0);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v20 = *((_QWORD *)CurrentPrcb + 4375);
          v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v16 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
          *(_DWORD *)(v20 + 20) &= v21;
          if ( v16 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    if ( *(_DWORD *)(*(_QWORD *)(qword_140C4AD18 + 24) + 4LL * (unsigned __int16)v31) == a3 )
      return 0;
    v5 = -1073741800;
    goto LABEL_21;
  }
LABEL_11:
  v9 = dword_140C4AD00;
  if ( dword_140C4ACE0 >= (unsigned int)dword_140C4AD00 )
  {
    dword_140C4AD00 += 5;
    v10 = (void *)sub_1403B1F04((__int64)v6, (unsigned int)(16 * (v9 + 6)));
    v11 = v10;
    if ( !v10 )
    {
      dword_140C4AD00 -= 5;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4ACC0);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v12 = KeGetCurrentIrql();
          if ( v12 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v12 >= 2u )
          {
            v13 = KeGetCurrentPrcb();
            v14 = *((_QWORD *)v13 + 4375);
            v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
            *(_DWORD *)(v14 + 20) &= v15;
            if ( v16 )
              sub_140418E4C((__int64)v13);
          }
        }
      }
      __writecr8(v7);
      v5 = -1073741670;
LABEL_21:
      if ( (unsigned int)dword_140C04538 > 5 && sub_1402A2000((__int64)&dword_140C04538, 0x400000000000LL) )
      {
        v31 = v5;
        v36 = (__int64 *)&v31;
        v37 = 4LL;
        v38 = &v33;
        v33 = a1;
        v40 = &v32;
        v39 = 8LL;
        v42 = &v34;
        LODWORD(v32) = a3;
        v41 = 4LL;
        v34 = 0x1000000LL;
        v43 = 8LL;
        sub_14020A9C4((__int64)&dword_140C04538, (unsigned __int8 *)word_1400283D2, 0LL, 0LL, 6u, v35);
      }
      return (unsigned int)v5;
    }
    memmove(v10, Base, 16LL * (unsigned int)dword_140C4ACE0);
    if ( byte_140C4ACD0 )
      sub_1403B1B5C(v22, (__int64)Base);
    byte_140C4ACD0 = 1;
    Base = v11;
  }
  v23 = dword_140C4ACE0;
  v24 = (unsigned __int16)v31;
  v25 = 2LL * (unsigned int)dword_140C4ACE0;
  *((_QWORD *)Base + v25) = a1;
  *((_DWORD *)Base + 2 * v25 + 2) = v24;
  dword_140C4ACE0 = v23 + 1;
  qsort(Base, (unsigned int)(v23 + 1), 0x10uLL, (int (__cdecl *)(const void *, const void *))sub_1403DEC40);
  v26 = 2LL * (unsigned int)dword_140C4ACE0;
  *((_QWORD *)Base + 2 * (unsigned int)dword_140C4ACE0) = -1LL;
  *((_DWORD *)Base + 2 * v26 + 2) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4ACC0);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v27 = KeGetCurrentIrql();
      if ( v27 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v27 >= 2u )
      {
        v28 = KeGetCurrentPrcb();
        v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v30 = *((_QWORD *)v28 + 4375);
        v16 = (v29 & *(_DWORD *)(v30 + 20)) == 0;
        *(_DWORD *)(v30 + 20) &= v29;
        if ( v16 )
          sub_140418E4C((__int64)v28);
      }
    }
  }
  __writecr8(v7);
  return (unsigned int)v5;
}
