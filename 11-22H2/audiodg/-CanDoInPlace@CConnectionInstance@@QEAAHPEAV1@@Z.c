/*
 * XREFs of ?CanDoInPlace@CConnectionInstance@@QEAAHPEAV1@@Z @ 0x140013BB4
 * Callers:
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x14001118C (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_BOOL8 __fastcall CConnectionInstance::CanDoInPlace(CConnectionInstance *this, struct CConnectionInstance *a2)
{
  BOOL v2; // edi
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // [rsp+50h] [rbp+30h] BYREF
  __int64 v11; // [rsp+60h] [rbp+40h] BYREF

  v2 = 0;
  v11 = 0LL;
  v10 = 0LL;
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    v4 = *((_QWORD *)this + 4);
    if ( v4 )
    {
      if ( a2 && *(_DWORD *)(v3 + 40) == 2 && *(_DWORD *)(v4 + 40) == 2 )
      {
        if ( *((_DWORD *)this + 4) )
        {
          if ( (*(_BYTE *)(v3 + 48) & 1) != 0 )
          {
            v8 = *((_QWORD *)a2 + 3);
            if ( v8 )
            {
              if ( *(_DWORD *)(v8 + 40) == 2 )
              {
                (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v3 + 8LL))(*((_QWORD *)this + 3), &v11);
                v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v11);
                (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 16LL))(v3, &v10);
                v2 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 40LL))(v10) + 8) >= *(_DWORD *)(v9 + 8);
              }
            }
          }
        }
        else if ( (*(_BYTE *)(v4 + 48) & 1) != 0 )
        {
          v5 = *((_QWORD *)a2 + 4);
          if ( v5 )
          {
            if ( *(_DWORD *)(v5 + 40) == 2 )
            {
              (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v4 + 8LL))(*((_QWORD *)this + 4), &v11);
              v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v11);
              (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 16LL))(v4, &v10);
              v2 = *(_DWORD *)(v6 + 8) >= *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 40LL))(v10)
                                                    + 8);
            }
          }
        }
      }
    }
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v10);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v11);
  return v2;
}
