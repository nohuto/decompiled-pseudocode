/*
 * XREFs of ?CreateComponent@ImmersiveShellComponentCreator@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180113460
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x180146454 (-Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$DefaultM.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ImmersiveShellComponentCreator::CreateComponent(
        ImmersiveShellComponentCreator *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v7; // r14
  __int64 *v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  int v13; // ebx
  PVOID v14; // rbx
  RTL_SRWLOCK *v15; // rsi
  void *v16; // rcx
  int v17; // eax
  PVOID v18; // rcx
  RTL_SRWLOCK *v20; // rsi
  void *v21; // rcx
  int v22; // [rsp+30h] [rbp-38h] BYREF
  PVOID v23; // [rsp+38h] [rbp-30h] BYREF
  PVOID Ptr[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v7 = Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create(this);
  v23 = 0LL;
  v8 = (__int64 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7) + 8);
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7);
  if ( (unsigned __int64)v8 >= v9 )
  {
LABEL_31:
    v13 = -2147221231;
    goto LABEL_18;
  }
  while ( 1 )
  {
    v10 = *v8;
    if ( *v8 )
    {
      v11 = *(_QWORD **)(v10 + 8);
      v12 = *v11 - *(_QWORD *)&a2->Data1;
      if ( *v11 == *(_QWORD *)&a2->Data1 )
        v12 = v11[1] - *(_QWORD *)a2->Data4;
      if ( !v12 )
        break;
    }
    if ( (unsigned __int64)++v8 >= v9 )
      goto LABEL_31;
  }
  v22 = 1;
  v23 = 0LL;
  Ptr[0] = 0LL;
  if ( !**(_QWORD **)(v10 + 24) )
    goto LABEL_9;
  v20 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7);
  AcquireSRWLockShared(v20);
  v21 = **(void ***)(v10 + 24);
  if ( !v21 )
  {
    if ( v20 )
      ReleaseSRWLockShared(v20);
LABEL_9:
    v13 = (*(__int64 (__fastcall **)(int *, __int64, GUID *, PVOID *))v10)(
            &v22,
            v10,
            &GUID_00000001_0000_0000_c000_000000000046,
            Ptr);
    if ( v13 >= 0 )
    {
      if ( (v22 & 4) != 0 )
        goto LABEL_16;
      v14 = 0LL;
      v15 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7);
      AcquireSRWLockExclusive(v15);
      v16 = **(void ***)(v10 + 24);
      if ( v16 )
      {
        v14 = DecodePointer(v16);
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v14 + 8LL))(v14);
      }
      else
      {
        **(_QWORD **)(v10 + 24) = EncodePointer(Ptr[0]);
      }
      if ( v15 )
        ReleaseSRWLockExclusive(v15);
      if ( v14 )
      {
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr[0] + 16LL))(Ptr[0]);
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr[0] + 16LL))(Ptr[0]);
      }
      else
      {
LABEL_16:
        v14 = Ptr[0];
      }
      v23 = v14;
      v13 = 0;
    }
    goto LABEL_18;
  }
  Ptr[0] = DecodePointer(v21);
  v13 = (**(__int64 (__fastcall ***)(PVOID, GUID *, PVOID *))Ptr[0])(
          Ptr[0],
          &GUID_00000001_0000_0000_c000_000000000046,
          &v23);
  if ( v20 )
    ReleaseSRWLockShared(v20);
LABEL_18:
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12,
      (__int64)"onecoreuap\\internal\\shell\\inc\\private\\immersiveshellcomponentcreator.h",
      (const char *)(unsigned int)v13);
  }
  else
  {
    v17 = (*(__int64 (__fastcall **)(PVOID, _QWORD, const struct _GUID *, void **))(*(_QWORD *)v23 + 24LL))(
            v23,
            0LL,
            a3,
            a4);
    v13 = v17;
    if ( v17 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13,
        (__int64)"onecoreuap\\internal\\shell\\inc\\private\\immersiveshellcomponentcreator.h",
        (const char *)(unsigned int)v17);
    else
      v13 = 0;
  }
  v18 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return (unsigned int)v13;
}
