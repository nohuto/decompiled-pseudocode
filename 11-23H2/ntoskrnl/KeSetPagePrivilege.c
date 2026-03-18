/*
 * XREFs of KeSetPagePrivilege @ 0x1403D4D14
 * Callers:
 *     MiMarkPfnVerified @ 0x140219BD0 (MiMarkPfnVerified.c)
 *     MiAllocateWsle @ 0x14026B7D0 (MiAllocateWsle.c)
 *     MiCopyPage @ 0x140283E10 (MiCopyPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiClearPfnImageVerified @ 0x1403353B8 (MiClearPfnImageVerified.c)
 *     MiDeletePerSessionProtos @ 0x14033EBC4 (MiDeletePerSessionProtos.c)
 *     MiDbgWriteCheck @ 0x14038CA24 (MiDbgWriteCheck.c)
 *     MiLockDriverPageRange @ 0x140619E30 (MiLockDriverPageRange.c)
 *     MiProtectDriverSectionPte @ 0x14061A4A0 (MiProtectDriverSectionPte.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x140B90A6C (ExpRevokeBootLoaderPagePrivileges.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14033FCF0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 *     VslMakeProtectedPageExecutable @ 0x14054BBEC (VslMakeProtectedPageExecutable.c)
 *     VslMakeProtectedPageWritable @ 0x14054BC88 (VslMakeProtectedPageWritable.c)
 */

__int64 __fastcall KeSetPagePrivilege(__int64 a1, __int128 *a2, __int16 a3)
{
  char v3; // bl
  __int16 v6; // dx
  __int128 v7; // xmm0
  __int64 result; // rax
  _OWORD v9[7]; // [rsp+20h] [rbp-39h] BYREF

  v3 = a3;
  if ( (a3 & 0x100) != 0 )
  {
    memset(v9, 0, 0x68uLL);
    v6 = 245;
    goto LABEL_4;
  }
  if ( (a3 & 0x400) != 0 )
  {
    memset(v9, 0, 0x68uLL);
    v6 = 246;
LABEL_4:
    v7 = *a2;
    *((_QWORD *)&v9[0] + 1) = a1;
    v9[1] = v7;
    return VslpEnterIumSecureMode(2u, v6, 0, (__int64)v9);
  }
  if ( (a3 & 6) == 0 )
  {
    memset(v9, 0, 0x68uLL);
    v6 = 243;
    goto LABEL_4;
  }
  result = 0LL;
  if ( (a3 & 2) == 0 || (result = VslMakeProtectedPageExecutable(a1, a2, a3 & 0x800), (int)result >= 0) )
  {
    if ( (v3 & 4) != 0 )
      return VslMakeProtectedPageWritable(a1, a2);
  }
  return result;
}
