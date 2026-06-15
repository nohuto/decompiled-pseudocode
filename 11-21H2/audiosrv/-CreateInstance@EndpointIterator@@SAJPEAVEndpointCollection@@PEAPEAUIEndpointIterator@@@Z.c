/*
 * XREFs of ?CreateInstance@EndpointIterator@@SAJPEAVEndpointCollection@@PEAPEAUIEndpointIterator@@@Z @ 0x18015D20C
 * Callers:
 *     ?GetIterator@EndpointCollection@@UEAAJPEAPEAUIEndpointIterator@@@Z @ 0x18015D7B0 (-GetIterator@EndpointCollection@@UEAAJPEAPEAUIEndpointIterator@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180008710 (--2@YAPEAX_K@Z.c)
 *     ??1?$CComPtrBase@VPhoneTopology@@@ATL@@QEAA@XZ @ 0x18004C2F0 (--1-$CComPtrBase@VPhoneTopology@@@ATL@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EndpointIterator::CreateInstance(struct EndpointCollection *a1, struct IEndpointIterator **a2)
{
  unsigned int v4; // ebx
  _DWORD *v5; // rax
  _DWORD *v6; // rdi
  int v7; // eax
  _DWORD *v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v9 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      *a2 = 0LL;
      v5 = operator new(0x30uLL);
      v6 = v5;
      if ( v5 )
      {
        v5[4] = 1;
        *(_QWORD *)v5 = &EndpointIterator::`vftable'{for `IEndpointIterator'};
        *((_QWORD *)v5 + 1) = &EndpointIterator::`vftable'{for `CUnknown'};
        *((_QWORD *)v5 + 4) = 0LL;
        v5[10] = 0;
        v9 = v5;
        *((_QWORD *)v5 + 3) = a1;
        (*(void (__fastcall **)(struct EndpointCollection *))(*(_QWORD *)a1 + 8LL))(a1);
        EnterCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)v6 + 3) + 72LL));
        v7 = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, struct IEndpointIterator **))v6)(
               v6,
               &GUID_d4097df1_7f94_44a5_9922_1146dd4dbdaa,
               a2);
        if ( v7 < 0 )
          v4 = v7;
      }
      else
      {
        v4 = -2147024882;
      }
    }
    else
    {
      v4 = -2147467261;
    }
  }
  else
  {
    v4 = -2147024809;
  }
  ATL::CComPtrBase<PhoneTopology>::~CComPtrBase<PhoneTopology>((__int64 *)&v9);
  return v4;
}
