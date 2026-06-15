/*
 * XREFs of ?OnRuleOperation@AvoidEndpointPolicyRule@@UEAAJPEBGW4RuleOperation@@KPEAW4RuleAction@@@Z @ 0x1801346D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AvoidEndpointPolicyRule::OnRuleOperation(__int64 a1, const wchar_t *a2, int a3, int a4, _DWORD *a5)
{
  _DWORD *v6; // rdi
  __int64 v7; // r14
  HRESULT v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, _QWORD, _DWORD **); // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+38h] [rbp-48h] BYREF
  __int64 v18; // [rsp+40h] [rbp-40h] BYREF
  LPVOID ppv; // [rsp+48h] [rbp-38h] BYREF
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v21; // [rsp+60h] [rbp-20h]
  PROPVARIANT v22[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v23; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v6 = a5;
  *a5 = 1;
  if ( !a3 )
  {
    if ( a4 == 1 || wcsncmp((const wchar_t *)(a1 + 84), a2, 0x80uLL) )
      return 0LL;
    goto LABEL_7;
  }
  if ( a3 == 1 )
  {
    v7 = a1 + 84;
    if ( wcsncmp((const wchar_t *)(a1 + 84), a2, 0x80uLL) )
    {
      v18 = 0LL;
      v17 = 0LL;
      v16 = 0LL;
      a5 = 0LL;
      *(_OWORD *)v22 = 0LL;
      v23 = 0LL;
      *(_OWORD *)pvar = 0LL;
      v21 = 0LL;
      ppv = 0LL;
      v8 = CoCreateInstance(
             &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
             0LL,
             0x17u,
             &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
             &ppv);
      v9 = v8;
      if ( v8 >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, v7, &v18);
        v9 = v8;
        if ( v8 >= 0 )
        {
          v8 = (*(__int64 (__fastcall **)(LPVOID, const wchar_t *, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, a2, &v17);
          v9 = v8;
          if ( v8 >= 0 )
          {
            v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v18 + 32LL))(v18, 0LL, &v16);
            v9 = v8;
            if ( v8 >= 0 )
            {
              v11 = v17;
              v12 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD **))(*(_QWORD *)v17 + 32LL);
              if ( a5 )
                (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a5 + 16LL))(a5);
              v8 = v12(v11, 0LL, &a5);
              v9 = v8;
              if ( v8 >= 0 )
              {
                v8 = (*(__int64 (__fastcall **)(__int64, const DEVPROPKEY *, PROPVARIANT *))(*(_QWORD *)v16 + 40LL))(
                       v16,
                       &DEVPKEY_Device_ContainerId,
                       v22);
                v9 = v8;
                if ( v8 >= 0 )
                {
                  v8 = (*(__int64 (__fastcall **)(_DWORD *, const DEVPROPKEY *, PROPVARIANT *))(*(_QWORD *)a5 + 40LL))(
                         a5,
                         &DEVPKEY_Device_ContainerId,
                         pvar);
                  v9 = v8;
                  if ( v8 >= 0 )
                  {
                    if ( LOWORD(v22[0]) == 72 && LOWORD(pvar[0]) == 72 )
                    {
                      v14 = *(_QWORD *)v22[1];
                      if ( !*(_QWORD *)v22[1] )
                        v14 = *((_QWORD *)v22[1] + 1) + 1LL;
                      if ( v14 )
                      {
                        v15 = *(_QWORD *)v22[1] - *(_QWORD *)pvar[1];
                        if ( *(_QWORD *)v22[1] == *(_QWORD *)pvar[1] )
                          v15 = *((_QWORD *)v22[1] + 1) - *((_QWORD *)pvar[1] + 1);
                        if ( !v15 )
                          *v6 = 2;
                      }
                    }
                    PropVariantClear(pvar);
                    PropVariantClear(v22);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&a5);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
                    return 0LL;
                  }
                  v10 = 96LL;
                }
                else
                {
                  v10 = 95LL;
                }
              }
              else
              {
                v10 = 94LL;
              }
            }
            else
            {
              v10 = 93LL;
            }
          }
          else
          {
            v10 = 92LL;
          }
        }
        else
        {
          v10 = 91LL;
        }
      }
      else
      {
        v10 = 87LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\avoidendpointpolicyrule.cpp",
        (const char *)(unsigned int)v8);
      PropVariantClear(pvar);
      PropVariantClear(v22);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&a5);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
      return v9;
    }
LABEL_7:
    *v6 = 2;
  }
  return 0LL;
}
