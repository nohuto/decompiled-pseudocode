/*
 * XREFs of ??$InvokePropertyChange_Callback@UVector3@Numerics@Foundation@Windows@@@ProxyObject@Composition@UI@Windows@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUVector3@Numerics@Foundation@3@@Z @ 0x18004DD40
 * Callers:
 *     ?Thunk_Message_Vector3PropertyChanged_Callback_163@?$IVisualEvent_Receive@VVisual@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x1800802D0 (-Thunk_Message_Vector3PropertyChanged_Callback_163@-$IVisualEvent_Receive@VVisual@Composition@UI.c)
 * Callees:
 *     ??$LeaveSession_Callback@V_lambda_8f97133ac6c2efb148fee637c7b09daf_@@@ContextSession@WRL2@Microsoft@@QEAAXV_lambda_8f97133ac6c2efb148fee637c7b09daf_@@@Z @ 0x180051C60 (--$LeaveSession_Callback@V_lambda_8f97133ac6c2efb148fee637c7b09daf_@@@ContextSession@WRL2@Micros.c)
 *     ??0AnimationBindingManager@Composition@UI@Windows@@QEAA@XZ @ 0x180072B5C (--0AnimationBindingManager@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z @ 0x180108EB4 (-OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z.c)
 */

int __fastcall Windows::UI::Composition::ProxyObject::InvokePropertyChange_Callback<Windows::Foundation::Numerics::Vector3>(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int32 v7; // eax
  __int64 v8; // rbx
  __int32 v9; // r13d
  struct _RTL_GENERIC_TABLE *v10; // r15
  _DWORD *v11; // rax
  __int64 v12; // rcx
  _DWORD *v13; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rcx
  Windows::UI::Composition::AnimationBindingManager *v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v22; // [rsp+20h] [rbp-60h] BYREF
  __m256i Buffer; // [rsp+28h] [rbp-58h] BYREF
  __int64 v24; // [rsp+48h] [rbp-38h]
  __m256i v25; // [rsp+50h] [rbp-30h] BYREF
  __int64 v26; // [rsp+70h] [rbp-10h]
  __int64 v27; // [rsp+B0h] [rbp+30h] BYREF

  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 288LL))(a1, a3);
  v8 = *(_QWORD *)(a1 + 24);
  v9 = v7;
  v10 = *(struct _RTL_GENERIC_TABLE **)(v8 + 832);
  if ( !v10 )
  {
    v18 = (Windows::UI::Composition::AnimationBindingManager *)DefaultHeap::AllocClear(0x130uLL);
    if ( v18 )
    {
      v20 = Windows::UI::Composition::AnimationBindingManager::AnimationBindingManager(v18);
      *(_QWORD *)(v8 + 832) = v20;
      v10 = (struct _RTL_GENERIC_TABLE *)v20;
      if ( v20 )
        goto LABEL_2;
    }
    else
    {
      *(_QWORD *)(v8 + 832) = 0LL;
    }
    Microsoft::WRL2::FailFast::OutOfMemory(v19);
  }
LABEL_2:
  LODWORD(v22) = *(_DWORD *)(a1 + 128);
  HIDWORD(v22) = a3;
  Buffer.m256i_i64[0] = v22;
  v27 = 0LL;
  *(_OWORD *)&Buffer.m256i_u64[1] = 0LL;
  v11 = RtlLookupElementGenericTable(v10 + 2, &Buffer);
  v12 = Buffer.m256i_i64[2];
  v13 = v11;
  if ( Buffer.m256i_i64[2] )
  {
    Buffer.m256i_i64[2] = 0LL;
    LODWORD(v11) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v14 = (Microsoft::WRL2::NestableRuntimeClass *)Buffer.m256i_i64[1];
  if ( Buffer.m256i_i64[1] )
  {
    Buffer.m256i_i64[1] = 0LL;
    LODWORD(v11) = Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v14);
  }
  if ( v13 )
  {
    if ( *((_QWORD *)v13 + 2) )
    {
      LODWORD(v22) = *(_DWORD *)(a1 + 128);
      v11 = RtlLookupElementGenericTable(v10 + 3, &v22);
      if ( v11 )
      {
        LODWORD(v11) = v11[1];
        if ( _bittest((const int *)&v11, a3) )
        {
          v15 = *((_QWORD *)v13 + 1);
          LODWORD(v11) = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v13 + 2))(
                           *((_QWORD *)v13 + 2),
                           &GUID_ea6ef06f_31fe_4d0e_96e5_6db1a9855444,
                           &v27);
          if ( (int)v11 >= 0 )
          {
            v16 = *(_QWORD *)(a1 + 24);
            Buffer.m256i_i64[1] = v27;
            Buffer.m256i_i32[0] = 52;
            Buffer.m256i_i64[2] = v15;
            Buffer.m256i_i32[6] = v9;
            v24 = a4;
            v25 = Buffer;
            v26 = a4;
            LODWORD(v11) = Microsoft::WRL2::ContextSession::LeaveSession_Callback<_lambda_8f97133ac6c2efb148fee637c7b09daf_>(
                             v16,
                             &v25);
          }
        }
      }
    }
  }
  v17 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    LODWORD(v11) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return (int)v11;
}
