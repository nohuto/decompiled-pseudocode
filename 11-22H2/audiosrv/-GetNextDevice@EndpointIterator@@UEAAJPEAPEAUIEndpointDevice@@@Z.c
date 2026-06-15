/*
 * XREFs of ?GetNextDevice@EndpointIterator@@UEAAJPEAPEAUIEndpointDevice@@@Z @ 0x180002AD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EndpointIterator::GetNextDevice(EndpointIterator *this, struct IEndpointDevice **a2)
{
  unsigned int v3; // esi
  __int64 **v4; // r14
  __int64 v5; // rdx
  int v6; // ebp
  struct IEndpointDevice *v7; // rbx
  __int64 *v8; // rax
  __int64 *v9; // r15
  __int64 v10; // rcx

  v3 = 0;
  if ( !a2 )
    return 2147500035LL;
  *a2 = 0LL;
  v4 = (__int64 **)((char *)this + 32);
  if ( *((_DWORD *)this + 10) && !*v4 )
    return 1LL;
  *((_DWORD *)this + 10) = 1;
  v5 = *((_QWORD *)this + 3);
  v6 = 0;
  v7 = 0LL;
  if ( this == (EndpointIterator *)-32LL )
  {
    v6 = -2147467261;
  }
  else
  {
    *a2 = 0LL;
    v8 = *v4;
    if ( *v4 || (v8 = *(__int64 **)(v5 + 24)) != 0LL )
    {
      v9 = (__int64 *)*v8;
      v10 = v8[2];
      if ( v10 )
      {
        v7 = (struct IEndpointDevice *)v8[2];
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 8LL))(v10, v5);
      }
      *a2 = v7;
      if ( v7 )
        (*(void (__fastcall **)(struct IEndpointDevice *, __int64))(*(_QWORD *)v7 + 8LL))(v7, v5);
      *v4 = v9;
    }
    else
    {
      v6 = 1;
    }
  }
  if ( v7 )
    (*(void (__fastcall **)(struct IEndpointDevice *, __int64))(*(_QWORD *)v7 + 16LL))(v7, v5);
  if ( v6 < 0 )
    return (unsigned int)v6;
  return v3;
}
