/*
 * XREFs of ?PmVerifySnapshotData@@YAEPEAU_DISK_SNAPSHOT_DATA@@KE@Z @ 0x1C0027830
 * Callers:
 *     PmGetSnapshotData @ 0x1C0003EE0 (PmGetSnapshotData.c)
 *     PmInitializeSnapshotDataCache @ 0x1C000FCA0 (PmInitializeSnapshotDataCache.c)
 *     PmSetSnapshotData @ 0x1C000FD58 (PmSetSnapshotData.c)
 * Callees:
 *     <none>
 */

char __fastcall PmVerifySnapshotData(UCHAR *Buffer, unsigned int a2, char a3)
{
  char v3; // bp
  ULONG v7; // r8d
  int v8; // ebx
  ULONG v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // eax

  v3 = 0;
  if ( a2 >= 0x70 && *(_QWORD *)Buffer == 0x5452415050414E53LL && *((_DWORD *)Buffer + 2) == 1 )
  {
    v7 = *((_DWORD *)Buffer + 3);
    if ( v7 <= a2 && *((_DWORD *)Buffer + 5) <= 3u )
    {
      if ( !a3
        || (v8 = *((_DWORD *)Buffer + 4),
            *((_DWORD *)Buffer + 4) = 0,
            v9 = RtlComputeCrc32(0, Buffer, v7),
            *((_DWORD *)Buffer + 4) = v8,
            v9 == v8) )
      {
        v10 = *((_DWORD *)Buffer + 25);
        if ( !v10 || (v11 = *((_DWORD *)Buffer + 24), v11 >= 0x70) && v11 < a2 && v10 <= a2 - v11 )
        {
          v12 = *((_DWORD *)Buffer + 27);
          if ( !v12 )
            return 1;
          v13 = *((_DWORD *)Buffer + 26);
          if ( v13 >= 0x70 && v13 < a2 && v12 <= a2 - v13 )
            return 1;
        }
      }
    }
  }
  return v3;
}
