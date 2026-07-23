/*
 * XREFs of sub_140A67A68 @ 0x140A67A68
 * Callers:
 *     sub_140A65D84 @ 0x140A65D84 (sub_140A65D84.c)
 *     sub_140A66300 @ 0x140A66300 (sub_140A66300.c)
 *     sub_140A666B0 @ 0x140A666B0 (sub_140A666B0.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14055BFA8 @ 0x14055BFA8 (sub_14055BFA8.c)
 *     sub_14055C058 @ 0x14055C058 (sub_14055C058.c)
 *     sub_14055C23C @ 0x14055C23C (sub_14055C23C.c)
 *     sub_140A66DB4 @ 0x140A66DB4 (sub_140A66DB4.c)
 */

char __fastcall sub_140A67A68(__int64 *a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  __int64 v7; // r9
  __int64 v8; // r9
  unsigned __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // eax
  bool v14; // zf
  int v15; // eax
  __int64 v17; // [rsp+30h] [rbp-10h] BYREF
  __int64 v18; // [rsp+60h] [rbp+20h] BYREF
  __int64 v19; // [rsp+70h] [rbp+30h] BYREF
  __int64 v20; // [rsp+78h] [rbp+38h] BYREF

  v17 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  v6 = *a1;
  sub_140A66DB4((volatile __int32 *)a1, 5LL, &v18, a4);
  sub_140A66DB4((volatile __int32 *)a1, 8LL, &v19, v7);
  if ( (*(_DWORD *)(v6 + 80) & 0x100) == 0 )
    sub_140A66DB4((volatile __int32 *)a1, 6LL, &v20, v8);
  byte_140C22260 = 0;
  sub_140A66DB4((volatile __int32 *)a1, 0xFFFFFFFFLL, &v17, v8);
  KeRevertToUserGroupAffinityThread((PGROUP_AFFINITY)a1 + 6);
  if ( a2 == 1 )
  {
    v9 = *((unsigned __int8 *)a1 + 88);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = *((_QWORD *)CurrentPrcb + 4375);
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
          *(_DWORD *)(v12 + 20) &= v13;
          if ( v14 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
  }
  sub_14055C23C();
  *((_DWORD *)a1 + 2) &= ~1u;
  sub_14055BFA8();
  v15 = *(_DWORD *)(v6 + 80);
  if ( (v15 & 0x80u) != 0 )
    LOBYTE(v15) = sub_14055C058((const GUID *)*a1, v17, v20, v19, v18);
  return v15;
}
