/*
 * XREFs of ?CheckCustomPresentDuration@CDirectFlipInfo@@IEAA_NXZ @ 0x1801F6A00
 * Callers:
 *     ?Activate@CDirectFlipInfo@@QEAAJXZ @ 0x1801F65CC (-Activate@CDirectFlipInfo@@QEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x18012DB80 (McTemplateU0qqq_EventWriteTransfer.c)
 */

char __fastcall CDirectFlipInfo::CheckCustomPresentDuration(CDirectFlipInfo *this)
{
  char v2; // si
  unsigned int v3; // r14d
  char v4; // di
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  int v8; // ebp
  unsigned int v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 96LL))(*((_QWORD *)this + 2));
  v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 2) + 104LL))(
         *((_QWORD *)this + 2),
         &v10);
  if ( __PAIR64__(v10, v3) != *((_QWORD *)this + 7) || v4 != *((_BYTE *)this + 64) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 176LL))(*(_QWORD *)this);
    LOBYTE(v6) = v4;
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v5 + 168LL))(v5, v3, v6, v10);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000000) != 0 )
      McTemplateU0qqq_EventWriteTransfer(v7, (__int64)&CustomDurationComputeSupportedDuration);
    if ( v8 != *((_DWORD *)this + 17) )
    {
      *((_DWORD *)this + 17) = v8;
      v2 = 1;
    }
    *((_DWORD *)this + 14) = v3;
    *((_BYTE *)this + 64) = v4;
  }
  return v2;
}
