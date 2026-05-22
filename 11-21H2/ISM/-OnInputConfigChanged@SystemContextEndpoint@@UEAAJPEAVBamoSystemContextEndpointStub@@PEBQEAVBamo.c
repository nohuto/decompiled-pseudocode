/*
 * XREFs of ?OnInputConfigChanged@SystemContextEndpoint@@UEAAJPEAVBamoSystemContextEndpointStub@@PEBQEAVBamoInputSpacePayloadProxy@@I@Z @ 0x1800880B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ @ 0x180029A7C (-_Tidy@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ.c)
 *     ?GetInstance@InputConfigContextProvider@@SAPEAV1@XZ @ 0x180040EF8 (-GetInstance@InputConfigContextProvider@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18004C898 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@QEAAPEAUINPUT_SPACE_PAYLOAD@@QEAU2@AEAU2@@Z @ 0x180086D3C (--$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UIN.c)
 *     ?_Reallocate_exactly@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAX_K@Z @ 0x180088EF4 (-_Reallocate_exactly@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@st.c)
 *     ?OnInputConfigPayloadReceived@InputConfigContextProvider@@QEAAXAEBV?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@@Z @ 0x1800FA218 (-OnInputConfigPayloadReceived@InputConfigContextProvider@@QEAAXAEBV-$vector@UINPUT_SPACE_PAYLOAD.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemContextEndpoint::OnInputConfigChanged(
        SystemContextEndpoint *this,
        struct BamoSystemContextEndpointStub *a2,
        struct BamoInputSpacePayloadProxy *const *a3,
        __int64 a4)
{
  struct BamoInputSpacePayloadProxy *const *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct BamoInputSpacePayloadProxy *const *v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rax
  InputConfigContextProvider *Instance; // rax
  int v15; // [rsp+20h] [rbp-50h] BYREF
  __int128 v16; // [rsp+28h] [rbp-48h] BYREF
  __int64 v17; // [rsp+38h] [rbp-38h]
  _QWORD v18[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v19; // [rsp+50h] [rbp-20h] BYREF
  __int64 v20; // [rsp+60h] [rbp-10h]

  v4 = a3;
  v16 = 0LL;
  v17 = 0LL;
  v5 = (unsigned int)a4;
  if ( (_DWORD)a4 )
    std::vector<INPUT_SPACE_PAYLOAD>::_Reallocate_exactly(&v16, (unsigned int)a4);
  gsl::details::extent_type<-1>::extent_type<-1>(v18, v5, (__int64)a3, a4);
  if ( v18[0] == -1LL || !v4 && v18[0] )
  {
    _o_terminate(v7, v6, v8, v9);
    return SystemContextEndpoint::OnInputConfigChanged_::_1_::dtor_0();
  }
  else
  {
    v10 = &v4[v18[0]];
    if ( v4 != v10 )
    {
      v11 = *((_QWORD *)&v16 + 1);
      do
      {
        v12 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)*v4 + 1) + 24LL))((__int64)*v4 + 8);
        *(_QWORD *)&v19 = *(_QWORD *)v12;
        DWORD2(v19) = *(_DWORD *)(v12 + 8);
        (*(void (__fastcall **)(__int64, _QWORD *, int *))(*((_QWORD *)*v4 + 1) + 32LL))((__int64)*v4 + 8, v18, &v15);
        v20 = v18[0];
        HIDWORD(v19) = v15;
        if ( v11 == v17 )
        {
          std::vector<INPUT_SPACE_PAYLOAD>::_Emplace_reallocate<INPUT_SPACE_PAYLOAD &>(
            (const void **)&v16,
            (_BYTE *)v11,
            (__int64)&v19);
          v11 = *((_QWORD *)&v16 + 1);
        }
        else
        {
          *(_OWORD *)v11 = v19;
          *(_QWORD *)(v11 + 16) = v20;
          v11 += 24LL;
          *((_QWORD *)&v16 + 1) = v11;
        }
        ++v4;
      }
      while ( v4 != v10 );
    }
    Instance = InputConfigContextProvider::GetInstance();
    InputConfigContextProvider::OnInputConfigPayloadReceived(Instance);
    std::vector<INPUT_SPACE_PAYLOAD>::_Tidy((__int64)&v16);
    return 0LL;
  }
}
