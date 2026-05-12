/*
 * XREFs of ATADeviceIdShimHookDeviceControl @ 0x1C0073930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1C003E820 (WPP_SF_.c)
 */

__int64 __fastcall ATADeviceIdShimHookDeviceControl(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 *v4; // r8
  __int64 v6; // rbp
  _DWORD *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v4 = *(unsigned __int8 **)(a2 + 184);
  v6 = *v4;
  if ( *(_DWORD *)v2 == 1431193940 )
  {
    if ( *(_QWORD *)(v2 + 144) )
    {
      if ( *((_DWORD *)v4 + 6) == 2954240 )
      {
        v7 = *(_DWORD **)(a2 + 24);
        if ( v7 )
        {
          if ( !v7[1] && *v7 == 2 )
          {
            v8 = *((unsigned int *)v4 + 2);
            if ( (unsigned int)v8 >= 8 )
            {
              if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
              {
                WPP_SF_(
                  (__int64)WPP_GLOBAL_Control->AttachedDevice,
                  0x13u,
                  (__int64)&WPP_d7a4465d56553371f6360018b92f43e1_Traceguids);
              }
              (*(void (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(), __int64))(qword_1C0092340 + 8))(
                a1,
                a2,
                ATADeviceIdShimStorageDeviceIdCompletionHook,
                v8);
            }
          }
        }
      }
    }
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD))qword_1C0092340)(*(_QWORD *)(a1 + 8));
  return (*(__int64 (__fastcall **)(__int64, __int64))(v9 + 8 * v6 + 32))(a1, a2);
}
