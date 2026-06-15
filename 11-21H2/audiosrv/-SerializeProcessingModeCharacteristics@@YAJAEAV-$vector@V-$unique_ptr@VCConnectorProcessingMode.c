/*
 * XREFs of ?SerializeProcessingModeCharacteristics@@YAJAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@PEAKPEAPEAE@Z @ 0x180163364
 * Callers:
 *     ?WriteProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x18014DB90 (-WriteProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengi.c)
 * Callees:
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SerializeProcessingModeCharacteristics(_QWORD *a1, unsigned int *a2, char **a3)
{
  _OWORD **v3; // r9
  unsigned int i; // ebp
  __int64 j; // rdx
  char *v7; // rax
  char *v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // rdx
  _OWORD **v11; // r15
  unsigned int v12; // edi
  _OWORD **v13; // r12
  _DWORD *v14; // rsi
  unsigned int v15; // edi
  unsigned __int16 ***v16; // r14
  unsigned __int16 ***v17; // r13
  unsigned int v18; // edi
  unsigned int v19; // edi
  unsigned int v20; // edi
  unsigned int v21; // edi
  unsigned int v22; // edi
  unsigned __int16 *v23; // rdx
  size_t v24; // r8
  __int64 v25; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = (_OWORD **)*a1;
  for ( i = 8; v3 != (_OWORD **)a1[1]; ++v3 )
  {
    i += 20;
    for ( j = *((_QWORD *)*v3 + 2); j != *((_QWORD *)*v3 + 3); j += 8LL )
      i += *(unsigned __int16 *)(**(_QWORD **)j + 16LL) + 38;
  }
  v7 = (char *)CoTaskMemAlloc(i);
  v8 = v7;
  if ( v7 )
  {
    if ( v7 != &v7[i] )
      memset_0(v7, 0, i);
    if ( i >= 4 )
    {
      *(_DWORD *)v8 = 10;
      if ( i - 4 >= 4 )
      {
        *((_DWORD *)v8 + 1) = (__int64)(a1[1] - *a1) >> 3;
        v11 = (_OWORD **)*a1;
        v12 = i - 8;
        v13 = (_OWORD **)a1[1];
        v14 = v8 + 8;
LABEL_26:
        if ( v11 == v13 )
        {
          v9 = 0;
          *a2 = i;
          *a3 = v8;
          return v9;
        }
        if ( v12 < 0x10 )
        {
          v9 = -2147024774;
          v10 = 126LL;
        }
        else
        {
          v15 = v12 - 16;
          *(_OWORD *)v14 = **v11;
          if ( v15 < 4 )
          {
            v9 = -2147024774;
            v10 = 130LL;
          }
          else
          {
            v14[4] = (__int64)(*((_QWORD *)*v11 + 3) - *((_QWORD *)*v11 + 2)) >> 3;
            v12 = v15 - 4;
            v14 += 5;
            v16 = (unsigned __int16 ***)*((_QWORD *)*v11 + 2);
            v17 = (unsigned __int16 ***)*((_QWORD *)*v11 + 3);
            while ( 1 )
            {
              if ( v16 == v17 )
              {
                ++v11;
                goto LABEL_26;
              }
              if ( v12 < 4 )
                break;
              *v14 = *((_DWORD *)*v16 + 2);
              v18 = v12 - 4;
              if ( v18 < 4 )
              {
                v9 = -2147024774;
                v10 = 139LL;
                goto LABEL_37;
              }
              v14[1] = *((_DWORD *)*v16 + 3);
              v19 = v18 - 4;
              if ( v19 < 4 )
              {
                v9 = -2147024774;
                v10 = 142LL;
                goto LABEL_37;
              }
              v14[2] = *((_DWORD *)*v16 + 4);
              v20 = v19 - 4;
              if ( v20 < 4 )
              {
                v9 = -2147024774;
                v10 = 145LL;
                goto LABEL_37;
              }
              v14[3] = *((_DWORD *)*v16 + 5);
              v21 = v20 - 4;
              if ( v21 < 4 )
              {
                v9 = -2147024774;
                v10 = 148LL;
                goto LABEL_37;
              }
              v14[4] = *((_DWORD *)*v16 + 6);
              v22 = v21 - 4;
              v23 = **v16;
              v24 = v23[8] + 18LL;
              if ( v22 < v24 )
              {
                v9 = -2147024774;
                v10 = 150LL;
                goto LABEL_37;
              }
              memcpy_0(v14 + 5, v23, v24);
              v25 = (**v16)[8];
              v14 = (_DWORD *)((char *)v14 + v25 + 38);
              v12 = -18 - v25 + v22;
              ++v16;
            }
            v9 = -2147024774;
            v10 = 136LL;
          }
        }
      }
      else
      {
        v9 = -2147024774;
        v10 = 121LL;
      }
    }
    else
    {
      v9 = -2147024774;
      v10 = 117LL;
    }
  }
  else
  {
    v9 = -2147024882;
    v10 = 109LL;
  }
LABEL_37:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
    (const char *)v9);
  if ( v8 )
    CoTaskMemFree(v8);
  return v9;
}
