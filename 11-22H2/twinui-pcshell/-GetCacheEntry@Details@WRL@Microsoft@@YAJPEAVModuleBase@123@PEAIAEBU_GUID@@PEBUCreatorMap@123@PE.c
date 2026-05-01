/*
 * XREFs of ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x180085850
 * Callers:
 *     ??$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z @ 0x1800852E8 (--$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAP.c)
 *     ??$GetClassObject@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGAEBU_GUID@@2PEAPEAX@Z @ 0x180085510 (--$GetClassObject@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGAEBU_GUID@@2PEAPEAX@Z.c)
 *     ?CreateComponent@ImmersiveShellComponentCreator@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800855F0 (-CreateComponent@ImmersiveShellComponentCreator@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::GetCacheEntry(
        Microsoft::WRL::Details *this,
        struct Microsoft::WRL::Details::ModuleBase *a2,
        unsigned int *a3,
        const struct _GUID *a4,
        _QWORD *Ptr)
{
  _QWORD *v9; // r14
  __int64 result; // rax
  PVOID v11; // rbx
  RTL_SRWLOCK *v12; // rsi
  void *v13; // rcx
  RTL_SRWLOCK *v14; // rbx
  void *v15; // rcx
  unsigned int v16; // edi

  v9 = Ptr;
  *Ptr = 0LL;
  Ptr = 0LL;
  if ( !**(_QWORD **)a4[1].Data4 )
  {
LABEL_2:
    result = (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, const struct _GUID *, unsigned int *, _QWORD **))&a4->Data1)(
               a2,
               a4,
               a3,
               &Ptr);
    if ( (int)result >= 0 )
    {
      if ( (*(_BYTE *)a2 & 4) != 0 )
        goto LABEL_9;
      v11 = 0LL;
      v12 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 56LL))(this);
      AcquireSRWLockExclusive(v12);
      v13 = **(void ***)a4[1].Data4;
      if ( v13 )
      {
        v11 = DecodePointer(v13);
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v11 + 8LL))(v11);
      }
      else
      {
        **(_QWORD **)a4[1].Data4 = EncodePointer(Ptr);
      }
      if ( v12 )
        ReleaseSRWLockExclusive(v12);
      if ( v11 )
      {
        (*(void (__fastcall **)(_QWORD *))(*Ptr + 16LL))(Ptr);
        (*(void (__fastcall **)(_QWORD *))(*Ptr + 16LL))(Ptr);
      }
      else
      {
LABEL_9:
        v11 = Ptr;
      }
      *v9 = v11;
      return 0LL;
    }
    return result;
  }
  v14 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 56LL))(this);
  AcquireSRWLockShared(v14);
  v15 = **(void ***)a4[1].Data4;
  if ( !v15 )
  {
    if ( v14 )
      ReleaseSRWLockShared(v14);
    goto LABEL_2;
  }
  Ptr = DecodePointer(v15);
  v16 = (*(__int64 (__fastcall **)(_QWORD *, unsigned int *, _QWORD *))*Ptr)(Ptr, a3, v9);
  if ( v14 )
    ReleaseSRWLockShared(v14);
  return v16;
}
