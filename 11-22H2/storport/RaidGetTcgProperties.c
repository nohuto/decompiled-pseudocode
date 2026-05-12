/*
 * XREFs of RaidGetTcgProperties @ 0x1C0059EF0
 * Callers:
 *     RaidGetStorageAdapterSelfEncryptionProperty @ 0x1C003B4B4 (RaidGetStorageAdapterSelfEncryptionProperty.c)
 *     RaidAdapterStorageTcgActivateLocking @ 0x1C0050684 (RaidAdapterStorageTcgActivateLocking.c)
 *     RaidAdapterStorageTcgAssignLockingObject @ 0x1C00508C4 (RaidAdapterStorageTcgAssignLockingObject.c)
 *     RaidAdapterStorageTcgDeassignLockingObject @ 0x1C0050BB8 (RaidAdapterStorageTcgDeassignLockingObject.c)
 *     RaidAdapterStorageTcgEnumerateLockingObjects @ 0x1C0050E2C (RaidAdapterStorageTcgEnumerateLockingObjects.c)
 *     RaidAdapterStorageTcgEraseLockingObject @ 0x1C0051100 (RaidAdapterStorageTcgEraseLockingObject.c)
 *     RaidAdapterStorageTcgGetLockingObjectMetadata @ 0x1C0051360 (RaidAdapterStorageTcgGetLockingObjectMetadata.c)
 *     RaidAdapterStorageTcgResetState @ 0x1C0051834 (RaidAdapterStorageTcgResetState.c)
 *     RaidAdapterStorageTcgRevertConfig @ 0x1C0051A00 (RaidAdapterStorageTcgRevertConfig.c)
 *     RaidAdapterStorageTcgSetLockingObject @ 0x1C0051C34 (RaidAdapterStorageTcgSetLockingObject.c)
 *     RaidAdapterStorageTcgSetLockingObjectAuthKey @ 0x1C0051F10 (RaidAdapterStorageTcgSetLockingObjectAuthKey.c)
 *     RaidAdapterStorageTcgSetLockingObjectMetadata @ 0x1C005219C (RaidAdapterStorageTcgSetLockingObjectMetadata.c)
 *     RaidAdapterStorageTcgSetSpAuthorityKey @ 0x1C005241C (RaidAdapterStorageTcgSetSpAuthorityKey.c)
 *     RaidUnitStorageTcgActivateLocking @ 0x1C0052688 (RaidUnitStorageTcgActivateLocking.c)
 *     RaidUnitStorageTcgAssignLockingObject @ 0x1C00528E0 (RaidUnitStorageTcgAssignLockingObject.c)
 *     RaidUnitStorageTcgDeassignLockingObject @ 0x1C0052C14 (RaidUnitStorageTcgDeassignLockingObject.c)
 *     RaidUnitStorageTcgEnumerateLockingObjects @ 0x1C0052E98 (RaidUnitStorageTcgEnumerateLockingObjects.c)
 *     RaidUnitStorageTcgEraseLockingObject @ 0x1C0053174 (RaidUnitStorageTcgEraseLockingObject.c)
 *     RaidUnitStorageTcgGetLockingObjectMetadata @ 0x1C00533E4 (RaidUnitStorageTcgGetLockingObjectMetadata.c)
 *     RaidUnitStorageTcgResetState @ 0x1C00538C0 (RaidUnitStorageTcgResetState.c)
 *     RaidUnitStorageTcgRevertConfig @ 0x1C0053A80 (RaidUnitStorageTcgRevertConfig.c)
 *     RaidUnitStorageTcgSetLockingObject @ 0x1C0053CC8 (RaidUnitStorageTcgSetLockingObject.c)
 *     RaidUnitStorageTcgSetLockingObjectAuthKey @ 0x1C0053FBC (RaidUnitStorageTcgSetLockingObjectAuthKey.c)
 *     RaidUnitStorageTcgSetLockingObjectMetadata @ 0x1C0054260 (RaidUnitStorageTcgSetLockingObjectMetadata.c)
 *     RaidUnitStorageTcgSetSpAuthorityKey @ 0x1C00544F8 (RaidUnitStorageTcgSetSpAuthorityKey.c)
 *     RaidGetTcgConfigInformation @ 0x1C00597C4 (RaidGetTcgConfigInformation.c)
 *     RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl @ 0x1C0060030 (RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     RtlStringCbCopyA @ 0x1C00422B0 (RtlStringCbCopyA.c)
 *     McTemplateK0quuujjzssszhtttqqtuuqqh_EtwWriteTransfer @ 0x1C0055DC8 (McTemplateK0quuujjzssszhtttqqtuuqqh_EtwWriteTransfer.c)
 *     TcglibDiscoverDevice @ 0x1C00797CC (TcglibDiscoverDevice.c)
 */

__int64 __fastcall RaidGetTcgProperties(int *a1, char *a2)
{
  int v2; // eax
  char v3; // r13
  int *v4; // rsi
  void *Pool; // rbp
  _WORD *v8; // rbx
  int *v9; // r14
  __int64 v10; // r15
  int v11; // edi
  unsigned int v12; // ecx
  char v14; // [rsp+D0h] [rbp-88h]
  __int128 v15; // [rsp+F0h] [rbp-68h] BYREF
  __int128 v16; // [rsp+100h] [rbp-58h] BYREF

  v2 = *a1;
  v3 = 0;
  v4 = 0LL;
  v14 = 0;
  v16 = 0LL;
  v15 = 0LL;
  if ( v2 == 1431193940 )
  {
    v4 = a1;
    if ( (*((_BYTE *)a1 + 451) & 0x40) == 0 )
    {
      Pool = (void *)*((_QWORD *)a1 + 437);
      v8 = (_WORD *)*((_QWORD *)a1 + 438);
      v9 = (int *)*((_QWORD *)a1 + 3);
      goto LABEL_7;
    }
    return (unsigned int)-1073741637;
  }
  if ( v2 != 1094997074 )
    return (unsigned int)-1073741637;
  v9 = a1;
  if ( (*((_BYTE *)a1 + 111) & 0x10) != 0 )
    return (unsigned int)-1073741637;
  Pool = (void *)*((_QWORD *)a1 + 751);
  v8 = (_WORD *)*((_QWORD *)a1 + 752);
LABEL_7:
  v10 = *((_QWORD *)a1 + 1);
  if ( !Pool )
  {
    Pool = (void *)RaidAllocatePool(256LL, 6240LL, 1129603410LL, *((_QWORD *)a1 + 1));
    if ( !Pool )
      return (unsigned int)-1073741801;
    v14 = 1;
  }
  memset_0(Pool, 0, 0x1860uLL);
  if ( v8 )
    goto LABEL_15;
  v8 = (_WORD *)RaidAllocatePool(256LL, 168LL, 1129603410LL, v10);
  if ( v8 )
  {
    v3 = 1;
LABEL_15:
    memset_0(v8, 0, 0xA8uLL);
    v11 = TcglibDiscoverDevice(a1, Pool, v8);
    if ( v11 >= 0 )
    {
      if ( *(_DWORD *)v8 == 512
        && *((_BYTE *)v8 + 52)
        && *((_BYTE *)v8 + 64)
        && *((_BYTE *)v8 + 121)
        && (v12 = *((_DWORD *)v8 + 18), *((_DWORD *)v8 + 32) >= v12)
        && *((_BYTE *)v8 + 148)
        && !*((_BYTE *)v8 + 126)
        && !*((_BYTE *)v8 + 127)
        && !(*((_DWORD *)v8 + 35) % *((_DWORD *)v8 + 36))
        && (unsigned __int16)v8[68] >= v12 )
      {
        if ( v4 )
        {
          if ( !*((_QWORD *)v4 + 437) )
            *((_QWORD *)v4 + 437) = Pool;
          if ( !*((_QWORD *)v4 + 438) )
            *((_QWORD *)v4 + 438) = v8;
        }
        else
        {
          if ( !*((_QWORD *)v9 + 751) )
            *((_QWORD *)v9 + 751) = Pool;
          if ( !*((_QWORD *)v9 + 752) )
            *((_QWORD *)v9 + 752) = v8;
        }
        Pool = 0LL;
        v8 = 0LL;
      }
      else
      {
        if ( v4 )
          *((_BYTE *)v4 + 451) |= 0x40u;
        else
          *((_BYTE *)v9 + 111) |= 0x10u;
        RaidDriverGetName(*((_QWORD *)v9 + 2), (__int64)&v15);
        if ( (byte_1C0092A07 & 4) != 0 )
        {
          if ( v4 )
            McTemplateK0quuujjzssszhtttqqtuuqqh_EtwWriteTransfer(
              *((unsigned __int8 *)v8 + 148),
              *((unsigned __int8 *)v8 + 121),
              *((unsigned __int8 *)v8 + 64),
              v9[14],
              *((_BYTE *)v4 + 96),
              *((_BYTE *)v4 + 97),
              *((_BYTE *)v4 + 98),
              (__int64)(v4 + 506),
              (__int64)(v9 + 1250),
              *((const wchar_t **)&v15 + 1),
              (const char *)v4 + 160,
              (const char *)v4 + 169,
              (const char *)v4 + 186,
              *((const wchar_t **)v9 + 627),
              *v8,
              *((_BYTE *)v8 + 52),
              *((_BYTE *)v8 + 64),
              *((_BYTE *)v8 + 121),
              *((_DWORD *)v8 + 32),
              *((_DWORD *)v8 + 18),
              *((_BYTE *)v8 + 148),
              *((_BYTE *)v8 + 126),
              *((_BYTE *)v8 + 127),
              *((_DWORD *)v8 + 35),
              *((_DWORD *)v8 + 36),
              v8[68]);
          else
            McTemplateK0quuujjzssszhtttqqtuuqqh_EtwWriteTransfer(
              *((unsigned __int8 *)v8 + 148),
              *((unsigned __int8 *)v8 + 121),
              *((unsigned __int8 *)v8 + 64),
              v9[14],
              255,
              255,
              255,
              (__int64)&v16,
              (__int64)(v9 + 1250),
              *((const wchar_t **)&v15 + 1),
              byte_1C0081FE6,
              byte_1C0081FE6,
              byte_1C0081FE6,
              *((const wchar_t **)v9 + 627),
              *v8,
              *((_BYTE *)v8 + 52),
              *((_BYTE *)v8 + 64),
              *((_BYTE *)v8 + 121),
              *((_DWORD *)v8 + 32),
              *((_DWORD *)v8 + 18),
              *((_BYTE *)v8 + 148),
              *((_BYTE *)v8 + 126),
              *((_BYTE *)v8 + 127),
              *((_DWORD *)v8 + 35),
              *((_DWORD *)v8 + 36),
              v8[68]);
        }
        v11 = -1073741637;
      }
    }
    else
    {
      RtlStringCbCopyA(a2, 0x20uLL, "TcglibDiscoverDevice");
    }
    if ( v3 && v8 )
      ExFreePoolWithTag(v8, 0x43546152u);
    goto LABEL_48;
  }
  v11 = -1073741801;
LABEL_48:
  if ( v14 && Pool )
    ExFreePoolWithTag(Pool, 0x43546152u);
  return (unsigned int)v11;
}
