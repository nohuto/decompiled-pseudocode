/*
 * XREFs of ?DeserializeProcessingModeCharacteristics@@YAJKPEAEAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x180047350
 * Callers:
 *     ?ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x18004728C (-ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x180047568 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 *     ?_Tidy@?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180047A34 (-_Tidy@-$vector@V-$unique_ptr@VCConnectorProcessingModeCharacteristics@@U-$default_delete@VCConn.c)
 *     ??$_Emplace_reallocate@PEAVCConnectorProcessingModeCharacteristics@@@?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@1@QEAV21@$$QEAPEAVCConnectorProcessingModeCharacteristics@@@Z @ 0x180047A58 (--$_Emplace_reallocate@PEAVCConnectorProcessingModeCharacteristics@@@-$vector@V-$unique_ptr@VCCo.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DeserializeProcessingModeCharacteristics(unsigned int a1, _DWORD *a2, __int64 a3)
{
  CConnectorProcessingModeCharacteristics **v4; // r15
  _DWORD *v5; // rax
  unsigned int v6; // r14d
  _DWORD *v7; // rbx
  unsigned int v8; // r12d
  CConnectorProcessingModeCharacteristics **v9; // rdi
  _DWORD *v10; // r12
  __int128 v11; // xmm6
  _QWORD *v12; // rax
  CConnectorProcessingModeCharacteristics **v13; // r13
  unsigned int v14; // eax
  int v15; // eax
  unsigned int v16; // r12d
  __int64 v17; // rcx
  unsigned int v19; // [rsp+20h] [rbp-88h]
  _QWORD *v20; // [rsp+40h] [rbp-68h] BYREF
  _DWORD *v21; // [rsp+48h] [rbp-60h]
  _DWORD *v22; // [rsp+50h] [rbp-58h]
  __int128 v23; // [rsp+58h] [rbp-50h] BYREF
  CConnectorProcessingModeCharacteristics **v24; // [rsp+68h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned int v26; // [rsp+B0h] [rbp+8h]
  unsigned int v27; // [rsp+C8h] [rbp+20h]

  v23 = 0LL;
  v4 = 0LL;
  v24 = 0LL;
  if ( a1 < 8 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAE,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)0x80070490LL,
      v19);
    std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v23);
    return 2147943568LL;
  }
  else
  {
    v5 = a2;
    v22 = a2;
    if ( *a2 == 10 )
    {
      v6 = a1 - 8;
      v7 = a2 + 2;
      v8 = 0;
      v9 = (CConnectorProcessingModeCharacteristics **)*((_QWORD *)&v23 + 1);
LABEL_4:
      v27 = v8;
      if ( v8 >= v5[1] )
      {
        if ( (__int128 *)a3 != &v23 )
        {
          std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(a3);
          *(_QWORD *)a3 = v23;
          *(_QWORD *)(a3 + 8) = v9;
          *(_QWORD *)(a3 + 16) = v4;
          v23 = 0LL;
          v24 = 0LL;
        }
        std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v23);
        return 0LL;
      }
      else
      {
        v10 = v7;
        v21 = v7;
        if ( v6 < 0x14 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xBB,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
            (const char *)0x80070490LL,
            v19);
          std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v23);
          return 2147943568LL;
        }
        else
        {
          v11 = *(_OWORD *)v7;
          v12 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
          v20 = v12;
          if ( v12 )
          {
            *(_OWORD *)v12 = v11;
            v12[2] = 0LL;
            v12[3] = 0LL;
            v12[4] = 0LL;
            v12[5] = 0LL;
            v12[6] = 0LL;
            v12[7] = 0LL;
          }
          else
          {
            v12 = 0LL;
          }
          v20 = v12;
          if ( v9 == v4 )
          {
            v13 = (CConnectorProcessingModeCharacteristics **)std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Emplace_reallocate<CConnectorProcessingModeCharacteristics *>(
                                                                &v23,
                                                                v9,
                                                                &v20);
            v4 = v24;
            v9 = (CConnectorProcessingModeCharacteristics **)*((_QWORD *)&v23 + 1);
          }
          else
          {
            *v9 = (CConnectorProcessingModeCharacteristics *)v12;
            v13 = v9++;
            *((_QWORD *)&v23 + 1) = v9;
          }
          if ( *v13 )
          {
            v6 -= 20;
            v7 += 5;
            v14 = 0;
            while ( 1 )
            {
              v26 = v14;
              if ( v14 >= v10[4] )
              {
                v8 = v27 + 1;
                v5 = v22;
                goto LABEL_4;
              }
              if ( v6 < 0x26 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0xC7,
                  (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
                  (const char *)0x80070490LL,
                  v19);
                std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v23);
                return 2147943568LL;
              }
              if ( v6 < (unsigned __int64)*((unsigned __int16 *)v7 + 18) + 38 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0xCB,
                  (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
                  (const char *)0x80070490LL,
                  v19);
                std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v23);
                return 2147943568LL;
              }
              v15 = CConnectorProcessingModeCharacteristics::AddConnectorFormat(
                      *v13,
                      (const struct tWAVEFORMATEX *)(v7 + 5),
                      v7[1],
                      *v7,
                      v7[2],
                      v7[3],
                      v7[4]);
              v16 = v15;
              if ( v15 < 0 )
                break;
              v17 = *((unsigned __int16 *)v7 + 18);
              v6 += -38 - v17;
              v7 = (_DWORD *)((char *)v7 + v17 + 38);
              v14 = v26 + 1;
              v10 = v21;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xCD,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
              (const char *)(unsigned int)v15,
              v19);
            std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v23);
            return v16;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xBF,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
              (const char *)0x8007000ELL,
              v19);
            std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v23);
            return 2147942414LL;
          }
        }
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB0,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
        (const char *)0x80070490LL,
        v19);
      std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v23);
      return 2147943568LL;
    }
  }
}
