/*
 * XREFs of sub_14050B600 @ 0x14050B600
 * Callers:
 *     <none>
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_14050B600(_QWORD *a1)
{
  __int64 v2; // rcx
  unsigned __int8 CurrentIrql; // di
  __int64 v4; // r9
  _QWORD *v5; // rcx
  void **v6; // rax
  __int64 v7; // rsi
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v10; // r9
  int v11; // eax
  bool v12; // zf
  __int64 v13; // rcx
  _GROUP_AFFINITY v14; // [rsp+20h] [rbp-48h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  v14 = 0LL;
  PreviousAffinity = 0LL;
  if ( a1 != (_QWORD *)&unk_140C4D060 )
  {
    v2 = *((unsigned int *)a1 + 4);
    *(_DWORD *)v14.Reserved = 0;
    v14.Reserved[2] = 0;
    LODWORD(v2) = dword_140D0E5E0[v2];
    *(_DWORD *)&v14.Group = (unsigned __int16)((unsigned int)v2 >> 6);
    v14.Mask = 1LL << (v2 & 0x3F);
    KeSetSystemGroupAffinityThread(&v14, &PreviousAffinity);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v4 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    v5 = (_QWORD *)*a1;
    v6 = (void **)a1[1];
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || *v6 != a1 )
      __fastfail(3u);
    *v6 = v5;
    v7 = 0LL;
    for ( v5[1] = v6; (unsigned int)v7 < *((_DWORD *)a1 + 5); v7 = (unsigned int)(v7 + 1) )
      sub_14042A5E0(LODWORD(a1[5 * v7 + 5]), &a1[5 * v7 + 6]);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v8 = KeGetCurrentIrql();
        if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = *((_QWORD *)CurrentPrcb + 4375);
          v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
          *(_DWORD *)(v10 + 20) &= v11;
          if ( v12 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    sub_1403B1B5C(v13, (__int64)a1);
  }
}
