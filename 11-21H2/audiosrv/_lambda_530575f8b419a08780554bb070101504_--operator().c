/*
 * XREFs of _lambda_530575f8b419a08780554bb070101504_::operator() @ 0x180017850
 * Callers:
 *     ?ForEachStream@CBaseStreamGroupProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x1800175E0 (-ForEachStream@CBaseStreamGroupProxy@@UEAAXV-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EFC8 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall lambda_530575f8b419a08780554bb070101504_::operator()(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, _BYTE *); // rbp
  __int64 (__fastcall ***v8)(_QWORD, _BYTE *); // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _BYTE v13[56]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v14; // [rsp+60h] [rbp-38h]
  __int64 v15; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v16; // [rsp+B8h] [rbp+20h] BYREF

  v4 = 0LL;
  v15 = 0LL;
  if ( *a2 )
  {
    result = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)*a2 + 24LL))(
               *a2,
               &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
               &v15);
    v4 = v15;
  }
  else
  {
    result = 0LL;
  }
  if ( (int)result >= 0 && v4 )
  {
    v16 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v4)(v4, &GUID_3a5c2657_1b5f_474a_96ef_4cfdc4deeb2a, &v16) < 0 )
    {
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v16);
      Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v15);
      return Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(a2);
    }
    else
    {
      v6 = v16;
      v7 = *(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v16 + 192LL);
      v14 = 0LL;
      v8 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a1 + 56);
      if ( v8 )
        v14 = (**v8)(v8, v13);
      result = v7(v6, v13);
      v9 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      v10 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v11 = *a2;
      if ( *a2 )
      {
        *a2 = 0LL;
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
  }
  else
  {
    if ( v4 )
    {
      v15 = 0LL;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    v12 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  return result;
}
