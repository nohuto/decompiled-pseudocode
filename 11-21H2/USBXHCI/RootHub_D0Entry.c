/*
 * XREFs of RootHub_D0Entry @ 0x1C0011DD8
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0010230 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_InternalReset @ 0x1C00321C8 (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C0011F9C (RootHub_ReleaseReadModifyWriteLock.c)
 *     XilRegister_ReadUlong @ 0x1C00139CC (XilRegister_ReadUlong.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x1C0013A48 (RootHub_AcquireReadModifyWriteLock.c)
 *     XilRegister_WriteUlong @ 0x1C0013B7C (XilRegister_WriteUlong.c)
 */

__int64 __fastcall RootHub_D0Entry(__int64 a1)
{
  unsigned int v1; // esi
  __int64 v3; // r14
  unsigned int v4; // r15d
  __int64 v5; // rbp
  char Ulong; // al
  __int64 v7; // rbx
  int v8; // edx
  int v9; // r9d
  __int16 v11; // ax

  v1 = 1;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  *(_BYTE *)(a1 + 57) = 1;
  while ( v1 <= *(_DWORD *)(a1 + 16) )
  {
    v4 = v1 - 1;
    v5 = *(_QWORD *)(a1 + 40) + 16LL * (v1 - 1);
    Ulong = XilRegister_ReadUlong(v3, v5);
    v7 = 112LL * (v1 - 1);
    v8 = *(unsigned __int8 *)(v7 + *(_QWORD *)(a1 + 48) + 13);
    if ( (_BYTE)v8 == 2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = 31;
LABEL_5:
        LOBYTE(v8) = 4;
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v8,
          11,
          v9,
          (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
          v1,
          Ulong);
      }
    }
    else
    {
      if ( (_BYTE)v8 != 3 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 2;
          WPP_RECORDER_SF_DD(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            v8,
            11,
            33,
            (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
            v1,
            *(_BYTE *)(v7 + *(_QWORD *)(a1 + 48) + 13));
        }
        goto LABEL_7;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = 32;
        goto LABEL_5;
      }
    }
    if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 336LL) & 0x20000000LL) != 0
      && (*(_DWORD *)(v7 + *(_QWORD *)(a1 + 48) + 64) & 2) == 0 )
    {
      RootHub_AcquireReadModifyWriteLock(a1, v4);
      v11 = XilRegister_ReadUlong(v3, v5);
      XilRegister_WriteUlong(v3, v5, v11 & 0xC200 | 0xE000000u);
      RootHub_ReleaseReadModifyWriteLock(a1, v4);
    }
LABEL_7:
    ++v1;
  }
  return 0LL;
}
