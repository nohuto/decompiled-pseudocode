/*
 * XREFs of PoRegisterPowerSettingCallback @ 0x140762500
 * Callers:
 *     sub_14054A344 @ 0x14054A344 (sub_14054A344.c)
 *     sub_14075140C @ 0x14075140C (sub_14075140C.c)
 *     sub_140822D70 @ 0x140822D70 (sub_140822D70.c)
 *     sub_140828B8C @ 0x140828B8C (sub_140828B8C.c)
 *     sub_1408334E4 @ 0x1408334E4 (sub_1408334E4.c)
 *     sub_1409A4208 @ 0x1409A4208 (sub_1409A4208.c)
 *     sub_140B03434 @ 0x140B03434 (sub_140B03434.c)
 *     sub_140B25464 @ 0x140B25464 (sub_140B25464.c)
 *     sub_140B25540 @ 0x140B25540 (sub_140B25540.c)
 *     sub_140B31688 @ 0x140B31688 (sub_140B31688.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_1402D6220 @ 0x1402D6220 (sub_1402D6220.c)
 *     RtlPcToFileName @ 0x1403D6E30 (RtlPcToFileName.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405CFCA4 @ 0x1405CFCA4 (sub_1405CFCA4.c)
 *     sub_140751880 @ 0x140751880 (sub_140751880.c)
 *     sub_14075197C @ 0x14075197C (sub_14075197C.c)
 *     EmClientRuleEvaluate @ 0x140A47E30 (EmClientRuleEvaluate.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall PoRegisterPowerSettingCallback(
        PDEVICE_OBJECT DeviceObject,
        LPCGUID SettingGuid,
        PPOWER_SETTING_CALLBACK Callback,
        PVOID Context,
        PVOID *Handle)
{
  GUID *v7; // rdi
  bool v8; // r14
  unsigned __int64 *v9; // rsi
  __int64 v10; // rcx
  __int64 Pool2; // rax
  char *v12; // rbx
  GUID v13; // xmm0
  __int64 *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 **v17; // rcx
  NTSTATUS v18; // edi
  _QWORD *v20; // rax
  __int64 *v21; // rax
  int v22; // [rsp+28h] [rbp-E0h] BYREF
  int v23; // [rsp+2Ch] [rbp-DCh]
  __int128 *v24; // [rsp+30h] [rbp-D8h] BYREF
  UNICODE_STRING v25; // [rsp+38h] [rbp-D0h] BYREF
  PDEVICE_OBJECT v26; // [rsp+48h] [rbp-C0h]
  __int128 v27; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v28[528]; // [rsp+68h] [rbp-A0h] BYREF

  v22 = 0;
  v24 = 0LL;
  v26 = DeviceObject;
  v7 = (GUID *)SettingGuid;
  v23 = dword_140C232CC;
  v27 = 0LL;
  v8 = 0;
  v25 = 0LL;
  if ( sub_14075197C(SettingGuid) )
    return -1073741811;
  v9 = 0LL;
  if ( Callback )
  {
    v10 = 0x47A0704A6FE69556LL - *(_QWORD *)&v7->Data1;
    if ( *(_QWORD *)&v7->Data1 == 0x47A0704A6FE69556LL )
      v10 = 0x47DA6F938DC2248FLL - *(_QWORD *)v7->Data4;
    if ( !v10 )
    {
      memset(v28, 0, 0x208uLL);
      v25.MaximumLength = 520;
      v25.Buffer = (wchar_t *)v28;
      if ( (int)RtlPcToFileName((unsigned __int64)Callback, &v25) >= 0 )
      {
        DWORD2(v27) = 16;
        *(_QWORD *)&v27 = &v25;
        v24 = &v27;
        if ( (int)EmClientRuleEvaluate(qword_140010018, &v24, 1LL, &v22) >= 0 )
        {
          v21 = &qword_140C23800;
          if ( v22 != 2 )
            v21 = 0LL;
          v9 = (unsigned __int64 *)v21;
        }
      }
    }
  }
  ExAcquireFastMutex(&stru_140C237C0);
  Pool2 = ExAllocatePool2(256LL, 112LL, 1952797520LL);
  v12 = (char *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 16) = 1952797520;
    v13 = *v7;
    *(_QWORD *)(Pool2 + 80) = Callback;
    *(_QWORD *)(Pool2 + 88) = Context;
    *(GUID *)(Pool2 + 52) = v13;
    *(_QWORD *)(Pool2 + 96) = v26;
    if ( v9 )
    {
      sub_1405CFCA4(v9);
      v7 = (GUID *)(v9 + 2);
    }
    *(GUID *)(v12 + 36) = *v7;
    v14 = sub_140751880(v7, -1);
    if ( v14 )
    {
      v15 = *(_QWORD *)&v7->Data1 - 0x163DF734515C31D8LL;
      if ( *(_QWORD *)&v7->Data1 == 0x163DF734515C31D8LL )
        v15 = *(_QWORD *)v7->Data4 + 0xE176E735FEE0260LL;
      if ( !v15 )
        goto LABEL_25;
      v16 = *(_QWORD *)&v7->Data1 - 0x48D82A54CF23F240LL;
      if ( *(_QWORD *)&v7->Data1 == 0x48D82A54CF23F240LL )
        v16 = *(_QWORD *)v7->Data4 - 0x2E05FF1815DE14B1LL;
      if ( !v16 )
LABEL_25:
        *((_QWORD *)v12 + 9) = v14[v23 + 8];
      v17 = (__int64 **)v14[3];
      if ( *v17 == v14 + 2 )
      {
        *(_QWORD *)v12 = v14 + 2;
        *((_QWORD *)v12 + 1) = v17;
        *v17 = (__int64 *)v12;
        v14[3] = (__int64)v12;
        goto LABEL_18;
      }
    }
    else
    {
      v20 = (_QWORD *)qword_140C22408;
      if ( *(__int64 **)qword_140C22408 == &qword_140C22400 )
      {
        *(_QWORD *)v12 = &qword_140C22400;
        *((_QWORD *)v12 + 1) = v20;
        *v20 = v12;
        qword_140C22408 = (__int64)v12;
LABEL_18:
        v18 = 0;
        v8 = (unsigned int)dword_140C22F80 >= 3;
        if ( Handle )
          *Handle = v12;
        goto LABEL_20;
      }
    }
    __fastfail(3u);
  }
  v18 = -1073741670;
LABEL_20:
  KeReleaseGuardedMutex(&stru_140C237C0);
  if ( v8 )
    sub_1402D6220(0x20u);
  return v18;
}
