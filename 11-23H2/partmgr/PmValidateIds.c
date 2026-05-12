/*
 * XREFs of PmValidateIds @ 0x1C001CA28
 * Callers:
 *     ?PmUpdateLayoutEx@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z @ 0x1C0002D88 (-PmUpdateLayoutEx@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z.c)
 * Callees:
 *     ?PmCheckIds@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@PEAEPEAW4_DISK_OFFLINE_REASON@@@Z @ 0x1C0003CEC (-PmCheckIds@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@PEAEPEAW4_DISK_OFFLINE_.c)
 *     PmRemoveIds @ 0x1C0003DC0 (PmRemoveIds.c)
 *     PmSetDiskAttributes @ 0x1C0009178 (PmSetDiskAttributes.c)
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     PmUpdateIds @ 0x1C002745C (PmUpdateIds.c)
 */

__int64 __fastcall PmValidateIds(struct _DEVICE_EXTENSION *a1, struct _DRIVE_LAYOUT_INFORMATION_EX *a2)
{
  int updated; // ebx
  int v5; // r8d
  unsigned __int8 v7[4]; // [rsp+20h] [rbp-40h] BYREF
  int v8; // [rsp+24h] [rbp-3Ch] BYREF
  __int128 v9; // [rsp+28h] [rbp-38h] BYREF
  __int128 v10; // [rsp+38h] [rbp-28h]
  __int64 v11; // [rsp+48h] [rbp-18h]

  v8 = 0;
  v9 = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  v7[0] = 0;
  updated = 0;
  PmRemoveIds((__int64)a1);
  if ( (*((_BYTE *)a1 + 528) & 1) == 0 )
  {
    do
    {
      updated = PmCheckIds(a1, a2, v7, (enum _DISK_OFFLINE_REASON *)&v8);
      if ( updated < 0 )
        break;
      v5 = v8;
      if ( v8 )
      {
        if ( v8 == 2 )
        {
          *((_QWORD *)&v9 + 1) = 3LL;
          *(_QWORD *)&v10 = 3LL;
        }
        else
        {
          if ( v8 != 4 || (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 29) + 28LL) - 15) <= 1 )
            return (unsigned int)updated;
          *((_QWORD *)&v9 + 1) = 1LL;
          *(_QWORD *)&v10 = 1LL;
        }
      }
      else if ( !v7[0] )
      {
        return (unsigned int)updated;
      }
      if ( v8 )
      {
        *((_BYTE *)a1 + 604) = 0;
        LODWORD(v9) = 40;
        BYTE4(v9) = 0;
        return (unsigned int)PmSetDiskAttributes((__int64)a1, (__int64)&v9, v5);
      }
      updated = PmUpdateIds(a1, a2);
    }
    while ( updated >= 0 );
  }
  return (unsigned int)updated;
}
