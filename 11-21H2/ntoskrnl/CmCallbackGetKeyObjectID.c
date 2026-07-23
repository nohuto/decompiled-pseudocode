/*
 * XREFs of CmCallbackGetKeyObjectID @ 0x1408812B0
 * Callers:
 *     Function @ 0x1409E5BF0 (Function.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406815C0 @ 0x1406815C0 (sub_1406815C0.c)
 *     sub_140721B68 @ 0x140721B68 (sub_140721B68.c)
 *     sub_140721BAC @ 0x140721BAC (sub_140721BAC.c)
 *     sub_1407C05F4 @ 0x1407C05F4 (sub_1407C05F4.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 */

NTSTATUS __stdcall CmCallbackGetKeyObjectID(
        PLARGE_INTEGER Cookie,
        PVOID Object,
        PULONG_PTR ObjectID,
        PCUNICODE_STRING *ObjectName)
{
  __int64 *v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  NTSTATUS v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  const UNICODE_STRING *v18; // [rsp+20h] [rbp-29h] BYREF
  __int128 v19; // [rsp+28h] [rbp-21h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+38h] [rbp-11h]
  __int128 v21; // [rsp+48h] [rbp-1h] BYREF
  _OWORD v22[3]; // [rsp+58h] [rbp+Fh] BYREF

  v18 = 0LL;
  v21 = 0LL;
  memset(v22, 0, sizeof(v22));
  sub_140347770((__int64)&v21);
  v19 = 0LL;
  WORD1(v19) = -1;
  *(_OWORD *)Privileges = 0LL;
  if ( !Object || *(_DWORD *)Object != 1803104306 || !v7 )
    goto LABEL_16;
  v8 = *((_QWORD *)Object + 1);
  if ( v6 )
    *v6 = v8;
  if ( !ObjectName )
  {
    v9 = 0;
    goto LABEL_17;
  }
  if ( (v8 & 1) == 0 )
  {
    sub_140AB4550(v22);
    sub_140AB4370(v11, v10, v12);
    v9 = sub_1407C05F4((__int64)&v19, v8);
    if ( v9 >= 0 )
    {
      sub_140721B68((__int64)&v19);
      if ( *(_QWORD *)(v8 + 80) && (int)sub_1406815C0(v8, &v18) >= 0 )
      {
        v9 = 0;
        *ObjectName = v18;
      }
      else
      {
        v9 = -1073741670;
      }
      sub_140721BAC((__int64)&v19);
    }
    sub_140AB4260(v14, v13, v15, v16);
    sub_140AB4580(v22);
  }
  else
  {
LABEL_16:
    v9 = -1073741811;
  }
LABEL_17:
  if ( Privileges[1] )
    SeFreePrivileges(Privileges[1]);
  sub_14022EA30((__int64 *)&v21);
  return v9;
}
