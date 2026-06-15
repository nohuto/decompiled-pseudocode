/*
 * XREFs of ?DeserializeProcessingModeCharacteristics@@YAJKPEAEAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x180009948
 * Callers:
 *     ?ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x18001E748 (-ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     ??4?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180009B24 (--4-$vector@V-$unique_ptr@VCConnectorProcessingModeCharacteristics@@U-$default_delete@VCConnecto.c)
 *     ?_Tidy@?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180009B78 (-_Tidy@-$vector@V-$unique_ptr@VCConnectorProcessingModeCharacteristics@@U-$default_delete@VCConn.c)
 *     ??$_Emplace_reallocate@PEAVCConnectorProcessingModeCharacteristics@@@?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@1@QEAV21@$$QEAPEAVCConnectorProcessingModeCharacteristics@@@Z @ 0x180009BC4 (--$_Emplace_reallocate@PEAVCConnectorProcessingModeCharacteristics@@@-$vector@V-$unique_ptr@VCCo.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x1800347A0 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DeserializeProcessingModeCharacteristics(unsigned int a1, _DWORD *a2, __int64 a3)
{
  unsigned int v3; // r12d
  CConnectorProcessingModeCharacteristics **v4; // r13
  _DWORD *v5; // rax
  unsigned int v6; // edi
  _DWORD *v7; // rbx
  unsigned int v8; // r14d
  CConnectorProcessingModeCharacteristics **v9; // rsi
  _DWORD *v10; // r14
  __int128 v11; // xmm6
  CConnectorProcessingModeCharacteristics *v12; // rax
  CConnectorProcessingModeCharacteristics **v13; // r15
  int v14; // eax
  unsigned int v15; // r14d
  __int64 v16; // rcx
  unsigned int v18; // [rsp+20h] [rbp-98h]
  _DWORD *v19; // [rsp+40h] [rbp-78h]
  __int128 v21; // [rsp+50h] [rbp-68h] BYREF
  CConnectorProcessingModeCharacteristics **v22; // [rsp+60h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  unsigned int v24; // [rsp+C0h] [rbp+8h]
  CConnectorProcessingModeCharacteristics *v26; // [rsp+D8h] [rbp+20h] BYREF

  v21 = 0LL;
  v3 = 0;
  v4 = 0LL;
  v22 = 0LL;
  if ( a1 < 8 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAE,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)0x80070490LL,
      v18);
    std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v21);
    return 2147943568LL;
  }
  else
  {
    v5 = a2;
    if ( *a2 == 10 )
    {
      v6 = a1 - 8;
      v7 = a2 + 2;
      v8 = 0;
      v9 = (CConnectorProcessingModeCharacteristics **)*((_QWORD *)&v21 + 1);
LABEL_4:
      v24 = v8;
      if ( v8 >= v5[1] )
      {
        std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::operator=(a3, &v21);
        std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v21);
        return 0LL;
      }
      else
      {
        v10 = v7;
        v19 = v7;
        if ( v6 < 0x14 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xBB,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
            (const char *)0x80070490LL,
            v18);
          std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v21);
          return 2147943568LL;
        }
        else
        {
          v11 = *(_OWORD *)v7;
          v12 = (CConnectorProcessingModeCharacteristics *)operator new(
                                                             0x40uLL,
                                                             (const struct std::nothrow_t *)&std::nothrow);
          v26 = v12;
          if ( v12 )
          {
            *(_OWORD *)v12 = v11;
            *((_QWORD *)v12 + 2) = 0LL;
            *((_QWORD *)v12 + 3) = 0LL;
            *((_QWORD *)v12 + 4) = 0LL;
            *((_QWORD *)v12 + 5) = 0LL;
            *((_QWORD *)v12 + 6) = 0LL;
            *((_QWORD *)v12 + 7) = 0LL;
          }
          else
          {
            v12 = 0LL;
          }
          v26 = v12;
          if ( v9 == v4 )
          {
            v13 = (CConnectorProcessingModeCharacteristics **)std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Emplace_reallocate<CConnectorProcessingModeCharacteristics *>(
                                                                &v21,
                                                                v9,
                                                                &v26);
            v12 = *v13;
            v4 = v22;
            v9 = (CConnectorProcessingModeCharacteristics **)*((_QWORD *)&v21 + 1);
          }
          else
          {
            *v9 = v12;
            v13 = v9++;
            *((_QWORD *)&v21 + 1) = v9;
          }
          if ( v12 )
          {
            v6 -= 20;
            v7 += 5;
            while ( 1 )
            {
              if ( v3 >= v10[4] )
              {
                v8 = v24 + 1;
                v5 = a2;
                v3 = 0;
                goto LABEL_4;
              }
              if ( v6 < 0x26 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0xC7,
                  (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
                  (const char *)0x80070490LL,
                  v18);
                std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v21);
                return 2147943568LL;
              }
              if ( v6 < (unsigned __int64)*((unsigned __int16 *)v7 + 18) + 38 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0xCB,
                  (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
                  (const char *)0x80070490LL,
                  v18);
                std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v21);
                return 2147943568LL;
              }
              v14 = CConnectorProcessingModeCharacteristics::AddConnectorFormat(
                      *v13,
                      (const struct tWAVEFORMATEX *)(v7 + 5),
                      v7[1],
                      *v7,
                      v7[2],
                      v7[3],
                      v7[4]);
              v15 = v14;
              if ( v14 < 0 )
                break;
              v16 = *((unsigned __int16 *)v7 + 18);
              v6 += -38 - v16;
              v7 = (_DWORD *)((char *)v7 + v16 + 38);
              ++v3;
              v10 = v19;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xCD,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
              (const char *)(unsigned int)v14,
              v18);
            std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v21);
            return v15;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xBF,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
              (const char *)0x8007000ELL,
              v18);
            std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v21);
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
        v18);
      std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v21);
      return 2147943568LL;
    }
  }
}
