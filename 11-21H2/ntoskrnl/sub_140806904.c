/*
 * XREFs of sub_140806904 @ 0x140806904
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PsLookupProcessByProcessId @ 0x1407A8720 (PsLookupProcessByProcessId.c)
 */

void __fastcall sub_140806904(HANDLE *a1)
{
  NTSTATUS v2; // eax
  PEPROCESS v3; // rbx
  unsigned __int16 *v4; // r8
  int v5; // ecx
  __int16 v6; // [rsp+30h] [rbp-50h] BYREF
  int v7; // [rsp+34h] [rbp-4Ch] BYREF
  PEPROCESS Process; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  __int16 *v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+6Ch] [rbp-14h]

  v6 = 0;
  v7 = 0;
  Process = 0LL;
  if ( byte_140C5AE14 && EtwEventEnabled(RegHandle, &stru_14000FA90) )
  {
    v2 = PsLookupProcessByProcessId(*a1, &Process);
    v3 = Process;
    if ( v2 >= 0 )
    {
      v4 = (unsigned __int16 *)*((_QWORD *)Process + 184);
      v7 = *(_DWORD *)a1;
      v6 = *v4 >> 1;
      UserData.Ptr = (ULONGLONG)&v7;
      v10 = &v6;
      *(_QWORD *)&UserData.Size = 4LL;
      v11 = 2LL;
      v5 = *v4;
      v12 = *((_QWORD *)v4 + 1);
      v13 = v5;
      v14 = 0;
      EtwWrite(RegHandle, &stru_14000FA90, 0LL, 3u, &UserData);
    }
    if ( v3 )
      ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  }
}
