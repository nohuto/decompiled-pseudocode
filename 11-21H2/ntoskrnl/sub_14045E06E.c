/*
 * XREFs of sub_14045E06E @ 0x14045E06E
 * Callers:
 *     sub_140307660 @ 0x140307660 (sub_140307660.c)
 *     sub_14045AAC0 @ 0x14045AAC0 (sub_14045AAC0.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14023B8E8 @ 0x14023B8E8 (sub_14023B8E8.c)
 *     sub_1405DC760 @ 0x1405DC760 (sub_1405DC760.c)
 */

char __fastcall sub_14045E06E(__int64 a1, signed int a2)
{
  bool v2; // bp
  char v3; // r15
  char v6; // si
  __int64 v7; // r14
  int v8; // eax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  signed int v11; // eax
  bool v12; // cl
  unsigned __int64 v13; // rax
  bool v14; // zf
  __int16 v16; // [rsp+30h] [rbp-8h]

  v2 = 0;
  v3 = 0;
  v6 = 1;
  if ( a2 == *(_DWORD *)(a1 + 34112) )
    return v6;
  v7 = *(_QWORD *)(a1 + 33976);
  if ( v7 && *(_BYTE *)(v7 + 125) )
  {
    v3 = 1;
    _disable();
    v2 = (v16 & 0x200) != 0;
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 128));
  }
  v8 = *(unsigned __int16 *)(a1 + 34120);
  if ( _bittest(&v8, a2) )
    goto LABEL_13;
  v9 = __rdtsc();
  v10 = v9 - *(_QWORD *)(a1 + 34096);
  v11 = *(_DWORD *)(a1 + 34112);
  v12 = a2 == 3 || v11 == 3;
  if ( a2 == 4 )
  {
    if ( v11 )
    {
LABEL_12:
      v13 = 2LL * *(_QWORD *)(a1 + 34104);
      *(_QWORD *)(a1 + 34096) = v9;
      *(_BYTE *)(a1 + 34061) = v10 >= v13;
LABEL_13:
      v14 = byte_140D06990 == 0;
      *(_DWORD *)(a1 + 34112) = a2;
      if ( v14 )
        sub_14023B8E8(a1, 1u, 0);
      else
        sub_1405DC760(a1);
      *(_BYTE *)(a1 + 236) = a2;
      goto LABEL_23;
    }
  }
  else if ( !a2 || a2 <= v11 && !v12 )
  {
    goto LABEL_12;
  }
  if ( v10 >= *(_QWORD *)(a1 + 34104) || *(_BYTE *)(a1 + 34061) )
    goto LABEL_12;
  v6 = 0;
LABEL_23:
  if ( v3 )
  {
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v7 + 128));
    if ( v2 )
      _enable();
  }
  return v6;
}
