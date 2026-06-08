/*
 * XREFs of HwDebugUpdateProcessorData @ 0x1C0002080
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0003770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HwDebugUpdateProcessorData(__int64 a1, __int64 a2)
{
  __int64 *v3; // rdi
  __int64 v4; // r15
  __int64 v5; // rbp
  __int64 v6; // rbx
  unsigned int i; // esi
  __int64 v8; // r14
  __int64 v9; // r8
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  void (__fastcall *v12)(__int64, unsigned __int64 *); // rax
  __int64 v13; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-68h] BYREF
  __int64 v16; // [rsp+50h] [rbp-58h]
  __int64 v17; // [rsp+58h] [rbp-50h]

  v3 = (__int64 *)(a1 + 8);
  v4 = 2LL;
  do
  {
    v5 = 2LL;
    do
    {
      v6 = *v3;
      if ( *v3 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2528))(
          WdfDriverGlobals,
          *(_QWORD *)(v6 + 280));
        if ( *(_QWORD *)(v6 + 296) != a2 )
        {
          for ( i = 0; i < *(unsigned __int8 *)(v6 + 308); ++i )
          {
            v14 = 0LL;
            v8 = *(_QWORD *)(v6 + 24 * (i + 13LL));
            v9 = v6 + 24 * (i + 13LL);
            v10 = __readmsr(*(_DWORD *)(v8 + 8));
            v11 = *(_QWORD *)(v9 + 8) & (((unsigned __int64)HIDWORD(v10) << 32) | (unsigned int)v10);
            v14 = v11;
            if ( v11 != *(_QWORD *)(v9 + 16) )
            {
              *(_QWORD *)(v9 + 16) = v11;
              v13 = v6 + 24 * (i + 13LL);
              if ( EtwEventEnabled(
                     (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink,
                     &PPM_ETW_HARDWARE_DEBUG_REGISTER_VALUE_CHANGE) )
              {
                UserData.Ptr = (unsigned __int64)&v13;
                *(_QWORD *)&UserData.Size = 8LL;
                v16 = v13 + 16;
                v17 = 8LL;
                EtwWrite(
                  (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink,
                  &PPM_ETW_HARDWARE_DEBUG_REGISTER_VALUE_CHANGE,
                  0LL,
                  (ULONG)2,
                  &UserData);
              }
            }
            v12 = *(void (__fastcall **)(__int64, unsigned __int64 *))(v8 + 32);
            if ( v12 )
              v12(a2, &v14);
          }
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2536))(
          WdfDriverGlobals,
          *(_QWORD *)(v6 + 280));
      }
      ++v3;
      --v5;
    }
    while ( v5 );
    --v4;
  }
  while ( v4 );
}
