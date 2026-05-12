/*
 * XREFs of StRtlFindBestStorageDeviceId @ 0x1C000A878
 * Callers:
 *     ?PmCollectTelemetry@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAU_DISK_TELEMETRY_INFO@@@Z @ 0x1C0021608 (-PmCollectTelemetry@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAU_DISK_TELEMETRY_INFO@@@Z.c)
 *     PmSetSnapshotInfo @ 0x1C0027BA4 (PmSetSnapshotInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StRtlFindBestStorageDeviceId(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 i; // rdi
  int v5; // r9d
  int v6; // ecx
  int v8; // ebx
  unsigned int v9; // r10d
  _DWORD *v10; // rax
  int v11; // r10d
  unsigned int v12; // r9d
  _DWORD *v13; // rax

  v1 = *(_DWORD *)(a1 + 8);
  v2 = a1 + 12;
  v3 = 0LL;
  if ( v1 )
  {
    for ( i = v1; i; --i )
    {
      v5 = *(_DWORD *)(v2 + 12);
      if ( (v5 & 0xFFFFFFFD) == 0 )
      {
        v6 = *(_DWORD *)(v2 + 4);
        if ( v6 == 8 || (unsigned int)(v6 - 1) <= 2 )
        {
          if ( !v3 )
            goto LABEL_9;
          v8 = *(_DWORD *)(v3 + 12);
          if ( v5 != v8 )
          {
            v9 = 0;
            v10 = &unk_1C0013BA0;
            while ( v8 != *v10 )
            {
              if ( v5 == *v10 )
                goto LABEL_9;
              ++v9;
              ++v10;
              if ( v9 >= 2 )
                goto LABEL_15;
            }
            goto LABEL_6;
          }
LABEL_15:
          v11 = *(_DWORD *)(v3 + 4);
          if ( v6 != v11 )
          {
            v12 = 0;
            v13 = &unk_1C0013BA8;
            while ( v11 != *v13 )
            {
              if ( v6 == *v13 )
                goto LABEL_9;
              ++v12;
              ++v13;
              if ( v12 >= 4 )
                goto LABEL_20;
            }
            goto LABEL_6;
          }
LABEL_20:
          if ( *(_WORD *)(v2 + 8) > *(_WORD *)(v3 + 8) )
LABEL_9:
            v3 = v2;
        }
      }
LABEL_6:
      v2 += *(unsigned __int16 *)(v2 + 10);
    }
  }
  return v3;
}
