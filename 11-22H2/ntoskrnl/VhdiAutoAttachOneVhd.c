/*
 * XREFs of VhdiAutoAttachOneVhd @ 0x140681468
 * Callers:
 *     VhdDeferredAutoAttachVirtualDisks @ 0x140419D38 (VhdDeferredAutoAttachVirtualDisks.c)
 *     VhdAutoAttachVirtualDisks @ 0x140B35A9C (VhdAutoAttachVirtualDisks.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E84 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1402F6BE4 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     McTemplateK0hzr0d_EtwWriteTransfer @ 0x140419CA8 (McTemplateK0hzr0d_EtwWriteTransfer.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     RtlAcquirePrivilege @ 0x1407D310C (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x1407DF4E0 (RtlReleasePrivilege.c)
 *     VhdiMountVhdFile @ 0x140A7328C (VhdiMountVhdFile.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

void __fastcall VhdiAutoAttachOneVhd(_WORD *Src, _OWORD *a2, ULONG a3)
{
  __int64 v6; // r9
  size_t v7; // rsi
  __int64 Pool2; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // ebx
  __int64 v16; // r9
  ULONG Privilege; // [rsp+30h] [rbp-49h] BYREF
  PVOID ReturnedState; // [rsp+38h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+40h] [rbp-39h] BYREF
  PVOID *p_ReturnedState; // [rsp+60h] [rbp-19h]
  __int64 v21; // [rsp+68h] [rbp-11h]
  _BYTE v22[16]; // [rsp+70h] [rbp-9h] BYREF
  _OWORD *v23; // [rsp+80h] [rbp+7h]
  __int64 v24; // [rsp+88h] [rbp+Fh]
  ULONG *p_Privilege; // [rsp+90h] [rbp+17h]
  __int64 v26; // [rsp+98h] [rbp+1Fh]

  if ( Src )
  {
    ReturnedState = 0LL;
    if ( PnpSetupOOBEInProgress && PnpSetupUpgradeInProgress )
    {
      v6 = -1LL;
      do
        ++v6;
      while ( Src[v6] );
      v7 = 2 * v6 + 2;
      Pool2 = ExAllocatePool2(256LL, 2 * v6 + 42, 1113876566LL);
      v9 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 16) = a3;
        *(_OWORD *)(Pool2 + 20) = *a2;
        memmove((void *)(Pool2 + 36), Src, v7);
        v10 = (_QWORD *)qword_140CF8328;
        if ( *(PVOID **)qword_140CF8328 != &qword_140CF8320 )
          __fastfail(3u);
        *v9 = &qword_140CF8320;
        v9[1] = v10;
        *v10 = v9;
        qword_140CF8328 = (__int64)v9;
      }
    }
    else
    {
      Privilege = 28;
      v11 = RtlAcquirePrivilege(&Privilege, 1u, 0, &ReturnedState);
      LOBYTE(v15) = v11;
      if ( v11 < 0 || (v15 = VhdiMountVhdFile(Src), RtlReleasePrivilege(ReturnedState), v15 < 0) )
      {
        if ( (Microsoft_Windows_Kernel_IOEnableBits & 4) != 0 )
        {
          v16 = -1LL;
          do
            ++v16;
          while ( Src[v16] );
          McTemplateK0hzr0d_EtwWriteTransfer(v13, v12, v14, v16, (__int64)Src, v15);
        }
        if ( (unsigned int)dword_140C03838 > 5 && tlgKeywordOn((__int64)&dword_140C03838, 0x400000000000LL) )
        {
          ReturnedState = (PVOID)0x2000000;
          p_ReturnedState = &ReturnedState;
          v21 = 8LL;
          tlgCreate1Sz_wchar_t((__int64)v22, (const size_t *)Src);
          v23 = a2;
          p_Privilege = &Privilege;
          v24 = 16LL;
          Privilege = a3;
          v26 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C03838,
            (unsigned __int8 *)&dword_14003A68C,
            0LL,
            0LL,
            6u,
            &v19);
        }
      }
    }
  }
}
