/*
 * XREFs of RmgrSrv_RmReleaseResources @ 0x18003AB20
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?RmReleaseResources@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@@Z @ 0x18003AC48 (-RmReleaseResources@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 */

__int64 __fastcall RmgrSrv_RmReleaseResources(ExecutionModel::ResourceManager *a1)
{
  struct ExecutionModel::ResourceHandle__ *v2; // rax
  unsigned int v3; // edi
  struct ExecutionModel::ResourceHandle__ *v5; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-38h] BYREF
  struct ExecutionModel::ResourceHandle__ **v7; // [rsp+58h] [rbp-18h]
  int v8; // [rsp+60h] [rbp-10h]
  int v9; // [rsp+64h] [rbp-Ch]

  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 2LL) )
  {
    v2 = *(struct ExecutionModel::ResourceHandle__ **)a1;
    v9 = 0;
    v5 = v2;
    v8 = 8;
    v7 = &v5;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB1E0,
      (unsigned __int8 *)dword_1800BDCB2,
      0LL,
      0LL,
      3u,
      &v6);
  }
  if ( a1 )
    v3 = ExecutionModel::ResourceManager::RmReleaseResources(a1, *(struct ExecutionModel::ResourceHandle__ **)a1);
  else
    v3 = -2147024882;
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 2LL) )
  {
    v9 = 0;
    v7 = &v5;
    LODWORD(v5) = v3;
    v8 = 4;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB1E0,
      (unsigned __int8 *)dword_1800BD9A9,
      0LL,
      0LL,
      3u,
      &v6);
  }
  if ( a1 )
    *(_QWORD *)a1 = 0LL;
  return v3;
}
