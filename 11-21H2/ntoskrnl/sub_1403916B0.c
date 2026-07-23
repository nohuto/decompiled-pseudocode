/*
 * XREFs of sub_1403916B0 @ 0x1403916B0
 * Callers:
 *     sub_1403BACF8 @ 0x1403BACF8 (sub_1403BACF8.c)
 *     sub_140A50388 @ 0x140A50388 (sub_140A50388.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     sub_140252380 @ 0x140252380 (sub_140252380.c)
 *     sub_1403B07C8 @ 0x1403B07C8 (sub_1403B07C8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_1403916B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  bool v4; // sf
  __int64 v5; // rdx
  __int64 CurrentIrql; // rcx
  int v7; // eax
  unsigned int v8; // eax
  unsigned __int8 v9; // al
  __int64 v10; // r8
  unsigned __int64 v11; // rdi
  int v12; // ebx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // eax
  bool v16; // zf
  __int64 v17; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v18[2]; // [rsp+48h] [rbp-38h] BYREF
  int v19; // [rsp+50h] [rbp-30h] BYREF
  __int64 v20; // [rsp+54h] [rbp-2Ch]
  int v21; // [rsp+5Ch] [rbp-24h]
  __int128 *v22; // [rsp+60h] [rbp-20h]
  __int128 v23; // [rsp+68h] [rbp-18h] BYREF

  v2 = qword_140C4E4D0;
  v21 = 0;
  v17 = 0LL;
  v20 = 0LL;
  v23 = 0LL;
  if ( qword_140C4E4D0 && (int)sub_14042A5E0(*(_QWORD *)(qword_140C4E4D0 + 72), a2) >= 0 )
  {
    if ( (*(_DWORD *)(v2 + 184) & 0x10) != 0 )
    {
      LOBYTE(v3) = 1;
      v4 = (int)sub_14042A5E0(*(_QWORD *)(v2 + 72), v3) < 0;
    }
    else
    {
      v7 = *(_DWORD *)(v2 + 224);
      if ( (v7 & 0x200) != 0 )
      {
        if ( (int)sub_140252380(*(unsigned int *)(v2 + 88), &v17) < 0 )
          return;
      }
      else if ( (v7 & 0x100) != 0 )
      {
        v8 = *(_DWORD *)(v2 + 84);
        if ( v8 >= 8 )
        {
          LODWORD(v17) = 45057;
          v8 -= 8;
        }
        else
        {
          LODWORD(v17) = 45056;
        }
        HIDWORD(v17) = v8;
      }
      v18[0] = -1;
      v22 = &v23;
      v19 = 3;
      v18[1] = 1;
      v9 = sub_140252344(&qword_140C4BEE8);
      LOBYTE(v10) = 15;
      v11 = v9;
      v12 = sub_1403B07C8(&v17, 212LL, v10, *(unsigned int *)(v2 + 96), *(_DWORD *)(v2 + 92), &v19, v18);
      KeReleaseSpinLockFromDpcLevel(&qword_140C4BEE8);
      CurrentIrql = (unsigned int)dword_140D06B08;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (unsigned __int8)CurrentIrql <= 0xFu
            && (unsigned __int8)v11 <= 0xFu
            && (unsigned __int8)CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            CurrentIrql = (unsigned int)(v11 + 1);
            v5 = -1LL << ((unsigned __int8)v11 + 1);
            v14 = *((_QWORD *)CurrentPrcb + 4375);
            v15 = ~(unsigned __int16)v5;
            v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
            *(_DWORD *)(v14 + 20) &= v15;
            if ( v16 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v11);
      v4 = v12 < 0;
    }
    if ( !v4 )
      sub_14042A5E0(CurrentIrql, v5);
  }
}
