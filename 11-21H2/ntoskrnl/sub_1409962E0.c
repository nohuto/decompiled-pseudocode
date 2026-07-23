/*
 * XREFs of sub_1409962E0 @ 0x1409962E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402500D4 @ 0x1402500D4 (sub_1402500D4.c)
 *     sub_14025013C @ 0x14025013C (sub_14025013C.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14039AD4C @ 0x14039AD4C (sub_14039AD4C.c)
 *     sub_14099613C @ 0x14099613C (sub_14099613C.c)
 *     sub_1409967E4 @ 0x1409967E4 (sub_1409967E4.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

char __fastcall sub_1409962E0(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _OWNER_ENTRY *v3; // rsi
  ULONG v4; // ebp
  __int128 v5; // xmm0
  int v6; // eax
  OWNER_ENTRY v7; // xmm1
  unsigned int Flink; // eax
  int Reserved2_high; // eax
  int Flink_high; // r12d
  unsigned int SpinLock; // r13d
  __int64 v12; // r14
  unsigned __int64 v13; // r15
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct _KTHREAD *v17; // rax
  __int128 v19; // [rsp+30h] [rbp-58h] BYREF
  OWNER_ENTRY v20; // [rsp+40h] [rbp-48h]
  char ActiveCount; // [rsp+90h] [rbp+8h]
  __int64 v22; // [rsp+98h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  v19 = 0LL;
  --*((_WORD *)CurrentThread + 242);
  v20 = 0LL;
  ExAcquireResourceExclusiveLite(Resource, 1u);
  if ( ((__int64)Resource[1].SystemResourcesList.Flink & 4) != 0 && (HIDWORD(Resource[2].Reserved2) & 2) != 0 )
  {
    ++LODWORD(Resource[6].OwnerTable);
    ++HIDWORD(Resource[2].SpinLock);
    sub_1409967E4(&Resource[1].SystemResourcesList.Blink);
    v3 = (struct _OWNER_ENTRY *)MEMORY[0xFFFFF78000000008];
    sub_14039AD4C((__int64)&v19);
    v4 = v20.TableSize - Resource[3].OwnerEntry.TableSize;
    if ( v20.TableSize != Resource[3].OwnerEntry.TableSize )
    {
      v5 = v19;
      v6 = dword_140C20790;
      v7 = v20;
      HIDWORD(Resource[2].SpinLock) = 0;
      *(_OWORD *)&Resource[3].SharedWaiters = v5;
      Resource[3].OwnerTable = v3;
      Resource[3].OwnerEntry = v7;
      LODWORD(Resource[3].SystemResourcesList.Flink) = v6;
      Resource[3].SystemResourcesList.Blink = (struct _LIST_ENTRY *)v3;
    }
    Flink = (unsigned int)Resource[3].SystemResourcesList.Flink;
    if ( Flink )
    {
      if ( HIDWORD(Resource[2].SpinLock) < Flink )
      {
        sub_1402500D4(0);
      }
      else
      {
        sub_14025013C(0);
        LODWORD(Resource[3].SystemResourcesList.Flink) = dword_140C20790 + HIDWORD(Resource[2].SpinLock);
      }
    }
    Reserved2_high = HIDWORD(Resource[2].Reserved2);
    if ( (Reserved2_high & 4) == 0 )
    {
      Flink_high = HIDWORD(Resource[1].SystemResourcesList.Flink);
      SpinLock = Resource[2].SpinLock;
      v12 = (char *)v3 - (char *)Resource[3].SystemResourcesList.Blink;
      v13 = (char *)v3 - (char *)Resource[3].OwnerTable;
      v22 = *(_QWORD *)&Resource[6].ActiveCount;
      ActiveCount = Resource[3].ActiveCount;
      HIDWORD(Resource[2].Reserved2) = Reserved2_high | 4;
      ExReleaseResourceLite(Resource);
      sub_1402F9540((__int64)KeGetCurrentThread());
      sub_140A48330(v14);
      if ( v4 || qword_140C54198 )
      {
        sub_140A47CF8(v16, v15);
      }
      else
      {
        sub_140A47CF8(v16, v15);
        sub_14099613C(Flink_high, SpinLock, v12, v13, v22, ActiveCount);
      }
      v17 = KeGetCurrentThread();
      --*((_WORD *)v17 + 242);
      ExAcquireResourceExclusiveLite(Resource, 1u);
      Resource[3].SystemResourcesList.Blink = (struct _LIST_ENTRY *)v3;
      HIDWORD(Resource[2].Reserved2) &= ~4u;
    }
  }
  ExReleaseResourceLite(Resource);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
