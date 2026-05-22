/*
 * XREFs of ?QueryInterface@NestableRuntimeClass@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001EC90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestableRuntimeClass::QueryInterface(
        Microsoft::WRL2::NestableRuntimeClass *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int Data1; // edi
  unsigned __int16 *p_Data2; // rcx
  unsigned __int8 *Data4; // r8
  __int64 *v9; // rsi
  unsigned __int8 *v10; // rbx
  __int64 v11; // rdx
  _DWORD *v12; // rax

  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  Data1 = a2->Data1;
  if ( *(_QWORD *)&a2->Data1 == __PAIR64__(
                                  *(unsigned int *)&GUID_7d099463_1e1d_4495_828a_d36bd8ebeeb7.Data2,
                                  2097779811)
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_7d099463_1e1d_4495_828a_d36bd8ebeeb7.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_7d099463_1e1d_4495_828a_d36bd8ebeeb7.Data4[4] )
  {
    *a3 = this;
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(this);
    return 0LL;
  }
  else
  {
    p_Data2 = &a2->Data2;
    Data4 = a2->Data4;
    v9 = (__int64 *)*((_QWORD *)this + 1);
    v10 = &a2->Data4[4];
    if ( v9 )
    {
      while ( 1 )
      {
        v11 = *((unsigned int *)v9 + 4);
        v12 = (_DWORD *)v9[1];
        if ( *((_DWORD *)v9 + 4) )
          break;
LABEL_7:
        v9 = (__int64 *)*v9;
        if ( !v9 )
          return (*(__int64 (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *, const struct _GUID *, void **))(*(_QWORD *)this + 72LL))(
                   this,
                   a2,
                   a3);
      }
      while ( *v12 != Data1 || v12[1] != *(_DWORD *)p_Data2 || v12[2] != *(_DWORD *)Data4 || v12[3] != *(_DWORD *)v10 )
      {
        v12 += 6;
        if ( !--v11 )
          goto LABEL_7;
      }
      *a3 = (char *)this + (unsigned int)v12[4];
      if ( _InterlockedIncrement((volatile signed __int32 *)this + 4) == 1 )
        (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *, __int64, unsigned __int8 *, unsigned __int16 *))(*(_QWORD *)this + 80LL))(
          this,
          v11,
          Data4,
          p_Data2);
      return 0LL;
    }
    else
    {
      return (*(__int64 (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *, const struct _GUID *, void **))(*(_QWORD *)this + 72LL))(
               this,
               a2,
               a3);
    }
  }
}
