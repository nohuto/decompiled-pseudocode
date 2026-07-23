/*
 * XREFs of sub_140509344 @ 0x140509344
 * Callers:
 *     sub_140A53294 @ 0x140A53294 (sub_140A53294.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     sub_140252380 @ 0x140252380 (sub_140252380.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140509344(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // esi
  _QWORD *v3; // rax
  __int64 v4; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  __int64 *v8; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf
  __int64 v14; // [rsp+48h] [rbp+20h] BYREF

  v14 = 0LL;
  v2 = sub_140252380(a1, &v14);
  if ( v2 >= 0 )
  {
    v3 = (_QWORD *)sub_1403B1F04(v1, 40LL);
    v4 = (__int64)v3;
    if ( !v3 )
      return 3221225626LL;
    *v3 = 0LL;
    v3[1] = 0LL;
    v6 = v14;
    *(_QWORD *)(v4 + 16) = v14;
    *(_QWORD *)(v4 + 24) = v6;
    *(_DWORD *)(v4 + 36) = 2;
    *(_DWORD *)(v4 + 32) = 1;
    v7 = sub_140252344(&qword_140C4AD90);
    v8 = (__int64 *)qword_140C4AD88;
    if ( *(__int64 **)qword_140C4AD88 != &qword_140C4AD80 )
      __fastfail(3u);
    *(_QWORD *)v4 = &qword_140C4AD80;
    *(_QWORD *)(v4 + 8) = v8;
    *v8 = v4;
    qword_140C4AD88 = v4;
    KeReleaseSpinLockFromDpcLevel(&qword_140C4AD90);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v11 = *((_QWORD *)CurrentPrcb + 4375);
          v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
          *(_DWORD *)(v11 + 20) &= v12;
          if ( v13 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
  }
  return (unsigned int)v2;
}
