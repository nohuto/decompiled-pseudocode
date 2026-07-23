/*
 * XREFs of sub_1409965B0 @ 0x1409965B0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140369AB0 @ 0x140369AB0 (sub_140369AB0.c)
 *     sub_14039AD4C @ 0x14039AD4C (sub_14039AD4C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405D0EE4 @ 0x1405D0EE4 (sub_1405D0EE4.c)
 *     sub_1409964E4 @ 0x1409964E4 (sub_1409964E4.c)
 *     sub_1409967E4 @ 0x1409967E4 (sub_1409967E4.c)
 *     sub_140996A20 @ 0x140996A20 (sub_140996A20.c)
 *     sub_1409A07D0 @ 0x1409A07D0 (sub_1409A07D0.c)
 *     sub_1409A0958 @ 0x1409A0958 (sub_1409A0958.c)
 */

char __fastcall sub_1409965B0(PERESOURCE Resource)
{
  ULONG *p_ActiveEntries; // rdi
  __int64 v3; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v5; // rsi
  unsigned __int8 v6; // r14
  struct _LIST_ENTRY *Flink; // rax
  ULONG v8; // ecx
  OWNER_ENTRY OwnerEntry; // xmm0
  ULONG NumberOfSharedWaiters; // eax
  __int64 v11; // xmm1_8
  unsigned int Flink_high; // r15d
  unsigned int OwnerTable; // r12d
  struct _KTHREAD *v14; // rax
  int v16; // [rsp+30h] [rbp-29h] BYREF
  int v17; // [rsp+34h] [rbp-25h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-21h] BYREF
  __int128 v19; // [rsp+40h] [rbp-19h] BYREF
  __int128 v20; // [rsp+50h] [rbp-9h]
  OWNER_ENTRY v21; // [rsp+60h] [rbp+7h] BYREF
  __int64 v22; // [rsp+70h] [rbp+17h]
  ULONG v23; // [rsp+78h] [rbp+1Fh]

  p_ActiveEntries = &Resource[3].ActiveEntries;
  v22 = 0LL;
  v23 = 0;
  v21 = 0LL;
  v3 = MEMORY[0xFFFFF78000000008];
  CurrentThread = KeGetCurrentThread();
  v19 = 0LL;
  v20 = 0LL;
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(Resource, 1u);
  if ( ((__int64)Resource[1].SystemResourcesList.Flink & 4) != 0
    && (p_ActiveEntries[45] & 2) != 0
    && (unsigned __int64)(v3 - *((_QWORD *)p_ActiveEntries + 23)) >= 0x1312D00 )
  {
    ++LODWORD(Resource[6].OwnerTable);
    v17 = 0;
    v18 = 0LL;
    v16 = 0;
    sub_14039AD4C((__int64)&v19);
    sub_140996A20((_DWORD)Resource, v3, (unsigned int)&v19, (unsigned int)&v17, (__int64)&v18, (__int64)&v16);
    v5 = 0LL;
    v6 = 0;
    if ( (_QWORD)v20 != -1LL )
    {
      Flink = Resource[6].SystemResourcesList.Flink;
      if ( Flink != (struct _LIST_ENTRY *)-1LL )
      {
        v6 = 1;
        v5 = v20 - (_QWORD)Flink;
      }
    }
    v8 = p_ActiveEntries[45];
    if ( (v8 & 4) == 0 )
    {
      OwnerEntry = Resource[5].OwnerEntry;
      NumberOfSharedWaiters = Resource[5].NumberOfSharedWaiters;
      v11 = *(_QWORD *)&Resource[5].ActiveEntries;
      Flink_high = HIDWORD(Resource[1].SystemResourcesList.Flink);
      OwnerTable = (unsigned int)Resource[6].OwnerTable;
      p_ActiveEntries[45] = v8 | 4;
      v21 = OwnerEntry;
      v23 = NumberOfSharedWaiters;
      v22 = v11;
      sub_1409967E4(p_ActiveEntries);
      ExReleaseResourceLite(Resource);
      sub_1402F9540((__int64)KeGetCurrentThread());
      if ( v16 )
      {
        if ( !v17 && sub_140369AB0() )
          sub_1409A07D0(&v21, Flink_high);
      }
      else if ( !qword_140C54198 )
      {
        sub_1409A0958(&v21, Flink_high, OwnerTable);
      }
      sub_1405D0EE4(v6, v18, v5);
      if ( v6 )
        sub_1409964E4(v5, v18);
      v14 = KeGetCurrentThread();
      --*((_WORD *)v14 + 242);
      ExAcquireResourceExclusiveLite(Resource, 1u);
      p_ActiveEntries[45] &= ~4u;
    }
  }
  ExReleaseResourceLite(Resource);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
