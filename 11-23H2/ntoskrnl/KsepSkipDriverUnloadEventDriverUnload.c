/*
 * XREFs of KsepSkipDriverUnloadEventDriverUnload @ 0x140582BDC
 * Callers:
 *     KseSkipDriverUnloadCallbackHookDriverUnload @ 0x140582A80 (KseSkipDriverUnloadCallbackHookDriverUnload.c)
 *     KseSkipDriverUnloadHookDriverUntargeted @ 0x140582AC0 (KseSkipDriverUnloadHookDriverUntargeted.c)
 * Callees:
 *     EtwWriteEx @ 0x1402582A0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

void __fastcall KsepSkipDriverUnloadEventDriverUnload(__int64 a1, __int64 a2)
{
  REGHANDLE v2; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v4; // [rsp+50h] [rbp-28h]
  int v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+5Ch] [rbp-1Ch]
  __int64 v7; // [rsp+80h] [rbp+8h] BYREF
  __int64 v8; // [rsp+88h] [rbp+10h] BYREF

  v8 = a2;
  v7 = a1;
  v2 = KseEtwHandle;
  if ( KseEtwHandle )
  {
    if ( EtwEventEnabled(KseEtwHandle, &KseSkipDriverUnloadEventDriverUnload) )
    {
      UserData.Reserved = 0;
      v6 = 0;
      UserData.Ptr = (ULONGLONG)&v7;
      UserData.Size = 8;
      v4 = &v8;
      v5 = 8;
      EtwWriteEx(v2, &KseSkipDriverUnloadEventDriverUnload, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
}
