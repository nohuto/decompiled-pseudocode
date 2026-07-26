/*
 * XREFs of ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C010FDEC
 * Callers:
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x1C010E614 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x1C0132938 (ndisIfUpdateIfBlockFromPersistedState.c)
 * Callees:
 *     ?ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z @ 0x1C002AEC8 (-ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C0033A10 (WPP_RECORDER_SF_Sd.c)
 *     ?ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z @ 0x1C010E864 (-ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0110158 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1C0110388 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0110454 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     KRegKey::QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___ @ 0x1C0110BC8 (KRegKey--QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___.c)
 */

__int64 __fastcall Ndis::BindRegistry::ReadNetworkInterfaceV2(
        struct KRegKey *this,
        struct KRegKey *a2,
        struct KRegKey *a3,
        struct NdisNetworkInterfacePersistedState *a4)
{
  __int64 result; // rax
  signed int Uint64; // edi
  __int64 v9; // r14
  const wchar_t *v10; // r10
  __int64 v11; // rcx
  const char *v12; // rax
  __int16 v13; // cx
  const wchar_t *v14; // rax
  __int16 v15; // r14
  unsigned __int16 v16; // r9
  bool v17; // zf
  __int128 v18; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v19; // [rsp+90h] [rbp+40h] BYREF
  struct KRegKey *v20; // [rsp+A0h] [rbp+50h] BYREF

  v20 = this;
  result = NetSetupPropertyBag::ReadString(&v20, &unk_1C00D2700, a3);
  if ( (int)result < 0 )
    return result;
  result = NetSetupPropertyBag::ReadString(&v20, &unk_1C00D26E8, &a3[1]);
  if ( (int)result < 0 )
    return result;
  v19 = 0;
  Uint64 = NetSetupPropertyBag::ReadUint32(
             (NetSetupPropertyBag *)&v20,
             (const struct _NETSETUPPROPKEY *)&unk_1C00D26D0,
             &v19);
  if ( Uint64 < 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return (unsigned int)Uint64;
    v16 = 19;
LABEL_51:
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0x16u,
      v16,
      (struct _GUID *)&WPP_388d5b0555a83352147e712e55d69f1d_Traceguids,
      Uint64);
    return (unsigned int)Uint64;
  }
  LOWORD(a3[2].m_ptr) = v19;
  Uint64 = NetSetupPropertyBag::ReadUint64(
             (NetSetupPropertyBag *)&v20,
             (const struct _NETSETUPPROPKEY *)&unk_1C00D26B8,
             (unsigned __int64 *)&a3[3]);
  if ( Uint64 < 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return (unsigned int)Uint64;
    v16 = 20;
    goto LABEL_51;
  }
  if ( (int)NetSetupPropertyBag::ReadUint32(
              (NetSetupPropertyBag *)&v20,
              (const struct _NETSETUPPROPKEY *)&unk_1C00D26A0,
              (unsigned int *)&a3[7]) < 0 )
    LODWORD(a3[7].m_ptr) = 0;
  if ( (int)NetSetupPropertyBag::ReadUint32(
              (NetSetupPropertyBag *)&v20,
              (const struct _NETSETUPPROPKEY *)&unk_1C00D2688,
              (unsigned int *)&a3[7].m_ptr + 1) < 0 )
    HIDWORD(a3[7].m_ptr) = 0;
  result = NetSetupPropertyBag::ReadBoolean(
             (NetSetupPropertyBag *)&v20,
             (const struct _NETSETUPPROPKEY *)&unk_1C00D2670,
             (bool *)&a3[16].m_ptr + 5);
  if ( (int)result >= 0 )
  {
    result = NetSetupPropertyBag::ReadBoolean(
               (NetSetupPropertyBag *)&v20,
               (const struct _NETSETUPPROPKEY *)&unk_1C00D2658,
               (bool *)&a3[16].m_ptr + 4);
    if ( (int)result >= 0 )
    {
      result = NetSetupPropertyBag::ReadUint32(
                 (NetSetupPropertyBag *)&v20,
                 (const struct _NETSETUPPROPKEY *)&unk_1C00D2640,
                 (unsigned int *)&a3[4]);
      if ( (_DWORD)result == -1073741772 )
      {
        LODWORD(a3[4].m_ptr) = 0;
      }
      else if ( (_DWORD)result )
      {
        return result;
      }
      LOWORD(a3[2].m_ptr) = v19;
      HIDWORD(a3[6].m_ptr) = 0;
      result = ndisIfReadNetworkGuidFromKey(this, (struct _GUID *)((char *)&a3[4].m_ptr + 4));
      if ( (int)result < 0 )
        return result;
      if ( a2->m_ptr )
      {
        v9 = 0x7FFFLL;
        LOWORD(a3[8].m_ptr) = 0;
        v10 = (const wchar_t *)L"CurrentAddress";
        v11 = 0x7FFFLL;
        v18 = 0LL;
        v12 = L"CurrentAddress";
        do
        {
          if ( !*(_WORD *)v12 )
            break;
          v12 += 2;
          --v11;
        }
        while ( v11 );
        Uint64 = v11 == 0 ? 0xC000000D : 0;
        if ( v11 )
        {
          v13 = 2 * v11;
          *((_QWORD *)&v18 + 1) = L"CurrentAddress";
          LOWORD(v18) = -2 - v13;
          WORD1(v18) = -v13;
        }
        if ( Uint64 >= 0 )
        {
          Uint64 = KRegKey::QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___(a2, &v18);
          v10 = (const wchar_t *)L"CurrentAddress";
        }
        if ( (int)(Uint64 + 0x80000000) >= 0 && Uint64 != -1073741772 )
        {
          v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED == (_QWORD)&WPP_RECORDER_INITIALIZED;
          goto LABEL_57;
        }
        v10 = L"PermanentAddress";
        WORD1(a3[12].m_ptr) = 0;
        v18 = 0LL;
        v14 = L"PermanentAddress";
        do
        {
          if ( !*v14 )
            break;
          ++v14;
          --v9;
        }
        while ( v9 );
        Uint64 = v9 == 0 ? 0xC000000D : 0;
        if ( v9 )
        {
          v15 = 2 * v9;
          *((_QWORD *)&v18 + 1) = L"PermanentAddress";
          LOWORD(v18) = -2 - v15;
          WORD1(v18) = -v15;
        }
        if ( Uint64 >= 0 )
        {
          Uint64 = KRegKey::QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___(a2, &v18);
          v10 = L"PermanentAddress";
        }
        if ( ((Uint64 + 0x80000000) & 0x80000000) == 0 && Uint64 != -1073741772 )
        {
          v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED == (_QWORD)&WPP_RECORDER_INITIALIZED;
LABEL_57:
          if ( !v17 )
            WPP_RECORDER_SF_Sd(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0x16u,
              0x12u,
              (struct _GUID *)&WPP_388d5b0555a83352147e712e55d69f1d_Traceguids,
              v10,
              Uint64);
          return (unsigned int)Uint64;
        }
      }
      BYTE6(a3[16].m_ptr) = 1;
      result = NetSetupPropertyBag::ReadBoolean(
                 (NetSetupPropertyBag *)&v20,
                 (const struct _NETSETUPPROPKEY *)&unk_1C00D2628,
                 (bool *)&a3[16].m_ptr + 7);
      if ( (_DWORD)result == -1073741772 )
      {
        BYTE6(a3[16].m_ptr) = 0;
      }
      else if ( (int)result < 0 )
      {
        return result;
      }
      result = NetSetupPropertyBag::ReadUint32(
                 (NetSetupPropertyBag *)&v20,
                 (const struct _NETSETUPPROPKEY *)&unk_1C00D2610,
                 (unsigned int *)&a3[17]);
      if ( (_DWORD)result == -1073741772 )
      {
        BYTE6(a3[16].m_ptr) = 0;
      }
      else if ( (int)result < 0 )
      {
        return result;
      }
      result = NetSetupPropertyBag::ReadUint32(
                 (NetSetupPropertyBag *)&v20,
                 (const struct _NETSETUPPROPKEY *)&unk_1C00D25F8,
                 (unsigned int *)&a3[17].m_ptr + 1);
      if ( (_DWORD)result == -1073741772 )
      {
        BYTE6(a3[16].m_ptr) = 0;
      }
      else if ( (int)result < 0 )
      {
        return result;
      }
      result = NetSetupPropertyBag::ReadUint32(
                 (NetSetupPropertyBag *)&v20,
                 (const struct _NETSETUPPROPKEY *)&unk_1C00D25E0,
                 (unsigned int *)&a3[18]);
      if ( (_DWORD)result == -1073741772 )
      {
        BYTE6(a3[16].m_ptr) = 0;
        return 0LL;
      }
      if ( (int)result >= 0 )
        return 0LL;
    }
  }
  return result;
}
