/*
 * XREFs of ?SaveShellLink@CPinList@@QEAAJPEAVPINENTRY@@PEAUIStream@@@Z @ 0x18075B5D8
 * Callers:
 *     ?ILWriteCallback@CPinList@@CAHPEAVPINENTRY@@PEAUILWRITEINFO@1@@Z @ 0x1807571D0 (-ILWriteCallback@CPinList@@CAHPEAVPINENTRY@@PEAUILWRITEINFO@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPinList::SaveShellLink(CPinList *this, struct PINENTRY *a2, struct IStream *a3)
{
  HRESULT v6; // ebx
  DWORD *v7; // rsi
  __int64 v9; // [rsp+30h] [rbp-30h] BYREF
  int pv; // [rsp+38h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+48h] [rbp-18h] BYREF

  if ( *((_QWORD *)a2 + 1) )
  {
    pv = 0;
    v9 = 0LL;
    v6 = (*(__int64 (__fastcall **)(struct IStream *, _QWORD, __int64, __int64 *))(*(_QWORD *)a3 + 40LL))(
           a3,
           0LL,
           1LL,
           &v11);
    if ( v6 >= 0 )
    {
      v6 = IStream_Write(a3, &pv, 4u);
      if ( v6 >= 0 )
      {
        v6 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 1))(
               *((_QWORD *)a2 + 1),
               &GUID_00000109_0000_0000_c000_000000000046,
               &v9);
        if ( v6 >= 0 )
        {
          v6 = (*(__int64 (__fastcall **)(__int64, struct IStream *, __int64))(*(_QWORD *)v9 + 48LL))(v9, a3, 1LL);
          if ( v6 >= 0 )
          {
            v6 = (*(__int64 (__fastcall **)(struct IStream *, _QWORD, __int64, __int64 *))(*(_QWORD *)a3 + 40LL))(
                   a3,
                   0LL,
                   1LL,
                   &v12);
            if ( v6 >= 0 )
            {
              v6 = (*(__int64 (__fastcall **)(struct IStream *, __int64, _QWORD, _QWORD))(*(_QWORD *)a3 + 40LL))(
                     a3,
                     v11,
                     0LL,
                     0LL);
              if ( v6 >= 0 )
              {
                pv = v12 - v11 - 4;
                v6 = IStream_Write(a3, &pv, 4u);
                if ( v6 >= 0 )
                  v6 = (*(__int64 (__fastcall **)(struct IStream *, __int64, _QWORD, _QWORD))(*(_QWORD *)a3 + 40LL))(
                         a3,
                         v12,
                         0LL,
                         0LL);
              }
            }
          }
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
      }
    }
  }
  else
  {
    v7 = (DWORD *)((char *)a2 + 24);
    v6 = IStream_Write(a3, (char *)a2 + 24, 4u);
    if ( v6 >= 0 )
    {
      if ( *v7 )
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 1) + 40LL))(
               *((_QWORD *)this + 1),
               *((_QWORD *)a2 + 2),
               0LL,
               0LL);
        if ( v6 >= 0 )
          return (unsigned int)IStream_Copy(*((IStream **)this + 1), a3, *v7);
      }
    }
  }
  return (unsigned int)v6;
}
