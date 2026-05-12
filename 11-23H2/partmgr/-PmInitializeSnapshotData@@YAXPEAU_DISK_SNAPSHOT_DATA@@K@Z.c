/*
 * XREFs of ?PmInitializeSnapshotData@@YAXPEAU_DISK_SNAPSHOT_DATA@@K@Z @ 0x1C0022E30
 * Callers:
 *     PmGetSnapshotData @ 0x1C0003EE0 (PmGetSnapshotData.c)
 *     PmSetSnapshotInfo @ 0x1C0027BA4 (PmSetSnapshotInfo.c)
 * Callees:
 *     memset @ 0x1C000BA40 (memset.c)
 */

void __fastcall PmInitializeSnapshotData(_QWORD *Buffer, size_t Size)
{
  memset(Buffer, 0, (unsigned int)Size);
  *((_DWORD *)Buffer + 5) = 0;
  *Buffer = 0x5452415050414E53LL;
  *((_DWORD *)Buffer + 3) = 112;
  *((_DWORD *)Buffer + 2) = 1;
  *((_DWORD *)Buffer + 4) = RtlComputeCrc32(0, (PUCHAR)Buffer, 0x70u);
}
