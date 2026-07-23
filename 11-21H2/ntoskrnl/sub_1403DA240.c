/*
 * XREFs of sub_1403DA240 @ 0x1403DA240
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14085CD6C @ 0x14085CD6C (sub_14085CD6C.c)
 *     sub_14085CDA0 @ 0x14085CDA0 (sub_14085CDA0.c)
 *     sub_14085CEF8 @ 0x14085CEF8 (sub_14085CEF8.c)
 *     sub_14085CF58 @ 0x14085CF58 (sub_14085CF58.c)
 *     sub_140998888 @ 0x140998888 (sub_140998888.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_1403DA240(__int64 a1, __int64 a2)
{
  int v2; // r15d
  int v3; // r14d
  char v4; // r12
  char v5; // bp
  char v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // edi
  unsigned int v10; // esi
  unsigned __int64 v11; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf
  char v18; // [rsp+68h] [rbp+10h]
  unsigned int v19; // [rsp+70h] [rbp+18h] BYREF
  unsigned int v20; // [rsp+78h] [rbp+20h] BYREF

  v19 = 0;
  v20 = 0;
  sub_140A48330(a1, a2);
  while ( 1 )
  {
    v2 = dword_140C5AE20;
    v3 = dword_140C5AE1C;
    v4 = 0;
    v18 = 0;
    v5 = 0;
    v6 = 0;
    sub_14085CD6C(&v20, &v19);
    v9 = v20;
    if ( v20 == v2 )
      goto LABEL_6;
    if ( v2 == 2 )
    {
      v6 = 1;
    }
    else if ( v20 != 2 )
    {
      goto LABEL_6;
    }
    v5 = 1;
    if ( byte_140C1F8F8 && qword_140C5AD90 )
    {
      LOBYTE(v8) = 1;
      v18 = 1;
      sub_140998888(v8);
    }
LABEL_6:
    v10 = v19;
    if ( v19 != v3 )
    {
      v4 = 1;
      v11 = KeAcquireSpinLockRaiseToDpc(&qword_140C22F88);
      dword_140C5AE1C = v10;
      if ( byte_140C22480[0] && !dword_140C224AC )
        dword_140C224AC = v10;
      KeReleaseSpinLockFromDpcLevel(&qword_140C22F88);
      v8 = (unsigned int)dword_140D06B08;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v8 = (unsigned int)(v11 + 1);
            v7 = -1LL << ((unsigned __int8)v11 + 1);
            v15 = *((_QWORD *)CurrentPrcb + 4375);
            v16 = ~(unsigned __int16)v7;
            v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
            *(_DWORD *)(v15 + 20) &= v16;
            if ( v17 )
              sub_140418E4C(CurrentPrcb);
            v9 = v20;
            v10 = v19;
          }
        }
      }
      __writecr8(v11);
    }
    if ( v9 != v2 )
    {
      v4 = 1;
      dword_140C5AE20 = v9;
      sub_14085CF58();
    }
    if ( v5 )
    {
      LOBYTE(v8) = v6;
      sub_14085CEF8(v8);
      if ( v18 )
        sub_140998888(0LL);
    }
    if ( !v4 )
      break;
    if ( byte_140C5AE14 )
      sub_14085CDA0(v9, v10);
    else
      byte_140C1F824 = 1;
  }
  _InterlockedExchange(&dword_140C1F8E8, 0);
  return sub_140A47CF8(v8, v7);
}
